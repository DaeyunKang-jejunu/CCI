"""Fail-closed gates exercised against full Vivado report fixtures and corruptions."""
import json, tempfile, unittest, shutil, re
from pathlib import Path
from results_common import ROOT, parse_hardware, verify_manifest, sha
class ResultGates(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory();self.d=Path(self.tmp.name)
        shutil.copytree(ROOT/'scripts/fixtures/hardware/P',self.d,dirs_exist_ok=True)
    def tearDown(self):self.tmp.cleanup()
    def reject_text(self,name,values):
        for value in values:
            with self.subTest(name=name,value=value[:60]):
                (self.d/name).write_text(value)
                with self.assertRaises(RuntimeError):parse_hardware(self.d)
    def test_real_b0_b1_p(self):
        for v in ['B0','B1','P']:self.assertGreater(parse_hardware(ROOT/'scripts/fixtures/hardware'/v)['FF'],0)
    def test_incomplete_drc(self):
        original=(self.d/'drc.rpt').read_text()
        self.reject_text('drc.rpt',['','garbage','Report DRC',original.split('RTSTAT-10#1')[0],original.replace('Violations found: 1','Violations found: 2')])
    def test_unapproved_drc(self):
        original=(self.d/'drc.rpt').read_text()
        self.reject_text('drc.rpt',[original.replace('Warning','Error'),original.replace('Warning','Critical Warning'),original.replace('RTSTAT-10','NEW-1')])
    def test_incomplete_routing(self):
        original=(self.d/'route_status.rpt').read_text()
        self.reject_text('route_status.rpt',['','# of nets with routing errors........ : 0 :',original.replace('5064','5063',1),original.replace('fully routed nets','missing routed nets')])
    def test_bad_routing(self):
        original=(self.d/'route_status.rpt').read_text()
        self.reject_text('route_status.rpt',[re.sub(r'(routing errors\.+\s*:)\s*0',r'\1 1',original),original+'# of partially routed nets.... : 1 :\n'])
    def test_timing_and_constraint_failures(self):
        original=(self.d/'post_route_timing_summary.rpt').read_text()
        self.reject_text('post_route_timing_summary.rpt',[
            original.replace('0.540','-0.001'),original.replace('0.011','-0.001'),original.replace('1.968','-0.001'),
            original.replace('checking no_clock (0)','checking no_clock (1)'),
            original.replace('checking unconstrained_internal_endpoints (0)','checking unconstrained_internal_endpoints (1)'),
            original.replace('no_clock','missing_clock_check'), 'Design Timing Summary\n 0.1 0.0 0 50 0.1 0.0 0\n'])
    def test_zero_timed_endpoints(self):
        original=(self.d/'post_route_timing_summary.rpt').read_text()
        self.reject_text('post_route_timing_summary.rpt',[original.replace('6261','0')])
    def test_manifest_stale_and_partial(self):
        source=self.d/'source.sv';source.write_text('original RTL')
        evidence=self.d/'result.log';evidence.write_text('PASS')
        m=dict(status='PASS',sources={str(source):sha(source)},artifacts={'result.log':sha(evidence)})
        path=self.d/'manifest.json';path.write_text(json.dumps(m));verify_manifest(path)
        evidence.write_text('FAIL')
        with self.assertRaises(RuntimeError):verify_manifest(path)
        evidence.write_text('PASS');source.write_text('changed RTL')
        with self.assertRaises(RuntimeError):verify_manifest(path)
        source.write_text('original RTL');m['status']='RUNNING';path.write_text(json.dumps(m))
        with self.assertRaises(RuntimeError):verify_manifest(path)
if __name__=='__main__':unittest.main()
