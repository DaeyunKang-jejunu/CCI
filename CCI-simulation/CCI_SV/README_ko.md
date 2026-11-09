# CCI_SV - CCI Memcpy 하드웨어 비용 평가를 위한 RTL 프로토타입

## 목적

제안하는 CCI memcpy 최적화 방식의 하드웨어 비용을 추정하기 위한
합성 가능한 SystemVerilog RTL이다.

다음 두 가지 비용 모델을 분리하여 유지한다.

| 모델 | 비교 대상 | 측정 항목 |
|---|---|---|
| 알고리즘 비교 | `cci_baseline_system` 대 `cci_memcpy_system` | 4KB memcpy에 대한 범위 기반 추적과 캐시라인별 추적 비교 |
| 현실적 오버헤드 | `cci_existing_system` 대 `cci_augmented_system` | 기존 CCI 추적 구조에 제안 경로를 추가할 때의 증분 비용 |

현실적 오버헤드 비교(`augmented - existing`)를 특허의 하드웨어 비용 주장에
사용하는 주요 지표로 삼는다.

---

## 아키텍처

Augmented system은 요청 타입에 따라 요청을 분배한다.

```text
                 req_valid / req_type / address / mask
                                |
                           요청 분류기
                                |
            +-------------------+-------------------+
            |                                       |
       기존 normal tracker                memcpy range tracker
   baseline_line_tracker(N=16)           cci_memcpy_range_unit
            |                                       |
            +-------------------+-------------------+
                      병합된 probe_hazard

                 공유 cci_write_completion_tracker
                                |
                       write completion demux
                 normal_wr_done              memcpy_wr_done
```

두 tracker는 동시에 활성 상태일 수 있다. 각 입력 요청은 `req_type`을 통해
정확히 하나의 tracker로 전달된다.

---

## RTL 파일(`rtl/`)

### 패키지

| 파일 | 역할 |
|---|---|
| `cci_memcpy_pkg.sv` | 파라미터, 타입(`cci_req_type_e`, `cci_wr_track_e`, `cci_range_entry_t`), 보조 함수(`cci_popcount`, `cci_page_relative_mask` 등) |

### 제안 memcpy 경로

| 파일 | 역할 |
|---|---|
| `cci_memcpy_req_decoder.sv` | (base_addr, line_count, mask)를 페이지 상대 `dec_line_mask`로 디코딩하고, mask가 0이거나 주소가 정렬되지 않은 경우 `req_error`를 발생시킨다. |
| `cci_range_rim_tracker.sv` | 단일 range entry FSM: INVALIDATING -> TRACKING -> DONE |
| `cci_ac_range_gen.sv` | LSB부터 AC MakeInvalid를 발행하고, 마지막 AC가 수락되면 `ac_gen_done`을 발생시킨다. |
| `cci_snoop_response_tracker.sv` | AC/CR 수를 계산하고 모든 응답이 도착하면 `snoop_done`을 발생시킨다. 시뮬레이션에서 AC보다 CR이 먼저 도착하면 `$fatal`을 발생시킨다. |
| `cci_range_hazard_checker.sv` | 활성 range entry에 대한 조합 논리 probe hazard 검사 |
| `cci_memcpy_range_unit.sv` | 위의 다섯 모듈을 연결하는 wrapper. `req_ready = req_error \|\| tracker_req_ready` |

### 일반 추적 경로

| 파일 | 역할 |
|---|---|
| `baseline_line_tracker.sv` | 캐시라인별 CAM tracker. `N_ENTRIES` 파라미터의 기본값은 64이며, 0 또는 overflow mask에 대해 `req_error`를 출력한다. |

### 공유 인프라

| 파일 | 역할 |
|---|---|
| `cci_write_completion_tracker.sv` | AXI ID별 circular FIFO. 각 entry에 `aw_track_type`을 저장하며, `CCI_WR_NONE`이 아닌 entry에 대해서만 `wr_done_valid`를 발생시킨다. |

### System top

| 파일 | Top 모듈 | 용도 |
|---|---|---|
| `cci_memcpy_system.sv` | `cci_memcpy_system` | 알고리즘 비교(제안 설계) |
| `cci_baseline_system.sv` | `cci_baseline_system` | 알고리즘 비교(baseline N=64) |
| `cci_existing_system.sv` | `cci_existing_system` | 현실적 baseline(normal 경로만 포함, N=16) |
| `cci_augmented_system.sv` | `cci_augmented_system` | 현실적 측정(existing + proposed, N=16) |

