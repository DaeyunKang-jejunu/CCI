#!/usr/bin/env python3
"""Build representative ACE/CCI integration scenarios with GTKWave FST output."""
import argparse
import shlex
import shutil
import subprocess
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WAVE_ROOT=ROOT/'waves'/'ace_cci'
BUILD_ROOT=Path('/tmp/cci_ace_waves')

CASES={
    'ace-p': (['-GUSE_RANGE=1'], 'PASS v9 ACE integration mode=1'),
    'ace-b1': (['-GUSE_RANGE=0'], 'PASS v9 ACE integration mode=0'),
    'ace-multi': (['-GUSE_RANGE=0','-GCACHED_MASTERS=2'],
                  'PASS v9 ACE integration mode=0 cached_masters=2'),
    'ace-opcodes': ([], 'PASS ACE opcode waveform scenarios RS/RNS/WLU'),
}

GROUPS=[
    ('clock / status', ['clk','rst_n','maintenance_busy','fault','ACE_MANAGER_BUSY',
                        'ACE_PROTOCOL_ERROR']),
    ('M0 AXI', ['M0_AWVALID','M0_AWREADY','M0_AWID[3:0]','M0_AWADDR[63:0]',
                'M0_WVALID','M0_WREADY','M0_WLAST','M0_BVALID','M0_BREADY',
                'M0_BRESP[1:0]','M0_ARVALID','M0_ARREADY','M0_ARID[3:0]',
                'M0_ARADDR[63:0]','M0_RVALID','M0_RREADY','M0_RLAST']),
    ('M1 AXI / CCI', ['M1_AWVALID','M1_AWREADY','M1_AWID[3:0]','M1_AWADDR[63:0]',
                      'M1_AWSNOOP[2:0]','M1_AWDOMAIN[1:0]','M1_AWSIZE[2:0]',
                      'M1_AWBURST[1:0]','M1_AWCACHE[3:0]','M1_AWLOCK','M1_AWBAR[1:0]',
                      'M1_WVALID','M1_WREADY','M1_WSTRB[15:0]','M1_WLAST','M1_BVALID','M1_BREADY',
                      'M1_ARVALID','M1_ARREADY','M1_ARSNOOP[3:0]','M1_ARDOMAIN[1:0]',
                      'M1_ARSIZE[2:0]','M1_ARBURST[1:0]','M1_ARCACHE[3:0]',
                      'M1_ARLOCK','M1_ARBAR[1:0]','M1_RVALID','M1_RREADY',
                      'setup_valid','setup_ready','range_active','write_release',
                      'ingress_count[4:0]','tracker_count[2:0]','tracker_full_stall',
                      'admission_freeze','wr_issued_mask[63:0]','done_mask[63:0]']),
    ('memory S port', ['S_AWVALID','S_AWREADY','S_AWID[4:0]','S_AWADDR[63:0]',
                       'S_WVALID','S_WREADY','S_WSTRB[15:0]','S_WLAST','S_BVALID','S_BREADY',
                       'S_ARVALID','S_ARREADY','S_ARID[4:0]','S_ARADDR[63:0]',
                       'S_RVALID','S_RREADY','S_RLAST']),
    ('ACE manager', ['ACE_ARVALID','ACE_ARREADY','ACE_ARID[3:0]','ACE_ARADDR[63:0]',
                     'ACE_ARSNOOP[3:0]','ACE_ARDOMAIN[1:0]','ACE_RVALID','ACE_RREADY',
                     'ACE_RID[3:0]','ACE_RLAST','ACE_RRESP[3:0]','ACE_RACK',
                     'ACE_AWVALID','ACE_AWREADY','ACE_AWID[3:0]','ACE_AWADDR[63:0]',
                     'ACE_AWSNOOP[2:0]','ACE_AWDOMAIN[1:0]','ACE_WVALID','ACE_WREADY',
                     'ACE_WLAST','ACE_BVALID','ACE_BREADY','ACE_BID[3:0]','ACE_WACK']),
    ('snoop AC/CR/CD', ['ac_valid','ac_ready','ac_addr[63:0]','ac_snoop[3:0]',
                        'cr_valid','cr_ready','cr_resp[4:0]','cd_valid','cd_ready',
                        'cd_last','AC1VALID','AC1READY','AC1ADDR[63:0]',
                        'AC1SNOOP[3:0]','CR1VALID','CR1READY','CR1RESP[4:0]',
                        'CD1VALID','CD1READY','CD1LAST']),
    ('writeback / manager memory', ['aw_valid','aw_ready','aw_addr[63:0]',
                                    'w_valid','w_ready','w_last','b_valid','b_ready',
                                    'wb_arvalid','wb_arready','wb_araddr[63:0]',
                                    'wb_rvalid','wb_rready','wb_rlast']),
]

