#!/usr/bin/env python3
"""Sequential formal checks for the CCI FIFO/order/lifetime logic.

Flow: sv2v (assertions kept, $fatal clauses stripped) -> yosys `sat`.
  * m0_snoop_endpoint: unbounded k-induction of FIFO invariants (formal/endpoint_invariants.vh).
  * coh_write_ingress: bounded model check of the DUT's own assertions under the
    environment in formal/formal_ingress.sv (B1 and P), plus reachability witnesses
    that must fail (non-vacuity) and RTL mutants that must fail (checker strength).
"""
import argparse, re, subprocess, shutil
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from results_common import ROOT,new_run,sha,save,unchanged,artifact_hashes
p=argparse.ArgumentParser()
p.add_argument('--sv2v',default=shutil.which('sv2v') or 'sv2v')
p.add_argument('--yosys',default=shutil.which('yowasp-yosys') or 'yowasp-yosys')
p.add_argument('--bmc-depth',type=int,default=20)
p.add_argument('--jobs',type=int,default=8)
a=p.parse_args()
run_id,out=new_run('formal')
ENDPOINT='rtl/common/m0_snoop_endpoint.sv'
INGRESS=['rtl/common/cci_pkg.sv','rtl/proposed/cci_range_req_decoder.sv','rtl/proposed/cci_ac_range_gen.sv',
         'rtl/proposed/cci_range_rim_tracker.sv','rtl/proposed/cci_range_hazard_checker.sv','rtl/common/coh_write_ingress.sv']
inputs=[ENDPOINT,*INGRESS,'formal/endpoint_invariants.vh','formal/formal_endpoint.sv','formal/formal_ingress.sv',
        'scripts/run_formal.py','scripts/results_common.py']
sources={f:sha(ROOT/f) for f in inputs}
tools={'sv2v':subprocess.run([a.sv2v,'--version'],capture_output=True,text=True).stdout.strip(),
       'yosys':subprocess.run([a.yosys,'-V'],capture_output=True,text=True).stdout.strip()}
