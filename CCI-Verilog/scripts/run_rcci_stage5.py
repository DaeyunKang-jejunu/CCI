#!/usr/bin/env python3
"""Stage-5 checks for one-entry ReadRange, windowed line service, and R assembly."""
import json,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage5')
OUT=ROOT/'reports'/'rcci_stage5'

def run(cmd,name,marker,negative=False):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=300)
    (OUT/f'{name}.log').write_text(p.stdout)
    # 보완 3: a mutation may be caught first by the interval invariants, so an
    # expected failure may list alternative markers.
    markers=marker if isinstance(marker,tuple) else (marker,)
    good=(p.returncode!=0 if negative else p.returncode==0) and any(m in p.stdout for m in markers)
    marker=next((m for m in markers if m in p.stdout),markers[0])
    if not good: raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    status='EXPECTED_FAILURE_PASS' if negative else 'PASS'
    print(f'{name}: {status}')
    return {'name':name,'status':status,'marker':marker}

def build(top,name,args):
    mdir=BUILD/name
    run(['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--top-module',top,'--Mdir',mdir,*args],name+'_build','Built from')
    return mdir/f'V{top}'

def read_mutant(name,old,new):
    source=(ROOT/'rtl/common/coh_read_ingress.sv').read_text()
    if source.count(old)!=1: raise RuntimeError(f'{name}: mutation site count={source.count(old)}')
    mutant=BUILD/f'{name}.sv';mutant.write_text(source.replace(old,new))
    filelist=BUILD/f'{name}.ace.f'
    filelist.write_text((ROOT/'scripts/ace.f').read_text().replace(
        'rtl/common/coh_read_ingress.sv',str(mutant)))
    return filelist

def top_mutant(name,old,new):
    source=(ROOT/'rtl/ace/axi_cci_ace_top.sv').read_text()
    if source.count(old)!=1: raise RuntimeError(f'{name}: mutation site count={source.count(old)}')
    mutant=BUILD/f'{name}.sv';mutant.write_text(source.replace(old,new))
    filelist=BUILD/f'{name}.ace.f'
    filelist.write_text((ROOT/'scripts/ace.f').read_text().replace(
        'rtl/ace/axi_cci_ace_top.sv',str(mutant)))
    return filelist

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)
    results=[]
    for window in (1,4,8):
        name=f'range_w{window}'
        binary=build('tb_coh_read_ingress_range',name,
            ['-f','scripts/rtl.f','tb/tb_coh_read_ingress_range.sv',f'-GWINDOW={window}'])
        results.append(run([binary],name,
            f'PASS stage5 ReadRange 1/8/64 mixed hit-miss W={window} multiple ranges'))
    integration={}
    for mode in (0,1):
        name=f'integration_mode{mode}'
        binary=build('tb_cci_ace_integration',name,
            ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
             'tb/tb_cci_ace_integration.sv',f'-GUSE_RANGE={mode}'])
        results.append(run([binary],name,f'PASS v9 ACE integration mode={mode}'))
        integration[mode]=binary
    results.append(run([integration[0],'+stage5_bad=1'],'reject_range_disabled',
        'PASS stage5 ReadRange format rejection case=1'))
    for case in range(2,11):
        results.append(run([integration[1],f'+stage5_bad={case}'],f'reject_range_{case}',
            f'PASS stage5 ReadRange format rejection case={case}'))

    mutations=[
      ('no_issue_increment',
       "entries[issue_head].issue_idx<=entries[issue_head].issue_idx+1'b1;",
       "entries[issue_head].issue_idx<=entries[issue_head].issue_idx;",
       'RANGE_READ_INTERVAL_POINTER'),
      ('no_output_increment',
       "entries[retire_head].out_idx<=entries[retire_head].out_idx+1'b1;",
       "entries[retire_head].out_idx<=entries[retire_head].out_idx;",
       ('RANGE_READ_POINTER_WINDOW','RANGE_READ_INTERVAL_POINTER')),
      ('drop_window_hazard',
       # 보완 3: rCCI read hazards come from the per-entry interval CAM.
       "if(m0_ar_probe_valid&&in_page(m0_ar_line,entries[e].addr)&&",
       "if(1'b0&&m0_ar_probe_valid&&in_page(m0_ar_line,entries[e].addr)&&",
       ('RANGE_WINDOW_HAZARD_MISSING','HAZARD_INTERVAL_EQUIV')),
      ('accept_4k_crossing',
       "({1'b0,in_addr[11:0]}+request_bytes)>13'd4096;",
       "({1'b0,in_addr[11:0]}+request_bytes)>13'd8191;",
       'RANGE_4K_FORMAT_FAULT')]
    for name,old,new,marker in mutations:
        filelist=read_mutant(name,old,new)
        binary=build('tb_coh_read_ingress_range',name+'_build_mut',
            ['-f','scripts/rtl.f','-f',filelist,'tb/tb_coh_read_ingress_range.sv','-GWINDOW=4'])
        results.append(run([binary],name,marker,negative=True))

    marker='        // An empty interval (lo==hi) owns nothing.'
    overblock="""        for(int e=0;e<DEPTH;e++) if(entries[e].valid&&entries[e].kind_range&&
            m0_ar_probe_valid&&m0_ar_probe_addr[63:12]==entries[e].addr[63:12])
            int_m0_ar=1;
        // An empty interval (lo==hi) owns nothing."""
    filelist=read_mutant('overblock_full_page',marker,overblock)
    binary=build('tb_coh_read_ingress_range','overblock_build',
        ['-f','scripts/rtl.f','-f',filelist,'tb/tb_coh_read_ingress_range.sv','-GWINDOW=4'])
    results.append(run([binary],'overblock_full_page',('RANGE_WINDOW_OVERBLOCK','HAZARD_INTERVAL_EQUIV'),negative=True))

    # 보완 13: RLAST is produced by the buffered R path of the read ingress.
    filelist=read_mutant('line_rlast_leak',
        'assign hit_last=hit_line_last&&head_final_line;','assign hit_last=hit_line_last;')
    binary=build('tb_cci_ace_integration','line_rlast_build',
        ['-f','scripts/rtl.f','-f',filelist,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=1'])
    results.append(run([binary],'line_rlast_leak','RCCI_READ_RANGE_R',negative=True))

    summary={'schema':'rcci-stage5-results-v1',
        'generated_at_utc':datetime.now(timezone.utc).isoformat(),'status':'PASS',
        'results':results,'windows':[1,4,8],'line_counts':[1,8,64]}
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2)+'\n')
    print(json.dumps(summary,indent=2))

if __name__=='__main__':main()
