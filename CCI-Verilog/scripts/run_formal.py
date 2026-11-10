#!/usr/bin/env python3
"""Sequential formal checks for the CCI FIFO/order/lifetime logic.

Flow: sv2v (assertions kept, $fatal clauses stripped) -> yosys `sat`.
  * m0_snoop_endpoint: unbounded k-induction of FIFO invariants (formal/endpoint_invariants.vh).
  * coh_write_ingress: bounded model check of the active line-only DUT assertions under
    formal/formal_ingress.sv, plus reachability witnesses
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
INGRESS=['rtl/common/coh_write_ingress.sv']
ARBITER='rtl/common/rcci_m1_issue_arbiter.sv'
READ_INGRESS=['rtl/ace/ace_snoop_pkg.sv','rtl/common/coh_read_ingress.sv']
inputs=[ENDPOINT,*INGRESS,'formal/endpoint_invariants.vh','formal/formal_endpoint.sv','formal/formal_ingress.sv',
        'formal/formal_ingress_progress.sv',ARBITER,'formal/formal_issue_arbiter.sv',*READ_INGRESS,'formal/formal_read_interval.sv',
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
    # Yosys' frontend does not accept the retained SVA sequence syntax.  The
    # same ready/valid stability rule is exercised by simulation assertions;
    # this proof keeps the immediate lifetime/order assertions.
    v=re.sub(r'\s*assert\s+property\s*\(.*?\)\s*else\s*\$fatal\([^;]*\);','',r.stdout,flags=re.S)
    v=re.sub(r'\s*assert\s+property\s*\(.*?\)\s*else\s*begin.*?\n\s*end(?=\s*endmodule)','',v,flags=re.S)
    v=re.sub(r'\s*else\s*\$fatal\([^;]*\);',';',v)
    v=re.sub(r'\s+else\s+begin\s*(?://[^\n]*\n\s*)*\$fatal\([^;]*\);\s*end','',v)
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
    jobs.append(('ingress_line_bmc',ing,'formal/formal_ingress.sv','formal_ingress',{},'bmc','pass','formal_bmc_ingress',None))
    progress_params=dict(CR_LAT=3,B_LAT=3,BOUND=14)
    jobs.append(('ingress_bounded_progress',ing,'formal/formal_ingress_progress.sv',
        'formal_ingress_progress',progress_params,'bmc','pass','formal_bounded_progress',20))
    jobs.append(('witness_bounded_completion',ing,'formal/formal_ingress_progress.sv',
        'formal_ingress_progress',{**progress_params,'WITNESS':1},'bmc','fail','formal_witness',20))
    # Non-vacuity: every witness must be reachable inside the bound.
    for w,desc in [(1,'b_fire'),(2,'tracker_full_stall'),(3,'cr_fire'),(4,'aw_accept'),(5,'line_issue'),(6,'m0_hazard')]:
        jobs.append((f'witness_{desc}',ing,'formal/formal_ingress.sv','formal_ingress',dict(WITNESS=w),'bmc','fail','formal_witness',None))
    # Checker strength: each RTL mutant must violate a proof obligation.
    mutants=[('endpoint_ready_off_by_one',ENDPOINT,"assign ac_ready = int'(count) < DEPTH;","assign ac_ready = int'(count) <= DEPTH;",'endpoint'),
             ('endpoint_no_head_advance',ENDPOINT,'head <= next_ptr(head);','head <= head;','endpoint'),
             ('ingress_no_retire_advance','rtl/common/coh_write_ingress.sv','retire_head<=inc(retire_head);','retire_head<=retire_head;','ingress'),
             ('ingress_no_issue_mark','rtl/common/coh_write_ingress.sv','entries[issue_head].issued<=1;','entries[issue_head].issued<=0;','ingress'),
             ('ingress_no_tracker_free','rtl/common/coh_write_ingress.sv','trackers[entries[b_idx].tracker].valid<=0;','/* mutant */','ingress')]
    for name,f,term,repl,kind in mutants:
        if kind=='endpoint':
            jobs.append((f'mutant_{name}',convert('endpoint_'+name,[ENDPOINT],(f,term,repl)),'formal/formal_endpoint.sv','formal_endpoint',dict(DEPTH=3,LATENCY=2),'induction','fail','formal_mutation',None))
        else:
            jobs.append((f'mutant_{name}',convert('ingress_'+name,INGRESS,(f,term,repl)),'formal/formal_ingress.sv','formal_ingress',{},'bmc','fail','formal_mutation',12))
    progress_mutant=convert('ingress_no_nq_completion',INGRESS,
        ('rtl/common/coh_write_ingress.sv','trackers[nq_rsp_tracker].snoop_done<=1;',
         'trackers[nq_rsp_tracker].snoop_done<=0;'))
    jobs.append(('mutant_ingress_no_nq_completion',progress_mutant,
        'formal/formal_ingress_progress.sv','formal_ingress_progress',progress_params,
        'bmc','fail','formal_mutation_progress',20))
    # RCCI_PLAN 14.5: M1 read/write same-line issue arbiter.
    arb=convert('arbiter',[ARBITER])
    jobs.append(('issue_arbiter_isolated_fair',arb,'formal/formal_issue_arbiter.sv','formal_issue_arbiter',
        dict(OWNED=0,BOUND=1),'bmc','pass','formal_issue_arbiter',20))
    jobs.append(('issue_arbiter_owned_bounded_grant',arb,'formal/formal_issue_arbiter.sv','formal_issue_arbiter',
        dict(OWNED=1,L_OWNER=3,BOUND=4),'bmc','pass','formal_issue_arbiter',24))
    for w,desc in [(1,'read_wins_conflict'),(2,'write_wins_conflict')]:
        jobs.append((f'witness_arbiter_{desc}',arb,'formal/formal_issue_arbiter.sv','formal_issue_arbiter',
            dict(OWNED=0,WITNESS=w),'bmc','fail','formal_witness',12))
    arb_mut=convert('arbiter_no_turn_update',[ARBITER],(ARBITER,"else if(conflict&&rd_fire) turn<=1'b1;","/* mutant */"))
    jobs.append(('mutant_arbiter_no_turn_update',arb_mut,'formal/formal_issue_arbiter.sv','formal_issue_arbiter',
        dict(OWNED=1,L_OWNER=3,BOUND=4),'bmc','fail','formal_mutation',24))
    arb_mut2=convert('arbiter_both_win',[ARBITER],(ARBITER,'assign wr_lose=conflict&&!turn;','assign wr_lose=1\'b0;'))
    jobs.append(('mutant_arbiter_both_win',arb_mut2,'formal/formal_issue_arbiter.sv','formal_issue_arbiter',
        dict(OWNED=0,BOUND=1),'bmc','fail','formal_mutation',12))
    # RCCI_PLAN 14.4-6 / 14.6-7: read interval CAM == tracker CAM (bounded).
    rdi=convert('read_interval',READ_INGRESS)
    jobs.append(('read_interval_equiv_bmc',rdi,'formal/formal_read_interval.sv','formal_read_interval',
        {},'bmc','pass','formal_interval_equiv',12))
    for w,desc in [(1,'ace_interval_hazard'),(2,'m0_interval_hazard'),(3,'range_line_issue')]:
        jobs.append((f'witness_read_{desc}',rdi,'formal/formal_read_interval.sv','formal_read_interval',
            dict(WITNESS=w),'bmc','fail','formal_witness',12))
    RI='rtl/common/coh_read_ingress.sv'
    for mname,old,new in [
        ('no_hi_increment',"if(entries[issue_head].kind_range)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;",
                           "if(1'b0)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;"),
        ('no_empty_interval_guard',"if(entries[e].valid&&entries[e].lo_line<entries[e].hi_line)begin",
                                   "if(entries[e].valid)begin")]:
        jobs.append((f'mutant_read_interval_{mname}',convert('read_interval_'+mname,READ_INGRESS,(RI,old,new)),
            'formal/formal_read_interval.sv','formal_read_interval',{},'bmc','fail','formal_mutation',12))
    with ThreadPoolExecutor(a.jobs) as pool:
        m['cases']=list(pool.map(lambda j:sat(*j),jobs))
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:
    m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
