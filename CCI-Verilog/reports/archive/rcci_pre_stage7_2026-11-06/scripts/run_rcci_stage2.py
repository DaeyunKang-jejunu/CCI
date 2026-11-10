#!/usr/bin/env python3
"""Verify rCCI stage-2 M1 sidebands, WSTRB path, and W framing contracts."""
import json
import shutil
import subprocess
from datetime import datetime, timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage2')
OUT=ROOT/'reports'/'rcci_stage2'

def run(cmd,name,marker,negative=False):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT)
    (OUT/f'{name}.log').write_text(p.stdout)
    good=(p.returncode!=0 if negative else p.returncode==0) and marker in p.stdout
    if not good: raise RuntimeError(f'{name} failed\n{p.stdout[-5000:]}')
    print(f'{name}: {"EXPECTED_FAILURE_PASS" if negative else "PASS"}')

def compile(top,mdir,sources,params=()):
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--top-module',top,'--Mdir',str(mdir),*sources,*params]
    run(cmd,f'{top}_build','Built from')
    return mdir/f'V{top}'

def main():
    if BUILD.exists(): shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)
    ace=compile('tb_cci_ace_integration',BUILD/'ace',
                ['-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
                 'tb/tb_cci_ace_integration.sv'],['-GUSE_RANGE=0'])
    run([ace],'ace_b1','PASS v9 ACE integration mode=0')
    expected={1:'M1_WSTRB_CONTRACT'}
    expected[20]='ACE_INTEGRATION_PROTOCOL'
    for case,marker in expected.items():
        run([ace,f'+stage2_bad={case}'],f'negative_{case}',marker,negative=True)
    rejected={case:'PASS stage2 M1 AR format rejection' for case in range(2,11)}
    rejected.update({case:'PASS stage2 M1 AW format rejection' for case in range(11,20)})
    for case,marker in rejected.items():
        run([ace,f'+stage2_bad={case}'],f'reject_{case}',marker)
    fifo=compile('tb_axi_fifo_overlap',BUILD/'fifo',
                 ['axi4_simple_2to1_bus_arbiter.sv','tb/tb_axi_fifo_overlap.sv'],['-GDEPTH=3'])
    run([fifo],'wstrb_route','PASS AXI FIFO simultaneous retirement and admission')
    memory=compile('tb_axi_memory_wstrb',BUILD/'memory',
                   ['tb/axi_memory_slave.sv','tb/tb_axi_memory_wstrb.sv'])
    run([memory],'wstrb_memory','PASS AXI memory WSTRB byte enables')
    summary={'schema':'rcci-stage2-results-v1','generated_at_utc':datetime.now(timezone.utc).isoformat(),
             'status':'PASS','positive':['ace_b1','wstrb_route','wstrb_memory'],
             'expected_failures':expected,'format_rejections':rejected}
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2)+'\n')
    print(json.dumps(summary,indent=2))

if __name__=='__main__':main()
