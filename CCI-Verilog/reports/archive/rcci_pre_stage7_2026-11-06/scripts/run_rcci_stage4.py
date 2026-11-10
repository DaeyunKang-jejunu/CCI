#!/usr/bin/env python3
"""Stage-4 incremental checks: tagged B1 write tracker and ACE integration."""
import json,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage4')
OUT=ROOT/'reports'/'rcci_stage4'

def run(cmd,name,marker,negative=False):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=300)
    (OUT/f'{name}.log').write_text(p.stdout)
    good=(p.returncode!=0 if negative else p.returncode==0) and marker in p.stdout
    if not good:
        raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    print(f'{name}: {"EXPECTED_FAILURE_PASS" if negative else "PASS"}')

def build(top,name,args):
    mdir=BUILD/name
    run(['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--top-module',top,'--Mdir',mdir,*args],name+'_build','Built from')
    return mdir/f'V{top}'

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    OUT.mkdir(parents=True,exist_ok=True);BUILD.mkdir(parents=True)
    unit=build('tb_coh_write_ingress_nq','write_nq',
        ['-f','scripts/rtl.f','tb/tb_coh_write_ingress_nq.sv'])
    run([unit],'write_nq','PASS stage4 tagged NQ write inverse-response/ordered-AW')
    tests=['write_nq']
    read=build('tb_coh_read_ingress_readonce','readonce',
        ['-f','scripts/rtl.f','tb/tb_coh_read_ingress_readonce.sv'])
    run([read],'readonce','PASS stage4 ReadOnce hit/miss ordered R assembly')
    tests.append('readonce')
    source=(ROOT/'rtl/common/coh_write_ingress.sv').read_text()
    old="trackers[nq_rsp_tracker].snoop_done<=1;"
    if source.count(old)!=1:raise RuntimeError('write response mutation site changed')
    mutant=BUILD/'coh_write_ingress_bad_rsp.sv'
    mutant.write_text(source.replace(old,"trackers['0].snoop_done<=1;"))
    filelist=BUILD/'mutant.f'
    filelist.write_text((ROOT/'scripts/rtl.f').read_text().replace(
        'rtl/common/coh_write_ingress.sv',str(mutant)))
    mut=build('tb_coh_write_ingress_nq','write_nq_mut',['-f',filelist,'tb/tb_coh_write_ingress_nq.sv'])
    run([mut],'mutation_write_rsp_tracker','WRITE_NQ_OOO_BYPASS',negative=True)
    old_fault="if (nq_rsp_resp[1]) service_fault<=1;"
    if source.count(old_fault)!=1:raise RuntimeError('write error mutation site changed')
    fault_mutant=BUILD/'coh_write_ingress_bad_fault.sv'
    fault_mutant.write_text(source.replace(old_fault,"if (nq_rsp_resp[1]) service_fault<=0;"))
    fault_filelist=BUILD/'fault_mutant.f'
    fault_filelist.write_text((ROOT/'scripts/rtl.f').read_text().replace(
        'rtl/common/coh_write_ingress.sv',str(fault_mutant)))
    fault_mut=build('tb_coh_write_ingress_nq','write_fault_mut',
        ['-f',fault_filelist,'tb/tb_coh_write_ingress_nq.sv'])
    run([fault_mut],'mutation_write_error_fault','WRITE_NQ_ERROR_POLICY',negative=True)
    read_source=(ROOT/'rtl/common/coh_read_ingress.sv').read_text()
    old_read="assign hit_last=hit_line_last&&head_final_line;"
    if read_source.count(old_read)!=1:raise RuntimeError('read RLAST mutation site changed')
    read_mutant=BUILD/'coh_read_ingress_bad_rlast.sv'
    read_mutant.write_text(read_source.replace(old_read,"assign hit_last=1'b0;"))
    read_filelist=BUILD/'read_mutant.f'
    read_filelist.write_text((ROOT/'scripts/ace.f').read_text().replace(
        'rtl/common/coh_read_ingress.sv',str(read_mutant)))
    read_mut=build('tb_coh_read_ingress_readonce','readonce_mut',
        ['-f','scripts/rtl.f','-f',read_filelist,'tb/tb_coh_read_ingress_readonce.sv'])
    run([read_mut],'mutation_readonce_rlast','READONCE_HIT_BEAT',negative=True)
    ace_files=[line for line in (ROOT/'scripts/ace.f').read_text().splitlines()
               if line and not line.startswith('+')]
    top_source=(ROOT/'rtl/ace/axi_cci_ace_top.sv').read_text()
    old_token="admission_free_tag[0]=m1_read_token_fifo[m1_read_token_head];"
    if top_source.count(old_token)!=1:raise RuntimeError('M1 exact token mutation site changed')
    token_mutant=BUILD/'axi_cci_ace_top_bad_token.sv'
    token_mutant.write_text(top_source.replace(old_token,
        "admission_free_tag[0]=m1_read_token_fifo[m1_read_token_head]^ATW'(1);"))
    token_ace=BUILD/'token_mutant.ace.f'
    token_ace.write_text('\n'.join(str(token_mutant) if f=='rtl/ace/axi_cci_ace_top.sv' else f
                                   for f in ace_files)+'\n')
    token_mut=build('tb_cci_ace_integration','m1_token_mut',
        ['-f','scripts/rtl.f','-f',token_ace,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=0'])
    run([token_mut],'mutation_m1_exact_token','ADMISSION_BAD_RETURN',negative=True)
    manager_source=(ROOT/'rtl/ace/ace_manager_request_bank.sv').read_text()
    old_manager="context_token_tag[ar_target]<=ar_token_tag;"
    if manager_source.count(old_manager)!=1:raise RuntimeError('manager token mutation site changed')
    manager_mutant=BUILD/'ace_manager_request_bank_bad_token.sv'
    manager_mutant.write_text(manager_source.replace(old_manager,"context_token_tag[ar_target]<='0;"))
    manager_ace=BUILD/'manager_token_mutant.ace.f'
    manager_ace.write_text('\n'.join(str(manager_mutant) if f=='rtl/ace/ace_manager_request_bank.sv' else f
                                     for f in ace_files)+'\n')
    manager_mut=build('tb_ace_manager_outstanding','manager_token_mut',
        ['-f','scripts/rtl.f','-f',manager_ace,'tb/tb_ace_manager_outstanding.sv'])
    run([manager_mut],'mutation_manager_exact_token','ACE_READ_TOKEN_TAG',negative=True)
    counter_token=build('tb_cci_ace_integration','counter_token',
        ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=0','-GCOMMON_ADMISSION_TOKENS=1'])
    run([counter_token,'+counter_case=1'],'counter_token','PASS stage4 admission counter case=1')
    tests.append('counter_token')
    counter_depth=build('tb_cci_ace_integration','counter_depth',
        ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=0','-GM1_INGRESS_DEPTH=1',
         '-GLINE_TRACKER_ENTRIES=1','-GCOMMON_ADMISSION_TOKENS=2'])
    for case in (2,3):
        name=f'counter_depth_case{case}'
        run([counter_depth,f'+counter_case={case}'],name,
            f'PASS stage4 admission counter case={case}')
        tests.append(name)
    old_counter="if(token_stall && admission_token_stall_cycles!='1)"
    if top_source.count(old_counter)!=1:raise RuntimeError('admission counter mutation site changed')
    counter_mutant=BUILD/'axi_cci_ace_top_bad_counter.sv'
    counter_mutant.write_text(top_source.replace(old_counter,
        "if(1'b0 && token_stall && admission_token_stall_cycles!='1)"))
    counter_mut_ace=BUILD/'counter_mutant.ace.f'
    counter_mut_ace.write_text('\n'.join(str(counter_mutant) if f=='rtl/ace/axi_cci_ace_top.sv' else f
                                         for f in ace_files)+'\n')
    counter_mut=build('tb_cci_ace_integration','counter_mut',
        ['-f','scripts/rtl.f','-f',counter_mut_ace,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','-GUSE_RANGE=0','-GCOMMON_ADMISSION_TOKENS=1'])
    run([counter_mut,'+counter_case=1'],'mutation_admission_counter',
        'COUNTER_TOKEN_CLASSIFY',negative=True)
    for mode in (0,1):
        name=f'integration_mode{mode}'
        binary=build('tb_cci_ace_integration',name,
            ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
             'tb/tb_cci_ace_integration.sv',f'-GUSE_RANGE={mode}'])
        run([binary],name,f'PASS v9 ACE integration mode={mode}')
        tests.append(name)
        if mode==0:
            for case in (4,5):
                counter_name=f'counter_ace_case{case}'
                run([binary,f'+counter_case={case}'],counter_name,
                    f'PASS stage4 admission counter case={case}')
                tests.append(counter_name)
    summary={'schema':'rcci-stage4-progress-v1','generated_at_utc':datetime.now(timezone.utc).isoformat(),
             'status':'PASS','completed':'b1_functional_write_fault_exact_admission_metadata_counters_and_buffer_decision','tests':tests,
             'buffer_decision':'tracker_local_512b_per_m1_read_tracker',
             'expected_failures':['mutation_write_rsp_tracker','mutation_write_error_fault',
                                  'mutation_readonce_rlast','mutation_m1_exact_token',
                                  'mutation_manager_exact_token','mutation_admission_counter']}
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n')
    print(json.dumps(summary,indent=2,ensure_ascii=False))

if __name__=='__main__':main()
