#!/usr/bin/env python3
"""Run RCCI_PLAN stage-1 RTL measurement and C++ performance sweeps."""
import csv
import io
import json
import subprocess
from collections import defaultdict
from datetime import datetime, timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
MODEL_DIR=ROOT.parent/'CCI-simulation'/'rcci_model'
MODEL=MODEL_DIR/'rcci_model'
OUT=ROOT/'reports'/'rcci_stage1'

def checked(cmd,cwd=ROOT):
    p=subprocess.run([str(x) for x in cmd],cwd=cwd,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT)
    if p.returncode: raise RuntimeError(f"command failed: {' '.join(map(str,cmd))}\n{p.stdout[-5000:]}")
    return p.stdout

def simulate(**kw):
    args=[]
    for key,value in kw.items():
        flag='--'+key.replace('_','-')
        if isinstance(value,bool):
            if value: args.append(flag)
        else: args.extend([flag,str(value)])
    text=checked([MODEL,*args],MODEL_DIR)
    return next(csv.DictReader(io.StringIO(text)))

def add(rows,axis,x,**cfg):
    row=simulate(**cfg)
    row['axis']=axis;row['x']=str(x)
    rows.append(row)

def plot(rows):
    import matplotlib
    matplotlib.use('Agg')
    import matplotlib.pyplot as plt

    def select(axis,**where):
        return sorted((r for r in rows if r['axis']==axis and all(r[k]==str(v) for k,v in where.items())),
                      key=lambda r:float(r['x']))
    plt.rcParams.update({'font.size':9,'axes.grid':True,'grid.alpha':.25,'svg.fonttype':'none'})

    fig,axes=plt.subplots(1,2,figsize=(9.2,3.6),sharey=True)
    for ax,op in zip(axes,('read','write')):
        for design,style in (('b1','o-'),('rcci','s-')):
            data=select('capacity',design=design,op=op)
            ax.plot([int(r['x']) for r in data],[float(r['throughput']) for r in data],style,label=design.upper())
        ax.axhline(.25,color='black',lw=.8,ls='--',label='128-bit bus limit')
        ax.set(title=op.capitalize(),xlabel='B1 tokens T / rCCI window W',ylabel='Lines / cycle')
        ax.set_xticks([1,2,4,8,16]);ax.legend()
    fig.tight_layout();fig.savefig(OUT/'throughput_capacity.svg');plt.close(fig)

    fig,axes=plt.subplots(1,2,figsize=(9.2,3.6),sharey=True)
    for ax,op in zip(axes,('read','write')):
        for design,style in (('b1','o-'),('rcci','s-')):
            data=select('lc',design=design,op=op)
            ax.plot([int(r['x']) for r in data],[float(r['throughput']) for r in data],style,label=design.upper())
        ax.set(title=op.capitalize(),xlabel='Control latency Lc (cycles)',ylabel='Lines / cycle')
        ax.set_xticks([0,1,2,4]);ax.legend()
    fig.tight_layout();fig.savefig(OUT/'lc_sensitivity.svg');plt.close(fig)

    fig,axes=plt.subplots(1,3,figsize=(12,3.5),sharey=True)
    for ax,axis,label in zip(axes,('snoop_contexts','mem_outstanding','dma_outstanding'),
                             ('Snoop contexts S','Memory outstanding Q','DMA outstanding')):
        for design,style in (('b1','o-'),('rcci','s-')):
            data=select(axis,design=design)
            ax.plot([int(r['x']) for r in data],[float(r['throughput']) for r in data],style,label=design.upper())
        ax.set(xlabel=label,ylabel='Read lines / cycle');ax.legend()
    fig.tight_layout();fig.savefig(OUT/'resource_sweeps.svg');plt.close(fig)

    fig,axes=plt.subplots(1,2,figsize=(9.2,3.6),sharey=True)
    for ax,axis,title in zip(axes,('hit','dirty'),('Read hit ratio','Write dirty ratio (100% hit)')):
        for design,style in (('b1','o-'),('rcci','s-')):
            data=select(axis,design=design)
            ax.plot([int(r['x']) for r in data],[float(r['throughput']) for r in data],style,label=design.upper())
        ax.set(title=title,xlabel='Percent',ylabel='Lines / cycle');ax.legend()
    fig.tight_layout();fig.savefig(OUT/'hit_dirty.svg');plt.close(fig)

