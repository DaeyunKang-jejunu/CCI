#!/usr/bin/env python3
"""RCCI_PLAN 14.2-14.3 (보완 1·2): R1/R1'/R5 reproduction and fix check.

Each fix case runs twice on the ACE integration TB:
  * ownership: +fix1_monitor enabled (14.2-3 ownership monitor)
  * data:      monitor disabled, only the scenario's data checks

--before records the pre-fix outcome (failures are the expected evidence) under
reports/rcci_fix/fix1_before/. Without --before every normal run must PASS, the
conservative gate build (RANGE_ACE_ISSUE_GATE=1) must stay safe but over-block,
and every mutation must be caught by its planned marker (fix2 check).
"""
import argparse,json,shutil,subprocess
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_fix1')
OUT=ROOT/'reports'/'rcci_fix'

CASES={
    1:('wr_range_vs_writeback',4),
    2:('rd_range_vs_readunique',2),
    3:('rd_range_vs_writeback',4),
    4:('wr_range_vs_readshared',4),
    5:('wr_range_vs_ns_read_burst',4),
    6:('rd_range_vs_ns_write',4),
    7:('b1_rd_vs_ace_ar_same_cycle',4),
    8:('b1_wr_vs_ace_aw_same_cycle',4),
    9:('b1_wr_vs_ace_ar_same_cycle',4),
    10:('ace_ns_burst_tail_vs_owned_line',4),
}
# Cases that need the 보완 2 write reservation; they do not exist before the fix.
AFTER_CASES={
    11:('wr_hold_late_ace',4),
    13:('wr_hold_reset',4),
    14:('non_overblock_other_line',4),
    15:('same_cycle_ace_vs_range_issue',4),
    16:('ace_burst_tail_ahead_of_range',4),
    17:('top_address_page_interval',4),
    18:('range64_read_write_together',4),
    # 보완 4 (R3): M1 read <-> write issue-time ownership
    12:('wr_hold_late_read',4),
    19:('read_first_write_covers_future',4),
    20:('write_first_read_covers_future',4),
    21:('read_write_same_lines_together',4),
    # 보완 5: Error-only interval release, reset and fatal lifetime
    22:('error_only_write_interval_release',4),
    23:('error_only_read_interval_release',4),
    24:('reset_lifetime_reuse',4),
    25:('fatal_lifetime_no_new_issue',4),
    # 보완 10/12/13 (RCCI_PLAN 15): M0 path, R8 buffering, minor fixes
    26:('m0_waits_while_ace_busy_no_phantom',4),
    27:('m0_granted_valid_kept_under_hazard',4),
    28:('ace_waits_for_presented_m0',4),
    29:('cpu_refill_not_blocked_by_dma_r',4),
    30:('m0_burst_tail_vs_owned_line',4),
    31:('evict_owns_no_line',4),
}
# 보완 5 (14.6-5): configuration matrix. Window-independent cases only.
MATRIX_CASES=(7,8,9,17,18,21,22,23)
MATRIX=[(e,w) for e in (4,16) for w in (1,4,16)]
# 보완 3 (14.4-5): E=4 logical contexts with N_fly=16 line slots. Only cases whose
# setup does not assume a window of 4 are run in this geometry.
E4_CASES=(7,8,9,17,18,21)
MARKERS=('REVIEW_M0_','FIX1_M0_','FIX1_ACE_OVER','FIX1_ACE_BEFORE','FIX1_CPU_BLOCKED','FIX1_EVICT','ACE_PENDING','FIX1_RESET_','FIX1_FATAL_','FIX1_ERROR_ONLY','RANGE_ISSUE_M1','FIX1_M1_ISSUE_OVERLAP','FIX1_READ_AFTER','FIX1_WRITE_OVERTOOK',
         'FIX1_NO_SAME_LINE','HAZARD_INTERVAL_EQUIV','FIX1_TOP_PAGE','FIX1_RANGE64','RANGE_WRITE_','RANGE_READ_','FIX1_OWNERSHIP_OVERLAP','FIX1_ACE_ADMIT_OVERLAP',
         'FIX1_WRITE_RANGE_MEMORY','FIX1_READ_RANGE_DATA','FIX1_WRITE_RANGE_B','FIX1_HOLD_',
         'FIX1_OVERBLOCK','FIX1_FAULT','ACE_INTEGRATION_TIMEOUT')