---

## 시뮬레이션

```bash
make sim_all                  # 11개 TB, 실패 0개(기본 Verilator)
make TRACE=1 sim_augmented    # FST waveform 출력 포함
make sim_overflow             # 예상된 $warning overflow 테스트(sim_all에 미포함)
make sim_snoop_order          # 음성 테스트: CR before AC -> $fatal(sim_all에 미포함)
make SIM=xsim sim_all         # Xilinx xsim 실행 흐름
```

### 테스트벤치(`tb/`)

| 테스트벤치 | 검사 수 | 내용 |
|---|---:|---|
| `tb_cci_memcpy_range_unit.sv` | 50 | 비정렬 주소를 포함한 통합 테스트 T01-T09 |
| `tb_cci_range_rim_tracker.sv` | 29 | FSM 상태 |
| `tb_cci_ac_range_gen.sv` | 43 | AC 순서, backpressure |
| `tb_baseline_line_tracker.sv` | 48 | CAM 할당, req_error |
| `tb_cci_memcpy_req_decoder.sv` | 15 | Decoder |
| `tb_cci_write_completion_tracker.sv` | 123 | FIFO 순서, `aw_full`, 무작위 ID 테스트 |
| `tb_cci_memcpy_system.sv` | 73 | 제안 system, overflow/underflow sticky |
| `tb_cci_system_compare.sv` | 35 | 제안 방식과 baseline의 directed scenario 비교 |
| `tb_cci_range_hazard_checker.sv` | 20 | Hazard 검사 |
| `tb_cci_existing_system.sv` | 51 | Normal 경로, probe hazard, req_error |
| `tb_cci_augmented_system.sv` | 53 | 두 tracker의 동시 동작, probe OR 병합 |
| `tb_cci_write_completion_tracker_overflow.sv` | 14 | Overflow/underflow 보호(sim_all에 미포함) |
| `tb_cci_snoop_order_violation.sv` | - | CR이 AC보다 먼저 도착할 때 `$fatal`을 예상하는 음성 테스트 |

---

## 합성(`synth/`)

```bash
cd CCI_SV/synth
make vivado_all          # 네 가지 설계 모두 합성
make compare             # 알고리즘 비교(proposed 대 baseline, N=64)
make compare_realistic   # 증분 오버헤드(augmented 대 existing, N=16)
```

타겟: `xczu7ev-ffvc1156-2-e`, 2ns(500MHz), `AreaOptimized_high`.
제약 조건: `constraints.xdc` - 비동기 reset에 `set_false_path -from rst_n`을 적용한다.

### 알고리즘 비교 결과(N_ENTRIES=64)

| 설계 | LUT | FF |
|---|---:|---:|
| Proposed(`cci_memcpy_system`) | 1,377 | 884 |
| Baseline(`cci_baseline_system`) | 1,848 | 747 |
| 절감량 | -471(-25.5%) | +137 |

### 현실적 오버헤드

`make vivado_existing vivado_augmented` 실행 후 `make compare_realistic`을 실행한다.
Flat utilization report에서 계산한 증분 LUT/FF 오버헤드를 출력한다.

---

## 주요 설계 결정

**AW/B 공유 채널 계약**: AXI4 B 순서를 보존하려면 추적 대상 여부와 관계없이
모든 AW를 `cci_write_completion_tracker`에 전달해야 한다. `aw_full[awid]`는
모든 트래픽에 적용된다. Memcpy 트래픽에는 전용 AXI ID를 사용한다.

**디코딩 실패 시 req_error**: 오류가 발생하면 `req_ready=1`이므로 producer가
stall되지 않는다. `dec_valid=0`으로 tracker 할당을 방지한다. 이 동작은
`baseline_line_tracker`와 동일하다.

**CR-before-AC 감지**: `cci_snoop_response_tracker`는 시뮬레이션 중
`recv_next > sent_next`, 즉 CR이 해당 AC보다 먼저 도착한 경우 `$fatal`을
발생시킨다. `make sim_snoop_order`로 검증하며, 비정상 종료가 예상되는 별도
테스트이므로 `sim_all`에는 포함하지 않는다.

**Timing 참고 사항**: 보고서는 implementation 이후 결과가 아닌 합성 이후의
추정치이다. 최종 timing 주장에는 implementation 결과를 사용해야 한다.
XDC에는 아직 `-min` delay와 corner별 sweep이 포함되어 있지 않다.
