#!/usr/bin/env python3
"""Classify unexercised Verilator toggle points by signal role.

Rules are ordered; the first match wins. Anything left over is reported as
`unclassified` so that a new kind of missed toggle is visible instead of hidden.
"""
import json, re, sys
from collections import Counter, defaultdict
from pathlib import Path

RANGE_ONLY=r'(setup_|range_|decoded_|pending|classify_range|activate|admission_freeze|invalidating|^path\[|write_release|range_active|allow_m1_ar|ctx\.|done_mask|wr_issued_mask)'
RULES=[
    ('range_path_tied_off_in_B1','B1 only: USE_RANGE=0 ties the range setup/context/AC path to constants',lambda g,b:g.startswith('b1') and re.search(RANGE_ONLY,b)),
    ('error_flag_negative_only','error flags; raised only by negative/protocol-error runs that are not instrumented',lambda g,b:re.search(r'protocol_error_|setup_error',b)),
    ('response_okay_only','RESP bits; instrumented runs return OKAY only (error responses are negative runs)',lambda g,b:re.search(r'RESP|resp',b)),
    ('payload_data','data payload bits; coherence control never inspects data',lambda g,b:re.search(r'DATA',b)),
    ('fixed_protocol_field','LEN/LAST/ID/SNOOP/source fields fixed by the supported transaction subset',lambda g,b:re.search(r'LEN|LAST|len\b|len\[|_ID|ID\[|\.id\[|snoop|SNOOP|source',b)),
    ('address_outside_window','address/page/line bits above or outside the exercised address window',lambda g,b:re.search(r'ADDR|addr|page|probe_line|payload',b)),
    ('line_mask_unused_lines','line-mask bits of lines never covered by a range in instrumented runs',lambda g,b:re.search(r'mask',b)),
    ('occupancy_parameter_dependent','full/count/index MSBs only reached with smaller depths or larger bursts than the D16/T16/F16 instrumented build',lambda g,b:re.search(r'full|count|ingress_idx|ac_fifo|route|rd_both|_head\[|_tail\[',b)),
    ('reset_single_assertion','reset is asserted once per run, so only one edge after release is seen',lambda g,b:b=='ARESETn'),
    ('focused_tb_scope','isolated FIFO TB: arbitration lock/state paths belong to other benches',lambda g,b:g.startswith('axi_fifo') and re.search(r'grant_locked|_state|wr_both',b)),
    ('tb_constant_handshake','handshake inputs the TB holds constant (always-ready, always-probing)',lambda g,b:re.search(r'READY$|probe_valid',b)),
]

def classify(group,entries):
    cats=Counter();signals=defaultdict(Counter);unclassified=Counter()
    for e in entries:
        if e.get('t')!='toggle':continue
        base=re.sub(r'\[\d+\]','[]',e['o'].split(':')[0])
        for name,_,rule in RULES:
            if rule(group,base):cats[name]+=1;signals[name][base]+=1;break
        else:unclassified[base]+=1
    return dict(total=sum(cats.values())+sum(unclassified.values()),categories=dict(cats),
                top_signals={k:dict(v.most_common(8)) for k,v in signals.items()},unclassified=dict(unclassified))

def run(directory):
    directory=Path(directory);result=dict(rules={n:d for n,d,_ in RULES},groups={})
    for path in sorted(directory.glob('*.uncovered.json')):
        group=path.name[:-len('.uncovered.json')]
        result['groups'][group]=classify(group,json.loads(path.read_text()))
    return result

if __name__=='__main__':
    r=run(sys.argv[1]);print(json.dumps({g:(v['total'],v['categories'],v['unclassified']) for g,v in r['groups'].items()},indent=1))
