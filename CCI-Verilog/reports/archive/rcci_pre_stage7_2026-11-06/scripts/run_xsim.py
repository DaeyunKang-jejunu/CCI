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
def run(name,tool,args,marker=None,negative=False,cwd=None):
    cwd=cwd or out
    cmd=['/mnt/c/Windows/System32/cmd.exe','/c',a.bin+'\\'+tool+'.bat',*args]
    if any('=' in x for x in args):
        # cmd.exe splits unquoted '=' inside batch arguments; quote them via a launcher file.
        launcher=Path(cwd)/(name+'_run.bat')
        launcher.write_text('call '+a.bin+'\\'+tool+'.bat '+' '.join(f'"{x}"' if '=' in x else x for x in args)+'\r\n')
        cmd=['/mnt/c/Windows/System32/cmd.exe','/c',launcher.name]
    m['commands'].append(dict(name=name,argv=cmd,cwd=str(cwd)))
    with (out/(name+'.log')).open('w') as log:
        result=subprocess.run(cmd,cwd=cwd,stdout=log,stderr=subprocess.STDOUT,timeout=600)
    text=(out/(name+'.log')).read_text(errors='replace')
    if negative:
        # An expected failure must stop on the named checker, not on an unrelated error.
        if (marker not in text) or ('Fatal:' not in text and 'Error:' not in text and not result.returncode):
            raise RuntimeError(name+' did not fail as expected: '+text[-3000:])
        print(name+': EXPECTED_FAILURE_PASS',flush=True)
        return text
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
    # Matrix extension: seeds, constrained traffic, response latency and negative checks.
    plus=lambda xs:[x for v in xs for x in ('--testplusarg',v)]
    matrix=[]
    for mode in [0,1]:
        base=f'cci_mode{mode}_d16'
        for seed in [2,3,5]:
            matrix.append((f'{base}_seed{seed}',base,[f'seed={seed}'],f'PASS tb_cci_integration USE_RANGE={mode}','cross_simulator_seed',False))
        for ts in [41,77]:
            matrix.append((f'{base}_traffic{ts}',base,[f'traffic_seed={ts}',f'seed={ts}'],'PASS constrained traffic','cross_simulator_seed',False))
        matrix.append((f'{base}_cross_overlap',base,['cross_overlap'],'PASS cross overlap','cross_simulator_cross_targeted',False))
    for option,marker in [('watchdog_negative','RANGE_WATCHDOG:'),('range_cr_error','RANGE_CR_ERROR:'),('b_error','CCI_B_ERROR:'),('m0_crossing','M0_AR_CROSSES_LINE')]:
        matrix.append((f'neg_{option}','cci_mode1_d16',[option],marker,'cross_simulator_negative',True))
    for name,snap,args,marker,scope,negative in matrix:
        log=run(name,'xsim',[snap,'--runall',*plus(args)],marker=marker,negative=negative)
        m['cases'].append(dict(name=name,status='EXPECTED_FAILURE_PASS' if negative else 'PASS',scope=scope,args=args,log=name+'.log'))
    lat=[]
    for mode in [0,1]:
        for sl,sn in [(1,1),(20,40)]:
            name=f'lat_mode{mode}_sl{sl}_sn{sn}'
            lat.append((name,f'tb_cci_integration #(.USE_RANGE({mode}),.SLAVE_LATENCY({sl}),.SNOOP_LATENCY({sn})) tb();',mode))
    latw=out/'xsim_latency_wrappers.sv'
    latw.write_text('`timescale 1ns/1ps\n'+''.join(f'module {n}; {b} endmodule\n' for n,b,_ in lat))
    run('compile_latency','xvlog',['--sv',win(latw)])
    for name,_,mode in lat:
        run(name+'_elab','xelab',[name,'--snapshot',name,'--debug','typical','--timescale','1ns/1ps','--override_timeunit','--override_timeprecision'])
        for args,tag,marker in [([],'suite',f'PASS tb_cci_integration USE_RANGE={mode}'),(['seed=2'],'seed2',f'PASS tb_cci_integration USE_RANGE={mode}'),
                                (['traffic_seed=41','seed=41'],'traffic41','PASS constrained traffic')]:
            run(f'{name}_{tag}','xsim',[name,'--runall',*plus(args)],marker=marker)
            m['cases'].append(dict(name=f'{name}_{tag}',status='PASS',scope='cross_simulator_latency',args=args,log=f'{name}_{tag}.log'))
    # Mutants: each is compiled into its own XSim work directory so module names do not collide.
    ingress=(ROOT/'rtl/common/coh_write_ingress.sv').read_text();hazard=(ROOT/'rtl/proposed/cci_range_hazard_checker.sv').read_text()
    mutants=[('page_mutant','rtl/common/coh_write_ingress.sv','range_ctx.valid && aw_addr[63:12] == range_ctx.base_page &&','range_ctx.valid && /* mutant */','independent actual-B/reservation bitmap scoreboard'),
             ('hazard_no_page','rtl/proposed/cci_range_hazard_checker.sv','& (ctx[c].base_page == probe_page)','/* mutant */','HAZARD_ACCEPT_TIMEOUT:other_page'),
             ('hazard_no_mask','rtl/proposed/cci_range_hazard_checker.sv','& ctx[c].line_mask[probe_line]','/* mutant */','HAZARD_ACCEPT_TIMEOUT:non_target'),
             ('hazard_no_done','rtl/proposed/cci_range_hazard_checker.sv','& ~ctx[c].done_mask[probe_line]','/* mutant */','HAZARD_ACCEPT_TIMEOUT:done_target'),
             ('hazard_ar_disabled','rtl/common/coh_write_ingress.sv','ar_hazard=range_arhazard;',"ar_hazard=1'b0;",'HAZARD_BLOCK_MISSING:AR'),
             ('hazard_aw_disabled','rtl/common/coh_write_ingress.sv','aw_hazard=range_awhazard;',"aw_hazard=1'b0;",'HAZARD_BLOCK_MISSING:AW')]
    for name,orig,term,repl,marker in mutants:
        src=ingress if 'ingress' in orig else hazard
        if src.count(term)!=1: raise RuntimeError('XSim mutation insertion point changed: '+name)
        d=out/('mut_'+name);d.mkdir()
        (d/'mutant.sv').write_text(src.replace(term,repl))
        (d/'wrap.sv').write_text('`timescale 1ns/1ps\nmodule mut_top; tb_cci_integration #(.USE_RANGE(1)) tb(); endmodule\n')
        mfiles=[win(d/'mutant.sv') if f==orig else win(ROOT/f) for f in files]
        run(name+'_compile','xvlog',['--sv','--include',win(ROOT/'rtl/common'),*mfiles,win(d/'wrap.sv')],cwd=d)
        run(name+'_elab','xelab',['mut_top','--snapshot','mut_top','--debug','typical','--timescale','1ns/1ps','--override_timeunit','--override_timeprecision'],cwd=d)
        run(name,'xsim',['mut_top','--runall'],marker=marker,negative=True,cwd=d)
        m['cases'].append(dict(name=name,status='EXPECTED_FAILURE_PASS',scope='cross_simulator_mutation',log=name+'.log'))
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:
    m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
