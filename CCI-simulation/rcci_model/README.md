# rCCI stage-1 performance model

This directory is an independent, cycle-stepped model for `RCCI_PLAN.md` stage 1.
It intentionally does not modify the legacy monolithic `CBUS`/`CTracker` simulator:
that simulator models the older setup/page-mask proposal, while this model represents
the down-count range request, its internal line window, and the shared resources in
the current plan.

The model compares conventional B1 (one admission token and one DMA request per line)
with rCCI (one token and one DMA request per range, plus an internal `W`-line window).
Both designs share the same snoop-context count `S`, memory-outstanding count `Q`, and
four-cycle 128-bit line data channel. Read hits retain a service context until ordered
R output; read misses release it after `Ls + Lc`. Writes run MakeInvalid, transfer four
W beats, and wait `Lw` cycles for B. `--merge-misses` optionally combines up to four
consecutive ready misses into one memory request.

Build and verify:

```sh
make test
./rcci_model --design rcci --op read --streams 4 --window 8 --lc 2
```

The CSV result contains throughput, latency, average/maximum resource occupancy,
admission-wait cycles, and memory/snoop request counts. `run_stage1.py` in the RTL
repository compiles this model, imports the measured RTL latency JSON, runs the
documented sweeps, and generates the result tables and SVG plots.
