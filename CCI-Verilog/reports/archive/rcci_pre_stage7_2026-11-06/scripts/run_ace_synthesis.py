#!/usr/bin/env python3
"""Separate ACE synthesis-only evidence; does not replace v9 post-route costs."""
import os,subprocess
from pathlib import Path
from results_common import ROOT,new_run,rtl_paths,sha,save,unchanged,artifact_hashes
run_id,out=new_run('ace_synthesis')
paths=rtl_paths()+[ROOT/p for p in (ROOT/'scripts/ace.f').read_text().splitlines()]+[ROOT/'scripts/ace.f',ROOT/'synth/run_ace.tcl',ROOT/'scripts/run_ace_synthesis.py',ROOT/'scripts/results_common.py']
sources={str(p.relative_to(ROOT)):sha(p) for p in paths}
cmd=['/mnt/c/Windows/System32/cmd.exe','/c',r'D:\Vivado\2024.1\bin\vivado.bat','-mode','batch','-source','synth/run_ace.tcl','-log',str(out.relative_to(ROOT)/'vivado.log'),'-journal',str(out.relative_to(ROOT)/'vivado.jou'),'-tclargs',str(out.relative_to(ROOT))]
m=dict(run_id=run_id,status='RUNNING',sources=sources,command=cmd,scope='synthesis only; no placement/routing/timing sign-off')
pointer=ROOT/'reports/latest_ace_synthesis.json'
def publish():
    save(out/'manifest.json',m);save(pointer,dict(run_id=run_id,status=m['status'],manifest=str((out/'manifest.json').relative_to(ROOT))))
publish()
try:
    # Vivado can spill several GiB into the Windows TEMP directory even for an
    # in-memory project. Keep that transient data on D: when it is available;
    # the source tree and reproducible reports remain under ROOT.
    env=os.environ.copy()
    vivado_temp=Path('/mnt/d/cci_vivado_temp')
    if vivado_temp.parent.is_dir():
        vivado_temp.mkdir(parents=True,exist_ok=True)
        env['TEMP']=str(vivado_temp);env['TMP']=str(vivado_temp)
        inherited=[x for x in env.get('WSLENV','').split(':') if x and
                   not x.startswith('TEMP/') and not x.startswith('TMP/')]
        env['WSLENV']=':'.join([*inherited,'TEMP/p','TMP/p'])
    with (out/'console.log').open('w') as log:r=subprocess.run(
        cmd,cwd=ROOT,env=env,stdout=log,stderr=subprocess.STDOUT,timeout=1200)
    log=(out/'console.log').read_text(errors='replace')
    if r.returncode or 'ACE_SYNTH_COMPLETE' not in log or 'ERROR:' in log:raise RuntimeError('ACE synthesis failed; inspect console.log')
    for name in ['ace_cache_snoop_endpoint','ace_snoop_fabric','ace_snoop_controller','ace_snoop_controller_bank','cci_ace_snoop_service','ace_manager_request_controller','ace_manager_request_bank','axi_cci_ace_top_B1','axi_cci_ace_top_P','axi_cci_ace_top_multi_filter']:
        if 'ACE_SYNTH_PASS: '+name not in log or not (out/(name+'_utilization.rpt')).is_file():raise RuntimeError('Missing synthesis result: '+name)
    unchanged(sources);m['status']='PASS';m['artifacts']=artifact_hashes(out)
except (Exception,KeyboardInterrupt) as e:m['status']='FAIL';m['error']=str(e) or type(e).__name__;raise
finally:publish()
