#!/usr/bin/env python3
"""Build representative ACE/CCI integration scenarios with GTKWave FST output."""
import argparse
import json
import re
import shlex
import shutil
import subprocess
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WAVE_ROOT=ROOT/'waves'/'ace_cci'
BUILD_ROOT=Path('/tmp/cci_ace_waves')
GTKWAVE_RC=ROOT/'waves'/'gtkwaverc'  # opens each waveform zoomed to its full time range

RCCI_ROOT=ROOT/'waves'/'rcci'
# Same geometry as run_rcci_perf.py so a waveform matches the measured configuration.
PERF_COMMON=dict(CACHE_LINES=256,MEM_OUTSTANDING=16,SNOOP_CONTEXTS=4,COMMON_ADMISSION_TOKENS=16)

def perf_case(title,design,op,lines,window,dirty=0,expect=None):
    if design=='B1':
        tb=dict(USE_RANGE=0,LINE_TRACKER_ENTRIES=window,M1_READ_CONTEXTS=window,M1_WRITE_CONTEXTS=window)
    else:
        tb=dict(USE_RANGE=1,LINE_TRACKER_ENTRIES=16,M1_READ_CONTEXTS=16,M1_WRITE_CONTEXTS=16)
    tb.update(PERF_COMMON,RANGE_READ_WINDOW=window,RANGE_WRITE_WINDOW=window)
    return dict(title=title,tb=tb,defines=['RCCI_PERF'],marker='PASS perf',root=RCCI_ROOT,rcci=True,
                plus=[f'+perf_op={op}',f'+perf_lines={lines}',f'+perf_dirty={dirty}'],expect=expect or {},
                limit=dict(read_tracker_count=window) if op==0 else {})

def fix_case(title,number):
    return dict(title=title,tb=dict(USE_RANGE=1,LINE_TRACKER_ENTRIES=4),defines=['RCCI_FIX_CASES'],
                plus=[f'+fix1_case={number}','+fix1_monitor'],marker=f'PASS fix1 case={number}',
                root=RCCI_ROOT,rcci=True,fix_case=number)

CASES={
    'ace-p':dict(tb=dict(USE_RANGE=1),marker='PASS v9 ACE integration mode=1'),
    'ace-b1':dict(tb=dict(USE_RANGE=0),marker='PASS v9 ACE integration mode=0'),
    'ace-multi':dict(tb=dict(USE_RANGE=0,CACHED_MASTERS=2),
                     marker='PASS v9 ACE integration mode=0 cached_masters=2'),
    'ace-opcodes':dict(tb={},opcode=True,marker='PASS ACE opcode waveform scenarios RS/RNS/WLU'),
}
RCCI_CASES={
    'b1-rd-8l':perf_case('B1-T4, 8-line read, 50% dirty','B1',0,8,4,50,dict(M1_AR=8,M1_R=32,M1_RLAST=8)),
    'rcci-rd-8l':perf_case('rCCI E16/N_fly4, one 8-line ReadRange, 50% dirty','rCCI',0,8,4,50,dict(M1_AR=1,M1_R=32,M1_RLAST=1)),
    'b1-wr-8l':perf_case('B1-T4, 8-line write','B1',1,8,4,0,dict(M1_AW=8,M1_W=32,M1_WLAST=8,M1_B=8)),
    'rcci-wr-8l':perf_case('rCCI E16/N_fly4, one 8-line WriteRange','rCCI',1,8,4,0,dict(M1_AW=1,M1_W=32,M1_WLAST=1,M1_B=1)),
    **{f'rcci-rd-w{w}':perf_case(f'rCCI 32-line ReadRange, N_fly={w}','rCCI',0,32,w,0,dict(M1_AR=1,M1_R=128,M1_RLAST=1))
       for w in (1,4,16)},
    **{f'rcci-wr-w{w}':perf_case(f'rCCI 32-line WriteRange, N_fly={w}','rCCI',1,32,w,0,dict(M1_AW=1,M1_W=128,M1_WLAST=1,M1_B=1))
       for w in (1,4,16)},
    'conflict-writeback':fix_case('ReadRange waits at line 5 for a CPU WriteBack with late W',3),
    'noconflict-ace':fix_case('ACE on another line does not stall the range',14),
    'rw-range-64l':fix_case('64-line ReadRange and WriteRange in flight together',18),
    'rw-same-lines':fix_case('ReadRange and WriteRange of the same 8 lines presented together',21),
    'r-buffer-cpu-refill':fix_case('DMA withholds R while a CPU refill completes',29),
}
ALL_CASES={**CASES,**RCCI_CASES}

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
                      'read_ingress_count[4:0]','read_tracker_count[4:0]',
                      'ingress_count[4:0]','tracker_count[4:0]',
                      'dut.write_context_count[4:0]',
                      'dut.write_line_outstanding[4:0]']),
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

