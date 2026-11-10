"""Read-only audit of current manifests and malformed report acceptance.
Run from repository root: python3 reports/review_2026-09-29/latest_audit/reproduce_report_gaps.py
Original reports are never modified.
"""
from pathlib import Path
import json, shutil, sys, tempfile
ROOT=Path(__file__).resolve().parents[3]
sys.path.insert(0,str(ROOT/'scripts'))
from results_common import verify_manifest,parse_hardware
for kind in ['simulation','implementation']:
    pointer=json.loads((ROOT/f'reports/latest_{kind}.json').read_text())
    manifest=verify_manifest(ROOT/pointer['manifest'])
    print(kind,manifest['run_id'],'hash verification PASS')
    if kind=='implementation':implementation=(ROOT/pointer['manifest']).parent
for name,file,content in [('empty_drc','drc.rpt',''),('garbage_drc','drc.rpt','not a DRC report\n'),
                          ('route_errors_only','route_status.rpt','# of nets with routing errors........ : 0 :\n')]:
    with tempfile.TemporaryDirectory() as tmp:
        directory=Path(tmp)
        for source in (implementation/'P').glob('*.rpt'):shutil.copy2(source,directory/source.name)
        (directory/file).write_text(content)
        try:parse_hardware(directory);print(name,'ACCEPTED')
        except Exception as error:print(name,'REJECTED',error)
