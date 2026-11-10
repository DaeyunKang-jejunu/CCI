"""Shared provenance and fail-closed report checks; no cached PASS strings."""
from pathlib import Path
from datetime import datetime, timezone
import hashlib, json, re, uuid
ROOT=Path(__file__).resolve().parents[1]

def sha(path): return hashlib.sha256(Path(path).read_bytes()).hexdigest()
def save(path,data):
    path=Path(path);path.parent.mkdir(parents=True,exist_ok=True)
    temp=path.with_suffix(path.suffix+'.tmp');temp.write_text(json.dumps(data,indent=2)+'\n');temp.replace(path)
def new_run(kind):
    run_id=kind+'_'+datetime.now(timezone.utc).strftime('%Y%m%dT%H%M%SZ')+'_'+uuid.uuid4().hex[:8]
    out=ROOT/'reports/runs'/run_id;out.mkdir(parents=True)
    return run_id,out

def rtl_paths():
    return [ROOT/p.strip() for p in (ROOT/'scripts/rtl.f').read_text().splitlines() if p.strip() and not p.startswith('+')]+[ROOT/'scripts/rtl.f']
def snapshot(kind):
    paths=rtl_paths()+[ROOT/'scripts/results_common.py']
    if kind=='simulation':
        paths+=list((ROOT/'tb').glob('*.sv'))+[ROOT/p for p in ['simple_axi_slave.sv','simple_axi_master.sv','realistic_axi_master.sv','tb_axi_bus_system.sv','scripts/run_regression.py','scripts/test_results_common.py']]
        paths+=list((ROOT/'scripts/fixtures').rglob('*.rpt'))
    else: paths+=list((ROOT/'synth').glob('*.tcl'))+[ROOT/'scripts/run_implementation.py']
    return {str(p.relative_to(ROOT)):sha(p) for p in sorted(set(paths))}
def unchanged(sources):
    for name,digest in sources.items():
        p=ROOT/name
        if not p.is_file() or sha(p)!=digest: raise RuntimeError('Source changed/stale: '+name)
def artifact_hashes(out):
    return {str(p.relative_to(out)):sha(p) for p in out.rglob('*') if p.is_file() and p.name!='manifest.json' and p.suffix not in ['.dcp','.jou','.tmp']}
def verify_manifest(path,require_current=True):
    path=Path(path);m=json.loads(path.read_text())
    if m.get('status')!='PASS': raise RuntimeError('Run is not PASS: '+str(path))
    if require_current: unchanged(m['sources'])
    for name,digest in m['artifacts'].items():
        p=path.parent/name
        if not p.is_file() or sha(p)!=digest: raise RuntimeError('Artifact changed/missing: '+str(p))
    return m

def parse_hardware(directory,require_dut=True):
    directory=Path(directory)
    u=(directory/'post_route_utilization.rpt').read_text()
    timing=(directory/'post_route_timing_summary.rpt').read_text()
    if 'Design Timing Summary' not in timing: raise RuntimeError('Missing timing summary')
    for check in ['no_clock','unconstrained_internal_endpoints']:
        checks=re.findall(r'checking '+check+r' \((\d+)\)',timing)
        if not checks or any(int(n) for n in checks): raise RuntimeError('Missing/failing timing check: '+check)
    t=timing.split('Design Timing Summary',1)[1]
    def cell(label):
        m=re.search(r'\|\s*'+re.escape(label)+r'\s*\|\s*([\d.]+)',u)
        if not m: raise RuntimeError('Missing utilization: '+label)
        return float(m[1])
    m=re.search(r'^\s*' + r'\s+'.join([r'(-?\d+\.\d+)',r'(-?\d+\.\d+)',r'(\d+)',r'(\d+)']*3) + r'\s*$',t,re.M)
    if not m: raise RuntimeError('Incomplete timing summary')
    r=dict(LUT=int(cell('CLB LUTs')),FF=int(cell('CLB Registers')),CARRY8=int(cell('CARRY8')),BRAM=cell('Block RAM Tile'),
           WNS=float(m[1]),TNS=float(m[2]),setup_fail=int(m[3]),WHS=float(m[5]),THS=float(m[6]),hold_fail=int(m[7]),
           WPWS=float(m[9]),TPWS=float(m[10]),pulse_fail=int(m[11]))
    for key in ['WNS','WHS','WPWS']:
        if r[key]<0: raise RuntimeError(f'Timing violation {key}={r[key]}')
    if any(r[k]!=0 for k in ['TNS','THS','TPWS','setup_fail','hold_fail','pulse_fail']): raise RuntimeError('Failing timing endpoints')
    if any(int(m[i])<=0 for i in [4,8,12]): raise RuntimeError('No timed endpoints')
    status=(directory/'route_status.rpt').read_text()
    if 'Design Route Status' not in status: raise RuntimeError('Missing route report header')
    def nets(label):
        match=re.search(r'# of '+re.escape(label)+r'\.+\s*:\s*(\d+)\s*:',status)
        if not match: raise RuntimeError('Missing route count: '+label)
        return int(match[1])
    logical=nets('logical nets');exempt=nets('nets not needing routing')
    routable=nets('routable nets');routed=nets('fully routed nets')
    if nets('nets with routing errors') or routable!=routed or logical!=exempt+routable or routable==0:
        raise RuntimeError('Incomplete/inconsistent routing')
    if re.search(r'# of (?:unrouted nets|partially routed nets)\.+\s*:\s*([1-9]\d*)\s*:',status):
        raise RuntimeError('Unrouted nets')
    drc=(directory/'drc.rpt').read_text()
    if 'Report DRC' not in drc or '1. REPORT SUMMARY' not in drc or '2. REPORT DETAILS' not in drc:
        raise RuntimeError('Incomplete DRC report')
    count=re.search(r'Violations found:\s*(\d+)',drc)
    if not count: raise RuntimeError('Missing DRC violation count')
    # Only the known OOC unconnected-boundary warning is allowed. New rules fail closed.
    rows=re.findall(r'^\|\s*([A-Z][A-Z0-9_-]*-\d+)\s*\|\s*([^|]+?)\s*\|\s*([^|]+?)\s*\|\s*(\d+)\s*\|',drc,re.M)
    if sum(int(row[3]) for row in rows)!=int(count[1]): raise RuntimeError('DRC summary/count mismatch')
    for rule,severity,description,n in rows:
        if (rule,severity.strip(),description.strip())!=('RTSTAT-10','Warning','No routable loads'):
            raise RuntimeError('Unapproved DRC: '+rule+' '+severity)
        details=re.findall(r'^'+re.escape(rule)+r'#\d+\s+Warning\s*$',drc,re.M)
        if len(details)!=int(n): raise RuntimeError('Missing DRC details: '+rule)
    hier=(directory/'post_route_hier.rpt').read_text()
    r['hierarchy']={}
    for line in hier.splitlines():
        f=[p.strip() for p in line.split('|')[1:-1]]
        if len(f)>=7 and f[0] in ['dut','(synth_register_shell)','common_endpoint.endpoint']:
            r['hierarchy'][f[0]]=dict(LUT=int(f[2]),FF=int(f[6]))
    if require_dut and 'dut' not in r['hierarchy']: raise RuntimeError('DUT hierarchy missing')
    return r
