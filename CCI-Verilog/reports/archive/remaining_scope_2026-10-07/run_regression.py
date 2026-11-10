#!/usr/bin/env python3
"""Independent reference, negative/mutation tests, seed/depth sweep, data/cache tests."""
import csv, os, re, resource, subprocess, sys, platform
from pathlib import Path
from results_common import ROOT,new_run,snapshot,unchanged,save,artifact_hashes,rtl_paths
os.chdir(ROOT)
resource.setrlimit(resource.RLIMIT_CORE,(0,0))
run_id,out=new_run('simulation');sources=snapshot('simulation')
build=Path(os.environ.get('CCI_BUILD_DIR','/tmp/cci_axi_v9'))/run_id;build.mkdir(parents=True)
manifest=dict(run_id=run_id,status='RUNNING',sources=sources,cases=[],metrics=[],scale_metrics=[],m0_metrics=[],m0w_metrics=[],commands=[],coverage={},
    tools={name:subprocess.run(cmd,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,check=True).stdout for name,cmd in
           [('verilator',['verilator','--version']),('iverilog',['iverilog','-V']),('yosys',['yosys','-V'])]},
    host=dict(python=sys.version,platform=platform.platform()),
    config=dict(clock_ns=10,axi_outstanding=16,control_endpoint_depth=16,control_endpoint_latency=12,
                slave_latency=5,cache_endpoint_latency=4,seed_schedule='time-indexed from case reset',
                warning_allowlist=['PINMISSING','TIMESCALEMOD','WIDTHEXPAND','WIDTHTRUNC']))
pointer=ROOT/'reports/latest_simulation.json'
save(pointer,dict(run_id=run_id,status='RUNNING',manifest=str((out/'manifest.json').relative_to(ROOT))))
save(out/'manifest.json',manifest)

coverage_binaries={};coverage_sets={}

def compile_tb(name,top,files,params=()):
    dest=build/name
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4','--top-module',top,'--Mdir',str(dest),*files,*params]
    if name in ['b1_d16_t16_f16','p_d16_t16_f16'] or name.startswith('axi_fifo_overlap_d'):
        cmd+=['--coverage-line','--coverage-toggle','--output-split','0']
        coverage_binaries[str(dest/('V'+top))]=name
    elif top=='tb_cci_integration':
        # Verilator 5.048 can emit an undeclared __Vfork_*__sync when this TB is
        # split across C++ files; a single output file avoids the generator bug.
        cmd+=['--output-split','0']
    manifest['commands'].append(dict(stage='compile',name=name,argv=cmd))
    with (out/(name+'_build.log')).open('w') as log:subprocess.run(cmd,stdout=log,stderr=subprocess.STDOUT,check=True)
    classes=set(re.findall(r'%Warning-([A-Z0-9_]+)',(out/(name+'_build.log')).read_text()))
    if classes-set(manifest['config']['warning_allowlist']):raise RuntimeError('New compiler warning: '+str(classes))
    return dest/('V'+top)