# (name, file, old, new, case, expected marker)
MUTATIONS=[
    ('no_ace_active_compare','rtl/ace/axi_cci_ace_top.sv',
     'for(int c=0;c<ACE_MANAGER_CONTEXTS;c++)if(ace_own_valid[c])begin',
     'for(int c=0;c<ACE_MANAGER_CONTEXTS;c++)if(1\'b0)begin',1,'FIX1_OWNERSHIP_OVERLAP'),
    ('no_same_cycle_ace','rtl/ace/axi_cci_ace_top.sv',
     '        if(ace_ar_owns&&ACE_ARREADY)begin\n            if(span_has(read_issue_line_addr',
     '        if(1\'b0)begin\n            if(span_has(read_issue_line_addr',15,'FIX1_OWNERSHIP_OVERLAP'),
    ('own_span_base_line_only','rtl/ace/ace_manager_request_controller.sv',
     'assign own_last_line=last_line(txn_addr,txn_len,txn_size);',
     'assign own_last_line=first_line(txn_addr);',16,'FIX1_OWNERSHIP_OVERLAP'),
    ('admit_probe_base_line_only','rtl/ace/axi_cci_ace_top.sv',
     'wire [58:0] ace_ar_last_line=ace_snoop_pkg::last_line(ACE_ARADDR,ACE_ARLEN,ACE_ARSIZE);',
     'wire [58:0] ace_ar_last_line={1\'b0,ACE_ARADDR[63:6]};',10,'FIX1_ACE_ADMIT_OVERLAP'),
    # 보완 3: in rCCI the reserved line is part of the adapter interval [lo,hi+hold).
    ('hold_not_in_interval','rtl/common/coh_write_range_adapter.sv',
     "hi=contexts[e].hi_line+7'(hold_valid&&CW'(e)==issue_head);",
     "hi=contexts[e].hi_line;",11,('FIX1_HOLD_ACE_ADMITTED','HAZARD_INTERVAL_EQUIV')),
    # 보완 3: interval CAM
    ('read_hi_not_incremented','rtl/common/coh_read_ingress.sv',
     "if(entries[issue_head].kind_range)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;",
     "if(1'b0)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;",3,
     ('HAZARD_INTERVAL_EQUIV','RANGE_READ_INTERVAL_POINTER')),
    ('write_lo_not_incremented','rtl/common/coh_write_range_adapter.sv',
     "contexts[complete_head].lo_line<=contexts[complete_head].lo_line+7'd1;",
     "contexts[complete_head].lo_line<=contexts[complete_head].lo_line;",1,
     ('HAZARD_INTERVAL_EQUIV','RANGE_WRITE_INTERVAL_POINTER')),
    ('span_upper_bound_inclusive','rtl/common/coh_read_ingress.sv',
     "if(ace_ar_probe_valid&&in_page(ace_ar_first,entries[e].addr)&&{1'b0,ace_ar_first[5:0]}<entries[e].hi_line&&",
     "if(ace_ar_probe_valid&&in_page(ace_ar_first,entries[e].addr)&&{1'b0,ace_ar_first[5:0]}<=entries[e].hi_line&&",15,('HAZARD_INTERVAL_EQUIV',)),
    # 보완 4: read <-> write issue-time checks and same-line arbitration
    ('no_read_vs_write_owner','rtl/ace/axi_cci_ace_top.sv',
     '(read_issue_line_valid&&(read_ace_owned||write_rd_issue_hazard||m1_rd_lose))',
     '(read_issue_line_valid&&(read_ace_owned||m1_rd_lose))',19,
     ('RANGE_ISSUE_M1_OVERLAP','FIX1_M1_ISSUE_OVERLAP')),
    ('no_write_vs_read_owner','rtl/ace/axi_cci_ace_top.sv',
     '(write_issue_cand_valid&&(write_ace_owned||read_wr_issue_hazard||m1_wr_lose))',
     '(write_issue_cand_valid&&(write_ace_owned||m1_wr_lose))',20,
     ('RANGE_ISSUE_M1_OVERLAP','FIX1_M1_ISSUE_OVERLAP')),
    ('no_same_line_arbitration','rtl/common/rcci_m1_issue_arbiter.sv',
     'assign wr_lose=conflict&&!turn;','assign wr_lose=1\'b0;',21,
     ('RANGE_ISSUE_M1','FIX1_M1_ISSUE_OVERLAP')),
    # 보완 5: fatal stop and reset lifetime of the new state
    ('no_fatal_issue_stop','rtl/ace/axi_cci_ace_top.sv',
     'assign read_issue_block=(RANGE_ACE_ISSUE_GATE&&ACE_MANAGER_BUSY)||issue_fatal_stop||',
     'assign read_issue_block=(RANGE_ACE_ISSUE_GATE&&ACE_MANAGER_BUSY)||',25,('FIX1_FATAL_NEW_ISSUE',)),
    ('hold_not_reset','rtl/common/coh_write_range_adapter.sv',
     'hold_valid<=0;hold_id<=0;hold_addr<=0;','hold_id<=0;hold_addr<=0;',24,('FIX1_RESET_HOLD',)),
    ('turn_not_reset','rtl/common/rcci_m1_issue_arbiter.sv',
     "if(!rst_n) turn<=1'b0;","if(!rst_n) turn<=turn;",24,('FIX1_RESET_TURN',)),
    # 보완 10/12/13 (RCCI_PLAN 15)
    ('m0_not_stalled_by_ace','rtl/ace/axi_cci_ace_top.sv',
     '        read_m0_ar_hazard||block_admission||ACE_MANAGER_BUSY;',
     '        read_m0_ar_hazard||block_admission;',26,('REVIEW_M0_ADMITTED_DURING_ACE','ACE_PENDING')),
    ('m0_valid_gated_outside_core','rtl/ace/axi_cci_ace_top.sv',
     '        .M0_ARVALID(M0_ARVALID),','        .M0_ARVALID(M0_ARVALID&&!read_m0_ar_hazard),',27,
     ('FIX1_M0_GRANT_DROPPED','Assertion failed')),
    ('ace_admit_ignores_presented_m0','rtl/ace/axi_cci_ace_top.sv',
     'm0_reads_pending==0&&m0_writes_pending==0&&!M0_ARVALID&&!M0_AWVALID;',
     'm0_reads_pending==0&&m0_writes_pending==0;',28,('FIX1_ACE_OVER_PRESENTED_M0',)),
    ('memory_r_waits_for_dma','rtl/common/coh_read_ingress.sv',
     'assign mem_r_ready=mq_count!=0;','assign mem_r_ready=mq_count!=0&&hit_ready;',29,
     ('FIX1_CPU_BLOCKED_BY_DMA_R','ACE_INTEGRATION_TIMEOUT')),
    ('m0_probe_base_line_only','rtl/common/coh_read_ingress.sv',
     '{1\'b0,m0_ar_probe_last[5:0]}>=entries[e].lo_line)int_m0_ar=1;','{1\'b0,m0_ar_line[5:0]}>=entries[e].lo_line)int_m0_ar=1;',30,
     ('FIX1_M0_TAIL_ADMITTED','HAZARD_INTERVAL_EQUIV')),
    ('evict_owns_line','rtl/ace/ace_manager_request_controller.sv',
     '!aw_bar[0] && !(shareable(aw_domain)&&aw_snoop==EVICT) &&','!aw_bar[0] &&',31,('FIX1_EVICT_OVERBLOCK',)),
    ('interval_6bit_wrap','rtl/common/coh_read_ingress.sv',
     "if(entries[issue_head].kind_range)entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;",
     "if(entries[issue_head].kind_range)entries[issue_head].hi_line<={1'b0,6'(entries[issue_head].hi_line+7'd1)};",17,
     ('HAZARD_INTERVAL_EQUIV','RANGE_READ_INTERVAL_POINTER','FIX1_TOP_PAGE_M0_ADMITTED')),
]