RANGE_PROBES=[(f'rd_e{e}_{f}',f'tb.dut.G_COH_READ.read_ingress.entries[{e}].{f}',w)
              for e in (0,1) for f,w in (('valid',1),('lines',7),('issue_idx',7),('out_idx',7),('lo_line',7),('hi_line',7))]
RANGE_PROBES+=[(f'wr_e{e}_{f}',f'tb.dut.write_range_adapter.contexts[{e}].{f}',w)
               for e in (0,1) for f,w in (('valid',1),('lines',7),('issue_idx',7),('w_idx',7),('b_idx',7),('lo_line',7),('hi_line',7))]
RANGE_PROBES+=[('rd_issue_valid','tb.dut.read_issue_line_valid',1),('rd_issue_ready','tb.dut.read_alloc_ready',1),
               ('rd_issue_fire','tb.dut.read_issue_fire',1),('wr_issue_cand','tb.dut.write_issue_cand_valid',1),
               ('wr_issue_reserve','tb.dut.write_issue_reserve',1)]
RCCI_GROUPS=[
    ('clock / status',['clk','rst_n','fault','ACE_MANAGER_BUSY']),
    ('M1 read (ACE-Lite)',['M1_ARVALID','M1_ARREADY','M1_ARID[3:0]','M1_ARADDR[63:0]','M1_ARLEN[7:0]','M1_ARSNOOP[3:0]',
                           'M1_RVALID','M1_RREADY','M1_RLAST','M1_RRESP[1:0]']),
    ('M1 write (ACE-Lite)',['M1_AWVALID','M1_AWREADY','M1_AWID[3:0]','M1_AWADDR[63:0]','M1_AWLEN[7:0]','M1_AWSNOOP[2:0]',
                            'M1_WVALID','M1_WREADY','M1_WLAST','M1_BVALID','M1_BREADY','M1_BRESP[1:0]']),
    ('occupancy',['read_ingress_count[4:0]','read_tracker_count[4:0]','dut.write_context_count[4:0]',
                  'dut.write_line_outstanding[4:0]']),
    ('issue',['~rd_issue_valid','~rd_issue_ready','~rd_issue_fire','~wr_issue_cand','~wr_issue_reserve']),
    *[(f'{"read" if k=="rd" else "write"} range entry {e}',
       [f'~{k}_e{e}_valid',f'~{k}_e{e}_lines[6:0]',f'~{k}_e{e}_issue_idx[6:0]',
        *([f'~{k}_e{e}_out_idx[6:0]'] if k=='rd' else [f'~{k}_e{e}_w_idx[6:0]',f'~{k}_e{e}_b_idx[6:0]']),
        f'~{k}_e{e}_lo_line[6:0]',f'~{k}_e{e}_hi_line[6:0]'])
      for k in ('rd','wr') for e in (0,1)],
    ('snoop AC/CR/CD',['ac_valid','ac_ready','ac_addr[63:0]','ac_snoop[3:0]','cr_valid','cr_ready','cr_resp[4:0]',
                       'cd_valid','cd_ready','cd_last']),
    ('memory S',['S_ARVALID','S_ARREADY','S_ARADDR[63:0]','S_RVALID','S_RREADY','S_RLAST',
                 'S_AWVALID','S_AWREADY','S_AWADDR[63:0]','S_WVALID','S_WREADY','S_WLAST','S_BVALID','S_BREADY']),
    ('CPU ACE',['ACE_ARVALID','ACE_ARREADY','ACE_ARADDR[63:0]','ACE_ARSNOOP[3:0]','ACE_RVALID','ACE_RREADY','ACE_RLAST','ACE_RACK',
                'ACE_AWVALID','ACE_AWREADY','ACE_AWADDR[63:0]','ACE_AWSNOOP[2:0]','ACE_WVALID','ACE_WREADY','ACE_WLAST',
                'ACE_BVALID','ACE_BREADY','ACE_WACK']),
]
EVENTS=dict(M1_AR=('M1_ARVALID','M1_ARREADY'),M1_R=('M1_RVALID','M1_RREADY'),M1_RLAST=('M1_RVALID','M1_RREADY','M1_RLAST'),
            M1_AW=('M1_AWVALID','M1_AWREADY'),M1_W=('M1_WVALID','M1_WREADY'),M1_WLAST=('M1_WVALID','M1_WREADY','M1_WLAST'),
            M1_B=('M1_BVALID','M1_BREADY'),AC=('ac_valid','ac_ready'),CR=('cr_valid','cr_ready'),
            CD_LAST=('cd_valid','cd_ready','cd_last'),S_AR=('S_ARVALID','S_ARREADY'),S_AW=('S_AWVALID','S_AWREADY'),
            ACE_AR=('ACE_ARVALID','ACE_ARREADY'),ACE_AW=('ACE_AWVALID','ACE_AWREADY'))
