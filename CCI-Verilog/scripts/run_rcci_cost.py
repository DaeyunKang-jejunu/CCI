#!/usr/bin/env python3
"""RCCI_PLAN 14.8 (보완 7): LUT/FF cost of B1 and rCCI (thesis section 5.3).

Vivado 2024.1, xczu7ev-ffvc1156-2-e, out-of-context, unconstrained
synthesis-only (no clock constraint, no placement/routing, no timing claim).
Two layers:
  1. whole ACE top for B1-T16, R-E4-RW16-WE4-WW16, R-E16-RW16-WE16-WW16 and the
     small pair B1-T8 / R-E2-RW8-WE2-WW8, with a hierarchical breakdown;
  2. the hazard comparator alone (synth/cost_cam_wrappers.sv): line CAM with T
     entries vs interval CAM with E entries under identical port/register/OR
     conditions.
Writes reports/rcci_cost/{cost_top.csv,cost_modules.csv,cost_cam.csv,COST_RESULTS.md}
and replaces reports/hardware_cost.csv (the old 2026-10-08 file is archived).
"""
import csv,json,os,re,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path
from results_common import ROOT,new_run,sha,save,artifact_hashes

TOPS=['B1-T16','R-E4-RW16-WE4-WW16','R-E16-RW16-WE16-WW16','B1-T8','R-E2-RW8-WE2-WW8']
GEOM={'B1-T16':dict(design='B1',read_E=16,read_nfly=16,write_E=16,write_line_entries=16,write_trackers=16),
      'R-E4-RW16-WE4-WW16':dict(design='rCCI',read_E=4,read_nfly=16,write_E=4,write_line_entries=16,write_trackers=16),
      'R-E16-RW16-WE16-WW16':dict(design='rCCI',read_E=16,read_nfly=16,write_E=16,write_line_entries=16,write_trackers=16),
      'B1-T8':dict(design='B1',read_E=8,read_nfly=8,write_E=8,write_line_entries=8,write_trackers=8),
      'R-E2-RW8-WE2-WW8':dict(design='rCCI',read_E=2,read_nfly=8,write_E=2,write_line_entries=8,write_trackers=8)}
CAMS=['LINE-T16','LINE-T8','INTERVAL-E16','INTERVAL-E4','INTERVAL-E2']
# Vivado hierarchical instance names (depth <= 3)
MODULES=[('read ingress (contexts + line trackers + hazard)','G_COH_READ.read_ingress'),
         ('write range adapter (contexts + interval CAM)','write_range_adapter'),
         ('write line ingress (line CAM in B1)','coherent.control'),
         ('core (bus + write line ingress)','core'),('admission pool','admission_pool'),
         ('read service response adapter (512-bit hit data)','nq_read_adapter'),
         ('snoop service','service'),('ACE manager','manager'),('M1 issue arbiter','m1_issue_arbiter')]

def util(path):
    text=path.read_text(errors='replace')
    lut=int(re.search(r'\|\s*CLB LUTs\*?\s*\|\s*(\d+)',text).group(1))
    ff=int(re.search(r'\|\s*CLB Registers\s*\|\s*(\d+)',text).group(1))
    return lut,ff

def hier(path):
    rows={}
    for line in path.read_text(errors='replace').splitlines():
        if not line.startswith('|'):continue
        f=[x.strip() for x in line.strip('|').split('|')]
        if len(f)<7 or not f[2].isdigit():continue
        inst=f[0];rows[inst]=dict(module=f[1],lut=int(f[2]),ff=int(f[6]))
    return rows

def main():
    import argparse
    ap=argparse.ArgumentParser();ap.add_argument('--from-run',help='re-parse an existing run directory')
    a=ap.parse_args()
    if a.from_run:
        out=Path(a.from_run);run_id=out.name;cmd=None
        return publish(run_id,out,cmd)
    run_id,out=new_run('rcci_cost')
    tcl='synth/run_rcci_cost.tcl'
    cmd=['/mnt/c/Windows/System32/cmd.exe','/c',r'D:\Vivado\2024.1\bin\vivado.bat','-mode','batch',
         '-source',tcl,'-log',str(out.relative_to(ROOT)/'vivado.log'),'-journal',
         str(out.relative_to(ROOT)/'vivado.jou'),'-tclargs',str(out.relative_to(ROOT))]
    env=os.environ.copy()
    vt=Path('/mnt/d/cci_vivado_temp')
    if vt.parent.is_dir():
        vt.mkdir(parents=True,exist_ok=True);env['TEMP']=str(vt);env['TMP']=str(vt)
        inh=[x for x in env.get('WSLENV','').split(':') if x and not x.startswith(('TEMP/','TMP/'))]
        env['WSLENV']=':'.join([*inh,'TEMP/p','TMP/p'])
    with (out/'console.log').open('w') as log:
        r=subprocess.run(cmd,cwd=ROOT,env=env,stdout=log,stderr=subprocess.STDOUT,timeout=7200)
    log=(out/'console.log').read_text(errors='replace')
    if r.returncode or 'RCCI_COST_COMPLETE' not in log:raise SystemExit('cost synthesis failed; see '+str(out/'console.log'))
    publish(run_id,out,cmd)

