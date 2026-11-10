#!/usr/bin/env python3
"""Optional full CCI directed-suite cross-check using Windows Vivado XSim from WSL."""
import argparse, subprocess
from pathlib import Path
from results_common import ROOT,new_run,snapshot,sha,save,unchanged,artifact_hashes
p=argparse.ArgumentParser()
p.add_argument('--bin',default=r'D:\Vivado\2024.1\bin')
a=p.parse_args()
run_id,out=new_run('xsim')
sources=snapshot('simulation');sources['scripts/run_xsim.py']=sha(Path(__file__))
m=dict(run_id=run_id,status='RUNNING',sources=sources,commands=[],cases=[])
pointer=ROOT/'reports/latest_xsim.json'
def publish():
    save(out/'manifest.json',m)
    save(pointer,dict(run_id=run_id,status=m['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
def win(path):
    return subprocess.check_output(['wslpath','-w',str(path)],text=True).strip()
def run(name,tool,args,marker=None):
    cmd=['/mnt/c/Windows/System32/cmd.exe','/c',a.bin+'\\'+tool+'.bat',*args]
    m['commands'].append(dict(name=name,argv=cmd,cwd=str(out)))
    with (out/(name+'.log')).open('w') as log:
        result=subprocess.run(cmd,cwd=out,stdout=log,stderr=subprocess.STDOUT,timeout=300)
    text=(out/(name+'.log')).read_text(errors='replace')
    if result.returncode or (marker and marker not in text) or 'Fatal:' in text:
        raise RuntimeError(name+' failed: '+text[-3000:])
    print(name+': PASS',flush=True)
    return text
publish()
try:
    files=[line.strip() for line in (ROOT/'scripts/rtl.f').read_text().splitlines() if line.strip() and not line.startswith('+')]
    files+=['simple_axi_slave.sv','tb/tb_cci_integration.sv','tb/tb_axi_fifo_overlap.sv']
    cases=[]
    for depth,trackers,fifo in [(16,16,16),(1,1,1),(3,2,1)]:
        for mode in [0,1]:
            name=f'cci_mode{mode}_d{depth}'
            params=f'.USE_RANGE({mode}),.M1_INGRESS_DEPTH({depth}),.LINE_TRACKER_ENTRIES({trackers}),.CONV_AC_FIFO_DEPTH({fifo})'
            marker=f'PASS tb_cci_integration USE_RANGE={mode}' if depth==16 else 'PASS parameter_boundary'
            cases.append((name,f'tb_cci_integration #({params}) tb();',marker,'cross_simulator_cci_directed' if depth==16 else 'cross_simulator_cci_parameters'))
    for depth in [1,3,5]:
        name=f'axi_fifo_d{depth}'
        cases.append((name,f'tb_axi_fifo_overlap #(.DEPTH({depth})) tb();','PASS AXI FIFO simultaneous retirement','cross_simulator_axi_fifo'))
    wrappers=out/'xsim_wrappers.sv'
    wrappers.write_text('`timescale 1ns/1ps\n'+''.join(f'module {name}; {body} endmodule\n' for name,body,_,_ in cases))
    run('compile','xvlog',['--sv','--include',win(ROOT/'rtl/common'),*[win(ROOT/f) for f in files],win(wrappers)])
    for name,_,marker,scope in cases:
        run(name+'_elab','xelab',[name,'--snapshot',name,'--debug','typical','--timescale','1ns/1ps','--override_timeunit','--override_timeprecision'])
        log=run(name,'xsim',[name,'--runall'],marker=marker)
        m['cases'].append(dict(name=name,status='PASS',scope=scope,log=name+'.log',coverage_bins=[line for line in log.splitlines() if line.startswith('COVERAGE ')]))
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:
    m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
