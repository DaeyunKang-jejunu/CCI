#!/usr/bin/env python3
"""Verify stage-3 tagged snoop service and shared admission capacity."""
import json,re,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage3')
OUT=ROOT/'reports'/'rcci_stage3'
TAG_SOURCES=['rtl/ace/ace_snoop_controller.sv','rtl/ace/ace_snoop_controller_tag_bank.sv',
             'rtl/ace/cci_ace_tagged_snoop_service.sv','tb/tb_ace_tagged_service.sv']

def execute(cmd,name,marker,negative=False):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=300)
    (OUT/f'{name}.log').write_text(p.stdout)
    good=(p.returncode!=0 if negative else p.returncode==0) and marker in p.stdout
    if not good: raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    print(f'{name}: {"EXPECTED_FAILURE_PASS" if negative else "PASS"}')
    return p.stdout

def compile_tb(top,name,sources,params=()):
    mdir=BUILD/name
    execute(['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
             '--top-module',top,'--Mdir',mdir,*sources,*params],name+'_build','Built from')
    return mdir/f'V{top}'

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    if OUT.exists():
        for path in OUT.iterdir():
            if path.name=='STAGE3_RESULTS.md':continue
            if path.is_dir():shutil.rmtree(path)
            else:path.unlink()
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)

    pool=compile_tb('tb_cci_admission_pool','pool',
                    ['rtl/common/cci_admission_pool.sv','tb/tb_cci_admission_pool.sv'])
    execute([pool],'pool_positive','PASS stage3 common admission pool')
    execute([pool,'+bad_return'],'pool_bad_return','ADMISSION_BAD_RETURN',negative=True)
    execute([pool,'+bad_owner'],'pool_bad_owner','ADMISSION_BAD_RETURN',negative=True)

    tag=compile_tb('tb_ace_tagged_service','tagged_service',TAG_SOURCES)
    tag_log=execute([tag],'tagged_service_positive','PASS stage3 tagged snoop service')
    execute([tag,'+wrong_owner'],'tagged_service_wrong_owner',
            'PASS stage3 tagged service wrong-owner detection')
    match=re.search(r'LC_STATUS_DATA=(\d+) LC_STATUS_NO_DATA=(\d+)',tag_log)
    if not match:raise RuntimeError('tagged service latency marker missing')
    lc_data,lc_nodata=map(int,match.groups())
    if lc_data!=lc_nodata:raise RuntimeError('status control latency depends on data path')

    # Mutation: removing the owner comparison must let the deliberately doubled
    # return escape the pool's immediate checker, so the TB kills the mutant.
    pool_text=(ROOT/'rtl/common/cci_admission_pool.sv').read_text()
    old='owner[free_tag[f]]==free_owner[f]'
    assert pool_text.count(old)==1
    pool_mut=BUILD/'cci_admission_pool_bad_owner.sv'
    pool_mut.write_text(pool_text.replace(old,"1'b1"))
    pool_mut_bin=compile_tb('tb_cci_admission_pool','pool_owner_mut',
                            [pool_mut,'tb/tb_cci_admission_pool.sv'])
    execute([pool_mut_bin,'+bad_owner'],'mutation_pool_owner',
            'ADMISSION_BAD_OWNER_MISSING',negative=True)

    # Mutation: collapsing all tag owners revives the global-association bug;
    # owner 1/2 queues cannot make bounded progress.
    tag_text=(ROOT/'rtl/ace/ace_snoop_controller_tag_bank.sv').read_text()
    old='tag_live[free_pick]<=1;tag_owner[free_pick]<=req_owner;'
    assert tag_text.count(old)==1
    tag_mut=BUILD/'ace_snoop_controller_tag_bank_bad_owner.sv'
    tag_mut.write_text(tag_text.replace(old,"tag_live[free_pick]<=1;tag_owner[free_pick]<='0;"))
    tag_mut_sources=[str(tag_mut) if s=='rtl/ace/ace_snoop_controller_tag_bank.sv' else s for s in TAG_SOURCES]
    tag_mut_bin=compile_tb('tb_ace_tagged_service','tag_owner_mut',tag_mut_sources)
    execute([tag_mut_bin],'mutation_tag_owner','TAG_OWNER_QUEUE_PROGRESS',negative=True)

    integration=[]
    for mode in (0,1):
        name=f'integration_mode{mode}'
        binary=compile_tb('tb_cci_ace_integration',name,
            ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
             'tb/tb_cci_ace_integration.sv'],[f'-GUSE_RANGE={mode}'])
        execute([binary],name,f'PASS v9 ACE integration mode={mode}')
        integration.append(name)

    model_dir=ROOT.parent/'CCI-simulation'/'rcci_model'
    p=subprocess.run(['make','clean','test'],cwd=model_dir,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=300)
    (OUT/'model_test.log').write_text(p.stdout)
    if p.returncode:raise RuntimeError(p.stdout[-5000:])
    model=subprocess.run([str(model_dir/'rcci_model'),'--lines','8'],cwd=model_dir,text=True,
                         stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=30)
    (OUT/'model_default.log').write_text(model.stdout)
    if model.returncode or ',2,' not in model.stdout.splitlines()[-1]:
        raise RuntimeError('C++ model did not use calibrated Lc=2')

    latency={'schema':'rcci-stage3-latency-v1','measured_at_utc':datetime.now(timezone.utc).isoformat(),
             'definition':'final CR/CD completion handshake to owner status_valid',
             'lc_status_cycles':lc_nodata,'data_cycles':lc_data,'no_data_cycles':lc_nodata,
             'environment':'10 ns clock; AC/CR/CD ready without injected stalls'}
    (OUT/'latency.json').write_text(json.dumps(latency,indent=2,ensure_ascii=False)+'\n')
    summary={'schema':'rcci-stage3-results-v1','generated_at_utc':datetime.now(timezone.utc).isoformat(),
             'status':'PASS','lc_status_cycles':lc_nodata,
             'positive':['pool_positive','tagged_service_positive','tagged_service_wrong_owner',*integration,'model_test'],
             'expected_failures':['pool_bad_return','pool_bad_owner','mutation_pool_owner','mutation_tag_owner']}
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n')
    print(json.dumps(summary,indent=2,ensure_ascii=False))

if __name__=='__main__':main()
