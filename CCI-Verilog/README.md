> 2026-10-07: 8종 cache snoop, DVM Message/Complete, 5-bit CRRESP, CD, dirty writeback, ACE initiating-manager 자동 변환, barrier pair, shareable exclusive, 2-target snoop filter/집계와 기본 4-context manager/snoop outstanding은 [ACE_EXTENSION.md](ACE_EXTENSION.md)를 참고하십시오. 진입점은 `axi_cci_ace_top`이며 기존 v9 MakeInvalid-only 경로와 면적 결과를 구분합니다. `make test-ace`는 Verilator/XSim 기능·변이 검증, `make synth-ace`는 OOC 합성, `make implement-ace`는 B1/P/2-target+filter의 내부 경로 place/route를 실행합니다.

> ACE/CCI 통합 파형은 `make waves-ace`로 P 통합 및 RS/RNS/WLU 집중 FST와 GTKWave 신호 배치 파일을 생성합니다. B1/2-target을 포함한 전체 선택과 실행 방법은 [ACE_EXTENSION.md의 GTKWave 파형](ACE_EXTENSION.md#gtkwave-파형)을 참고하십시오.

> 2026-09-29: v9 AXI–CCI 통합과 REVIEW 보완(중복 CAM/주소 제거, AC 연속 발행, 독립 scoreboard, 메모리/cache 시험 및 결과 provenance)을 반영했습니다. 구성·인터페이스·검증 실행은 [INTEGRATION_V9.md](reports/archive/obsolete_docs_2026-11-09/INTEGRATION_V9.md), 결과는 [reports/INTEGRATION_RESULTS.md](reports/INTEGRATION_RESULTS.md)를 참조하십시오. 아래 내용은 기존 AXI 모델 설명입니다.

현재 활성 RTL은 ACE top의 B1 line 요청과 rCCI ReadRange/WriteRange 경로입니다. 단계 8에서 양방향 line/span hazard, read/write Error-only drain, fatal CR 조합, reset과 bounded-progress 검증을 추가했습니다. `make test`는 속성·WSTRB, 범위 읽기/쓰기, 단계 8 hazard/error/formal, 전체 ACE 통합·mutation을 순서대로 실행합니다. 단계 8 결과와 formal의 정확한 범위는 [STAGE8_RESULTS.md](reports/rcci_stage8/STAGE8_RESULTS.md)에 기록했습니다. 합성 전용 검증은 `make synth-ace`, place/route는 `make implement-ace`로 실행합니다. 단계 7 이전 setup/P-WR 구현과 실행기는 `reports/archive/rcci_pre_stage7_2026-11-06`에 독립 snapshot으로 보존했습니다.

# AXI4 2×1 Bus System (SystemVerilog)

A compact, self-checking **AXI4** example system in SystemVerilog: **two masters** share a single **slave** through a **2:1 round-robin interconnect**, with a self-checking testbench that drives traffic and verifies protocol behavior end-to-end.

It is meant as a readable, educational reference for how the five AXI4 channels, multiple-outstanding transactions, ID routing, and in-order responses fit together — not as a production crossbar.

---

## Contents

| File | Role |
|------|------|
| `tb_axi_bus_system.sv` | Top-level testbench: clock/reset, DUT instances, scoreboard, protocol monitors, watchdog. |
| `simple_axi_master.sv` | Behavioral AXI4 master — fixed pacing, multiple outstanding, in-order self-checker. |
| `realistic_axi_master.sv` | Behavioral AXI4 master — DMA-style command queues + buffered write data with randomized (but reproducible) pacing; same in-order self-checker. |
| `axi4_simple_2to1_bus_arbiter.sv` | 2-master / 1-slave round-robin interconnect with ID routing and order checking. |
| `simple_axi_slave.sv` | In-order AXI4 slave: returns `OKAY`, synthetic read data, optional response latency. |

The two masters are interchangeable (identical port lists). The testbench wires **master 0 = `simple_axi_master`** and **master 1 = `realistic_axi_master`**.

---

## System architecture

```
        ┌────────────────┐                                              ┌────────────────┐
        │   master 0     │                                              │                │
        │ simple_axi_... │                                              │                │
        └────────────────┘        ┌────────────────────────┐            │                │
                    AW/W/AR  ──►  │  2:1 round-robin       │──► AW/W/AR │   slave        │
                     B/R     ◄──  │  interconnect          │ ◄── B/R    │  (in-order     │
                                  │  • RR arbitration      │            │   responder)   │
        ┌────────────────┐        │  • ID widen {route,id} │            │                │
        │   master 1     │        |  • W routes by AW      │            │                │
        │ realistic_axi..│        |  • wr_q / rd_q order   │            │                │
        └────────────────┘        └────────────────────────┘            └────────────────┘
          ID_WIDTH bits                 ID_WIDTH+1 bits                   ID_WIDTH+1 bits
                                   (route bit prepended)
```

- **Masters** issue independent write (AW/W/B) and read (AR/R) transactions and self-check every response.
- The **interconnect** arbitrates between the two masters, tags each accepted transaction with a 1-bit **route** field (`S_*ID = {master_select, master_ID}`), forwards it to the slave, then routes the response (`B`/`R`) back to the originating master by that bit.
- The **slave** accepts commands in order, returns `OKAY` with deterministic read data, and re-echoes the (route-tagged) ID so the interconnect can route responses home.

---

## The five AXI4 channels

| Channel | Direction | Carries |
|---------|-----------|---------|
| **AW** — write address | master → slave | `AWID, AWADDR, AWLEN` + handshake |
| **W** — write data | master → slave | `WDATA, WLAST` + handshake (no `WID` in AXI4) |
| **B** — write response | slave → master | `BID, BRESP` |
| **AR** — read address | master → slave | `ARID, ARADDR, ARLEN` |
| **R** — read data | slave → master | `RID, RDATA, RLAST, RRESP` |

Every channel uses the AXI `VALID`/`READY` handshake: the payload transfers on the cycle both are high, and `VALID` must stay asserted with stable payload until `READY` arrives.

---

## Data flow

### Write transaction
1. **AW** — master presents `{AWID, AWADDR, AWLEN}`. The arbiter grants one master, prepends the route bit, and forwards it to the slave; it records the accepted command in an order FIFO (`wr_q`).
2. **W** — master streams `WDATA` beats, last beat marked `WLAST`. Because AXI4 has **no `WID`**, write data is bound to its address purely by **order** — the interconnect forwards W in AW-acceptance order.
3. **B** — after the burst, the slave returns `{BID, BRESP=OKAY}`. The interconnect routes it back to the originating master by the route bit and checks it came back in order.

### Read transaction
1. **AR** — master presents `{ARID, ARADDR, ARLEN}`; arbiter grants, route-tags, forwards, records in `rd_q`.
2. **R** — slave returns `RLEN+1` beats of `{RID, RDATA, RRESP}`, last beat marked `RLAST`. The interconnect routes each beat back to the originating master.

### Multiple outstanding
Masters do **not** wait for `B`/`R` before issuing the next `AW`/`AR`, so several transactions are in flight at once. The interconnect and slave bound this with per-channel outstanding limits (`MAX_OUTSTANDING_TRANSACTIONS`).

---

## Ordering model (important)

The whole system is **in-order**:
- Write responses (`B`) return in AW-acceptance order; read data (`R`) returns in AR-acceptance order.
- Within the interconnect, `W` follows AW order and `B`/`R` order is checked against the recorded `wr_q`/`rd_q`.

This is a legal AXI4 subset. It keeps the example small and lets the masters self-check with simple in-order expectations. **Out-of-order completion across IDs is not modeled.**

---

## The two masters

Both have identical ports and the same in-order self-checkers (they verify `BID`/`RID`, `BRESP`/`RRESP == OKAY`, and `WLAST`/`RLAST` placement, raising `protocol_error_*` outputs). They differ only in **how traffic is paced**:

- **`simple_axi_master`** — issues `NUM_TRANSACTIONS` fixed-length bursts with deterministic, optionally-spaced pacing (`ISSUE_GAP`, `START_DELAY`). Compact and easy to follow.
- **`realistic_axi_master`** — modeled like a DMA/CPU front-end: a **request generator** pushes commands into per-direction **command queues** over time; channel engines drain them; write data is staged in a **write-data FIFO** that lags the request by a fixed fill latency and randomized per-beat pacing; `BREADY`/`RREADY` apply randomized backpressure. All randomness comes from seeded **LFSRs**, so runs are **reproducible** (no `$urandom`).

Because content and order are identical, the two are drop-in interchangeable and the testbench checks the same way for either.

---

## Key parameters

Set at the top of `tb_axi_bus_system.sv`:

| Parameter | Default | Meaning |
|-----------|---------|---------|
| `ID_WIDTH` | 4 | Master-side AXI ID width (slave side is `ID_WIDTH+1` with the route bit). |
| `ADDR_WIDTH` | 64 | Address bus width. |
| `DATA_WIDTH` | 128 | Data bus width (16 bytes/beat). |
| `NUM_TRANSACTIONS` | 16 | Write + read transactions issued **per master**. |
| `MAX_OUTSTANDING_TRANSACTIONS` | 16 | Per-channel outstanding depth in the interconnect/slave. |
| `BURST_BEATS` | 4 | Beats per burst (`AxLEN = BURST_BEATS-1`). |
| `DEBUG` | 1 | Enable per-transaction trace prints. |
| `DEMO` | 1 | Space out traffic for a readable trace (0 = back-to-back stress). |
| `SLAVE_RESP_LATENCY` | 3 (demo) | Cycles the slave waits before `B` / first `R` beat. |

---

## Running the simulation

### Vivado (xsim) — root AXI TB 전용 예시

아래 명령은 root AXI 예제용입니다. 전체 CCI B1/P directed suite의 XSim 교차검증은 문서 끝의 `make test-xsim`을 사용합니다. `make test` 안의 Icarus 교차검증 대상은 decoder입니다.
```sh
xvlog -sv simple_axi_master.sv realistic_axi_master.sv \
          axi4_simple_2to1_bus_arbiter.sv simple_axi_slave.sv \
          tb_axi_bus_system.sv
xelab tb_axi_bus_system -s tb_sim
xsim  tb_sim -runall
```
Or add the files to a Vivado project, set `tb_axi_bus_system` as the simulation top, and **Run All** (the run exceeds the default 1000 ns window, so use *Run All*, not *Run*).
A VCD waveform `wave_rr_axi4_id_outstanding.vcd` is dumped by default.

### Expected result
On success the testbench prints:
```
---- PASS: AXI4 ID + multiple outstanding scenario completed ----
```
and `$finish`es. Any protocol violation triggers a named `$fatal`; a stalled run is caught by the watchdog.

---

## What the testbench checks

1. **Throughput / outstanding** — both masters issue all transactions without waiting; the slave must see `2 × NUM_TRANSACTIONS` of each command.
2. **ID routing & order** — each master gets back its own `BID`/`RID`, in order, with the route bit correctly added and stripped.
3. **Bursts & responses** — `WLAST`/`RLAST` verified at every hop; `BRESP`/`RRESP` must be `OKAY`.
4. **Handshake stability** — payload must not change while `VALID` is high and `READY` is low.
5. **Liveness** — a workload-scaled watchdog `$fatal`s if the run never completes.

---

## Debug trace legend

With `DEBUG = 1`, each hop prints one line per transaction event:

```
[time] SRC CH dir txn=M<route>.<W|R><id>  <fields>
  SRC = M0 | M1 (master), ARB (arbiter), SLV (slave)
  CH  = AW / W / B (write path),  AR / R (read path)
  dir = >> request (master→slave),  << response (slave→master)
  txn = M<route>.<W|R><id>  (same key on every hop)
```
The `txn=` key is identical across master, arbiter, and slave, so a single transaction is traceable end-to-end, e.g. `grep 'txn=M0.W2'` (a write) or `grep 'txn=M1.R5'` (a read).

---

## Scope & limitations

- **In-order only** — no out-of-order completion across IDs.
- **Simulation models** — behavioral masters/slave/arbiter for verification and learning, not a synthesizable production interconnect.
- **No `WSTRB` / narrow / unaligned / WRAP bursts** — full-width `INCR` bursts only.
- **`BRESP`/`RRESP`** are always `OKAY` from this slave (error responses are decoded/printed but not generated).

---




### 활성 ACE/rCCI XSim 교차검증 (WSL + Windows Vivado)

```sh
make test-xsim
# 설치 위치가 다르면:
python3 scripts/run_xsim.py --bin 'D:\Vivado\2024.1\bin'
```

`run_xsim.py`는 활성 `run_ace.py --xsim` 경로를 호출한다. B1, rCCI ReadRange/WriteRange, 다중 manager/snoop outstanding, WB 경합, REVIEW 10 계약과 활성 mutation을 Verilator에서 먼저 실행한 뒤 동일 활성 ACE testbench의 XSim 교차검증을 수행한다. 구형 setup/P-WR XSim 행렬은 archive snapshot에서만 실행한다.

### Formal (FIFO/order/lifetime)

```bash
make test-formal   # sv2v + yowasp-yosys 필요
```

`scripts/run_formal.py`가 RTL을 sv2v로 변환한 뒤 Yosys SAT로 `m0_snoop_endpoint` FIFO 불변식의 k-induction 증명과 활성 line-only `coh_write_ingress`의 bounded model check(깊이 20)를 실행한다. 도달성 witness 6종과 RTL mutant 5종도 함께 검사한다. 결과는 `reports/latest_formal.json`이 가리키는 manifest에 저장되며 ingress 검사는 유한 깊이 증명이다.
