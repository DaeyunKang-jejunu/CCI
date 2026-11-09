#!/usr/bin/env python3
"""RCCI_PLAN 15.2 (보완 11): constrained-random stress of the ACE top.

M1 reads/writes (ranges and B1 lines), M0 reads/writes (multi-line bursts) and
ACE reads/writes run concurrently on a 4-page region with random sizes, gaps
and ready/ack delays. Checks: encoded (line, version) data on every read
(untorn, actually written), ownership monitor (RCCI_FIX_CASES), M0 core vs
external handshake counts, AXI stability assertions, drain and no fault.
  --quick : 5 seeds per configuration (for run_regression.py)
"""
import argparse,json,re,shutil,subprocess
from concurrent.futures import ThreadPoolExecutor
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
BUILD=Path('/tmp/rcci_stress')
OUT=ROOT/'reports'/'rcci_fix'/'stress'
CONFIGS={
    'B1-T16':['-GUSE_RANGE=0','-GLINE_TRACKER_ENTRIES=16'],
    'R-E4-RW16-WE4-WW16':['-GUSE_RANGE=1','-GLINE_TRACKER_ENTRIES=16','-GM1_READ_CONTEXTS=4','-GM1_WRITE_CONTEXTS=4'],
    'R-E16-RW4-WE16-WW4':['-GUSE_RANGE=1','-GLINE_TRACKER_ENTRIES=16','-GRANGE_READ_WINDOW=4','-GRANGE_WRITE_WINDOW=4'],
    'R-E4-RW16-2CACHE':['-GUSE_RANGE=1','-GLINE_TRACKER_ENTRIES=16','-GM1_READ_CONTEXTS=4','-GM1_WRITE_CONTEXTS=4',
                        '-GCACHED_MASTERS=2'],
    'R-E4-RW16-2CACHE-SF':['-GUSE_RANGE=1','-GLINE_TRACKER_ENTRIES=16','-GM1_READ_CONTEXTS=4','-GM1_WRITE_CONTEXTS=4',
                           '-GCACHED_MASTERS=2','-GUSE_SNOOP_FILTER=1'],
}
def build(name,params):
    mdir=BUILD/name
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4','-MAKEFLAGS','OPT_FAST=-O1 OPT_SLOW=-O0',
         '--top-module','tb_cci_ace_integration','--Mdir',str(mdir),'-f','scripts/rtl.f','-f','scripts/ace.f',
         'tb/axi_memory_slave.sv','tb/tb_cci_ace_integration.sv','+define+RCCI_FIX_CASES','+define+RCCI_STRESS',
         '-GCACHE_LINES=256',*params]
    p=subprocess.run(cmd,cwd=ROOT,text=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
    (OUT/f'build_{name}.log').write_text(p.stdout)
    if p.returncode or 'Built from' not in p.stdout:raise RuntimeError(f'build {name} failed\n{p.stdout[-3000:]}')
    return mdir/'Vtb_cci_ace_integration'
def run(job):
    name,binary,seed,n=job
    p=subprocess.run([str(binary),'+stress',f'+stress_seed={seed}',f'+stress_n={n}','+fix1_monitor',
                      f'+verilator+seed+{seed}'],cwd=ROOT,text=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=900)
    ok=p.returncode==0 and 'PASS stress' in p.stdout
    m=re.search(r'STRESS_RESULT (.*)',p.stdout)
    fail=next((l.strip() for l in p.stdout.splitlines() if 'Fatal' in l or 'TIMEOUT' in l),'')
    if not ok:(OUT/f'fail_{name}_seed{seed}.log').write_text(p.stdout)
    return dict(config=name,seed=seed,n=n,status='PASS' if ok else 'FAIL',result=m.group(1) if m else '',failure=fail)
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--quick',action='store_true');ap.add_argument('--n',type=int,default=40)
    a=ap.parse_args();seeds=range(1,6) if a.quick else range(1,21)
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True);OUT.mkdir(parents=True,exist_ok=True)
    with ThreadPoolExecutor(3) as pool:bins=dict(zip(CONFIGS,pool.map(lambda k:build(k,CONFIGS[k]),CONFIGS)))
    jobs=[(k,bins[k],s,a.n) for k in CONFIGS for s in seeds]
    with ThreadPoolExecutor(8) as pool:res=list(pool.map(run,jobs))
    ok=all(r['status']=='PASS' for r in res)
    (OUT/'summary.json').write_text(json.dumps(dict(schema='rcci-stress-v1',generated_at_utc=datetime.now(timezone.utc).isoformat(),
        quick=a.quick,all_pass=ok,runs=len(res),results=res),indent=2,ensure_ascii=False))
    for r in res:
        if r['status']!='PASS':print('FAIL',r['config'],r['seed'],r['failure'][:160])
    print(f"stress runs={len(res)} all_pass={ok}")
    if not ok:raise SystemExit(1)
if __name__=='__main__':main()