OPCODE_GROUPS=[
    ('clock / status', ['clk','rst_n','busy','service_busy','service_idle','service_fault',
                        'manager_error','observed_count[31:0]','cr_count[31:0]',
                        'cd_beat_count[31:0]','service_wb_count[31:0]',
                        'manager_write_count[31:0]']),
    ('ACE manager request', ['ar_valid','ar_ready','ar_id[3:0]','ar_addr[63:0]',
                             'ar_snoop[3:0]','ar_domain[1:0]','r_valid','r_ready',
                             'r_id[3:0]','r_last','r_resp[3:0]','r_ack',
                             'aw_valid','aw_ready','aw_id[3:0]','aw_addr[63:0]',
                             'aw_snoop[2:0]','aw_domain[1:0]','w_valid','w_ready',
                             'w_last','b_valid','b_ready','b_id[3:0]','b_resp[1:0]','w_ack']),
    ('automatic snoop', ['snoop_req_valid','service_req_ready','snoop_req_addr[63:0]',
                         'snoop_req_snoop[3:0]','service_rsp_valid','service_rsp_ready',
                         'snoop_rsp_resp[4:0]']),
    ('AC / CR / CD', ['service_ac_valid','service_ac_ready','service_ac_addr[63:0]',
                      'service_ac_snoop[3:0]','service_cr_valid','service_cr_ready',
                      'service_cr_resp[4:0]','service_cd_valid','service_cd_ready',
                      'service_cd_data[127:0]','service_cd_last']),
    ('dirty writeback', ['svc_aw_valid','svc_aw_addr[63:0]',
                         'svc_w_valid','svc_w_data[127:0]','svc_w_last',
                         'svc_b_valid','svc_b_ready']),
    ('WLU memory write', ['mem_aw_valid','mem_aw_ready','mem_aw_addr[63:0]',
                          'mem_w_valid','mem_w_last',
                          'mem_b_valid','mem_b_ready']),
    ('cache local state', ['local_valid','local_ready','local_op[1:0]','local_addr[63:0]',
                           'local_state[2:0]','local_rsp_valid','local_rsp_ready',
                           'local_hit','local_rstate[2:0]']),
]

def run_checked(cmd,log_path,cwd=ROOT):
    with log_path.open('w') as log:
        result=subprocess.run(cmd,cwd=cwd,stdout=log,stderr=subprocess.STDOUT)
    if result.returncode:
        tail=log_path.read_text(errors='replace')[-4000:]
        raise RuntimeError(f"command failed ({result.returncode}): {shlex.join(cmd)}\n{tail}")

def write_gtkw(case,fst):
    top='ace_wave_top.tb'
    gtkw=fst.with_suffix('.gtkw')
    lines=['[*] GTKWave save file for ACE/CCI integration',
           f'[dumpfile] "{fst}"','[timestart] 0','[size] 1680 1000','[pos] -1 -1']
    for group,signals in (OPCODE_GROUPS if case=='ace-opcodes' else GROUPS):
        lines.extend(['@200',f'-{group}'])
        lines.extend(f'@28\n{top}.{signal}' for signal in signals)
    lines.extend(['[pattern_trace] 1','[pattern_trace] 0'])
    gtkw.write_text('\n'.join(lines)+'\n')
    return gtkw

def build_case(case):
    params,marker=CASES[case]
    out=WAVE_ROOT/case
    build=BUILD_ROOT/case
    if build.exists(): shutil.rmtree(build)
    out.mkdir(parents=True,exist_ok=True)
    build.mkdir(parents=True)
    fst=(out/(case+'.fst')).resolve()
    fst.unlink(missing_ok=True)
    compile_log=out/'compile.log'
    run_log=out/'run.log'
    wrapper=build/'ace_wave_top.sv'
    if case=='ace-opcodes':
        wrapper_body='''`timescale 1ns/1ps
module ace_wave_top;
    string wave_path;
    tb_ace_opcode_wave tb();
    initial begin
        if(!$value$plusargs("wave=%s",wave_path)) wave_path="ace_cci.fst";
        $display("WAVE ACE/CCI FST %s",wave_path);
        $dumpfile(wave_path);
        $dumpvars(0,ace_wave_top);
    end
endmodule
'''
        extra_sources=['wave_tb/tb_ace_opcode_wave.sv']
    else:
        wrapper_body='''`timescale 1ns/1ps
module ace_wave_top #(
    parameter bit USE_RANGE=1,
    parameter int CACHED_MASTERS=1
);
    string wave_path;
    tb_cci_ace_integration #(
        .USE_RANGE(USE_RANGE),.CACHED_MASTERS(CACHED_MASTERS)
    ) tb();
    initial begin
        if(!$value$plusargs("wave=%s",wave_path)) wave_path="ace_cci.fst";
        $display("WAVE ACE/CCI FST %s",wave_path);
        $dumpfile(wave_path);
        $dumpvars(0,ace_wave_top);
    end
endmodule
'''
        extra_sources=['tb/tb_cci_ace_integration.sv']
    wrapper.write_text(wrapper_body)
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--trace-fst','--trace-structs',
         '--top-module','ace_wave_top','--Mdir',str(build),
         '-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
         *extra_sources,str(wrapper),*params]
    run_checked(cmd,compile_log)
    run_checked([str(build/'Vace_wave_top'),f'+wave={fst}'],run_log)
    text=run_log.read_text(errors='replace')
    if marker not in text: raise RuntimeError(f'{case}: PASS marker absent')
    if not fst.is_file() or fst.stat().st_size<1024:
        raise RuntimeError(f'{case}: missing or empty FST: {fst}')
    gtkw=write_gtkw(case,fst)
    print(f'{case}: PASS ({fst.stat().st_size} bytes)')
    print(f'  gtkwave {shlex.quote(str(fst))} {shlex.quote(str(gtkw))}')
    return fst,gtkw

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--case',choices=[*CASES,'all'],default='ace-p')
    parser.add_argument('--open',action='store_true',help='open the last generated waveform in GTKWave')
    args=parser.parse_args()
    selected=list(CASES) if args.case=='all' else [args.case]
    last=None
    for case in selected: last=build_case(case)
    if args.open:
        if not shutil.which('gtkwave'): raise RuntimeError('gtkwave not found in PATH')
        subprocess.Popen(['gtkwave',str(last[0]),str(last[1])],cwd=ROOT)

if __name__=='__main__': main()
