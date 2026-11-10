#!/usr/bin/env python3
"""Unique immutable run directory, explicit configuration, strict timing/DRC gates."""
import argparse
from concurrent.futures import ThreadPoolExecutor
import subprocess,platform,sys
from results_common import ROOT,new_run,snapshot,unchanged,save,artifact_hashes,parse_hardware
p=argparse.ArgumentParser()
p.add_argument('--windows-vivado');p.add_argument('--vivado',default='vivado')
p.add_argument('--jobs',type=int,default=1,choices=[1,2])
a=p.parse_args()
run_id,out=new_run('implementation');sources=snapshot('implementation')
manifest=dict(run_id=run_id,status='RUNNING',sources=sources,config=dict(part='xczu7ev-ffvc1156-2-e',period_ns=5.0,observe_debug=False,depth=16,endpoint_latency=8),host=dict(platform=platform.platform(),python=sys.version),variants={})
pointer=ROOT/'reports/latest_implementation.json'
save(pointer,dict(run_id=run_id,status='RUNNING',manifest=str((out/'manifest.json').relative_to(ROOT))))
save(out/'manifest.json',manifest)
def run(variant):
    dest=out/variant;dest.mkdir()
    relative=str(dest.relative_to(ROOT)).replace('\\','/')
    cmd=[a.windows_vivado or a.vivado,'-mode','batch','-source','synth/run_impl.tcl',
         '-log',relative+'/vivado.log','-journal',relative+'/vivado.jou',
         '-tclargs',variant,'5.0','xczu7ev-ffvc1156-2-e',relative]
    if a.windows_vivado:cmd=['/mnt/c/Windows/System32/cmd.exe','/c',*cmd]
    save(dest/'command.json',dict(argv=cmd,cwd=str(ROOT)))
    print(variant+': started '+run_id,flush=True)
    with (dest/'console.log').open('w') as f:r=subprocess.run(cmd,cwd=ROOT,stdout=f,stderr=subprocess.STDOUT)
    text=(dest/'console.log').read_text(errors='replace')
    if r.returncode or f'COMPLETE: {variant} post-route' not in text: raise RuntimeError(variant+' implementation failed')
    metrics=parse_hardware(dest);unchanged(sources)
    print(variant+': timing/routing/DRC PASS',flush=True)
    return variant,metrics
try:
    with ThreadPoolExecutor(max_workers=a.jobs) as pool:
        for variant,metrics in pool.map(run,['B0','B1','P']):manifest['variants'][variant]=metrics
    unchanged(sources);manifest['status']='PASS';manifest['artifacts']=artifact_hashes(out)
except Exception as e:
    manifest['status']='FAIL';manifest['error']=str(e);raise
finally:
    save(out/'manifest.json',manifest)
    save(pointer,dict(run_id=run_id,status=manifest['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
print('Implementation PASS: '+str(out),flush=True)