def sh(cmd,log):
    p=subprocess.run([str(x) for x in cmd],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=600)
    log.write_text(p.stdout)
    return p

def build(name,trackers,log_dir,gate=0,replace=None,extra=()):
    mdir=BUILD/name
    files=['-f','scripts/rtl.f','-f','scripts/ace.f']
    if replace:
        src,path=replace
        lst=[]
        for f in ('scripts/rtl.f','scripts/ace.f'):
            text=(ROOT/f).read_text()
            if src in text:text=text.replace(src,str(path))
            lf=BUILD/f'{name}_{Path(f).name}';lf.write_text(text);lst+=['-f',str(lf)]
        files=lst
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','8',
         '-MAKEFLAGS','OPT_FAST=-O0 OPT_SLOW=-O0',
         '--unroll-count','2', # the 64-line stimulus loops otherwise unroll into a huge coroutine
         '--top-module','tb_cci_ace_integration','--Mdir',mdir,*files,'tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','+define+RCCI_FIX_CASES','-GUSE_RANGE=1',f'-GLINE_TRACKER_ENTRIES={trackers}',
         f'-GRANGE_ACE_ISSUE_GATE={gate}',*extra]
    p=sh(cmd,log_dir/f'build_{name}.log')
    if p.returncode or 'Built from' not in p.stdout:
        raise RuntimeError(f'build {name} failed\n{p.stdout[-4000:]}')
    return mdir/'Vtb_cci_ace_integration'

