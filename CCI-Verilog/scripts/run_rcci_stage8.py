#!/usr/bin/env python3
"""Stage-8 hazard-window, error-policy, reset, progress, and mutation checks."""
import hashlib,json,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage8')
OUT=ROOT/'reports'/'rcci_stage8'

def execute(cmd,name,marker,negative=False,timeout=300):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=timeout)
    (OUT/f'{name}.log').write_text(p.stdout)
    markers=marker if isinstance(marker,tuple) else (marker,)
    good=(p.returncode!=0 if negative else p.returncode==0) and any(m in p.stdout for m in markers)
    marker=next((m for m in markers if m in p.stdout),markers[0])
    if not good:raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    status='EXPECTED_FAILURE_PASS' if negative else 'PASS'
    print(f'{name}: {status}',flush=True)
    return dict(name=name,status=status,marker=marker,returncode=p.returncode)

def build(top,name,args):
    mdir=BUILD/name
    execute(['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
             '--top-module',top,'--Mdir',mdir,*args],name+'_build','Built from')
    return mdir/f'V{top}'

def mutant_list(name,filelist,source,old,new):
    text=(ROOT/source).read_text()
    if text.count(old)!=1:raise RuntimeError(f'{name}: mutation site count={text.count(old)}')
    mutant=BUILD/f'{name}_{Path(source).name}';mutant.write_text(text.replace(old,new))
    listing=(ROOT/filelist).read_text()
    if listing.count(source)!=1:raise RuntimeError(f'{name}: file-list source count changed')
    result=BUILD/f'{name}_{Path(filelist).name}'
    result.write_text(listing.replace(source,str(mutant)))
    return result

