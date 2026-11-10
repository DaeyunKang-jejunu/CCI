#!/usr/bin/env python3
"""RCCI_PLAN 14.7 (보완 6): RTL performance sweep for thesis section 5.2.

Builds the ACE integration TB in RCCI_PERF mode for B1-T{1,2,4,8,16} and
R-E16-RW{w}-WE16-WW{w} (w=1,2,4,8,16), plus CPU-reserved-token variants, and runs:
  A. transfer size x T / N_fly           (read, write; no dirty, no CPU)
  B. dirty ratio 0/25/50/100 %           (256 lines)
  C. CPU ReadShared stream none/non-conflicting/conflicting (256 lines)
Every run checks data (read data / final memory) inside the TB. Results go to
reports/rcci_perf/perf_results.csv with E, read/write N_fly, T, manager contexts,
S and Q as separate columns. The C++ model (global window per direction) is then
run with RTL-fitted latencies for the same points and the error is tabulated.
Simulation-only counters are read through TB hierarchy; nothing is synthesized.
"""
import csv,json,re,shutil,subprocess
from concurrent.futures import ThreadPoolExecutor
from datetime import datetime,timezone
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
MODEL=ROOT.parent/'CCI-simulation'/'rcci_model'
BUILD=Path('/tmp/rcci_perf')
OUT=ROOT/'reports'/'rcci_perf'
S=4;Q=16;MGR_CTX=4;TOKENS=16;CACHE_LINES=256
SIZES=(1,8,64,256);DIRTY=(0,25,50,100);CPU=(0,1,2)

def configs():
    cfg={}
    for t in (1,2,4,8,16):
        cfg[f'B1-T{t}']=dict(design='B1',E=t,rw=t,ww=t,trackers=t,res=0,
            params=['-GUSE_RANGE=0',f'-GLINE_TRACKER_ENTRIES={t}',f'-GM1_READ_CONTEXTS={t}',
                    f'-GM1_WRITE_CONTEXTS={t}',f'-GRANGE_READ_WINDOW={t}',f'-GRANGE_WRITE_WINDOW={t}'])
    for w in (1,2,4,8,16):
        cfg[f'R-E16-RW{w}-WE16-WW{w}']=dict(design='rCCI',E=16,rw=w,ww=w,trackers=16,res=0,
            params=['-GUSE_RANGE=1','-GLINE_TRACKER_ENTRIES=16','-GM1_READ_CONTEXTS=16',
                    '-GM1_WRITE_CONTEXTS=16',f'-GRANGE_READ_WINDOW={w}',f'-GRANGE_WRITE_WINDOW={w}'])
    for name in ('B1-T16','R-E16-RW16-WE16-WW16'):
        c=dict(cfg[name]);c['res']=1;c['params']=c['params']+['-GCPU_RESERVED_TOKENS=1']
        cfg[name+'-RSV1']=c
    return cfg