def publish(run_id,out,cmd):
    tcl='synth/run_rcci_cost.tcl'
    dst=ROOT/'reports'/'rcci_cost';dst.mkdir(parents=True,exist_ok=True)
    top_rows=[];mod_rows=[]
    base={}
    for name in TOPS:
        lut,ff=util(out/f'top_{name}_utilization.rpt');g=GEOM[name]
        top_rows.append(dict(config=name,**g,tokens_T=16,ace_manager_ctx=4,snoop_ctx_S=4,LUT=lut,FF=ff))
        h=hier(out/f'top_{name}_hier.rpt')
        for label,key in MODULES:
            m=[v for k,v in h.items() if k==key]
            if m:mod_rows.append(dict(config=name,block=label,LUT=m[0]['lut'],FF=m[0]['ff']))
    ref={r['config']:r for r in top_rows}
    for r in top_rows:
        b=ref['B1-T16'] if r['config'] in ('B1-T16','R-E4-RW16-WE4-WW16','R-E16-RW16-WE16-WW16') else ref['B1-T8']
        r['LUT_vs_B1_pct']=round((r['LUT']-b['LUT'])/b['LUT']*100,2);r['FF_vs_B1_pct']=round((r['FF']-b['FF'])/b['FF']*100,2)
    cam_rows=[]
    for name in CAMS:
        lut,ff=util(out/f'cam_{name}_utilization.rpt')
        cam_rows.append(dict(config=name,entries=int(re.search(r'\d+',name).group()),LUT=lut,FF=ff))
    def wcsv(p,rows):
        with p.open('w',newline='') as f:
            w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
    wcsv(dst/'cost_top.csv',top_rows);wcsv(dst/'cost_modules.csv',mod_rows);wcsv(dst/'cost_cam.csv',cam_rows)
    old=ROOT/'reports'/'hardware_cost.csv';arch=ROOT/'reports'/'archive'
    arch.mkdir(exist_ok=True)
    if old.exists() and not (arch/'hardware_cost_2026-10-08.csv').exists():shutil.copy2(old,arch/'hardware_cost_2026-10-08.csv')
    wcsv(old,[dict(variant=r['config'],LUT=r['LUT'],FF=r['FF'],LUT_vs_B1_pct=r['LUT_vs_B1_pct'],
                   FF_vs_B1_pct=r['FF_vs_B1_pct'],scope='OOC unconstrained synthesis-only') for r in top_rows])
    for p in out.glob('*.rpt'):shutil.copy2(p,dst/p.name)
    save(out/'manifest.json',dict(run_id=run_id,status='PASS',command=cmd,
        scope='OOC unconstrained synthesis-only; no clock constraint, no placement/routing/timing',
        sources={f:sha(ROOT/f) for f in [tcl,'synth/cost_cam_wrappers.sv','scripts/run_rcci_cost.py',
                 *[l.strip() for l in (ROOT/'scripts/ace.f').read_text().splitlines()+(ROOT/'scripts/rtl.f').read_text().splitlines()
                   if l.strip() and not l.startswith('+')]]},
        artifacts=artifact_hashes(out)))
    (dst/'summary.json').write_text(json.dumps(dict(generated_at_utc=datetime.now(timezone.utc).isoformat(),
        run_id=run_id,top=top_rows,modules=mod_rows,cam=cam_rows),indent=2,ensure_ascii=False))
    for r in top_rows:print(r['config'],r['LUT'],r['FF'],r['LUT_vs_B1_pct'],r['FF_vs_B1_pct'])
    for r in cam_rows:print(r['config'],r['LUT'],r['FF'])

if __name__=='__main__':main()