def execute(name,binary,marker,args=(),negative=False,scope="directed_suite"):
    cmd=[str(binary),*args]
    group=coverage_binaries.get(str(binary)) if not negative else None
    if group:cmd.append('+verilator+coverage+file+'+str(out/(name+'.coverage.dat')))
    manifest['commands'].append(dict(stage='execute',name=name,argv=cmd))
    try:r=subprocess.run(cmd,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,timeout=60)
    except subprocess.TimeoutExpired as e:
        captured=e.stdout or b''
        (out/(name+'.log')).write_text((captured.decode(errors='replace') if isinstance(captured,bytes) else captured)+'\nRUNNER_TIMEOUT\n')
        raise
    (out/(name+'.log')).write_text(r.stdout)
    if (negative and r.returncode==0) or (not negative and r.returncode!=0) or marker not in r.stdout:
        raise RuntimeError(name+': expected '+marker+'\n'+r.stdout[-2000:])
    record=dict(name=name,status='EXPECTED_FAILURE_PASS' if negative else 'PASS',returncode=r.returncode,
                expected_marker=marker,args=list(args),log=name+'.log',scope=scope)
    record['coverage_bins']=[line for line in r.stdout.splitlines() if line.startswith('COVERAGE ')]
    if group:
        coverage_path=out/(name+'.coverage.dat')
        if not coverage_path.is_file():raise RuntimeError('Missing coverage data: '+name)
        coverage_sets.setdefault(group,[]).append(coverage_path)
        record['instrumented_coverage']=coverage_path.name
    manifest['cases'].append(record)
    for line in r.stdout.splitlines():
        if line.startswith('METRIC '):
            row=dict(re.findall(r'(\w+)=([\w.]+)',line));row['case']=name
            manifest['metrics'].append(row)
        if line.startswith('SCALE_METRIC '):
            row=dict(re.findall(r'(\w+)=([\w.]+)',line));row['case']=name
            manifest['scale_metrics'].append(row)
        if line.startswith('M0_METRIC '):
            row=dict(re.findall(r'(\w+)=([\w.]+)',line));row['case']=name
            manifest['m0_metrics'].append(row)
        if line.startswith('M0W_METRIC '):
            row=dict(re.findall(r'(\w+)=([\w.]+)',line));row['case']=name
            manifest['m0w_metrics'].append(row)
    if not negative:
        for feature in [line for line in r.stdout.splitlines() if line.startswith('PASS ')]:
            manifest['coverage'].setdefault(feature,[]).append(name)
    print(name+': '+record['status'],flush=True)
    return r.stdout
