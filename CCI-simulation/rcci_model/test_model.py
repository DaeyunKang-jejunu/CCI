#!/usr/bin/env python3
import csv
import io
import subprocess
from pathlib import Path

HERE=Path(__file__).resolve().parent
BIN=HERE/'rcci_model'

def run(*args):
    p=subprocess.run([str(BIN),*map(str,args)],text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.PIPE,check=True)
    return next(csv.DictReader(io.StringIO(p.stdout)))

def f(row,key): return float(row[key])

def main():
    # Long all-miss runs must remain under the analytical bound and converge to it.
    for design,slots in [('b1',4),('rcci',4)]:
        row=run('--design',design,'--op','read','--lines',4096,'--tokens',slots,
                '--window',slots,'--snoop-contexts',4,'--mem-outstanding',16,
                '--dma-outstanding',16,'--hit-percent',0,'--lc',1)
        measured=f(row,'throughput');bound=f(row,'analytic_read_miss')
        assert measured<=bound+1e-9,(design,measured,bound)
        assert measured>=bound*0.98,(design,measured,bound)
    service_limited=run('--design','rcci','--op','read','--lines',4096,'--window',16,
                        '--snoop-contexts',1,'--lc',4,'--mem-outstanding',16)
    assert abs(f(service_limited,'throughput')-0.2)<0.002
    # W=1 is serialized; widening the range window must improve an all-miss read.
    a=run('--design','rcci','--lines',512,'--window',1)
    b=run('--design','rcci','--lines',512,'--window',8)
    assert f(b,'throughput')>f(a,'throughput')*1.5
    # A range consumes one token while B1 consumes one token per active line.
    r=run('--design','rcci','--streams',1,'--lines',128,'--tokens',8,'--window',8)
    q=run('--design','b1','--streams',1,'--lines',128,'--tokens',8,'--window',8)
    assert int(r['max_tokens'])==1
    assert int(q['max_tokens'])==8
    # Coalescing must reduce AR requests without changing completed line count.
    merged=run('--design','rcci','--lines',256,'--window',16,'--merge-misses')
    plain=run('--design','rcci','--lines',256,'--window',16)
    assert int(merged['mem_requests'])<int(plain['mem_requests'])
    assert int(merged['snoop_requests'])==int(plain['snoop_requests'])==256
    # Waiting for an earlier B must not prevent the next line's W transfer.
    write=run('--design','rcci','--op','write','--lines',1024,'--window',2,
              '--tokens',2,'--lw',2,'--lc',1)
    assert f(write,'throughput')>0.24
    assert int(run('--lines',8)['lc'])==2
    print('PASS rCCI stage1 C++ model invariants and analytical bound')

if __name__=='__main__': main()
