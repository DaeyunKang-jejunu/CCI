#!/usr/bin/env python3
"""ACE extension regression; source-separated from historical v9 area results."""
import argparse,subprocess,sys,resource
from pathlib import Path
from results_common import ROOT,new_run,snapshot,sha,save,unchanged,artifact_hashes
p=argparse.ArgumentParser();p.add_argument('--xsim',action='store_true');p.add_argument('--windows-bin',default=r'D:\Vivado\2024.1\bin');a=p.parse_args()
resource.setrlimit(resource.RLIMIT_CORE,(0,0))
run_id,out=new_run('ace');build=Path('/tmp/cci_ace')/run_id;build.mkdir(parents=True)
ace_files=(ROOT/'scripts/ace.f').read_text().splitlines()
sources=snapshot('simulation')
for name in [*ace_files,'scripts/ace.f','scripts/run_ace.py']:sources[name]=sha(ROOT/name)
m=dict(run_id=run_id,status='RUNNING',sources=sources,cases=[],commands=[],config=dict(
    line_bytes=64,cd_bits=128,manager_contexts=4,outstanding_snoops=4),tools={})
pointer=ROOT/'reports/latest_ace.json'
def publish():
    save(out/'manifest.json',m);save(pointer,dict(run_id=run_id,status=m['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
def run(name,cmd,marker=None,negative=False,cwd=ROOT):
    m['commands'].append(dict(name=name,argv=list(map(str,cmd)),cwd=str(cwd)))
    with (out/(name+'.log')).open('w') as f:r=subprocess.run(cmd,cwd=cwd,stdout=f,stderr=subprocess.STDOUT,timeout=300)
    log=(out/(name+'.log')).read_text(errors='replace')
    if (negative and r.returncode==0) or (not negative and r.returncode!=0) or (marker and marker not in log):raise RuntimeError(name+' failed: '+log[-2000:])
    if marker:m['cases'].append(dict(name=name,status='EXPECTED_FAILURE_PASS' if negative else 'PASS',log=name+'.log',marker=marker,returncode=r.returncode))
    print(name+': PASS',flush=True)
def compile(name,top,params=(),filelist='scripts/ace.f'):
    dest=build/name
    run(name+'_build',['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4','--top-module',top,'--Mdir',str(dest),'-f','scripts/rtl.f','-f',str(filelist),'tb/axi_memory_slave.sv','tb/'+top+'.sv',*params])
    return str(dest/('V'+top))
publish()
try:
    m['tools']['verilator']=subprocess.check_output(['verilator','--version'],text=True)
    for name,top,params,marker in [('service','tb_ace_snoop_service',[],'PASS ACE snoop state/data/writeback service'),
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
        ('p_multiline','tb_cci_ace_integration',['-GUSE_RANGE=1','-GLONG_STRESS=1'],'PASS ACE multiline stress mode=1')]:
        binary=compile(name,top,params);run(name,[binary],marker)
    mutations=[
        ('cd_waits_cr','rtl/ace/ace_cache_snoop_endpoint.sv','assign cd_valid=count!=0 && cd_pending_q[head];','assign cd_valid=count!=0 && cd_pending_q[head] && !cr_pending_q[head];','tb_ace_snoop_service','CD_BEFORE_CR'),
        ('early_b','rtl/ace/ace_snoop_controller.sv','B: if(b_valid) begin',"B: if(1'b1) begin",'tb_ace_snoop_service','COMPLETED_BEFORE_ACTUAL_B'),
        ('skip_dirty_wb','rtl/ace/ace_snoop_controller.sv','else if(response[2]) state<=AW;','else if(response[2]) state<=DONE;','tb_ace_snoop_service','DIRTY_COMPLETED_BEFORE_WB'),
        ('skip_drain','rtl/ace/axi_cci_ace_top.sv','.quiescent(service_maintenance_busy ? quiescent : drained)', '.quiescent(quiescent)','tb_cci_ace_integration','ACE_ADMITTED_BEFORE_CORE_B'),
        ('bad_read_mapping','rtl/ace/ace_manager_request_controller.sv','default:mapped_snoop<=ar_snoop;','default:mapped_snoop<=READ_UNIQUE;','tb_ace_manager_transactions','AUTO_READ_SNOOP'),
        ('skip_write_unique_snoop','rtl/ace/ace_manager_request_controller.sv','aw_snoop inside {WRITE_UNIQUE,WRITE_LINE_UNIQUE}) state<=SNOOP_REQ;','aw_snoop inside {WRITE_LINE_UNIQUE}) state<=SNOOP_REQ;','tb_ace_manager_transactions','AUTO_WRITE_SNOOP'),
        ('reject_dvm','rtl/ace/ace_cache_snoop_endpoint.sv','if(dvm(ac_snoop)) begin','if(1\'b0 && dvm(ac_snoop)) begin','tb_ace_manager_transactions','SPECIAL_R'),
        ('bypass_exclusive_monitor','rtl/ace/ace_manager_request_controller.sv','if(exclusive_valid[ar_id] && exclusive_line[ar_id]==ar_addr[63:6])\n                                state<=SNOOP_REQ;','if(1\'b1)\n                                state<=SNOOP_REQ;','tb_ace_manager_transactions','SPECIAL_SNOOP'),
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
        ('manager_error_not_fatal','rtl/ace/axi_cci_ace_top.sv','wire fatal_fault=service_fault || fabric_protocol_error || ACE_PROTOCOL_ERROR;','wire fatal_fault=service_fault || fabric_protocol_error;','tb_cci_ace_integration','FATAL_FAULT_'),
        ('fatal_not_core_block','rtl/ace/axi_cci_ace_top.sv','assign block_admission=service_maintenance_busy || fatal_fault || req_valid || ACE_MANAGER_BUSY || ACE_ARVALID || ACE_AWVALID;','assign block_admission=service_maintenance_busy || req_valid || ACE_MANAGER_BUSY || ACE_ARVALID || ACE_AWVALID;','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_manager_reaccept','rtl/ace/axi_cci_ace_top.sv','.clk(ACLK),.rst_n(ARESETn),.accept_enable(drained && !req_valid && !fatal_fault),','.clk(ACLK),.rst_n(ARESETn),.accept_enable(drained && !req_valid),','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_explicit_req_leak','rtl/ace/axi_cci_ace_top.sv','assign service_req_valid=(auto_req_valid || (req_valid && !fatal_fault)) && !service_owner_full;','assign service_req_valid=(auto_req_valid || req_valid) && !service_owner_full;','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
        ('fatal_req_ready_open','rtl/ace/axi_cci_ace_top.sv','assign req_ready=service_req_ready && !auto_req_valid && !fatal_fault && !service_owner_full;','assign req_ready=service_req_ready && !auto_req_valid && !service_owner_full;','tb_cci_ace_integration','FATAL_FAULT_ADMISSION'),
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
        ('collapse_top_service_owner','rtl/ace/axi_cci_ace_top.sv',
         'service_owner_q[service_owner_tail]<=auto_req_valid;',
         'service_owner_q[service_owner_count==0?service_owner_tail:service_owner_head]<=auto_req_valid;',
         'tb_cci_ace_integration','TOP_SERVICE_OWNER_ASSOCIATION'),
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
         'tb_ace_snoop_service_outstanding','SNOOP_SERVICE_OUTSTANDING_TIMEOUT')]
    for name,original,old,new,top,marker in mutations:
        text=(ROOT/original).read_text();assert text.count(old)==1,(name,'mutation site')
        path=build/(name+'.sv');path.write_text(text.replace(old,new))
        filelist=build/(name+'.f');filelist.write_text('\n'.join(str(path) if f==original else f for f in ace_files)+'\n')
        binary=compile(name,top,filelist=filelist);run(name,[binary],marker,negative=True)
    if a.xsim:
        def win(path):return subprocess.check_output(['wslpath','-w',str(path)],text=True).strip()
        rtl=[l for l in (ROOT/'scripts/rtl.f').read_text().splitlines() if l and not l.startswith('+')]
        files=[*rtl,*ace_files,'tb/axi_memory_slave.sv','tb/tb_ace_snoop_service.sv','tb/tb_ace_snoop_outstanding.sv','tb/tb_ace_snoop_pipeline.sv','tb/tb_ace_snoop_service_outstanding.sv','tb/tb_ace_manager_transactions.sv','tb/tb_ace_manager_outstanding.sv','tb/tb_ace_snoop_fabric.sv','tb/tb_cci_ace_integration.sv']
        wrappers=out/'wrappers.sv';wrappers.write_text('`timescale 1ns/1ps\nmodule ace_b1;tb_cci_ace_integration #(.USE_RANGE(0)) tb();endmodule\nmodule ace_p;tb_cci_ace_integration #(.USE_RANGE(1)) tb();endmodule\nmodule ace_multi;tb_cci_ace_integration #(.USE_RANGE(0),.CACHED_MASTERS(2)) tb();endmodule\nmodule ace_b1_multiline;tb_cci_ace_integration #(.USE_RANGE(0),.LONG_STRESS(1)) tb();endmodule\nmodule ace_p_multiline;tb_cci_ace_integration #(.USE_RANGE(1),.LONG_STRESS(1)) tb();endmodule\n')
        cmd=['/mnt/c/Windows/System32/cmd.exe','/c']
        run('xvlog',[*cmd,a.windows_bin+r'\xvlog.bat','--sv','--include',win(ROOT/'rtl/common'),*[win(ROOT/f) for f in files],win(wrappers)],cwd=out)
        for top,marker in [('tb_ace_snoop_service','PASS ACE snoop state/data/writeback service'),('tb_ace_snoop_outstanding','PASS ACE endpoint multiple outstanding snoops'),('tb_ace_snoop_pipeline','PASS ACE fabric and endpoints multiple outstanding snoops'),('tb_ace_snoop_service_outstanding','PASS ACE snoop service multiple outstanding transactions'),('tb_ace_manager_transactions','PASS ACE initiating transactions'),('tb_ace_manager_outstanding','PASS ACE manager multiple outstanding and cross-ID out-of-order response'),('tb_ace_snoop_fabric','PASS ACE multi-target snoop fabric'),('ace_multi','PASS v9 ACE integration mode=0 cached_masters=2'),('ace_b1','PASS v9 ACE integration mode=0'),('ace_p','PASS v9 ACE integration mode=1'),('ace_b1_multiline','PASS ACE multiline stress mode=0'),('ace_p_multiline','PASS ACE multiline stress mode=1')]:
            run(top+'_xelab',[*cmd,a.windows_bin+r'\xelab.bat',top,'--snapshot',top,'--debug','typical','--timescale','1ns/1ps','--override_timeunit','--override_timeprecision'],cwd=out)
            run(top+'_xsim',[*cmd,a.windows_bin+r'\xsim.bat',top,'--runall'],marker,cwd=out)
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