def run(binary,case,monitor,log_dir,tag=''):
    args=[binary,f'+fix1_case={case}']
    if monitor:args.append('+fix1_monitor')
    kind='ownership' if monitor else 'data'
    p=sh(args,log_dir/f'{tag}case{case}_{kind}.log')
    passed=p.returncode==0 and f'PASS fix1 case={case}' in p.stdout
    marker=next((m for m in MARKERS if m in p.stdout),'')
    detail=next((l.strip() for l in p.stdout.splitlines() if marker and marker in l),'')
    same=next((l.strip() for l in p.stdout.splitlines() if 'FIX1_SAME_CYCLE' in l),'')
    return {'check':kind,'status':'PASS' if passed else 'FAIL','marker':marker,
            'detail':detail,'same_cycle':same,'_tail':p.stdout[-6000:]}

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--before',action='store_true')
    a=ap.parse_args()
    log_dir=OUT/('fix1_before' if a.before else 'fix2_after')
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True)
    if log_dir.exists():shutil.rmtree(log_dir)
    log_dir.mkdir(parents=True)
    cases=dict(CASES) if a.before else {**CASES,**AFTER_CASES}
    bins={t:build(f't{t}',t,log_dir) for t in sorted({t for _,t in cases.values()})}
    results=[]
    def record(r,**kw):
        r.update(kw);results.append(r)
        print(f"{kw.get('config','normal'):24s} case {kw['case']:2d} {kw['name']:32s} "
              f"{r['check']:9s} {r['status']} {r['marker']}",flush=True)
    for case,(name,t) in cases.items():
        for monitor in (True,False):
            record(run(bins[t],case,monitor,log_dir),case=case,name=name,config='normal',expect='PASS')
    if not a.before:
        gate=build('gate',4,log_dir,gate=1)
        for case,(name,t) in cases.items():
            if t!=4:continue
            r=run(gate,case,True,log_dir,'gate_')
            # The busy gate is safe but over-blocks: an unrelated active ACE stalls
            # the range (case 14 marker, case 16 never reaches its progress point,
            # case 31: a held WACK keeps the Evict context busy although it owns no line).
            want='FAIL' if case in (14,16,31) else 'PASS'
            record(r,case=case,name=name,config='gate_busy',expect=want)
        e4=build('e4_w16',16,log_dir,extra=('-GM1_READ_CONTEXTS=4','-GM1_WRITE_CONTEXTS=4'))
        r=sh([e4],log_dir/'e4_w16_integration.log')
        ok_int=r.returncode==0 and 'PASS v9 ACE integration' in r.stdout
        results.append({'config':'E4_NFLY16','case':0,'name':'integration_default','check':'data',
            'status':'PASS' if ok_int else 'FAIL','marker':'','detail':'','expect':'PASS'})
        print(f"E4_NFLY16 integration_default {'PASS' if ok_int else 'FAIL'}",flush=True)
        for case in E4_CASES:
            record(run(e4,case,True,log_dir,'e4_'),case=case,name=cases[case][0],config='E4_NFLY16',expect='PASS')
        b1=build('b1_t16',16,log_dir,extra=('-GUSE_RANGE=0',))
        r=sh([b1],log_dir/'b1_t16_integration.log')
        ok_b1=r.returncode==0 and 'PASS v9 ACE integration mode=0' in r.stdout
        results.append({'config':'MATRIX_B1_T16','case':0,'name':'integration_default','check':'data',
            'status':'PASS' if ok_b1 else 'FAIL','marker':'','detail':'','expect':'PASS'})
        print(f"MATRIX_B1_T16 integration_default {'PASS' if ok_b1 else 'FAIL'}",flush=True)
        for case in (7,8,9):
            record(run(b1,case,True,log_dir,'b1_'),case=case,name=cases[case][0],config='MATRIX_B1_T16',expect='PASS')
        for e,w in MATRIX:
            cfg=f'R-E{e}-RW{w}-WE{e}-WW{w}'
            bm=build(cfg,16,log_dir,extra=(f'-GM1_READ_CONTEXTS={e}',f'-GM1_WRITE_CONTEXTS={e}',
                f'-GRANGE_READ_WINDOW={w}',f'-GRANGE_WRITE_WINDOW={w}'))
            r=sh([bm],log_dir/f'{cfg}_integration.log')
            ok_m=r.returncode==0 and 'PASS v9 ACE integration' in r.stdout
            results.append({'config':'MATRIX_'+cfg,'case':0,'name':'integration_default','check':'data',
                'status':'PASS' if ok_m else 'FAIL','marker':'','detail':'','expect':'PASS'})
            print(f"MATRIX_{cfg} integration_default {'PASS' if ok_m else 'FAIL'}",flush=True)
            for case in MATRIX_CASES:
                record(run(bm,case,True,log_dir,cfg+'_'),case=case,name=cases[case][0],config='MATRIX_'+cfg,expect='PASS')
        for mname,f,old,new,case,marker in MUTATIONS:
            src=(ROOT/f).read_text()
            if src.count(old)!=1:raise RuntimeError(f'{mname}: mutation site count={src.count(old)}')
            path=BUILD/f'{mname}.sv';path.write_text(src.replace(old,new))
            b=build(mname,cases[case][1],log_dir,replace=(f,path))
            r=run(b,case,True,log_dir,f'{mname}_')
            r['expected_marker']=marker
            want=marker if isinstance(marker,tuple) else (marker,)
            r['expected_marker']=list(want)
            r['status']='EXPECTED_FAILURE_PASS' if r['status']=='FAIL' and any(w in r['_tail'] for w in want) \
                else 'MUTATION_NOT_CAUGHT'
            record(r,case=case,name=cases[case][0],config=f'mut:{mname}',expect='EXPECTED_FAILURE_PASS')
    for r in results:r.pop('_tail',None)
    ok=all(r['status']==r['expect'] or (r['expect']=='FAIL' and r['status']=='FAIL' and
           r['marker'] in ('FIX1_OVERBLOCK','ACE_INTEGRATION_TIMEOUT')) for r in results)
    summary={'schema':'rcci_fix/v2','generated_at_utc':datetime.now(timezone.utc).isoformat(),
             'mode':'before' if a.before else 'after','all_as_expected':ok,'results':results}
    (log_dir/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False))
    if not a.before and not ok:raise SystemExit('fix check failed')
    print('ALL AS EXPECTED' if ok else 'NOT ALL AS EXPECTED')

if __name__=='__main__':
    main()
