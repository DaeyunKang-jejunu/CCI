# 보완 3 — 범위 엔트리별 구간 비교기 (R2)

실행일: 2026-11-08
명령: `python3 scripts/run_rcci_fix.py`
기계 판독 결과: [fix2_after/summary.json](fix2_after/summary.json). 보완 2·3 공통 runner이며 65건이다.

## 무엇을 바꿨나

해저드 비교를 라인 단위에서 **logical context 단위 구간 비교**로 옮겼다. 라인 단위란 read는 tracker, write는 line ingress 엔트리를 말한다. 논문 4.5·10절의 주장 구조를 RTL로 실현한 것이다.

### read — `coh_read_ingress.sv`

- `entry_t`에 `lo_line`, `hi_line`(59비트)을 추가했다.
- 수락할 때:
  - conventional 엔트리: `[line, line+1)`
  - 범위 엔트리: `[base, base)`, 즉 빈 구간에서 시작한다.
- 범위 라인을 할당하면 `hi+1`, 라인이 완료되면 `lo+1`이다. 증가기만 쓰고 곱셈과 mux는 없다.
- 파라미터 `INTERVAL_CAM`:
  - `=USE_RANGE`가 기본값이다.
  - 1(rCCI)이면 엔트리마다 구간 비교를 쓴다. M0는 라인 1개를 비교하고, ACE·M1 AW는 span 겹침을 비교한다.
  - 0(B1)이면 기존 tracker·엔트리 라인 CAM을 그대로 쓴다.
- assertion:
  - `HAZARD_INTERVAL_EQUIV`: 기존 CAM을 시뮬레이션 기준으로 남겨, 매 cycle 출력이 같은지 검사한다.
  - `RANGE_READ_INTERVAL_POINTER`: `lo = base+out_idx`, `hi = base+issue_idx`인지 검사한다.

### write — `coh_write_range_adapter.sv`

- context에 `lo_line`, `hi_line`을 추가했다.
- 구간은 `[base+b_idx, base+issue_idx)`이고, hold 중이면 상한에 1을 더한다(`+hold`).
- 출력하는 hazard: M0 AR/AW, ACE AR/AW(span), M1 AR(span)
- assertion `RANGE_WRITE_INTERVAL_POINTER`를 추가했다.

### write line CAM 위치 — `coh_write_ingress.sv`, `axi_cci_top.sv`, `axi_cci_ace_top.sv`

- `coh_write_ingress`에 `LINE_CAM` 파라미터를 추가했다. rCCI는 `LINE_CAM=0`이므로 line CAM 출력을 쓰지 않고, 합성에서 제거된다.
- B1은 기존 line CAM과 top의 hold 비교를 그대로 쓴다.
- top에서 rCCI의 write hazard는 adapter 구간 CAM에서 받는다.
- `HAZARD_INTERVAL_EQUIV write`: rCCI에서는 "core line CAM + hold 라인"을 시뮬레이션 기준으로 두고 cycle마다 비교한다.
- **M0 hazard 경로 변경.** 보완 2에서는 hold 라인의 M0 hazard를 top에서 M0 READY/VALID에 바로 걸었다. 이번에 core의 `EXT_M0_AR/AW_HAZARD` 입력으로 옮겼다.
  - 이유: core는 "이미 grant를 잡은 M0 요청은 hazard가 새로 생겨도 VALID를 내리지 않는다"는 예외를 갖고 있다. 이 경로를 써야 VALID가 중간에 내려가지 않는다.
  - rCCI의 adapter M0 hazard도 같은 경로로 넣었다.

### E와 N_fly 분리

- top에 `M1_READ_CONTEXTS`, `M1_WRITE_CONTEXTS`, `M1_WRITE_LINE_ENTRIES`를 추가했다. 기본값은 `M1_INGRESS_DEPTH`이다.
- depth stall counter와 elaboration assertion이 새 파라미터를 따른다.
- `RANGE_WRITE_WINDOW ≤ M1_WRITE_LINE_ENTRIES`이다. 외부 write context 수 E와는 무관하다.

## 구현 중 발견하고 고친 결함

**빈 구간 버그.** 범위가 다음 라인 발행을 기다리는 동안은 구간이 비어 있다(`lo == hi`). 이때 span 겹침 식 `first < hi && last >= lo`가 참이 될 수 있다. 사례 16에서 `HAZARD_INTERVAL_EQUIV`가 이것을 잡았다(int=00100, ref=00000). 비교에 `lo < hi` 조건을 추가했다.

## 결과

