# CCI_SV — RTL Prototype for CCI Memcpy Hardware-Cost Evaluation

## Purpose

Synthesizable SystemVerilog RTL estimating the hardware cost of a proposed CCI memcpy optimization.

Two cost models are kept separate:

| Model | Comparison | Metric |
|---|---|---|
| Algorithm comparison | `cci_baseline_system` vs `cci_memcpy_system` | Range-based vs per-line tracking for a 4KB memcpy |
| Realistic overhead | `cci_existing_system` vs `cci_augmented_system` | Incremental cost of adding the proposed path to an existing CCI tracking structure |

The realistic overhead comparison (`augmented − existing`) is the primary metric
for patent hardware-cost claims.

---

## Architecture

The augmented system routes requests by type:

```text
                 req_valid / req_type / address / mask
                                |
                         request classifier
                                |
            +-------------------+-------------------+
            |                                       |
   existing normal tracker                memcpy range tracker
   baseline_line_tracker(N=16)           cci_memcpy_range_unit
            |                                       |
            +-------------------+-------------------+
                      merged probe_hazard

                 shared cci_write_completion_tracker
                                |
                      write completion demux
                 normal_wr_done              memcpy_wr_done
```

Both trackers may be active simultaneously. Each incoming request is routed to
exactly one tracker via `req_type`.

---

## RTL Files (`rtl/`)

### Package

| File | Role |
|---|---|
| `cci_memcpy_pkg.sv` | Parameters, types (`cci_req_type_e`, `cci_wr_track_e`, `cci_range_entry_t`), helpers (`cci_popcount`, `cci_page_relative_mask`, etc.) |

### Proposed memcpy path

| File | Role |
|---|---|
| `cci_memcpy_req_decoder.sv` | Decodes (base_addr, line_count, mask) → page-relative `dec_line_mask`; drives `req_error` when mask is zero or unaligned |
| `cci_range_rim_tracker.sv` | Single range entry FSM: INVALIDATING → TRACKING → DONE |
| `cci_ac_range_gen.sv` | Issues AC MakeInvalid LSB-first; `ac_gen_done` on last accepted AC |
| `cci_snoop_response_tracker.sv` | Counts ACs/CRs; `snoop_done` when all answered; CR-before-AC `$fatal` in simulation |
| `cci_range_hazard_checker.sv` | Combinational probe hazard check against the active range entry |
| `cci_memcpy_range_unit.sv` | Wrapper: connects the five modules above; `req_ready = req_error \|\| tracker_req_ready` |

### Normal tracking path

| File | Role |
|---|---|
| `baseline_line_tracker.sv` | Per-line CAM tracker; `N_ENTRIES` parameter (default 64); `req_error` output for zero/overflow mask |

### Shared infrastructure

| File | Role |
|---|---|
| `cci_write_completion_tracker.sv` | Per-AXI-ID circular FIFO; stores `aw_track_type` per entry; `wr_done_valid` fires only for non-`CCI_WR_NONE` entries |

### System tops

| File | Top module | Used for |
|---|---|---|
| `cci_memcpy_system.sv` | `cci_memcpy_system` | Algorithm comparison (proposed design) |
| `cci_baseline_system.sv` | `cci_baseline_system` | Algorithm comparison (baseline N=64) |
| `cci_existing_system.sv` | `cci_existing_system` | Realistic baseline (normal path only, N=16) |
| `cci_augmented_system.sv` | `cci_augmented_system` | Realistic measurement (existing + proposed, N=16) |

---

## Simulation

```bash
make sim_all                  # 11 TBs, 0 failures (Verilator default)
make TRACE=1 sim_augmented    # with FST waveform output
make sim_overflow             # expected-$warning overflow test (NOT in sim_all)
make sim_snoop_order          # negative test: CR before AC → $fatal (NOT in sim_all)
make SIM=xsim sim_all         # Xilinx xsim flow
```

### Testbenches (`tb/`)

| Testbench | Checks | Notes |
|---|---:|---|
| `tb_cci_memcpy_range_unit.sv` | 50 | Integration T01–T09 incl. unaligned address |
| `tb_cci_range_rim_tracker.sv` | 29 | FSM states |
| `tb_cci_ac_range_gen.sv` | 43 | AC sequencing, backpressure |
| `tb_baseline_line_tracker.sv` | 48 | CAM allocation, req_error |
| `tb_cci_memcpy_req_decoder.sv` | 15 | Decoder |
| `tb_cci_write_completion_tracker.sv` | 123 | FIFO ordering, `aw_full`, randomized ID test |
| `tb_cci_memcpy_system.sv` | 73 | Proposed system, overflow/underflow sticky |
| `tb_cci_system_compare.sv` | 35 | Proposed vs baseline directed scenarios |
| `tb_cci_range_hazard_checker.sv` | 20 | Hazard check |
| `tb_cci_existing_system.sv` | 51 | Normal path, probe hazard, req_error |
| `tb_cci_augmented_system.sv` | 53 | Dual-tracker simultaneous, probe OR merge |
| `tb_cci_write_completion_tracker_overflow.sv` | 14 | Overflow/underflow protection (NOT in sim_all) |
| `tb_cci_snoop_order_violation.sv` | — | Negative test: expects `$fatal` on CR before AC |

---

## Synthesis (`synth/`)

```bash
cd CCI_SV/synth
make vivado_all          # synthesize all four designs
make compare             # algorithm comparison (proposed vs baseline, N=64)
make compare_realistic   # incremental overhead (augmented vs existing, N=16)
```

Target: `xczu7ev-ffvc1156-2-e`, 2 ns (500 MHz), `AreaOptimized_high`.
Constraints: `constraints.xdc` — `set_false_path -from rst_n` for async reset.

### Algorithm comparison result (N_ENTRIES=64)

| Design | LUTs | FFs |
|---|---:|---:|
| Proposed (`cci_memcpy_system`) | 1,377 | 884 |
| Baseline (`cci_baseline_system`) | 1,848 | 747 |
| Savings | −471 (−25.5%) | +137 |

### Realistic overhead

Run `make compare_realistic` after `make vivado_existing vivado_augmented`.
Prints incremental LUT/FF overhead from flat utilization reports.

---

## Key design decisions

**AW/B shared-channel contract**: All AWs (tracked and untracked) must be
presented to `cci_write_completion_tracker` to preserve AXI4 B ordering.
`aw_full[awid]` applies to ALL traffic. Use a dedicated AXI ID for memcpy traffic.

**req_error on decode failure**: `req_ready=1` on error — the producer is not
stalled. `dec_valid=0` prevents tracker allocation. Matches `baseline_line_tracker`
behavior.

**CR-before-AC detection**: `cci_snoop_response_tracker` asserts `$fatal` in
simulation when `recv_next > sent_next` (CR arrived before its AC). Verified by
`make sim_snoop_order` (expected non-zero exit, NOT in `sim_all`).

**Timing notes**: Reports are post-synthesis estimates, not post-implementation.
For final timing claims, run implementation. `-min` delays and per-corner sweeps
are not yet in the XDC.