def digest(path):return hashlib.sha256((ROOT/path).read_bytes()).hexdigest()

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)
    results=[]
    haz=build('tb_rcci_stage8_hazards','hazards',
        ['rtl/common/coh_write_ingress.sv','tb/tb_rcci_stage8_hazards.sv'])
    results.append(execute([haz],'hazards','PASS stage8 bidirectional hazard window'))
    rr=build('tb_coh_read_ingress_range','read_span',
        ['rtl/common/coh_read_ingress.sv','tb/tb_coh_read_ingress_range.sv','-GWINDOW=4'])
    results.append(execute([rr],'read_span','PASS stage5 ReadRange'))
    integ=build('tb_cci_ace_integration','integration',
        ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=1'])
    for case in range(1,5):
        results.append(execute([integ,f'+stage8_case={case}'],f'error_concurrency_{case}',
            f'PASS stage8 error policy/reset case={case}'))

    write_mutations=[
      ('mut_no_ace_write_hazard',
       'if(ace_ar_probe_valid&&in_span(entries[e].addr,ace_ar_probe_addr,ace_ar_probe_last))cam_ace_ar=1;',
       'if(1\'b0&&ace_ar_probe_valid&&in_span(entries[e].addr,ace_ar_probe_addr,ace_ar_probe_last))cam_ace_ar=1;',
       'STAGE8_WRITE_WINDOW_HAZARD_MISSING'),
      ('mut_no_m1_read_span_hazard',
       'if(m1_ar_probe_valid&&line_in_burst(entries[e].addr,m1_ar_probe_addr,m1_ar_probe_len))cam_m1_ar=1;',
       'if(1\'b0&&m1_ar_probe_valid&&line_in_burst(entries[e].addr,m1_ar_probe_addr,m1_ar_probe_len))cam_m1_ar=1;',
       'STAGE8_WRITE_WINDOW_HAZARD_MISSING'),
      ('mut_no_error_only_drop',
       'trackers[nq_rsp_tracker].line_error<=nq_rsp_resp[1];',
       'trackers[nq_rsp_tracker].line_error<=1\'b0;',
       'STAGE8_ERROR_ONLY_CLASSIFY')]
    for name,old,new,marker in write_mutations:
        source=(ROOT/'rtl/common/coh_write_ingress.sv').read_text()
        if source.count(old)!=1:raise RuntimeError(f'{name}: mutation site changed')
        mutant=BUILD/f'{name}.sv';mutant.write_text(source.replace(old,new))
        binary=build('tb_rcci_stage8_hazards',name,
            [mutant,'tb/tb_rcci_stage8_hazards.sv'])
        results.append(execute([binary],name,marker,negative=True))

    read_list=mutant_list('mut_read_span','scripts/ace.f','rtl/common/coh_read_ingress.sv',
        # 보완 3: the rCCI read hazard uses the interval CAM's M1 AW span.
        "wire [58:0] m1_aw_first={1'b0,m1_aw_probe_addr[63:6]},m1_aw_last=m1_aw_last_byte[64:6];",
        "wire [58:0] m1_aw_first={1'b0,m1_aw_probe_addr[63:6]},m1_aw_last={1'b0,m1_aw_probe_addr[63:6]};")
    read_bin=build('tb_coh_read_ingress_range','mut_read_span',
        ['-f','scripts/rtl.f','-f',read_list,'tb/tb_coh_read_ingress_range.sv','-GWINDOW=4'])
    results.append(execute([read_bin],'mut_read_span_run',('RANGE_M1_AW_SPAN_HAZARD_MISSING','HAZARD_INTERVAL_EQUIV'),negative=True))

    drain_list=mutant_list('mut_global_drain','scripts/ace.f','rtl/ace/axi_cci_ace_top.sv',
        'wire ace_ar_window_ok=ace_base_admit&&!ace_ar_hazard&&(!ace_ar_requires_drain||drained);',
        'wire ace_ar_window_ok=ace_base_admit&&!ace_ar_hazard&&drained&&(!ace_ar_requires_drain||drained);')
    drain_bin=build('tb_cci_ace_integration','mut_global_drain',
        ['-f','scripts/rtl.f','-f',drain_list,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=1'])
    results.append(execute([drain_bin,'+stage8_case=4'],'mut_global_drain_run',
        'STAGE8_NONCONFLICTING_ACE_BLOCKED',negative=True))

    fatal_list=mutant_list('mut_error_data_wait','scripts/ace.f','rtl/ace/ace_snoop_controller.sv',
        'if(cr_resp[1]&&(cr_resp[0]||cr_resp[2]))begin',
        'if(1\'b0&&cr_resp[1]&&(cr_resp[0]||cr_resp[2]))begin')
    fatal_bin=build('tb_cci_ace_integration','mut_error_data_wait',
        ['-f','scripts/rtl.f','-f',fatal_list,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=1'])
    results.append(execute([fatal_bin,'+stage8_case=3'],'mut_error_data_wait_run',
        'STAGE8_ERROR_DATA_NOT_FATAL',negative=True))

    formal=subprocess.run(['python3','scripts/run_formal.py','--jobs','4'],cwd=ROOT,text=True,
                          stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=7200)
    (OUT/'formal.log').write_text(formal.stdout)
    if formal.returncode or 'ingress_bounded_progress: PASS' not in formal.stdout or \
       'mutant_ingress_no_nq_completion: EXPECTED_FAILURE_PASS' not in formal.stdout:
        raise RuntimeError('formal failed\n'+formal.stdout[-5000:])
    results.append(dict(name='formal_bounded_progress',status='PASS',marker='ingress_bounded_progress: PASS',returncode=0))

    sources=['rtl/common/coh_write_ingress.sv','rtl/common/coh_read_ingress.sv',
             'rtl/ace/ace_snoop_controller.sv','rtl/top/axi_cci_top.sv','rtl/ace/axi_cci_ace_top.sv',
             'tb/tb_rcci_stage8_hazards.sv','tb/tb_coh_read_ingress_range.sv',
             'tb/tb_cci_ace_integration.sv','formal/formal_ingress_progress.sv',
             'scripts/run_formal.py','scripts/run_rcci_stage8.py']
    report=dict(schema='rcci-stage8-v1',generated_at_utc=datetime.now(timezone.utc).isoformat(),
        status='PASS',progress_contract=dict(cr_latency_max=3,b_latency_max=3,property_bound=14,
        formal_line_count=1,directed_range_max_lines=64),sources={x:digest(x) for x in sources},results=results)
    (OUT/'results.json').write_text(json.dumps(report,indent=2)+'\n')
    print('stage8: PASS',flush=True)

if __name__=='__main__':main()
