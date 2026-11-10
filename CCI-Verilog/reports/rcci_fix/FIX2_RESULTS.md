# 보완 2 — ACE ↔ M1 라인 발행 시점 소유권 검사 (R1·R1′·R5 수정)

실행일: 2026-11-08
명령: `python3 scripts/run_rcci_fix.py`
기계 판독 결과: [fix2_after/summary.json](fix2_after/summary.json)
수정 전 결과: [FIX1_BEFORE.md](FIX1_BEFORE.md)

## RTL 수정 (B1·rCCI 공통)

| 파일 | 수정 |
|---|---|
| `rtl/ace/ace_snoop_pkg.sv` | `burst_last_byte`, `incr_data_shape`, `first_line`, `last_line`를 정의했다. footprint와 legality는 이 한 곳에서만 정의한다. footprint는 65비트로 계산한다. legality 조건은 INCR, `SIZE ≤ 버스 폭`, 4 KB 안, overflow 없음이다. |
| `rtl/ace/ace_manager_request_controller.sv` | non-shareable ReadOnce에 `incr_data_shape`를 적용해 FIXED/WRAP, 과도한 SIZE, 4 KB 초과를 거부(SLVERR)한다. 수락 시점에 소유 플래그를 기록하고 `own_valid/own_first_line/own_last_line`을 출력한다. barrier, DVM, legality 오류 요청은 소유권이 없다. 유효 기간은 `busy`(RACK/WACK까지)이다. |
| `rtl/ace/ace_manager_request_bank.sv` | context별 소유 span을 공개한다. |
| `rtl/common/coh_read_ingress.sv` | `issue_line_valid/addr`를 출력하고 `issue_block` 입력을 받는다. `can_allocate`는 `!issue_block`일 때만 할당한다. ACE probe는 라인 하나가 아니라 footprint span으로 비교한다(R5). |
| `rtl/common/coh_write_range_adapter.sv` | 쓰기 발행을 **candidate → 예약(hold 레지스터) → line AW** 구조로 바꿨다. `line_aw_valid`와 payload는 hold에서 나오므로 handshake까지 바뀌지 않는다. assertion 두 개를 추가했다: `RANGE_WRITE_DOUBLE_RESERVE`, `RANGE_WRITE_RESERVE_AW_MISMATCH`. |
| `rtl/common/coh_write_ingress.sv`, `rtl/top/axi_cci_top.sv`, `axi_b0_top.sv` | write line CAM의 ACE probe를 footprint span으로 비교한다(R5). 이를 위해 core에 `PROBE_ACE_ARLAST/AWLAST`를 추가했다. |
| `rtl/ace/axi_cci_ace_top.sv` | 소유권 판정을 추가했다. 아래 표 참조. |

`axi_cci_ace_top.sv`의 소유권 판정:
- read 할당 라인과 write candidate 라인을 다음 두 가지와 비교한다.
  - ACE 활성 span
  - 같은 cycle의 실제 ACE handshake span(ACE 우선)
- 겹치면 그 라인의 발행만 막는다. ACE 수락 조건은 이 발행 신호를 참조하지 않는다(단방향).
- 예약(hold) 중인 write 라인은 ACE와 M0의 수락 해저드에 포함한다.
- `RANGE_ACE_ISSUE_GATE=1`은 ACE가 busy이면 모든 M1 라인 발행을 막는 보수적 비교 구성이다. 기본값은 0이다.

이 검사는 `kind_range`와 무관하게 **B1 라인과 범위 라인 모두**에 적용된다.

**성능 영향.** 쓰기 라인 AW가 예약 레지스터를 거치므로, 내부 line AW는 최대 2 cycle에 1개 나간다. 라인당 W가 4 beat이므로 처리량 상한(4 cycle당 1 라인)에는 영향이 없다.

## 결과

| 구성 | 판정 | 결과 |
|---|---|---|
| 기본 (`RANGE_ACE_ISSUE_GATE=0`) | 사례 1~11, 13~16 × ownership/data = 30건 | **모두 PASS** |
| 보수 gate (`=1`) | 사례 1~16 ownership | 안전성 12건 PASS. 사례 14·16은 다른 라인의 ACE 때문에 범위가 멈춰 FAIL(과잉 차단). 기대한 결과이다. |
| mutation 5종 | 각각 지정한 사례 | 모두 검출(EXPECTED_FAILURE_PASS) |