def build(name,c):
    mdir=BUILD/name
    cmd=['verilator','--binary','--timing','--assert','-Wno-fatal','-j','4',
         '-MAKEFLAGS','OPT_FAST=-O1 OPT_SLOW=-O0','--top-module','tb_cci_ace_integration',
         '--Mdir',str(mdir),'-f','scripts/rtl.f','-f','scripts/ace.f','tb/axi_memory_slave.sv',
         'tb/tb_cci_ace_integration.sv','+define+RCCI_PERF',f'-GCACHE_LINES={CACHE_LINES}',
         f'-GMEM_OUTSTANDING={Q}',f'-GSNOOP_CONTEXTS={S}',f'-GCOMMON_ADMISSION_TOKENS={TOKENS}',*c['params']]
    p=subprocess.run(cmd,cwd=ROOT,text=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
    (OUT/'logs'/f'build_{name}.log').write_text(p.stdout)
    if p.returncode or 'Built from' not in p.stdout:raise RuntimeError(f'build {name} failed\n{p.stdout[-3000:]}')
    return mdir/'Vtb_cci_ace_integration'

def run(job):
    name,binary,c,sweep,op,lines,dirty,cpu=job
    tag=f'{name}_{sweep}_op{op}_n{lines}_d{dirty}_c{cpu}'
    p=subprocess.run([str(binary),f'+perf_op={op}',f'+perf_lines={lines}',f'+perf_dirty={dirty}',
                      f'+perf_cpu={cpu}'],cwd=ROOT,text=True,stdout=subprocess.PIPE,
                     stderr=subprocess.STDOUT,timeout=600)
    (OUT/'logs'/f'{tag}.log').write_text(p.stdout)
    m=re.search(r'PERF_RESULT (.*)',p.stdout)
    if p.returncode or not m or 'PASS perf' not in p.stdout:
        raise RuntimeError(f'{tag} failed\n{p.stdout[-3000:]}')
    kv=dict(re.findall(r'(\w+)=\s*(\S+)',m.group(1)))  # %s pads the design name
    cyc=int(kv['cycles'])
    row=dict(config=name,sweep=sweep,design=c['design'],op='read' if op==0 else 'write',lines=lines,
             dirty_pct=dirty,cpu_load=('none','nonconflict','conflict')[cpu],
             E=c['E'],read_nfly=c['rw'],write_nfly=c['ww'],line_trackers=c['trackers'],
             tokens_T=TOKENS,cpu_reserved=c['res'],ace_manager_ctx=MGR_CTX,snoop_ctx_S=S,mem_outstanding_Q=Q,
             cycles=cyc,first_data=int(kv['first']),throughput_lines_per_cycle=round(lines/cyc,6),
             cycles_per_line=round(cyc/lines,3),
             avg_entries=round(int(kv['ent_sum'])/max(cyc,1),3),max_entries=int(kv['ent_max']),
             avg_line_slots=round(int(kv['trk_sum'])/max(cyc,1),3),max_line_slots=int(kv['trk_max']),
             dma_requests=int(kv['dma_req']),token_stall=int(kv['tok_stall']),
             depth_stall=int(kv['rd_depth_stall'])+int(kv['wr_depth_stall']),
             ace_ctx_stall=int(kv['ace_ctx_stall']),addr_hazard_stall=int(kv['addr_stall']),
             resource_stall=int(kv['res_stall']),cpu_requests=int(kv['cpu_n']),
             cpu_avg_latency=round(int(kv['cpu_lat_sum'])/int(kv['cpu_n']),2) if int(kv['cpu_n']) else '',
             cpu_max_latency=int(kv['cpu_lat_max']) if int(kv['cpu_n']) else '',
             cpu_avg_accept_wait=round(int(kv['cpu_acc_sum'])/int(kv['cpu_n']),2) if int(kv['cpu_n']) else '')
    return row

def cpp(design,op,lines,tokens,window,lm,lw,lc=2):
    cmd=[str(MODEL/'rcci_model'),'--design','b1' if design=='B1' else 'rcci','--op',op,
         '--streams','1','--lines',str(lines),'--tokens',str(tokens),'--window',str(window),
         '--snoop-contexts',str(S),'--mem-outstanding','1','--dma-outstanding',str(tokens),
         '--lm',str(lm),'--lw',str(lw),'--lc',str(lc),'--window-scope','global']
    out=subprocess.run(cmd,text=True,capture_output=True,check=True).stdout.strip().split('\n')
    return dict(zip(out[0].split(','),out[1].split(',')))

def plots(rows,sweep):
    import matplotlib;matplotlib.use('Agg')
    import matplotlib.pyplot as plt
    plt.rcParams.update({'font.family':'DejaVu Sans','font.size':10})
    def sel(**k):return [r for r in rows if all(r[a]==b for a,b in k.items())]
    for op in ('read','write'):
        fig,ax=plt.subplots(figsize=(5.2,3.4))
        for design,mk,key in (('B1','o','tokens'),('rCCI','s','nfly')):
            pts=sorted(((r['E'] if design=='B1' else (r['read_nfly'] if op=='read' else r['write_nfly'])),
                        r['throughput_lines_per_cycle']) for r in sel(sweep='A',design=design,op=op,lines=256))
            ax.plot([p[0] for p in pts],[p[1] for p in pts],marker=mk,
                    label='B1 (T entries)' if design=='B1' else 'rCCI (E=16, N_fly)')
        ax.set_xscale('log',base=2);ax.set_xlabel('T (B1) / N_fly (rCCI)');ax.set_ylabel('throughput [lines/cycle]')
        ax.set_title(f'256-line {op}');ax.grid(alpha=.3);ax.legend()
        fig.tight_layout();fig.savefig(OUT/f'fig_throughput_{op}.png',dpi=200);plt.close(fig)
    fig,ax=plt.subplots(figsize=(5.2,3.4))
    for cfg,lab in (('B1-T16','B1-T16'),('R-E16-RW16-WE16-WW16','rCCI E16 N_fly16')):
        pts=[(r['lines'],r['avg_entries']) for r in sel(sweep='A',config=cfg,op='read')]
        ax.plot([p[0] for p in pts],[p[1] for p in pts],marker='o',label=lab)
    ax.set_xscale('log',base=2);ax.set_xlabel('transfer size [lines]');ax.set_ylabel('avg. occupied entries')
    ax.set_title('Entry occupancy (read)');ax.grid(alpha=.3);ax.legend()
    fig.tight_layout();fig.savefig(OUT/'fig_entry_occupancy.png',dpi=200);plt.close(fig)
    fig,ax=plt.subplots(figsize=(5.6,3.4))
    cfgs=[('B1-T16','B1-T16'),('B1-T16-RSV1','B1-T16 rsv1'),('R-E16-RW16-WE16-WW16','rCCI'),
          ('R-E16-RW16-WE16-WW16-RSV1','rCCI rsv1')]
    import numpy as np
    x=np.arange(2);wd=.2
    for i,(cfg,lab) in enumerate(cfgs):
        v=[next((r['cpu_avg_latency'] for r in sel(sweep='C',config=cfg,op='read',cpu_load=l)),0) or 0
           for l in ('nonconflict','conflict')]
        ax.bar(x+i*wd-1.5*wd,v,wd,label=lab)
    ax.set_xticks(x,['non-conflicting','conflicting']);ax.set_ylabel('CPU ReadShared latency [cycles]')
    ax.set_title('CPU latency during a 256-line DMA read');ax.grid(axis='y',alpha=.3);ax.legend(fontsize=8)
    fig.tight_layout();fig.savefig(OUT/'fig_cpu_latency.png',dpi=200);plt.close(fig)
    fig,ax=plt.subplots(figsize=(5.2,3.4))
    for cfg,lab in (('B1-T16','B1-T16'),('R-E16-RW16-WE16-WW16','rCCI')):
        for op,ls in (('read','-'),('write','--')):
            pts=[(r['dirty_pct'],r['cycles_per_line']) for r in sel(sweep='B',config=cfg,op=op)]
            ax.plot([p[0] for p in pts],[p[1] for p in pts],ls,marker='o',label=f'{lab} {op}')
    ax.set_xlabel('dirty lines in CPU cache [%]');ax.set_ylabel('cycles per line');ax.set_title('Dirty ratio (256 lines)')
    ax.grid(alpha=.3);ax.legend(fontsize=8);fig.tight_layout();fig.savefig(OUT/'fig_dirty_ratio.png',dpi=200);plt.close(fig)
    fig,axs=plt.subplots(1,2,figsize=(8.4,3.4),sharey=True)
    for ax,op in zip(axs,('read','write')):
        for design,w,mk in (('B1','', 'o'),('rCCI',16,'s')):
            pts=[(x['tokens_T'],x['throughput']) for x in sweep if x['design']==design and x['op']==op and
                 x['streams']==4 and x['snoop_ctx_S']==4 and x['mem_outstanding_Q']==16 and (design=='B1' or x['nfly']==w)]
            ax.plot([p[0] for p in pts],[p[1] for p in pts],marker=mk,label='B1' if design=='B1' else 'rCCI (N_fly=16)')
        ax.set_xscale('log',base=2);ax.set_xlabel('shared admission tokens T');ax.set_title(f'4 streams x 1 MB {op} (C++)')
        ax.grid(alpha=.3)
    axs[0].set_ylabel('throughput [lines/cycle]');axs[0].legend()
    fig.tight_layout();fig.savefig(OUT/'fig_cpp_streams_tokens.png',dpi=200);plt.close(fig)

def main():
    if BUILD.exists():shutil.rmtree(BUILD)
    BUILD.mkdir(parents=True)
    # PERF_RESULTS.md is written by hand and must survive a re-measurement.
    if OUT.exists():
        for p in OUT.iterdir():
            if p.is_dir():shutil.rmtree(p)
            elif p.suffix!='.md':p.unlink()
    (OUT/'logs').mkdir(parents=True)
    cfg=configs()
    with ThreadPoolExecutor(4) as pool:
        bins=dict(zip(cfg,pool.map(lambda n:build(n,cfg[n]),cfg)))
    jobs=[]
    for name,c in cfg.items():
        if name.endswith('RSV1'):continue
        for op in (0,1):
            for n in SIZES:jobs.append((name,bins[name],c,'A',op,n,0,0))
    for name in ('B1-T4','B1-T16','R-E16-RW4-WE16-WW4','R-E16-RW16-WE16-WW16'):
        for op in (0,1):
            for d in DIRTY:jobs.append((name,bins[name],cfg[name],'B',op,256,d,0))
    for name in ('B1-T4','B1-T16','B1-T16-RSV1','R-E16-RW4-WE16-WW4','R-E16-RW16-WE16-WW16','R-E16-RW16-WE16-WW16-RSV1'):
        for op in (0,1):
            for cpu in CPU:jobs.append((name,bins[name],cfg[name],'C',op,256,0,cpu))
    with ThreadPoolExecutor(8) as pool:rows=list(pool.map(run,jobs))
    rows.sort(key=lambda r:(r['sweep'],r['config'],r['op'],r['lines'],r['dirty_pct'],r['cpu_load']))
    with (OUT/'perf_results.csv').open('w',newline='') as f:
        w=csv.DictWriter(f,fieldnames=list(rows[0]));w.writeheader();w.writerows(rows)
    # C++ model with RTL-fitted latencies. The TB memory serves one burst at a time
    # (C++ Q=1, lm fitted from the 256-line B1-T16 miss rate). The fixed per-line
    # control latency of the RTL path (admission, service status, core bus) is
    # fitted as lc (and lw for writes) by a small grid search over all 64-line points.
    subprocess.run(['make','-s'],cwd=MODEL,check=True)
    def find(cfgname,op,lines):return next(r for r in rows if r['sweep']=='A' and r['config']==cfgname and r['op']==op and r['lines']==lines)
    lm=max(1,round(find('B1-T16','read',256)['cycles_per_line']-4))
    pts=[r for r in rows if r['sweep']=='A' and r['lines']==64]
    def point_args(r):
        tokens=r['E']
        window=(r['read_nfly'] if r['op']=='read' else r['write_nfly']) if r['design']=='rCCI' else 1
        return tokens,window
    def err_for(op,lc,lw):
        e=[]
        for r in pts:
            if r['op']!=op:continue
            t,w=point_args(r)
            m=cpp(r['design'],op,64,t,w,lm,lw,lc)
            e.append(abs(int(m['cycles'])-r['cycles'])/r['cycles'])
        return sum(e)/len(e)
    best={}
    best['read']=min(((err_for('read',lc,1),lc,1) for lc in range(0,17)))
    best['write']=min(((err_for('write',lc,lw),lc,lw) for lc in range(0,13) for lw in range(1,13)))
    cmp=[]
    for r in pts:
        _,lc,lw=best[r['op']];t,w=point_args(r)
        m=cpp(r['design'],r['op'],64,t,w,lm,lw,lc)
        err=(int(m['cycles'])-r['cycles'])/r['cycles']*100
        cmp.append(dict(config=r['config'],op=r['op'],lines=64,rtl_cycles=r['cycles'],
                        cpp_cycles=int(m['cycles']),error_pct=round(err,2),lm=lm,lc=lc,lw=lw))
    with (OUT/'cpp_vs_rtl_64lines.csv').open('w',newline='') as f:
        w=csv.DictWriter(f,fieldnames=list(cmp[0]));w.writeheader();w.writerows(cmp)
    lw=best['write'][2]
    # MB-scale C++ sweep (RCCI_PLAN 14.7-6) with the fitted control latencies and a
    # pipelined memory (Q outstanding): 1 MB per stream, shared admission tokens T.
    lc_r=best['read'][1];lc_w=best['write'][1]
    def cpp_full(design,op,streams,tokens,window,sctx,q):
        cmd=[str(MODEL/'rcci_model'),'--design','b1' if design=='B1' else 'rcci','--op',op,
             '--streams',str(streams),'--lines','16384','--tokens',str(tokens),'--window',str(window),
             '--snoop-contexts',str(sctx),'--mem-outstanding',str(q),'--dma-outstanding',str(max(tokens,streams)),
             '--lm',str(lm),'--lw',str(lw),'--lc',str(lc_r if op=='read' else lc_w),'--window-scope','global']
        out=subprocess.run(cmd,text=True,capture_output=True,check=True).stdout.strip().split('\n')
        return dict(zip(out[0].split(','),out[1].split(',')))
    sweep=[]
    jobs2=[]
    for op in ('read','write'):
        for streams in (1,4):
            for t in (4,8,16):
                for sctx in (1,2,4,8):
                    for q in (4,8,16):
                        jobs2.append(('B1',op,streams,t,1,sctx,q))
                        for w in (4,8,16):jobs2.append(('rCCI',op,streams,t,w,sctx,q))
    with ThreadPoolExecutor(8) as pool:
        outs=list(pool.map(lambda j:(j,cpp_full(*j)),jobs2))
    for (design,op,streams,t,w,sctx,q),m in outs:
        sweep.append(dict(design=design,op=op,streams=streams,tokens_T=t,nfly=(w if design=='rCCI' else ''),
                          snoop_ctx_S=sctx,mem_outstanding_Q=q,lines_per_stream=16384,cycles=int(m['cycles']),
                          throughput=float(m['throughput']),avg_tokens=float(m['avg_tokens']),
                          token_wait_cycles=int(m['token_wait_cycles'])))
    with (OUT/'cpp_sweep_1MB.csv').open('w',newline='') as f:
        w2=csv.DictWriter(f,fieldnames=list(sweep[0]));w2.writeheader();w2.writerows(sweep)
    plots(rows,sweep)
    summary=dict(schema='rcci-perf-v1',generated_at_utc=datetime.now(timezone.utc).isoformat(),
                 runs=len(rows),configs=list(cfg),fitted=dict(lm=lm,read_lc=best['read'][1],write_lc=best['write'][1],write_lw=best['write'][2],
                             read_mean_abs_err=round(best['read'][0]*100,2),write_mean_abs_err=round(best['write'][0]*100,2),mem_outstanding_cpp=1),
                 environment=dict(S=S,Q_tb=Q,manager_contexts=MGR_CTX,tokens=TOKENS,cache_lines=CACHE_LINES,
                                  memory_resp_latency=3,memory='TB slave serves one burst at a time'))
    (OUT/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False))
    print(f'perf runs={len(rows)} cpp_points={len(cmp)} fitted={summary["fitted"]}')

if __name__=='__main__':main()
