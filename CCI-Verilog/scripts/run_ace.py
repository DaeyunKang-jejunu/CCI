#!/usr/bin/env python3
"""ACE extension regression; source-separated from historical v9 area results."""
import argparse,subprocess,sys,resource
from pathlib import Path
from results_common import ROOT,new_run,snapshot,sha,save,unchanged,artifact_hashes
p=argparse.ArgumentParser();p.add_argument('--xsim',action='store_true');p.add_argument('--windows-bin',default=r'D:\Vivado\2024.1\bin');a=p.parse_args()
resource.setrlimit(resource.RLIMIT_CORE,(0,0))
run_id,out=new_run('ace');build=Path('/tmp/cci_ace')/run_id;build.mkdir(parents=True)
ace_files=(ROOT/'scripts/ace.f').read_text().splitlines()
rtl_files=(ROOT/'scripts/rtl.f').read_text().splitlines()
sources=snapshot('simulation')
for name in [*ace_files,'scripts/ace.f','scripts/run_ace.py']:sources[name]=sha(ROOT/name)
m=dict(run_id=run_id,status='RUNNING',sources=sources,cases=[],commands=[],config=dict(
    line_bytes=64,cd_bits=128,manager_contexts=4,outstanding_snoops=4),tools={})
pointer=ROOT/'reports/latest_ace.json'
def publish():
    save(out/'manifest.json',m);save(pointer,dict(run_id=run_id,status=m['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
def run(name,cmd,marker=None,negative=False,cwd=ROOT):
    m['commands'].append(dict(name=name,argv=list(map(str,cmd)),cwd=str(cwd)))
    with (out/(name+'.log')).open('w') as f:r=subprocess.run(cmd,cwd=cwd,stdout=f,stderr=subprocess.STDOUT,timeout=900)
    log=(out/(name+'.log')).read_text(errors='replace')
    if (negative and r.returncode==0) or (not negative and r.returncode!=0) or (marker and marker not in log):raise RuntimeError(name+' failed: '+log[-2000:])
    if marker:m['cases'].append(dict(name=name,status='EXPECTED_FAILURE_PASS' if negative else 'PASS',log=name+'.log',marker=marker,returncode=r.returncode))
    print(name+': PASS',flush=True)
def compile(name,top,params=(),filelist='scripts/ace.f',rtl_filelist='scripts/rtl.f'):
    dest=build/name
    run(name+'_build',['verilator','--binary','--timing','--assert','-Wno-fatal','--output-split','0','-j','4','--top-module',top,'--Mdir',str(dest),'-f',str(rtl_filelist),'-f',str(filelist),'tb/axi_memory_slave.sv','tb/'+top+'.sv',*params])
    return str(dest/('V'+top))
publish()
try:
    m['tools']['verilator']=subprocess.check_output(['verilator','--version'],text=True)
    for name,top,params,marker in [('coherent_read_ingress','tb_coh_read_ingress',[],'PASS coherent read ingress outstanding/tracker/hazard/RLAST association'),
        ('rcci_read_range_w4','tb_coh_read_ingress_range',[],'PASS stage5 ReadRange 1/8/64 mixed hit-miss W=4 multiple ranges'),
        ('rcci_write_range_w4','tb_coh_write_range_adapter',['-GWINDOW=4'],'PASS stage6 write range adapter W=4 lines=1/8/64 split-WLAST merged-B'),
        ('service','tb_ace_snoop_service',[],'PASS ACE snoop state/data/writeback service'),
        ('endpoint_outstanding','tb_ace_snoop_outstanding',[],'PASS ACE endpoint multiple outstanding snoops'),
        ('snoop_pipeline','tb_ace_snoop_pipeline',[],'PASS ACE fabric and endpoints multiple outstanding snoops'),
        ('service_outstanding','tb_ace_snoop_service_outstanding',[],'PASS ACE snoop service multiple outstanding transactions'),
        ('manager_transactions','tb_ace_manager_transactions',[],'PASS ACE initiating transactions'),
        ('manager_outstanding','tb_ace_manager_outstanding',[],'PASS ACE manager multiple outstanding and cross-ID out-of-order response'),
        ('multi_snoop_fabric','tb_ace_snoop_fabric',[],'PASS ACE multi-target snoop fabric'),
        ('multi_top_integration','tb_cci_ace_integration',['-GUSE_RANGE=0','-GCACHED_MASTERS=2'],'PASS v9 ACE integration mode=0 cached_masters=2'),
        ('b1_integration','tb_cci_ace_integration',['-GUSE_RANGE=0'],'PASS v9 ACE integration mode=0'),
        ('p_integration','tb_cci_ace_integration',['-GUSE_RANGE=1'],'PASS v9 ACE integration mode=1'),
        ('b1_multiline','tb_cci_ace_integration',['-GUSE_RANGE=0','-GLONG_STRESS=1'],'PASS ACE multiline stress mode=0'),
        ('p_multiline','tb_cci_ace_integration',['-GUSE_RANGE=1','-GLONG_STRESS=1'],'PASS ACE multiline stress mode=1'),
        # REVIEW 10: shared exclusive monitor, stable arbitration, AC order, CR/CD association, DVM isolation.
        ('manager_review10','tb_ace_manager_review10',[],'PASS ACE manager review10'),
        ('snoop_bank_review10','tb_ace_snoop_bank_review10',[],'PASS ACE snoop bank review10'),
        ('fabric_review10','tb_ace_fabric_review10',[],'PASS ACE fabric review10'),
        ('b1_wb_contention','tb_cci_ace_integration',['-GUSE_RANGE=0','-GWB_CONTENTION=1'],'PASS ACE WB contention mode=0'),
        ('p_wb_contention','tb_cci_ace_integration',['-GUSE_RANGE=1','-GWB_CONTENTION=1'],'PASS ACE WB contention mode=1')]:
        binary=compile(name,top,params);run(name,[binary],marker)
    mutations=[
        ('bypass_coherent_read_snoop','rtl/common/coh_read_ingress.sv',
         'trackers[send_tracker].snoop_done&&!trackers[send_tracker].hit&&!trackers[send_tracker].mem_issued',
         "1'b1&&!trackers[send_tracker].hit&&!trackers[send_tracker].mem_issued",'tb_coh_read_ingress','READ_SNOOP_OOO_BYPASS'),
        ('drop_coherent_read_hazard','rtl/common/coh_read_ingress.sv',
         'if(m0_ar_probe_valid&&in_span(entries[e].addr,m0_ar_probe_addr,m0_ar_probe_last))ref_m0_ar=1;',
         'if(1\'b0&&m0_ar_probe_valid&&in_span(entries[e].addr,m0_ar_probe_addr,m0_ar_probe_last))ref_m0_ar=1;',
         'tb_coh_read_ingress','READ_HAZARD_CAM'),
        ('cd_waits_cr','rtl/ace/ace_cache_snoop_endpoint.sv','assign cd_valid=count!=0 && cd_pending_q[head];','assign cd_valid=count!=0 && cd_pending_q[head] && !cr_pending_q[head];','tb_ace_snoop_service','CD_BEFORE_CR'),
        ('early_b','rtl/ace/ace_snoop_controller.sv','B: if(b_valid) begin',"B: if(1'b1) begin",'tb_ace_snoop_service','COMPLETED_BEFORE_ACTUAL_B'),
        ('skip_dirty_wb','rtl/ace/ace_snoop_controller.sv','else if(response[2]) state<=AW;','else if(response[2]) state<=DONE;','tb_ace_snoop_service','DIRTY_COMPLETED_BEFORE_WB'),
        ('skip_drain','rtl/ace/axi_cci_ace_top.sv',
         'wire drained=quiescent && writes_pending==0 && reads_pending==0 &&\n        ingress_count==0 && read_ingress_count==0;',
         'wire drained=quiescent;',
         'tb_cci_ace_integration','ACE_ADMITTED_BEFORE_CORE_B'),
        ('bad_read_mapping','rtl/ace/ace_manager_request_controller.sv','default:mapped_snoop<=ar_snoop;','default:mapped_snoop<=READ_UNIQUE;','tb_ace_manager_transactions','AUTO_READ_SNOOP'),
        ('skip_write_unique_snoop','rtl/ace/ace_manager_request_controller.sv','aw_snoop inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE}) state<=SNOOP_REQ;','aw_snoop inside {WRITE_LINE_UNIQUE}) state<=SNOOP_REQ;','tb_ace_manager_transactions','AUTO_WRITE_SNOOP'),
        ('reject_dvm','rtl/ace/ace_cache_snoop_endpoint.sv','if(dvm(ac_snoop)) begin','if(1\'b0 && dvm(ac_snoop)) begin','tb_ace_manager_transactions','SPECIAL_R'),
        ('bypass_exclusive_monitor','rtl/ace/ace_manager_request_controller.sv','if(mon_valid[ar_id] && mon_line[ar_id]==ar_addr[63:6])\n                                state<=SNOOP_REQ;','if(1\'b1)\n                                state<=SNOOP_REQ;','tb_ace_manager_transactions','SPECIAL_SNOOP'),
        ('drop_barrier_pair_ready','rtl/ace/ace_manager_request_controller.sv','(state==BARRIER_PAIR && !barrier_have_aw && aw_bar[0]);','(1\'b0 && state==BARRIER_PAIR && !barrier_have_aw && aw_bar[0]);','tb_ace_manager_transactions','BARRIER_PAIR_MISSING'),
        ('reject_barrier_ignore','rtl/ace/ace_manager_request_controller.sv','return !bar[0];','return bar==0;','tb_ace_manager_transactions','AXBARRIER_IGNORE_NORMAL'),
        ('disable_snoop_filter','rtl/ace/ace_snoop_fabric.sv','else if(filter_enable)\n            lookup_mask=', 'else if(1\'b0 && filter_enable)\n            lookup_mask=','tb_ace_snoop_fabric','SNOOP_FILTER_TARGETING'),
        ('ignore_fabric_conflict','rtl/ace/ace_snoop_fabric.sv','else if(head_data!=line_data_q[head][t]) begin\n                        head_aggregate[1]=1;head_internal_error=1;','else if(1\'b0 && head_data!=line_data_q[head][t]) begin\n                        head_aggregate[1]=1;head_internal_error=1;','tb_ace_snoop_fabric','FABRIC_CR'),
        ('drop_filter_collision_fallback','rtl/ace/ace_snoop_fabric.sv','sf_overflow[update_index]<=1;','sf_overflow[update_index]<=0;','tb_ace_snoop_fabric','FABRIC_CR'),
        ('allow_same_target_filter_replace','rtl/ace/ace_snoop_fabric.sv',"sf_sharers[update_index]!='0","(sf_sharers[update_index] & ~(TARGETS'(1)<<sf_update_target))!='0",'tb_ace_snoop_fabric','FABRIC_CR'),
        # 2026-10-06 fixes: each mutation restores the pre-fix behavior.
        ('count_any_aw','rtl/ace/axi_cci_ace_top.sv','wire [1:0] aw_accepts=2\'(M0_AWVALID && M0_AWREADY)+2\'(M1_AWVALID && M1_AWREADY);','wire [1:0] aw_accepts=2\'((M0_AWVALID && M0_AWREADY)||(M1_AWVALID && M1_AWREADY));','tb_cci_ace_integration','PENDING_SAME_CYCLE_AW'),
        ('drop_early_barrier_rack','rtl/ace/ace_manager_request_controller.sv','if(r_ack && barrier_r_done) barrier_r_ack<=1;','if(1\'b0 && r_ack && barrier_r_done) barrier_r_ack<=1;','tb_ace_manager_transactions','BARRIER_ONTIME_ACK'),
        ('skip_bar2_error_w_drain','rtl/ace/ace_manager_request_controller.sv','state<=(aw_snoop==EVICT)?LOCAL_B:DISCARD_W;','state<=(aw_snoop==EVICT || aw_bar!=0)?LOCAL_B:DISCARD_W;','tb_ace_manager_transactions','AXBAR2_ERROR_WRITE_DRAIN'),
        ('short_bar2_error_read','rtl/ace/ace_manager_request_controller.sv','state<=dataless_read(ar_snoop)?CLEAN_R:ERROR_R;','state<=(ar_bar==0 && !dataless_read(ar_snoop))?ERROR_R:CLEAN_R;','tb_ace_manager_transactions','AXBAR2_ERROR_READ_BEATS'),
        ('mask_dvm_payload','rtl/ace/ace_manager_request_controller.sv','assign snoop_req_addr=dvm(mapped_snoop) ? txn_addr : {txn_addr[63:6],6\'b0};','assign snoop_req_addr={txn_addr[63:6],6\'b0};','tb_ace_manager_transactions','DVM_PAYLOAD'),
        ('accept_two_part_dvm','rtl/ace/ace_manager_request_controller.sv','(snoop!=DVM_COMPLETE || addr==0) && !addr[0] && len==0','(snoop!=DVM_COMPLETE || addr==0) && len==0','tb_ace_manager_transactions','SPECIAL_R'),
        # 2026-10-06 policy (REVIEW 30~32): each mutation restores the old policy.
        ('manager_error_not_fatal','rtl/ace/axi_cci_ace_top.sv',
         'wire fatal_fault=service_fault || fabric_protocol_error || ACE_PROTOCOL_ERROR || read_config_fault ||\n        read_service_fault || write_service_fault || write_range_config_fault || write_range_data_fault ||\n        admission_fault ||\n        (|adapter_fault) || tagged_owner_fault;',
         'wire fatal_fault=service_fault || fabric_protocol_error || read_config_fault ||\n        read_service_fault || write_service_fault || write_range_config_fault || write_range_data_fault ||\n        admission_fault ||\n        (|adapter_fault) || tagged_owner_fault;',
         'tb_cci_ace_integration','FATAL_FAULT_'),
        ('fatal_not_core_block','rtl/ace/axi_cci_ace_top.sv','assign block_admission=service_maintenance_busy || fatal_fault || explicit_drain;','assign block_admission=service_maintenance_busy || explicit_drain;','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_manager_reaccept','rtl/ace/axi_cci_ace_top.sv',
         'wire ace_base_admit=!req_valid&&!fatal_fault&&!service_maintenance_busy&&!explicit_drain&&',
         'wire ace_base_admit=!req_valid&&!service_maintenance_busy&&!explicit_drain&&',
         'tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_explicit_req_leak','rtl/ace/axi_cci_ace_top.sv',
         'assign explicit_candidate=req_valid && !explicit_seen && drained && !fatal_fault;',
         'assign explicit_candidate=req_valid && !explicit_seen && drained;',
         'tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_req_ready_open','rtl/ace/axi_cci_ace_top.sv','assign req_ready=(explicit_seen && req_valid) ||\n        (service_req_ready && service_req_valid && service_sel==SVC_EXPLICIT);','assign req_ready=fatal_fault || (explicit_seen && req_valid) ||\n        (service_req_ready && service_req_valid && service_sel==SVC_EXPLICIT);','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fixed_ar_priority','rtl/ace/ace_manager_request_controller.sv',"ar_priority<=1'b0; // next tie goes to AW","ar_priority<=1'b1; // next tie goes to AW",'tb_ace_manager_transactions','AR_AW_ROUND_ROBIN'),
        ('accept_ac_during_sf_update','rtl/ace/ace_snoop_fabric.sv',"ac_ready=int'(count)<OUTSTANDING&&!sf_update_valid;","ac_ready=int'(count)<OUTSTANDING;",'tb_ace_snoop_fabric','SF_UPDATE_AC_ORDER'),
        ('collapse_dual_reservation_kill','rtl/ace/axi_cci_ace_top.sv','.reservation_kill_valid({M1_AWVALID && M1_AWREADY,M0_AWVALID && M0_AWREADY}),','.reservation_kill_valid({1\'b0,M0_AWVALID && M0_AWREADY}),','tb_cci_ace_integration','DUAL_RESERVATION_KILL'),
        # REVIEW 46: association/order mutations for the new context FIFOs.
        ('allow_same_id_outstanding','rtl/ace/ace_manager_request_bank.sv',
         'wire [CW-1:0] ar_target=(ar_bar[0] || global_active)?global_slot:ar_slot;',
         "wire [CW-1:0] ar_target=(ar_bar[0] || global_active)?global_slot:(c_busy[ar_slot]?ar_slot+CW'(2):ar_slot);",
         'tb_ace_manager_outstanding','ACE_SAME_ID_REACCEPT'),
        ('break_wq_push_pop_count','rtl/ace/ace_manager_request_bank.sv',
         "case ({aw_fire && aw_data_bearing,\n                   w_fire && (wq_beat==wq_len[wq_head])})\n                2'b10: wq_count<=wq_count+1'b1;\n                2'b01: wq_count<=wq_count-1'b1;\n                default: wq_count<=wq_count;\n            endcase",
         "if(aw_fire && aw_data_bearing) wq_count<=wq_count+1'b1;\n            if(w_fire && (wq_beat==wq_len[wq_head])) wq_count<=wq_count-1'b1;",
         'tb_ace_manager_outstanding','ACE_MANAGER_OUTSTANDING_TIMEOUT'),
        ('collapse_top_service_owner','rtl/ace/ace_snoop_controller_tag_bank.sv',
         'tag_live[free_pick]<=1;tag_owner[free_pick]<=req_owner;',
         "tag_live[free_pick]<=1;tag_owner[free_pick]<='0;",
         'tb_ace_tagged_service','TAG_OWNER_QUEUE_PROGRESS'),
        ('serialize_snoop_endpoint','rtl/ace/ace_cache_snoop_endpoint.sv',
         "assign ac_ready=int'(count)<OUTSTANDING && !local_rsp_valid;",
         "assign ac_ready=count==0 && !local_rsp_valid;",
         'tb_ace_snoop_outstanding','SNOOP_ENDPOINT_OUTSTANDING_TIMEOUT'),
        ('serialize_snoop_fabric','rtl/ace/ace_snoop_fabric.sv',
         "ac_ready=int'(count)<OUTSTANDING&&!sf_update_valid;",
         "ac_ready=count==0&&!sf_update_valid;",
         'tb_ace_snoop_pipeline','SNOOP_PIPELINE_TIMEOUT'),
        ('collapse_snoop_owner','rtl/ace/ace_snoop_controller_bank.sv',
         'ac_order[ac_tail]<=ac_pick;','ac_order[ac_tail]<=0;',
         'tb_ace_snoop_service_outstanding','SNOOP_SERVICE_OUTSTANDING_TIMEOUT'),
        # REVIEW 10: each mutation restores one pre-fix behavior.
        ('context_local_monitor','rtl/ace/ace_manager_request_bank.sv',".EXTERNAL_MONITOR(1'b1)",".EXTERNAL_MONITOR(1'b0)",
         'tb_ace_manager_review10','EXCL_CROSS_SLOT'),
        ('drop_cross_context_commit_clear','rtl/ace/ace_manager_request_bank.sv',
         "if(c_ex_commit_valid[c] && i!=int'(c_ex_commit_id[c]) && ex_line[i]==c_ex_commit_line[c])",
         "if(1'b0 && c_ex_commit_valid[c] && i!=int'(c_ex_commit_id[c]) && ex_line[i]==c_ex_commit_line[c])",
         'tb_ace_manager_review10','EXCL_CROSS_SLOT'),
        ('drop_exclusive_store_serialization','rtl/ace/ace_manager_request_bank.sv',
         '!(ar_ex_store && |c_ex_store_busy);',"1'b1;",'tb_ace_manager_review10','STORE_OVERLAP'),
        ('drop_commit_recheck','rtl/ace/ace_manager_request_controller.sv',
         'if(exclusive_store) exclusive_pass<=exclusive_pass && ex_still_valid;','if(exclusive_store) exclusive_pass<=exclusive_pass;',
         'tb_ace_manager_review10','EXCL_COMMIT_RECHECK'),
        ('drop_cross_context_write_clear','rtl/ace/ace_manager_request_bank.sv',
         'if(c_ex_wclear_valid[c] && ex_line[i]==c_ex_wclear_line[c]) ex_valid[i]<=0;','',
         'tb_ace_manager_review10','EXCL_WRITE_POLICY'),
        ('drop_mem_ar_hold','rtl/ace/ace_manager_request_bank.sv',
         'if(mar_hold_valid) begin mar_found=1;mar_pick=mar_hold;end','','tb_ace_manager_review10','MEM_AR_PAYLOAD_STABILITY'),
        ('drop_snoop_req_hold','rtl/ace/ace_manager_request_bank.sv',
         'if(snoop_hold_valid) begin snoop_found=1;snoop_pick=snoop_hold;end','','tb_ace_manager_review10','SNOOP_REQ_PAYLOAD_STABILITY'),
        ('dvm_global_slot_zero','rtl/ace/ace_manager_request_bank.sv',
         'global_slot<=ar_fire_global?ar_target:aw_target;','global_slot<=0;','tb_ace_manager_review10','DVM_GLOBAL_ISOLATION'),
        ('lowest_index_ac','rtl/ace/ace_snoop_controller_bank.sv',
         'if(unissued!=0) begin ac_pick=req_order[iss_head];ac_found=c_ac_valid[ac_pick];end',
         "for(int i=OUTSTANDING-1;i>=0;i--) if(c_ac_valid[i]) begin ac_found=1;ac_pick=QW'(i);end",
         'tb_ace_snoop_bank_review10','SNOOP_AC_'),
        ('drop_snoop_wb_aw_hold','rtl/ace/ace_snoop_controller_bank.sv',
         'if(aw_hold_valid) begin aw_found=1;aw_pick=aw_hold;end','','tb_ace_snoop_bank_review10','SNOOP_WB_AW_PAYLOAD_STABILITY'),
        ('fabric_cd_to_unresolved_context','rtl/ace/ace_snoop_fabric.sv',
         "seen=cr_seen_q[qi][t]||(m_cr_valid[t]&&cr_pick_valid[t]&&cr_pick[t]==QW'(qi));\n                    data=cr_seen_q[qi][t]?responses_q[qi][t][0]:m_cr_resp[t][0];\n                    if(!seen) stop=1;",
         "seen=cr_seen_q[qi][t];\n                    data=responses_q[qi][t][0];\n                    if(!seen) begin cdf=1;cd_pick_valid[t]=1;cd_pick[t]=QW'(qi);end",
         'tb_ace_fabric_review10','FABRIC_CD_ASSOCIATION'),
        ('drop_top_wb_aw_hold','rtl/ace/axi_cci_ace_top.sv',
         'wire wb_sel_manager=wb_aw_hold_valid ? wb_aw_hold_manager : !svc_aw_valid;','wire wb_sel_manager=!svc_aw_valid;',
         'tb_cci_ace_integration','WB_AW_PAYLOAD_STABILITY',['-GUSE_RANGE=0','-GWB_CONTENTION=1'])]
    for name,original,old,new,top,marker,*params in mutations:
        text=(ROOT/original).read_text();assert text.count(old)==1,(name,'mutation site')
        path=build/(name+'.sv');path.write_text(text.replace(old,new))
        in_ace=original in ace_files
        in_rtl=original in rtl_files
        assert in_ace ^ in_rtl,(name,'source must occur in exactly one file list')
        filelist=build/(name+'.ace.f')
        rtl_filelist=build/(name+'.rtl.f')
        filelist.write_text('\n'.join(str(path) if f==original else f for f in ace_files)+'\n')
        rtl_filelist.write_text('\n'.join(str(path) if f==original else f for f in rtl_files)+'\n')
        binary=compile(name,top,params[0] if params else (),filelist=filelist,
                       rtl_filelist=rtl_filelist)
        run(name,[binary],marker,negative=True)
    if a.xsim:
        def win(path):return subprocess.check_output(['wslpath','-w',str(path)],text=True).strip()
        rtl=[l for l in (ROOT/'scripts/rtl.f').read_text().splitlines() if l and not l.startswith('+')]
        files=[*rtl,*ace_files,'tb/axi_memory_slave.sv','tb/tb_coh_read_ingress.sv','tb/tb_coh_read_ingress_range.sv','tb/tb_coh_write_range_adapter.sv','tb/tb_ace_snoop_service.sv','tb/tb_ace_snoop_outstanding.sv','tb/tb_ace_snoop_pipeline.sv','tb/tb_ace_snoop_service_outstanding.sv','tb/tb_ace_manager_transactions.sv','tb/tb_ace_manager_outstanding.sv','tb/tb_ace_snoop_fabric.sv','tb/tb_ace_manager_review10.sv','tb/tb_ace_snoop_bank_review10.sv','tb/tb_ace_fabric_review10.sv','tb/tb_cci_ace_integration.sv']
        wrappers=out/'wrappers.sv';wrappers.write_text('`timescale 1ns/1ps\nmodule ace_b1;tb_cci_ace_integration #(.USE_RANGE(0)) tb();endmodule\nmodule ace_p;tb_cci_ace_integration #(.USE_RANGE(1)) tb();endmodule\nmodule ace_multi;tb_cci_ace_integration #(.USE_RANGE(0),.CACHED_MASTERS(2)) tb();endmodule\nmodule ace_b1_multiline;tb_cci_ace_integration #(.USE_RANGE(0),.LONG_STRESS(1)) tb();endmodule\nmodule ace_p_multiline;tb_cci_ace_integration #(.USE_RANGE(1),.LONG_STRESS(1)) tb();endmodule\nmodule ace_b1_wb;tb_cci_ace_integration #(.USE_RANGE(0),.WB_CONTENTION(1)) tb();endmodule\nmodule ace_p_wb;tb_cci_ace_integration #(.USE_RANGE(1),.WB_CONTENTION(1)) tb();endmodule\n')
        cmd=['/mnt/c/Windows/System32/cmd.exe','/c']
        run('xvlog',[*cmd,a.windows_bin+r'\xvlog.bat','--sv','--include',win(ROOT/'rtl/common'),*[win(ROOT/f) for f in files],win(wrappers)],cwd=out)
        for top,marker in [('tb_coh_read_ingress','PASS coherent read ingress outstanding/tracker/hazard/RLAST association'),('tb_coh_read_ingress_range','PASS stage5 ReadRange 1/8/64 mixed hit-miss W=4 multiple ranges'),('tb_coh_write_range_adapter','PASS stage6 write range adapter W=2 lines=1/8/64 split-WLAST merged-B'),('tb_ace_snoop_service','PASS ACE snoop state/data/writeback service'),('tb_ace_snoop_outstanding','PASS ACE endpoint multiple outstanding snoops'),('tb_ace_snoop_pipeline','PASS ACE fabric and endpoints multiple outstanding snoops'),('tb_ace_snoop_service_outstanding','PASS ACE snoop service multiple outstanding transactions'),('tb_ace_manager_transactions','PASS ACE initiating transactions'),('tb_ace_manager_outstanding','PASS ACE manager multiple outstanding and cross-ID out-of-order response'),('tb_ace_snoop_fabric','PASS ACE multi-target snoop fabric'),('ace_multi','PASS v9 ACE integration mode=0 cached_masters=2'),('ace_b1','PASS v9 ACE integration mode=0'),('ace_p','PASS v9 ACE integration mode=1'),('ace_b1_multiline','PASS ACE multiline stress mode=0'),('ace_p_multiline','PASS ACE multiline stress mode=1'),('tb_ace_manager_review10','PASS ACE manager review10'),('tb_ace_snoop_bank_review10','PASS ACE snoop bank review10'),('tb_ace_fabric_review10','PASS ACE fabric review10'),('ace_b1_wb','PASS ACE WB contention mode=0'),('ace_p_wb','PASS ACE WB contention mode=1')]:
            run(top+'_xelab',[*cmd,a.windows_bin+r'\xelab.bat',top,'--snapshot',top,'--debug','typical','--timescale','1ns/1ps','--override_timeunit','--override_timeprecision'],cwd=out)
            run(top+'_xsim',[*cmd,a.windows_bin+r'\xsim.bat',top,'--runall'],marker,cwd=out)
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