try:
    with (out/'result_gate_tests.log').open('w') as log:
        subprocess.run([sys.executable,'scripts/test_results_common.py'],stdout=log,stderr=subprocess.STDOUT,check=True)
    for mode in [0,1,2]:
        cmd=['verilator','--lint-only','-DSYNTHESIS','-f','scripts/rtl.f','--top-module','synth_register_shell',f'-GMODE={mode}']
        with (out/f'lint_mode{mode}.log').open('w') as log:subprocess.run(cmd,stdout=log,stderr=subprocess.STDOUT,check=True)
    binary=compile_tb('b0','tb_axi_bus_system',['axi4_simple_2to1_bus_arbiter.sv','simple_axi_master.sv','realistic_axi_master.sv','simple_axi_slave.sv','tb_axi_bus_system.sv'])
    execute('b0',binary,'---- PASS: AXI4 ID + multiple outstanding scenario completed ----')
    for depth in [1,3,5]:
        name=f'axi_outstanding_d{depth}'
        binary=compile_tb(name,'tb_axi_bus_system',['axi4_simple_2to1_bus_arbiter.sv','simple_axi_master.sv','realistic_axi_master.sv','simple_axi_slave.sv','tb_axi_bus_system.sv'],[f'-GMAX_OUTSTANDING_TRANSACTIONS={depth}'])
        execute(name,binary,'---- PASS: AXI4 ID + multiple outstanding scenario completed ----',scope='axi_outstanding_parameters')
    for depth in [1,3,5]:
        name=f'axi_fifo_overlap_d{depth}'
        binary=compile_tb(name,'tb_axi_fifo_overlap',['axi4_simple_2to1_bus_arbiter.sv','tb/tb_axi_fifo_overlap.sv'],[f'-GDEPTH={depth}'])
        execute(name,binary,'PASS AXI FIFO simultaneous retirement',scope='axi_fifo_overlap')
    detector=compile_tb('axi_protocol_errors','tb_axi_protocol_errors',
        ['axi4_simple_2to1_bus_arbiter.sv','tb/tb_axi_protocol_errors.sv'])
    for error_case,label in enumerate(['wlast_early','bid_mismatch','rlast_early','rid_mismatch',
                                       'aw_overflow','ar_overflow','wlast_missing','rlast_missing',
                                       'b_without_aw','r_without_ar']):
        execute(f'axi_protocol_{label}',detector,f'PASS AXI protocol detector case={error_case}',
            [f'+case={error_case}'],scope='protocol_error_detection')
    for queue in ['wr','rd']:
        original=(ROOT/'axi4_simple_2to1_bus_arbiter.sv').read_text()
        term=f'default: {queue}_count <= {queue}_count;'
        if original.count(term)!=1: raise RuntimeError('FIFO mutation insertion point changed')
        mutant=build/f'fifo_{queue}_bad_count.sv'
        mutant.write_text(original.replace(term,f"2'b11: {queue}_count <= {queue}_count + 1'b1; " + term))
        name=f'fifo_{queue}_bad_count'
        binary=compile_tb(name,'tb_axi_fifo_overlap',[str(mutant),'tb/tb_axi_fifo_overlap.sv'])
        execute(name,binary,'FIFO_LIFETIME_COUNT',negative=True,scope='fifo_mutation')
    binary=compile_tb('grant_lock','tb_axi_grant_lock',['axi4_simple_2to1_bus_arbiter.sv','tb/tb_axi_grant_lock.sv'])
    execute('grant_lock',binary,'PASS AW/AR grant locks and 64-bit payload stability')
    common=['-f','scripts/rtl.f','simple_axi_slave.sv','tb/tb_cci_integration.sv'];binaries={}
    for depth,trackers,fifo in [(16,4,4),(16,8,8),(16,16,16),(16,16,4),(1,1,1),(3,2,1),(5,5,3),(16,5,3)]:
        for mode in [0,1]:
            name=f'{"p" if mode else "b1"}_d{depth}_t{trackers}_f{fifo}'
            binary=compile_tb(name,'tb_cci_integration',common,[f'-GUSE_RANGE={mode}',f'-GM1_INGRESS_DEPTH={depth}',f'-GLINE_TRACKER_ENTRIES={trackers}',f'-GCONV_AC_FIFO_DEPTH={fifo}'])
            binaries[mode,depth,trackers,fifo]=binary
            marker='PASS parameter_boundary' if depth<16 or trackers<4 else 'PASS tb_cci_integration USE_RANGE='
            execute(name,binary,marker,scope="parameter_directed" if depth<16 or trackers<4 else "directed_suite")
    for seed in [1,7,123]:
        for mode in [0,1]:
            execute(f'seed_{seed}_mode{mode}',binaries[mode,16,16,16],'PASS tb_cci_integration USE_RANGE=',[f'+seed={seed}'],scope='seeded_ready_stalls')
    for traffic_seed in [11,29,101,997]:
        for mode in [0,1]:
            execute(f'traffic_seed{traffic_seed}_mode{mode}',binaries[mode,16,16,16],'PASS constrained traffic',
                [f'+traffic_seed={traffic_seed}',f'+seed={traffic_seed}'],scope='constrained_traffic')
    # Benchmark isolation: full suite, isolated, and delayed prelude must agree exactly.
    for seed in [1,7,123]:
        for mode in [0,1]:
            expected=next(r for r in manifest['metrics'] if r['case']==f'seed_{seed}_mode{mode}')
            for delay in [0,137]:
                name=f'bench_seed{seed}_mode{mode}_prelude{delay}'
                execute(name,binaries[mode,16,16,16],'PASS isolated copy benchmark',
                        [f'+seed={seed}','+bench_only',f'+bench_delay={delay}'],scope='benchmark_isolation')
                actual=manifest['metrics'][-1]
                if {k:v for k,v in actual.items() if k!='case'}!={k:v for k,v in expected.items() if k!='case'}:
                    raise RuntimeError('Benchmark depends on prelude: '+name)
    # Scale sweep: more lines than trackers, multi-page ranges and writes outside
    # the range. Separate builds keep these runs out of the coverage denominators.
    scale_binaries={}
    for mode in [0,1]:
        for trackers in [1,2,4,8,16]:
            tag=f'{"p" if mode else "b1"}_t{trackers}'
            binary=compile_tb('scale_'+tag,'tb_cci_integration',common,[f'-GUSE_RANGE={mode}',
                f'-GLINE_TRACKER_ENTRIES={trackers}',f'-GCONV_AC_FIFO_DEPTH={trackers}'])
            for lines in [8,64,256]:
                for outside in [0,4]:
                    execute(f'scale_{tag}_l{lines}_o{outside}',binary,'PASS scale benchmark',
                            ['+scale_bench',f'+lines={lines}',f'+outside={outside}'],scope='scale_sweep')
            if trackers in (4,16):scale_binaries[mode,trackers]=binary
    # Scale extension: snoop latency sweep and a concurrent M0 reader (256 lines).
    for mode in [0,1]:
        for trackers in [4,16]:
            tag=f'{"p" if mode else "b1"}_t{trackers}'
            for latency in [4,12,32,64]:
                binary=scale_binaries[mode,trackers] if latency==12 else compile_tb(f'scale_{tag}_lat{latency}',
                    'tb_cci_integration',common,[f'-GUSE_RANGE={mode}',f'-GLINE_TRACKER_ENTRIES={trackers}',
                    f'-GCONV_AC_FIFO_DEPTH={trackers}',f'-GSNOOP_LATENCY={latency}'])
                execute(f'scale_ext_{tag}_lat{latency}_m0',binary,'PASS scale benchmark',
                        ['+scale_bench','+lines=256','+outside=0','+m0_probe=16'],scope='scale_extension')
                execute(f'scale_wext_{tag}_lat{latency}_m0w',binary,'PASS scale benchmark',
                        ['+scale_bench','+lines=256','+outside=0','+m0_write_probe=16'],scope='scale_write_extension')
    for option,marker in [('watchdog_negative','RANGE_WATCHDOG:'),('range_cr_error','RANGE_CR_ERROR:'),('b_error','CCI_B_ERROR:'),('m0_crossing','M0_AR_CROSSES_LINE')]:
        execute(option,binaries[1,16,16,16],marker,['+'+option],negative=True,scope='negative_assertion')
    # The original review mutant must now be killed by the independent oracle.
    mutant=build/'coh_write_ingress_no_page.sv'
    text=(ROOT/'rtl/common/coh_write_ingress.sv').read_text()
    target='range_ctx.valid && aw_addr[63:12] == range_ctx.base_page &&'
    if target not in text: raise RuntimeError('Page mutant insertion point changed')
    mutant.write_text(text.replace(target,'range_ctx.valid && /* intentional page-compare mutant */'))
    filelist=build/'mutant.f';filelist.write_text((ROOT/'scripts/rtl.f').read_text().replace('rtl/common/coh_write_ingress.sv',str(mutant)))
    binary=compile_tb('page_mutant','tb_cci_integration',['-f',str(filelist),'simple_axi_slave.sv','tb/tb_cci_integration.sv'])
    execute('page_mutant',binary,'independent actual-B/reservation bitmap scoreboard',negative=True,scope='mutation')
    # Independently mutate each range hazard term; require the dedicated bounded probe failure.
    hazard_source=(ROOT/'rtl/proposed/cci_range_hazard_checker.sv').read_text()
    for name,term,probe in [
        ('hazard_no_page','& (ctx[c].base_page == probe_page)','other_page'),
        ('hazard_no_mask','& ctx[c].line_mask[probe_line]','non_target'),
        ('hazard_no_done','& ~ctx[c].done_mask[probe_line]','done_target')]:
        if hazard_source.count(term)!=1: raise RuntimeError('Hazard mutation insertion point changed: '+name)
        mutant=build/(name+'.sv');mutant.write_text(hazard_source.replace(term,'/* intentional hazard mutation */'))
        filelist=build/(name+'.f')
        filelist.write_text((ROOT/'scripts/rtl.f').read_text().replace('rtl/proposed/cci_range_hazard_checker.sv',str(mutant)))
        binary=compile_tb(name,'tb_cci_integration',['-f',str(filelist),'simple_axi_slave.sv','tb/tb_cci_integration.sv'])
        execute(name,binary,'HAZARD_ACCEPT_TIMEOUT:'+probe,negative=True,scope='mutation')
    # Range-only blocking must fail independently for each channel and address wiring.
    ingress_source=(ROOT/'rtl/common/coh_write_ingress.sv').read_text()
    for name,original,term,replacement,marker in [
        ('hazard_zero','rtl/proposed/cci_range_hazard_checker.sv',
         'assign probe_stall = probe_valid & (|hit);',"assign probe_stall = 1'b0;",'HAZARD_BLOCK_MISSING:AW'),
        ('hazard_ar_disabled','rtl/common/coh_write_ingress.sv',
         'ar_hazard=range_arhazard;',"ar_hazard=1'b0;",'HAZARD_BLOCK_MISSING:AR'),
        ('hazard_aw_disabled','rtl/common/coh_write_ingress.sv',
         'aw_hazard=range_awhazard;',"aw_hazard=1'b0;",'HAZARD_BLOCK_MISSING:AW'),
        ('hazard_aw_wrong_address','rtl/common/coh_write_ingress.sv',
         '.probe_addr(m0_awaddr)', '.probe_addr(m0_araddr)','HAZARD_BLOCK_MISSING:AW'),
        ('hazard_ar_wrong_address','rtl/common/coh_write_ingress.sv',
         '.probe_addr(m0_araddr)', '.probe_addr(m0_awaddr)','HAZARD_CROSS_ACCEPT_TIMEOUT:AR')]:
        source=hazard_source if 'checker' in original else ingress_source
        if source.count(term)!=1: raise RuntimeError('Blocking mutation insertion point changed: '+name)
        mutant=build/(name+'.sv');mutant.write_text(source.replace(term,replacement))
        filelist=build/(name+'.f');filelist.write_text((ROOT/'scripts/rtl.f').read_text().replace(original,str(mutant)))
        binary=compile_tb(name,'tb_cci_integration',['-f',str(filelist),'simple_axi_slave.sv','tb/tb_cci_integration.sv'])
        execute(name,binary,marker,negative=True,scope='mutation')
    for mode in [0,1]:
        name=f'memory_cache_mode{mode}'
        binary=compile_tb(name,'tb_cci_memory_cache',['-f','scripts/rtl.f','tb/axi_memory_slave.sv','tb/m0_clean_cache_model.sv','tb/tb_cci_memory_cache.sv'],[f'-GUSE_RANGE={mode}'])
        execute(name,binary,'PASS tb_cci_memory_cache USE_RANGE=',scope='memory_cache')
    for lines,depth,latency in [(1,1,0),(2,3,5),(16,5,12)]:
        for mode in [0,1]:
            name=f'memory_cache_m{mode}_lines{lines}_axi{depth}_lat{latency}'
            binary=compile_tb(name,'tb_cci_memory_cache',['-f','scripts/rtl.f','tb/axi_memory_slave.sv','tb/m0_clean_cache_model.sv','tb/tb_cci_memory_cache.sv'],
                [f'-GUSE_RANGE={mode}',f'-GCACHE_LINES={lines}',f'-GAXI_DEPTH={depth}',f'-GMEMORY_LATENCY={latency}'])
            execute(name,binary,'PASS tb_cci_memory_cache USE_RANGE=',scope='memory_cache_parameters')
    for lines in [1,2,8,16]:
        name=f'cache_collision_lines{lines}'
        binary=compile_tb(name,'tb_cache_collision',['rtl/common/m0_snoop_endpoint.sv','tb/m0_clean_cache_model.sv','tb/tb_cache_collision.sv'],[f'-GLINES={lines}'])
        execute(name,binary,'PASS cache collision',scope='cache_collision')
    for latency in [0,5,255,256]:
        name=f'memory_collision_latency{latency}'
        binary=compile_tb(name,'tb_memory_collision',['tb/axi_memory_slave.sv','tb/tb_memory_collision.sv'],[f'-GLATENCY={latency}'])
        execute(name,binary,'SLAVE_LATENCY_RANGE' if latency==256 else 'PASS memory collision',
                negative=latency==256,scope='negative_parameter' if latency==256 else 'memory_collision')
    for depth,latency in [(1,0),(1,1),(3,0),(3,12),(16,1),(16,12)]:
        name=f'endpoint_d{depth}_l{latency}'
        binary=compile_tb(name,'tb_snoop_endpoint',['rtl/common/m0_snoop_endpoint.sv','tb/tb_snoop_endpoint.sv'],[f'-GDEPTH={depth}',f'-GLATENCY={latency}'])
        execute(name,binary,'PASS endpoint',scope='endpoint_parameters')
    decoder_files=['rtl/proposed/cci_range_req_decoder.sv','tb/tb_decoder.sv']
    binary=compile_tb('decoder_verilator','tb_decoder',decoder_files)
    execute('decoder_verilator',binary,'PASS decoder exhaustive',scope='decoder_exhaustive')
    cmd=['iverilog','-g2012','-s','tb_decoder','-o',str(build/'decoder_iv'),*decoder_files]
    manifest['commands'].append(dict(stage='compile',name='decoder_iverilog',argv=cmd))
    with (out/'decoder_iverilog_build.log').open('w') as log:subprocess.run(cmd,stdout=log,stderr=subprocess.STDOUT,check=True)
    execute('decoder_iverilog','vvp','PASS decoder exhaustive',[str(build/'decoder_iv')],scope='cross_simulator_decoder')
    proof='read_verilog -formal -sv rtl/proposed/cci_range_req_decoder.sv tb/formal_decoder.sv; prep -top formal_decoder -flatten; sat -verify -prove-asserts -show-inputs'
    execute('decoder_formal','yosys','SAT proof finished - no model found: SUCCESS!',['-Q','-T','-p',proof],scope='formal_combinational_decoder')
    # Merge only identical compiled configurations; never mix B1/P denominators.
    rtl_names={str(p.relative_to(ROOT)) for p in rtl_paths()}
    coverage_summary={}
    for group,paths in coverage_sets.items():
        merged=out/(group+'.merged.dat')
        cmd=['verilator_coverage','--write',str(merged),*[str(p) for p in paths]]
        manifest['commands'].append(dict(stage='coverage',name=group,argv=cmd))
        subprocess.run(cmd,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,check=True)
        stats={};uncovered=[]
        for line in merged.read_text().splitlines():
            if not line or line.startswith('#'):continue
            match=re.fullmatch(r"C '(.*)' (\d+)",line)
            if not match:raise RuntimeError('Unknown native coverage record')
            fields=dict(part.split('\x02',1) for part in match[1].split('\x01')[1:])
            if fields.get('f') not in rtl_names:continue
            key=fields.get('t','unknown');bucket=stats.setdefault(key,dict(hit=0,total=0))
            bucket['total']+=1;bucket['hit']+=int(int(match[2])>0)
            if int(match[2])==0:uncovered.append(fields)
        if not stats:raise RuntimeError('No RTL coverage points: '+group)
        save(out/(group+'.uncovered.json'),uncovered)
        coverage_summary[group]=dict(points=stats,runs=len(paths),native=merged.name,uncovered=group+'.uncovered.json')
    save(out/'instrumented_coverage.json',coverage_summary)
    manifest['instrumented_coverage']=coverage_summary
    save(out/'scenario_coverage.json',manifest['coverage'])
    with (out/'tracker_sensitivity.csv').open('w',newline='') as f:
        writer=csv.DictWriter(f,fieldnames=list(manifest['metrics'][0]));writer.writeheader();writer.writerows(manifest['metrics'])
    with (out/'scale_sweep.csv').open('w',newline='') as f:
        writer=csv.DictWriter(f,fieldnames=list(manifest['scale_metrics'][0]));writer.writeheader();writer.writerows(manifest['scale_metrics'])
    with (out/'m0_wait.csv').open('w',newline='') as f:
        writer=csv.DictWriter(f,fieldnames=list(manifest['m0_metrics'][0]));writer.writeheader();writer.writerows(manifest['m0_metrics'])
    with (out/'m0_write_wait.csv').open('w',newline='') as f:
        writer=csv.DictWriter(f,fieldnames=list(manifest['m0w_metrics'][0]));writer.writeheader();writer.writerows(manifest['m0w_metrics'])
    unchanged(sources);manifest['status']='PASS';manifest['artifacts']=artifact_hashes(out)
except (Exception, KeyboardInterrupt) as e:
    manifest['status']='FAIL';manifest['error']=str(e) or type(e).__name__;raise
finally:
    save(out/'manifest.json',manifest)
    save(pointer,dict(run_id=run_id,status=manifest['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
print('Regression PASS: '+str(out),flush=True)