| 구성 | 판정 | 결과 |
|---|---|---|
| 기본 | 사례 1~11, 13~18 × ownership/data, 34건 | 모두 PASS (`HAZARD_INTERVAL_EQUIV` 켜짐) |
| 보수 gate | ownership 16건 | 14 PASS. 2건(사례 14·16)은 기대한 과잉 차단 |
| **E=4, N_fly=16** (`M1_READ/WRITE_CONTEXTS=4`, line tracker 16) | 기본 통합 시험 + 사례 7·8·9·17·18 | 모두 PASS |
| mutation | 9종 (보완 2의 5종 + 보완 3의 4종) | 모두 검출 |

**새로 추가한 사례.**
- 17 `top_address_page_interval`: 주소 공간 마지막 4라인 범위. 최상위 라인으로 가는 M0는 범위가 끝날 때까지 대기한다. 구간 상한 `2^58`이 59번째 비트를 쓴다.
- 18 `range64_read_write_together`: 64라인 ReadRange와 64라인 WriteRange를 동시에 진행하고, 데이터와 메모리를 전수 비교한다.

**보완 3 mutation.**

| mutation | 사례 | 검출 |
|---|---|---|
| read `hi` 증가 누락 | 3 | `RANGE_READ_INTERVAL_POINTER` |
| write `lo` 증가 누락 | 1 | `RANGE_WRITE_INTERVAL_POINTER` |
| span 상한 비교 `<` → `<=` | 15 | `HAZARD_INTERVAL_EQUIV` |
| 구간 58비트 wrap | 17 | `FIX1_TOP_PAGE_M0_ADMITTED` (최상위 라인 M0가 잘못 수락됨) |

**runner·TB 변경.**
- fix 시나리오와 monitor를 `` `ifdef RCCI_FIX_CASES ``로 감쌌다. 시나리오가 커지면서 같은 통합 TB를 쓰는 다른 회귀(`run_ace.py`의 `--output-split 0` 빌드)의 컴파일 시간이 크게 늘었기 때문이다. 이제 `run_rcci_fix.py`만 이 define과 `-O0` 빌드를 쓴다.
- hold mutation의 대상은 보완 3에서 adapter 구간 `[lo, hi+hold)`로 옮겼다.

## 기존 회귀 (보완 2·3 반영 RTL)

| 실행 | 결과 |
|---|---|
| `run_rcci_stage2.py`, `run_rcci_stage3.py`, `run_rcci_stage5.py`, `run_rcci_stage6.py`, `run_rcci_stage8.py` | 모두 PASS (rc=0) |
| `run_formal.py` | 18건 PASS/expected-failure PASS |
| `run_ace.py` | **68건 PASS** (정상 20, expected-failure 48) |

회귀 runner는 다음과 같이 수정했다.
- **mutation 대상 문자열을 새 코드에 맞췄다.**
  - stage 5: rCCI read hazard가 구간 CAM으로 바뀌어, `drop_window_hazard`와 `overblock_full_page`의 대상을 구간 비교로 옮겼다. `no_output_increment`는 대상 줄이 블록 구조로 바뀌어 맞췄다.
  - stage 8: `mut_no_ace_write_hazard`와 `mut_no_m1_read_span_hazard`는 write CAM 신호명 `cam_*`로, `mut_read_span`은 구간 CAM의 M1 AW span으로 옮겼다.
  - ACE: `drop_coherent_read_hazard`는 B1 CAM 신호명 `ref_m0_ar`로 맞췄다.
- **기대 marker를 복수로 허용했다.** stage 5·6·8 runner가 marker 목록을 받게 했다. 같은 mutation을 새 구간 불변식(`RANGE_*_INTERVAL_POINTER`, `HAZARD_INTERVAL_EQUIV`)이 먼저 잡을 수 있기 때문이다. 판정은 지정 목록 안의 marker로만 한다.
- **실행 환경.** `run_ace.py`의 timeout을 900 s로 늘렸다(보완 2). fix 시나리오는 `RCCI_FIX_CASES` define 안으로 옮겼다.

## 남은 범위

- **formal BMC 동일성.** 구간 = 기존 CAM 동일성의 formal BMC(작은 파라미터)는 보완 5에서 한다. 이번 단계는 시뮬레이션 assertion으로 매 cycle 확인했다.
- **R3(read ↔ write 범위 발행 시점 검사)와 사례 12.** 보완 4에서 한다.
- **비용 비교.** 합성으로 구간 CAM과 라인 CAM의 비용을 비교하는 일은 보완 7에서 한다.