WINDOW_START=('M1_AR','M1_AW','ACE_AR','ACE_AW')
MAX_TRACKED=('read_ingress_count','read_tracker_count','dut.write_context_count','dut.write_line_outstanding')

def scan_wave(fst,build):
    """Sample the dump at each rising clk and count handshakes; names are checked against this dump."""
    vcd=build/'scan.vcd'
    subprocess.run(['fst2vcd','-f',str(fst),'-o',str(vcd)],check=True,stdout=subprocess.DEVNULL)
    names={};ids={};scope=[]
    with vcd.open(errors='replace') as f:
        for line in f:
            t=line.split()
            if not t:continue
            if t[0]=='$scope':scope.append(t[2])
            elif t[0]=='$upscope':scope.pop()
            elif t[0]=='$var':
                n='.'.join(scope+[t[4]])+(t[5] if t[5]!='$end' else '');names[n]=t[3]
            elif t[0]=='$enddefinitions':break
        clk=[n for n in names if n.endswith('.tb.clk')]
        if len(clk)!=1:raise RuntimeError(f'{fst}: cannot locate tb.clk')
        top=clk[0][:-len('.clk')];wrapper=top.rsplit('.',1)[0]
        wanted={names[top+'.'+x]:x for e in EVENTS.values() for x in e if top+'.'+x in names}
        base={n.split('[')[0]:n for n in names}
        tracked={x:names[base[top+'.'+x]] for x in MAX_TRACKED if top+'.'+x in base}
        for x,i in tracked.items():wanted[i]=x
        clk_id=names[top+'.clk'];val={};pending={};now=0
        counts={k:0 for k in EVENTS};first=None;last=0;peak={x:0 for x in MAX_TRACKED}
        def num(v):return int(v,2) if v and set(v)<=set('01') else 0
        def edge():
            nonlocal first,last
            for k,sig in EVENTS.items():
                if all(num(val.get(names.get(top+'.'+x),''))==1 for x in sig):
                    counts[k]+=1;last=now
                    if first is None and k in WINDOW_START:first=now
            for x,i in tracked.items():peak[x]=max(peak[x],num(val.get(i,'')))
        def flush():
            if val.get(clk_id)=='0' and pending.get(clk_id)=='1':edge()
            val.update(pending);pending.clear()
        keep={clk_id,*wanted}
        for line in f:
            c=line[:1]
            if c=='#':flush();now=int(line[1:])
            elif c=='b':
                v,i=line[1:].split()
                if i in keep:pending[i]=v
            elif c in '01xz':
                i=line[1:].strip()
                if i in keep:pending[i]=c
        flush()
    vcd.unlink()
    return dict(top=top,wrapper=wrapper,names=set(names),events=counts,first=first,last=last,
                peak=peak)

