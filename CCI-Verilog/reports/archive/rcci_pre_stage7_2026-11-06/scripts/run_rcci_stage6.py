#!/usr/bin/env python3
"""Stage-6 checks for WriteRange decomposition, W framing, and B aggregation."""
import json,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage6')
OUT=ROOT/'reports'/'rcci_stage6'

def run(cmd,name,marker,negative=False):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=60)
    (OUT/f'{name}.log').write_text(p.stdout)
    good=(p.returncode!=0 if negative else p.returncode==0) and marker in p.stdout
    if not good:raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    status='EXPECTED_FAILURE_PASS' if negative else 'PASS'
    print(f'{name}: {status}',flush=True)
    return {'name':name,'status':status,'marker':marker}

def build(top,name,args):
    mdir=BUILD/name
    run(['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--top-module',top,'--Mdir',mdir,*args],name+'_build','Built from')
    return mdir/f'V{top}'

def adapter_mutant(name,old,new):
    source=(ROOT/'rtl/common/coh_write_range_adapter.sv').read_text()
    if source.count(old)!=1:raise RuntimeError(f'{name}: mutation site count={source.count(old)}')
    path=BUILD/f'{name}.sv';path.write_text(source.replace(old,new))
    return path

def top_mutant(name,old,new):
    source=(ROOT/'rtl/ace/axi_cci_ace_top.sv').read_text()
    if source.count(old)!=1:raise RuntimeError(f'{name}: mutation site count={source.count(old)}')
    path=BUILD/f'{name}.sv';path.write_text(source.replace(old,new))
    fl=BUILD/f'{name}.ace.f';fl.write_text((ROOT/'scripts/ace.f').read_text().replace(
        'rtl/ace/axi_cci_ace_top.sv',str(path)))
    return fl

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)
    results=[];adapter={}
    for window in (1,4,8):
        name=f'write_range_w{window}'
        binary=build('tb_coh_write_range_adapter',name,
            ['rtl/common/coh_write_range_adapter.sv','tb/tb_coh_write_range_adapter.sv',f'-GWINDOW={window}'])
        results.append(run([binary],name,
            f'PASS stage6 write range adapter W={window} lines=1/8/64 split-WLAST merged-B'))
        adapter[window]=binary
    results.append(run([adapter[4],'+stage6_bad_data=1'],'reject_partial_wstrb','RANGE_WRITE_WSTRB',True))
    results.append(run([adapter[4],'+stage6_bad_data=2'],'reject_external_wlast','RANGE_WRITE_WLAST',True))

    integration={}
    for mode in (0,1):
        name=f'integration_mode{mode}'
        binary=build('tb_cci_ace_integration',name,
            ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
             'tb/tb_cci_ace_integration.sv',f'-GUSE_RANGE={mode}'])
        results.append(run([binary],name,f'PASS v9 ACE integration mode={mode}'))
        integration[mode]=binary
    results.append(run([integration[0],'+stage6_bad=1'],'reject_range_disabled',
        'PASS stage6 WriteRange format rejection case=1'))
    for case in range(2,11):
        results.append(run([integration[1],f'+stage6_bad={case}'],f'reject_range_{case}',
            f'PASS stage6 WriteRange format rejection case={case}'))

    mutations=[
      ('no_line_address_increment',
       "line_aw_addr=contexts[issue_head].addr+64'(contexts[issue_head].issue_idx*64);",
       'line_aw_addr=contexts[issue_head].addr;',
       'WRITE_RANGE_LINE_AW'),
      ('no_issue_increment',
       'contexts[issue_head].issue_idx<=contexts[issue_head].issue_idx+1\'b1;',
       'contexts[issue_head].issue_idx<=contexts[issue_head].issue_idx+7\'d2;',
       'WRITE_RANGE_LINE_AW'),
      ('leak_external_wlast',
       'line_w_last=contexts[w_head].kind_range ? w_line_final : in_w_last;',
       'line_w_last=in_w_last;',
       'WRITE_RANGE_LINE_W'),
      ('early_external_b',
       'out_b_valid=contexts[retire_head].valid && contexts[retire_head].b_complete;',
       "out_b_valid=contexts[retire_head].valid && contexts[retire_head].b_idx!=0;",
       'WRITE_RANGE_EARLY_B'),
      ('drop_bresp_accumulation',
       'contexts[complete_head].resp<=merge_resp(contexts[complete_head].resp,line_b_resp);',
       'contexts[complete_head].resp<=line_b_resp;',
       'WRITE_RANGE_MERGED_B'),
      ('collapse_window_to_one',
       "int'(line_outstanding)<WINDOW;",
       "int'(line_outstanding)<1;",
       'WRITE_RANGE_LINE_AW')]
    for name,old,new,marker in mutations:
        mutant=adapter_mutant(name,old,new)
        binary=build('tb_coh_write_range_adapter',name+'_mut',
            [mutant,'tb/tb_coh_write_range_adapter.sv','-GWINDOW=4'])
        results.append(run([binary],name,marker,True))

    fl=top_mutant('accept_4k_crossing',
        "({1'b0,M1_AWADDR[11:0]}+m1_aw_bytes)<=13'd4096",
        "({1'b0,M1_AWADDR[11:0]}+m1_aw_bytes)<=13'd8191")
    binary=build('tb_cci_ace_integration','accept_4k_mut',
        ['-f','scripts/rtl.f','-f',fl,'tb/axi_memory_slave.sv','tb/tb_cci_ace_integration.sv','-GUSE_RANGE=1'])
    results.append(run([binary,'+stage6_bad=3'],'accept_4k_crossing','STAGE6_RANGE_FORMAT_ACCEPTED',True))

    summary={'schema':'rcci-stage6-results-v1','generated_at_utc':datetime.now(timezone.utc).isoformat(),
        'status':'PASS','results':results,'windows':[1,4,8],'line_counts':[1,8,64]}
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2)+'\n')
    print(json.dumps(summary,indent=2))

if __name__=='__main__':main()
