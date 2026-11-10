# 보완 5 — 전체 회귀, formal 재확인, reset·fatal 수명

실행일: 2026-11-08
명령: `python3 scripts/run_regression.py`
결과 파일:
- [active_regression.json](active_regression.json): 판정과 source hash 72개
- [fix2_after/summary.json](fix2_after/summary.json): fix runner 154건

## 통합 회귀 결과

| 단계 | runner | 결과 |
|---|---|---|
| M1 속성·WSTRB | `run_rcci_stage2.py` | PASS |
| tagged service·공통 admission pool | `run_rcci_stage3.py` | PASS |
| ReadRange | `run_rcci_stage5.py` | PASS |
| WriteRange | `run_rcci_stage6.py` | PASS |
| hazard·오류·progress | `run_rcci_stage8.py` | PASS |
| 보완 1~5 시나리오·구성 행렬·mutation | `run_rcci_fix.py` | **154건 모두 기대대로** |
| ACE 전체 | `run_ace.py` | 68건 PASS |
| formal | `run_formal.py` | **30건** PASS/expected-failure PASS |

- **선택 항목.** `--stage1`(지연 재측정과 C++ 모델)과 `--synthesis`(Vivado)는 이번 실행에 포함하지 않았다. 각각 보완 6·7에서 실행한다.
- **판정 방식.** 모든 expected-failure는 계획한 assertion marker로 판정한다.

### fix runner 154건의 구성

| 구성 | 건수 | 결과 |
|---|---|---|
| 기본 rCCI(트래커·창 4): 사례 1~25 × ownership/data | 50 | 모두 PASS |
| 보수 gate(`RANGE_ACE_ISSUE_GATE=1`) | 24 | 22 PASS. 사례 14·16은 기대한 과잉 차단 |
| E=4·N_fly=16 | 7 | PASS |
| **구성 행렬** `R-E{4,16}-RW{1,4,16}-WE·WW` 6종 × (기본 통합 시험 + 사례 7·8·9·17·18·21·22·23) | 54 | PASS |
| 구성 행렬 B1-T16 (`USE_RANGE=0`): 기본 통합 시험 + 사례 7·8·9 | 4 | PASS |
| mutation | 15 | 모두 검출 |

## 보완 5에서 바꾼 것

### RTL

- **fatal 중 새 내부 발행 차단.** `axi_cci_ace_top.sv`에 `issue_fatal_stop`을 추가했다. fatal fault 이후에는 read 할당과 write 예약을 새로 하지 않는다. 이미 발행한 라인의 drain만 허용한다(PLAN 9절). 기존 구현은 외부 admission만 막고 내부 발행은 계속했다.

### 새 사례

| 사례 | 내용 | 결과 |
|---|---|---|
| 22 | 모든 라인이 Error-only인 WriteRange: W를 drain하고 최종 BRESP는 SLVERR | 구간이 해제되고, 해제된 라인에 대한 ACE는 20 cycle 안에 수락됨 |
| 23 | 모든 라인이 Error-only인 ReadRange: zero/SLVERR R, RLAST는 마지막에만 | 같음 |
| 24 | reset 수명: ACE 활성 span, read 구간, write hold, 중재 turn=1이 모두 살아 있는 상태에서 reset | 네 상태가 모두 초기화됨. 이후 같은 ID·주소로 ReadRange, WriteRange, ACE를 다시 수행해 정상 완료 |
| 25 | fatal 수명: read 범위가 ACE 소유 라인 앞에서 대기하고 write hold가 있는 상태에서 다른 ACE가 Error+DataTransfer를 받아 fatal 발생 | 이후 60 cycle 동안 새 내부 발행 0건, hold 유지(조용히 지우지 않음). reset으로 복구 |

### 새 mutation

| mutation | 사례 | 검출 |
|---|---|---|
| fatal 발행 차단 제거 | 25 | `FIX1_FATAL_NEW_ISSUE` |
| hold reset 누락 | 24 | `FIX1_RESET_HOLD` |
| 중재 turn reset 누락 | 24 | `FIX1_RESET_TURN` |

### formal 추가 (`formal/formal_read_interval.sv`)

- **`read_interval_equiv_bmc`** (PASS, BMC 12).
  - 대상: `coh_read_ingress`(DEPTH 2, TRACKERS 2, 창 2)
  - 증명 내용: 구간 CAM과 기존 tracker CAM이 6개 probe 모두에서 같고(`HAZARD_INTERVAL_EQUIV`), `lo/hi`가 포인터와 일치한다(`RANGE_READ_INTERVAL_POINTER`).
  - 환경 가정:
    - 작은 주소 영역만 쓴다.
    - retire는 발행된 메모리 읽기에만 온다.
    - retire와 hit가 동시에 오지 않는다.
    - `service_fault`는 발생하지 않는다.
    - ACE span의 last ≥ first이다(top의 `last_line`이 보장).
- **witness 3건**: 구간 ACE hazard, M0 hazard, 범위 라인 발행이 모두 도달 가능함.
- **mutation 2건**: `hi` 증가 누락, 빈 구간 guard 제거. 두 번째는 보완 3에서 시뮬레이션으로 찾았던 결함이며, formal도 이를 잡는다.
- **formal 디버깅 과정.**
  - 첫 반례는 환경이 발행되지 않은 retire를 넣어 카운터가 깨진 경우였다. 모듈은 이때 `service_fault`를 세운다.
  - 둘째 반례는 last < first인 비정상 ACE span이었다.
  - 둘 다 실제 top에서는 생기지 않는 입력이므로 환경 가정에 반영했다.

### 시험·runner

- **`run_regression.py` 갱신.**
  - 활성 집합 8개를 순서대로 실행한다.
  - source hash 대상: RTL, TB, formal, 합성 Tcl, runner, C++ 모델
  - 결과는 `reports/rcci_fix/active_regression.json`에 기록한다.
- **TB의 창 크기 가정 제거.** 구성 행렬 W=1에서 두 시험이 창 크기를 가정해 실패했다. RTL 결함이 아니므로 창 크기를 따르도록 고쳤다.
  - `rcci_write_range_8`: 동시 라인 수 ≥ 2를 기대했다.
  - 사례 17: 마지막 4라인을 동시에 소유한다고 가정했다.
- **TB 파라미터 추가.** `RANGE_READ_WINDOW`, `RANGE_WRITE_WINDOW`
- **사례 24 수정.** reset 중에도 line AW를 막아 두도록 고쳤다. 이전에는 reset 전에 hold가 AW로 나가 버려 reset 누락을 검출하지 못했다.

## 남은 범위

- **XSim 교차 실행.** 선택 항목이며 이번에 실행하지 않았다.
- **write 구간 동일성.** formal로 증명하지 않았다. adapter와 core line CAM이 서로 다른 모듈에 있어, top 수준 시뮬레이션 assertion으로만 매 cycle 확인한다.
- **whole-top liveness formal.** 계속 선택 항목(14.10)이다.