def main():
    OUT.mkdir(parents=True,exist_ok=True)
    print(checked(['python3','scripts/measure_rcci_stage1.py']))
    print(checked(['make','clean','test'],MODEL_DIR))
    latency=json.loads((OUT/'rtl_latency.json').read_text())
    stage3_latency=ROOT/'reports'/'rcci_stage3'/'latency.json'
    measured_lc=json.loads(stage3_latency.read_text())['lc_status_cycles'] if stage3_latency.exists() else 2
    common=dict(lines=1024,tokens=8,window=8,snoop_contexts=4,mem_outstanding=16,
                dma_outstanding=16,streams=1,hit_percent=0,dirty_percent=0,
                ls_nodata=latency['ls_nodata'],ls_data=latency['ls_data'],
                lc=measured_lc,lm=latency['lm'],lw=latency['lw'])
    rows=[]
    for op in ('read','write'):
        for design in ('b1','rcci'):
            for n in (1,2,4,8,16):
                cfg={**common,'design':design,'op':op,'lines':2048,'tokens':n,'window':n}
                add(rows,'capacity',n,**cfg)
            for lc in (0,1,2,4):
                add(rows,'lc',lc,**{**common,'design':design,'op':op,'lc':lc,'tokens':1,'window':1})
    for design in ('b1','rcci'):
        for streams in (1,2,4,8):
            add(rows,'streams',streams,**{**common,'design':design,'op':'read','streams':streams,'lines':512})
        for s in (1,2,4,8):
            add(rows,'snoop_contexts',s,**{**common,'design':design,'op':'read','snoop_contexts':s,
                                           'tokens':16,'window':16})
        for q in (4,8,16):
            add(rows,'mem_outstanding',q,**{**common,'design':design,'op':'read','mem_outstanding':q,
                                            'tokens':16,'window':16})
        for dma in (1,2,4,8,16):
            add(rows,'dma_outstanding',dma,**{**common,'design':design,'op':'read','dma_outstanding':dma,
                                              'tokens':16,'window':16})
        for hit in (0,25,50,100):
            add(rows,'hit',hit,**{**common,'design':design,'op':'read','hit_percent':hit})
        for dirty in (0,25,50,100):
            add(rows,'dirty',dirty,**{**common,'design':design,'op':'write','hit_percent':100,
                                      'dirty_percent':dirty})
        for merge in (False,True):
            add(rows,'merge_misses',int(merge),**{**common,'design':design,'op':'read',
                                                  'merge_misses':merge,'window':16,'tokens':16})

    # Preserve the model's stable CSV column order after the two sweep labels.
    fields=['axis','x']+[k for k in rows[0] if k not in ('axis','x')]
    with (OUT/'stage1_results.csv').open('w',newline='') as f:
        w=csv.DictWriter(f,fieldnames=fields);w.writeheader();w.writerows(rows)

    # Analytical check is restricted to the all-miss capacity sweep described by §2.
    errors=[]
    for r in rows:
        if r['axis']=='capacity' and r['op']=='read':
            measured=float(r['throughput']);bound=float(r['analytic_read_miss'])
            errors.append(abs(measured-bound)/bound)
            if measured>bound+1e-8: raise RuntimeError('measured throughput exceeded analytical bound')
    plot(rows)
    summary={
        'schema':'rcci-stage1-results-v1','generated_at_utc':datetime.now(timezone.utc).isoformat(),
        'rtl_latency':{**latency,'lc':measured_lc},'rows':len(rows),
        'max_relative_error_all_miss_capacity':max(errors),
        'model_directory':str(MODEL_DIR),
        'plots':['throughput_capacity.svg','lc_sensitivity.svg','resource_sweeps.svg','hit_dirty.svg']
    }
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n')
    print(json.dumps(summary,indent=2,ensure_ascii=False))

if __name__=='__main__': main()
