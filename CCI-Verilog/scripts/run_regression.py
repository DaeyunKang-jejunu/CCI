#!/usr/bin/env python3
"""Run the active rCCI/ACE regression (RCCI_PLAN 14.6, 보완 5).

Active set, in order:
  stage 2 (M1 attributes/WSTRB), stage 3 (tagged service, admission pool),
  stage 5 (ReadRange), stage 6 (WriteRange), stage 8 (hazard/error/progress),
  rcci_fix (보완 1~5, 10, 12, 13 scenarios, ownership monitor, gate build,
  configuration matrix, mutations), rcci_stress --quick (보완 11), ACE full regression, formal (endpoint, line ingress,
  issue arbiter, read interval equivalence).
Optional: --stage1 (latency measurement + C++ model tests), --synthesis
(Vivado OOC synthesis-only, after every functional check passed).

Every runner judges expected failures by its planned assertion marker, not by
a nonzero return code alone. The pre-stage-7 setup/P-WR regression stays in
reports/archive and is not mixed into this result.
"""
import argparse
import hashlib
import json
import subprocess
from datetime import datetime, timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'reports'/'rcci_fix'

def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def tracked_sources(jobs):
    files=set(['scripts/run_regression.py','scripts/results_common.py'])
    for filelist in ('scripts/rtl.f','scripts/ace.f'):
        files.add(filelist)
        files.update(line.strip() for line in (ROOT/filelist).read_text().splitlines()
                     if line.strip() and not line.startswith('+'))
    files.update(x[1] for x in jobs)
    for pattern in ('rtl/**/*.sv','tb/*.sv','formal/*.sv','formal/*.vh','synth/*.tcl'):
        files.update(str(p.relative_to(ROOT)) for p in ROOT.glob(pattern))
    model=ROOT.parent/'CCI-simulation'/'rcci_model'
    if model.exists():
        files.update(str(p.relative_to(ROOT.parent)) for p in model.glob('*')
                     if p.suffix in ('.cpp','.py') or p.name=='Makefile')
    out={}
    for name in sorted(files):
        path=ROOT/name if (ROOT/name).exists() else ROOT.parent/name
        if path.exists():out[name]=digest(path)
    return out

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--stage1',action='store_true',help='also re-measure stage-1 latency and C++ model')
    parser.add_argument('--synthesis',action='store_true',help='also run Vivado synthesis-only checks')
    args=parser.parse_args()
    jobs=[
        ('stage2_attributes_wstrb','scripts/run_rcci_stage2.py'),
        ('stage3_tagged_service_admission','scripts/run_rcci_stage3.py'),
        ('stage5_read_range','scripts/run_rcci_stage5.py'),
        ('stage6_write_range','scripts/run_rcci_stage6.py'),
        ('stage8_hazard_error_formal','scripts/run_rcci_stage8.py'),
        ('rcci_fix_ownership_interval_matrix','scripts/run_rcci_fix.py'),
        ('rcci_stress_quick','scripts/run_rcci_stress.py'),
        ('ace_full','scripts/run_ace.py'),
        ('formal','scripts/run_formal.py'),
    ]
    if args.stage1: jobs.append(('stage1_latency_model','scripts/run_rcci_stage1.py'))
    if args.synthesis: jobs.append(('ace_synthesis','scripts/run_ace_synthesis.py'))
    OUT.mkdir(parents=True,exist_ok=True)
    results=[]
    for name,script in jobs:
        command=['python3',script]+(['--quick'] if script.endswith('run_rcci_stress.py') else [])
        print(f'{name}: RUN',flush=True)
        with (OUT/(name+'.log')).open('w') as log:
            result=subprocess.run(command,cwd=ROOT,stdout=log,stderr=subprocess.STDOUT)
        results.append(dict(name=name,command=command,returncode=result.returncode,
                            status='PASS' if result.returncode==0 else 'FAIL',log=name+'.log'))
        print(f'{name}: {results[-1]["status"]}',flush=True)
        if result.returncode: break
    report=dict(schema='rcci-active-regression-v2',
                generated_at_utc=datetime.now(timezone.utc).isoformat(),
                status='PASS' if len(results)==len(jobs) and all(x['returncode']==0 for x in results) else 'FAIL',
                scope='active ACE/rCCI after 보완 1~5; legacy setup/P-WR is archived separately',
                sources=tracked_sources(jobs),results=results)
    temp=OUT/'active_regression.json.tmp';final=OUT/'active_regression.json'
    temp.write_text(json.dumps(report,indent=2,ensure_ascii=False)+'\n');temp.replace(final)
    if report['status']!='PASS': raise SystemExit(1)

if __name__=='__main__': main()
