#!/usr/bin/env python3
"""Place/route ACE tops and fail closed on timing, routing, and DRC reports."""
import argparse,platform,subprocess,sys
from concurrent.futures import ThreadPoolExecutor
from results_common import ROOT,new_run,rtl_paths,sha,save,unchanged,artifact_hashes,parse_hardware

p=argparse.ArgumentParser()
p.add_argument('--windows-vivado',default=r'D:\Vivado\2024.1\bin\vivado.bat')
p.add_argument('--jobs',type=int,default=1,choices=[1,2])
a=p.parse_args()
run_id,out=new_run('ace_implementation')
paths=rtl_paths()+[ROOT/p for p in (ROOT/'scripts/ace.f').read_text().splitlines()]
paths += [ROOT/'scripts/ace.f',ROOT/'synth/run_ace_impl.tcl',ROOT/'scripts/run_ace_implementation.py',ROOT/'scripts/results_common.py']
sources={str(path.relative_to(ROOT)):sha(path) for path in sorted(set(paths))}
manifest=dict(run_id=run_id,status='RUNNING',sources=sources,
    config=dict(part='xczu7ev-ffvc1156-2-e',period_ns=5.0,boundary='direct OOC top; external pin paths excluded'),
    host=dict(platform=platform.platform(),python=sys.version),variants={})
pointer=ROOT/'reports/latest_ace_implementation.json'
save(pointer,dict(run_id=run_id,status='RUNNING',manifest=str((out/'manifest.json').relative_to(ROOT))))
save(out/'manifest.json',manifest)

def run(variant):
    dest=out/variant;dest.mkdir()
    relative=str(dest.relative_to(ROOT)).replace('\\','/')
    cmd=['/mnt/c/Windows/System32/cmd.exe','/c',a.windows_vivado,'-mode','batch',
         '-source','synth/run_ace_impl.tcl','-log',relative+'/vivado.log','-journal',relative+'/vivado.jou',
         '-tclargs',variant,'5.0','xczu7ev-ffvc1156-2-e',relative]
    save(dest/'command.json',dict(argv=cmd,cwd=str(ROOT)))
    print(variant+': started '+run_id,flush=True)
    with (dest/'console.log').open('w') as log:
        result=subprocess.run(cmd,cwd=ROOT,stdout=log,stderr=subprocess.STDOUT,timeout=2400)
    text=(dest/'console.log').read_text(errors='replace')
    if result.returncode or f'ACE_IMPL_COMPLETE: {variant} post-route' not in text:
        raise RuntimeError(variant+' implementation failed; inspect '+str(dest/'console.log'))
    metrics=parse_hardware(dest,require_dut=False);unchanged(sources)
    print(variant+': timing/routing/DRC PASS',flush=True)
    return variant,metrics

try:
    with ThreadPoolExecutor(max_workers=a.jobs) as pool:
        for variant,metrics in pool.map(run,['B1','P','MULTI_FILTER']):manifest['variants'][variant]=metrics
    unchanged(sources);manifest['status']='PASS';manifest['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as exc:
    manifest['status']='FAIL';manifest['error']=str(exc) or type(exc).__name__;raise
finally:
    save(out/'manifest.json',manifest)
    save(pointer,dict(run_id=run_id,status=manifest['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
print('ACE implementation PASS: '+str(out),flush=True)