**추가 사례.**
- 11 `wr_hold_late_ace`: line AW `READY`를 0으로 붙잡은 예약 라인에 ACE가 늦게 도착한다. AW `VALID`·payload가 유지되고 ACE는 대기한다.
- 13 `wr_hold_reset`: 예약 중 reset이 걸리면 hold가 비워지고, 이후 쓰기가 정상 동작한다.
- 14 `non_overblock`: 다른 라인의 ACE context가 RACK을 늦게 보내는 동안에도 범위가 끝까지 완료된다.
- 15 `same_cycle`: 라인 5가 할당 가능해지는 바로 그 cycle에 ACE AR을 제시한다. 그 cycle에 ACE는 수락되고 범위 할당은 막힌다.
- 16 `burst_tail_ahead`: 범위가 이미 지나간 라인 4를 base로 하는 non-shareable burst(라인 4~6)가 수락된다. 이후 라인 5는 그 burst가 끝날 때까지 대기한다.

**mutation.**

| mutation | 검출 사례 | marker |
|---|---|---|
| ACE 활성 span 비교 제거 | 1 | `FIX1_OWNERSHIP_OVERLAP` |
| 같은 cycle ACE handshake 비교 제거 | 15 | `FIX1_OWNERSHIP_OVERLAP` |
| 소유 span을 base 라인으로 축소 | 16 | `FIX1_OWNERSHIP_OVERLAP` |
| 수락 probe를 base 라인으로 축소(R5) | 10 | `FIX1_ACE_ADMIT_OVERLAP` |
| hold 라인을 ACE 해저드에서 제외 | 11 | `FIX1_HOLD_ACE_ADMITTED` |

**시험 환경에 맞춘 조정.**
- 사례 10: 수정 후에는 ACE burst가 소유 라인 0을 기다리므로, M1 W 전송과 ACE 요청을 병렬로 진행하도록 바꿨다.
- 사례 14·16: 활성 ACE 중에는 새 M1 수락이 막히는 기존 보수 정책(14.10 선택 항목)이 있으므로, 범위를 먼저 수락하도록 순서를 정했다.

## 기존 회귀

| 실행 | 결과 |
|---|---|
| `run_rcci_stage2.py` / `stage3` / `stage5` / `stage6` / `stage8` | 모두 PASS (rc=0) |
| `run_formal.py` | PASS (기존 formal 전체) |
| `run_ace.py` | 68건 PASS (보완 3 반영 후 재실행, `FIX3_RESULTS.md`) |

**회귀를 위해 바꾼 것.**
- `.*` 연결을 쓰는 단위 TB와 formal harness에 새 포트를 선언했다. 기존 의미를 유지하도록 다음과 같이 둔다: probe last 라인은 probe 라인과 같게, `issue_block`은 0.
  - 대상: `tb_coh_read_ingress(_range)`, `tb_coh_write_range_adapter`, `tb_rcci_stage8_hazards`, `tb_ace_manager_*`, `formal_ingress(_progress)`
- stage 6과 stage 8 runner의 mutation 대상 문자열 두 개를 새 코드에 맞췄다. 바뀐 것은 line 주소 생성 위치와 ACE probe span 비교이다.
- `run_ace.py`의 명령 timeout을 300 s에서 900 s로 늘렸다. 통합 TB가 커져 단일 C++ 파일(`--output-split 0`) 컴파일이 300 s를 넘었기 때문이다.

## 남은 범위

- **사례 12 `wr_hold_late_read`.** read와 write 범위 사이의 발행 시점 검사(R3)는 보완 4에서 구현한다.
- **fatal 중 hold 수명 시험.** 보완 5의 reset·fatal 수명 시험에서 함께 다룬다.
- **보완 3 이후 비교 방식 변경.** 보완 3에서 해저드가 구간 비교기로 바뀌면, hold 라인은 write 구간 `[lo, hi + hold_valid)`에 포함된다. 지금 top에서 하는 hold 비교는 그 구조로 흡수된다.