def run_checked(cmd,log_path,cwd=ROOT):
    with log_path.open('w') as log:
        result=subprocess.run(cmd,cwd=cwd,stdout=log,stderr=subprocess.STDOUT)
    if result.returncode:
        tail=log_path.read_text(errors='replace')[-4000:]
        raise RuntimeError(f"command failed ({result.returncode}): {shlex.join(cmd)}\n{tail}")

def write_gtkw(case,fst,scan):
    cfg=ALL_CASES[case];top=scan['top'];base={n.split('[')[0]:n for n in scan['names']}
    gtkw=fst.with_suffix('.gtkw')
    groups=RCCI_GROUPS if cfg.get('rcci') else OPCODE_GROUPS if cfg.get('opcode') else GROUPS
    lines=['[*] GTKWave save file for ACE/CCI integration',
           f'[dumpfile] "{fst}"','[timestart] 0','[size] 1680 1000','[pos] -1 -1']
    missing=[]
    for group,signals in groups:
        lines.extend(['@200',f'-{group}'])
        for signal in signals:
            name=f"{scan['wrapper']}.{signal[1:]}" if signal[0]=='~' else f'{top}.{signal}'
            name=base.get(name.split('[')[0],name)
            if name not in scan['names']:missing.append(name);continue
            lines.append(f"@{22 if '[' in name else 28}\n{name}")
    if missing:raise RuntimeError(f'{case}: signals not in dump: {missing[:8]}')
    lines.extend(['[pattern_trace] 1','[pattern_trace] 0'])
    gtkw.write_text('\n'.join(lines)+'\n')
    return gtkw

def single_fix_case_tb(number,build):
    """TB copy holding one fix1_case arm: g++ needs tens of minutes for the full 31-arm coroutine."""
    text=(ROOT/'tb'/'tb_cci_ace_integration.sv').read_text(encoding='utf-8')
    start=text.index('task automatic fix1_case(');start=text.index('case(c)\n',start)+len('case(c)\n')
    end=text.index('        default:$fatal(1,"FIX1_BAD_CASE");',start)
    arms=re.split(r'(?m)^(?=        \d+:begin)',text[start:end])
    keep=[a for a in arms if a.startswith(f'        {number}:begin')]
    if len(keep)!=1:raise RuntimeError(f'fix case {number}: arm not found')
    path=build/'tb_cci_ace_integration.sv'
    path.write_text(text[:start]+keep[0]+text[end:],encoding='utf-8')
    return str(path)

def wrapper_source(cfg):
    overrides=',\n        '.join(f'.{k}({v})' for k,v in cfg['tb'].items())
    tb='tb_ace_opcode_wave tb();' if cfg.get('opcode') else f'tb_cci_ace_integration #(\n        {overrides}\n    ) tb();'
    probes=''.join(f'    wire [{w-1}:0] {n}={path};\n' if w>1 else f'    wire {n}={path};\n'
                   for n,path,w in RANGE_PROBES) if cfg.get('rcci') else ''
    return f'''`timescale 1ns/1ps
module ace_wave_top;
    string wave_path;
    {tb}
{probes}    initial begin
        if(!$value$plusargs("wave=%s",wave_path)) wave_path="ace_cci.fst";
        $display("WAVE ACE/CCI FST %s",wave_path);
        $dumpfile(wave_path);
        $dumpvars(0,ace_wave_top);
    end
endmodule
'''