m=dict(run_id=run_id,status='RUNNING',sources=sources,tools=tools,commands=[],cases=[],config=dict(bmc_depth=a.bmc_depth))
pointer=ROOT/'reports/latest_formal.json'
def publish():
    save(out/'manifest.json',m)
    save(pointer,dict(run_id=run_id,status=m['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))

def convert(name,files,replace=None):
    """sv2v-convert RTL (optionally mutated) into out/<name>.v with assertions kept."""
    work=out/'src'/name;work.mkdir(parents=True,exist_ok=True)
    paths=[]
    for f in files:
        text=(ROOT/f).read_text()
        if replace and replace[0]==f:
            if text.count(replace[1])!=1: raise RuntimeError(f'{name}: mutation insertion point changed')
            text=text.replace(replace[1],replace[2])
        dst=work/Path(f).name;dst.write_text(text);paths.append(str(dst))
    cmd=[a.sv2v,'--exclude=Assert','-I',str(ROOT/'rtl/common'),*paths]
    m['commands'].append(dict(stage='sv2v',name=name,argv=cmd))
    r=subprocess.run(cmd,capture_output=True,text=True)
    if r.returncode: raise RuntimeError(name+': sv2v failed\n'+r.stderr[-2000:])
    # Keep the immediate assertions as proof obligations; $fatal has no formal meaning.
    v=re.sub(r'\s*else\s*\$fatal\([^;]*\);',';',r.stdout)
    if '$fatal' in v: raise RuntimeError(name+': unstripped $fatal')
    if name.startswith('endpoint'):
        if v.count('endmodule')!=1: raise RuntimeError('endpoint conversion shape changed')
        v=v.replace('endmodule',(ROOT/'formal/endpoint_invariants.vh').read_text()+'endmodule')
    dst=out/(name+'.v');dst.write_text(v);return dst

def sat(name,design,wrapper,top,params,mode,expect,scope,depth=None):
    chp=''.join(f'chparam -set {k} {v} {top}; ' for k,v in params.items())
    if mode=='induction':
        check=f'sat -tempinduct -prove-asserts -set-assumes -seq 1 -maxsteps {depth or 25}'
    else:
        check=f'sat -seq {depth or a.bmc_depth} -prove-asserts -set-assumes'
    script=(f'read_verilog -sv -formal {design} {ROOT/wrapper}; {chp}prep -top {top}; memory_map; opt; flatten; '
            f'async2sync; opt_clean; select -count t:$assert; {check}')
    cmd=[a.yosys,'-p',script]
    m['commands'].append(dict(stage='sat',name=name,argv=cmd))
    r=subprocess.run(cmd,capture_output=True,text=True,timeout=7200)
    (out/(name+'.log')).write_text(r.stdout+r.stderr)
    asserts=re.findall(r'^(\d+) objects\.',r.stdout,re.M)
    success='SAT proof finished - no model found: SUCCESS!' in r.stdout
    induct='Induction step proven: SUCCESS!' in r.stdout
    # Only a concrete counterexample counts as a failure; an inconclusive induction does not.
    failed=re.search(r'model found( for base case)?: FAIL!',r.stdout) is not None
    if r.returncode and not failed: raise RuntimeError(name+': yosys error\n'+(r.stdout+r.stderr)[-3000:])
    if expect=='pass':
        ok=(induct if mode=='induction' else success) and not failed
    else:
        ok=failed and not success and not induct
    if not ok: raise RuntimeError(f'{name}: expected {expect}\n'+r.stdout[-3000:])
    rec=dict(name=name,scope=scope,mode=mode,params=params,expect=expect,asserts=int(asserts[0]) if asserts else None,
             status='PASS' if expect=='pass' else 'EXPECTED_FAILURE_PASS',depth=depth or (25 if mode=='induction' else a.bmc_depth),log=name+'.log')
    print(f"{name}: {rec['status']} ({mode}, asserts={rec['asserts']})",flush=True)
    return rec

publish()
try:
    ep=convert('endpoint',[ENDPOINT]);ing=convert('ingress',INGRESS)
    jobs=[]
    for d,l in [(2,0),(3,2),(4,3)]:
        jobs.append((f'endpoint_d{d}_l{l}_induction',ep,'formal/formal_endpoint.sv','formal_endpoint',dict(DEPTH=d,LATENCY=l),'induction','pass','formal_induction_endpoint',None))
    for mode,tag in [(0,'b1'),(1,'p')]:
        jobs.append((f'ingress_{tag}_bmc',ing,'formal/formal_ingress.sv','formal_ingress',dict(USE_RANGE=mode),'bmc','pass','formal_bmc_ingress',None))
    # Non-vacuity: every witness must be reachable inside the bound.
    for w,mode,desc in [(1,0,'b_fire'),(2,0,'tracker_full_stall'),(3,0,'cr_fire'),(4,1,'setup_accept'),(5,1,'range_b_release'),(6,1,'m0_hazard')]:
        jobs.append((f'witness_{desc}',ing,'formal/formal_ingress.sv','formal_ingress',dict(USE_RANGE=mode,WITNESS=w),'bmc','fail','formal_witness',None))
    # Checker strength: each RTL mutant must violate a proof obligation.
    mutants=[('endpoint_ready_off_by_one',ENDPOINT,"assign ac_ready = int'(count) < DEPTH;","assign ac_ready = int'(count) <= DEPTH;",'endpoint'),
             ('endpoint_no_head_advance',ENDPOINT,'head <= next_ptr(head);','head <= head;','endpoint'),
             ('ingress_no_retire_advance','rtl/common/coh_write_ingress.sv','retire_head<=inc(retire_head);','retire_head<=retire_head;','ingress'),
             ('ingress_no_issue_mark','rtl/common/coh_write_ingress.sv','entries[issue_head].issued<=1;','entries[issue_head].issued<=0;','ingress'),
             ('ingress_no_tracker_free','rtl/common/coh_write_ingress.sv','if (!path[b_idx]) trackers[entries[b_idx].tracker].valid<=0;','/* mutant */','ingress')]
    for name,f,term,repl,kind in mutants:
        if kind=='endpoint':
            jobs.append((f'mutant_{name}',convert('endpoint_'+name,[ENDPOINT],(f,term,repl)),'formal/formal_endpoint.sv','formal_endpoint',dict(DEPTH=3,LATENCY=2),'induction','fail','formal_mutation',None))
        else:
            jobs.append((f'mutant_{name}',convert('ingress_'+name,INGRESS,(f,term,repl)),'formal/formal_ingress.sv','formal_ingress',dict(USE_RANGE=0),'bmc','fail','formal_mutation',12))
    with ThreadPoolExecutor(a.jobs) as pool:
        m['cases']=list(pool.map(lambda j:sat(*j),jobs))
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:
    m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
