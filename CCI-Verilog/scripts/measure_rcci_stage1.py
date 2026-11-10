#!/usr/bin/env python3
"""Measure stage-1 B1 RTL latency parameters and publish machine-readable data."""
import json
import re
import shutil
import subprocess
from datetime import datetime, timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stage1_latency')
OUT=ROOT/'reports'/'rcci_stage1'
PATTERN=re.compile(r'RCCI_STAGE1_LATENCY LS_NODATA=(\d+) LS_DATA=(\d+) LM=(\d+) LW=(\d+)')

def main():
    if BUILD.exists(): shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True)
    OUT.mkdir(parents=True,exist_ok=True)
    compile_cmd=[
        'verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
        '--trace-fst','--trace-structs',
        '--top-module','tb_rcci_stage1_latency','--Mdir',str(BUILD),
        'rtl/ace/ace_snoop_pkg.sv','rtl/ace/ace_cache_snoop_endpoint.sv',
        'tb/axi_memory_slave.sv','tb/tb_rcci_stage1_latency.sv'
    ]
    cp=subprocess.run(compile_cmd,cwd=ROOT,text=True,stdout=subprocess.PIPE,
                      stderr=subprocess.STDOUT)
    (OUT/'compile.log').write_text(cp.stdout)
    if cp.returncode: raise SystemExit(cp.stdout[-5000:])
    wave=(OUT/'stage1_latency.fst').resolve()
    wave.unlink(missing_ok=True)
    rp=subprocess.run([str(BUILD/'Vtb_rcci_stage1_latency'),f'+wave={wave}'],cwd=ROOT,text=True,
                      stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
    (OUT/'run.log').write_text(rp.stdout)
    match=PATTERN.search(rp.stdout)
    if rp.returncode or not match or 'PASS rCCI stage1 RTL latency measurement' not in rp.stdout:
        raise SystemExit(rp.stdout[-5000:])
    keys=('ls_nodata','ls_data','lm','lw')
    values={k:int(v) for k,v in zip(keys,match.groups())}
    payload={
        'schema':'rcci-stage1-latency-v1',
        'measured_at_utc':datetime.now(timezone.utc).isoformat(),
        'rtl':'current B1 support blocks',
        'clock_period_ns':10,
        'memory_resp_latency_parameter':0,
        'definitions':{
            'ls_nodata':'AC handshake to CR handshake for a no-data cache miss',
            'ls_data':'AC handshake to final CD handshake for a dirty cache hit',
            'lm':'memory AR handshake to first R handshake',
            'lw':'last memory W handshake to B handshake'
        },
        **values
    }
    (OUT/'rtl_latency.json').write_text(json.dumps(payload,indent=2,ensure_ascii=False)+'\n')
    if not wave.is_file() or wave.stat().st_size<1024:
        raise SystemExit(f'missing latency waveform: {wave}')
    gtkw=OUT/'stage1_latency.gtkw'
    signals=['clk','rst_n','cycle','ac_valid','ac_ready','ac_addr[63:0]','ac_snoop[3:0]',
             'cr_valid','cr_resp[4:0]','cd_valid','cd_last','arvalid','arready',
             'rvalid','rlast','awvalid','awready','wvalid','wready','wlast','bvalid']
    gtkw.write_text('\n'.join(['[*] rCCI stage-1 latency measurement',f'[dumpfile] "{wave}"',
                               '[timestart] 0','@200','-stage 1 latency',
                               *[f'@28\ntb_rcci_stage1_latency.{s}' for s in signals]])+'\n')
    print(json.dumps(payload,indent=2,ensure_ascii=False))

if __name__=='__main__': main()