def build_case(case):
    cfg=ALL_CASES[case]
    out=cfg.get('root',WAVE_ROOT)/case
    build=BUILD_ROOT/case
    if build.exists(): shutil.rmtree(build)
    out.mkdir(parents=True,exist_ok=True)
    build.mkdir(parents=True)
    fst=(out/(case+'.fst')).resolve()
    fst.unlink(missing_ok=True)
    compile_log=out/'compile.log'
    run_log=out/'run.log'
    wrapper=build/'ace_wave_top.sv'
    wrapper.write_text(wrapper_source(cfg))
    # Verilator 5.048 aborts in V3Force when a design with `force` also traces unpacked
    # arrays. Fix-case builds therefore trace only the TB, the ACE top and the probes.
    trace_off=build/'trace_off.vlt'
    sources=[Path(x.strip()).name for f in ('scripts/rtl.f','scripts/ace.f') for x in (ROOT/f).read_text().splitlines()
             if x.strip() and not x.startswith('+')]+['axi_memory_slave.sv']
    trace_off.write_text('`verilator_config\n'+''.join(f'tracing_off -file "*{x}"\n' for x in sources if x!='axi_cci_ace_top.sv'))
    source='wave_tb/tb_ace_opcode_wave.sv' if cfg.get('opcode') else \
        single_fix_case_tb(cfg['fix_case'],build) if 'fix_case' in cfg else 'tb/tb_cci_ace_integration.sv'
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '--trace-fst','--trace-structs',
         # Case 18 repeats its stimulus tasks in 64-line loops; unrolling them gives g++ a 12 MB file.
         *(['--unroll-count','2'] if 'fix_case' in cfg else []),
         '--top-module','ace_wave_top','--Mdir',str(build),
         *[f'+define+{d}' for d in cfg.get('defines',())],
         '-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',source,str(wrapper),
         *([str(trace_off)] if 'RCCI_FIX_CASES' in cfg.get('defines',()) else [])]
    run_checked(cmd,compile_log)
    run_checked([str(build/'Vace_wave_top'),f'+wave={fst}',*cfg.get('plus',())],run_log)
    text=run_log.read_text(errors='replace')
    if cfg['marker'] not in text: raise RuntimeError(f'{case}: PASS marker absent')
    if not fst.is_file() or fst.stat().st_size<1024:
        raise RuntimeError(f'{case}: missing or empty FST: {fst}')
    scan=scan_wave(fst,build)
    bad={k:(v,scan['events'][k]) for k,v in cfg.get('expect',{}).items() if scan['events'][k]!=v}
    bad.update({k:(v,scan['peak'][k]) for k,v in cfg.get('limit',{}).items() if scan['peak'][k]>v})
    if bad: raise RuntimeError(f'{case}: waveform does not show the expected events (want, got): {bad}')
    gtkw=write_gtkw(case,fst,scan)
    print(f'{case}: PASS ({fst.stat().st_size} bytes)')
    print(f'  gtkwave -r {shlex.quote(str(GTKWAVE_RC))} {shlex.quote(str(fst))} {shlex.quote(str(gtkw))}')
    return fst,gtkw,dict(case=case,title=cfg.get('title',case),tb=cfg['tb'],plusargs=cfg.get('plus',[]),
        fst=str(fst.relative_to(ROOT)),gtkw=str(gtkw.relative_to(ROOT)),events=scan['events'],peak=scan['peak'],
        active_ps=[scan['first'],scan['last']])

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--case',choices=[*ALL_CASES,'rcci','all'],default='ace-p')
    parser.add_argument('--open',action='store_true',help='open the last generated waveform in GTKWave')
    parser.add_argument('--jobs',type=int,default=4)
    args=parser.parse_args()
    selected={'all':list(ALL_CASES),'rcci':list(RCCI_CASES)}.get(args.case,[args.case])
    GTKWAVE_RC.parent.mkdir(parents=True,exist_ok=True)
    GTKWAVE_RC.write_text('do_initial_zoom_fit 1\n')
    with ThreadPoolExecutor(args.jobs) as pool:built=list(pool.map(build_case,selected))
    rows=[b[2] for b in built if b[2]['case'] in RCCI_CASES]
    if rows and args.case in ('all','rcci'):
        RCCI_ROOT.mkdir(parents=True,exist_ok=True)
        (RCCI_ROOT/'summary.json').write_text(json.dumps(rows,indent=2,ensure_ascii=False)+'\n')
    if args.open:
        if not shutil.which('gtkwave'): raise RuntimeError('gtkwave not found in PATH')
        subprocess.Popen(['gtkwave','-r',str(GTKWAVE_RC),str(built[-1][0]),str(built[-1][1])],cwd=ROOT)

if __name__=='__main__': main()
