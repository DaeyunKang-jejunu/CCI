# 보완 4 — M1 읽기 ↔ 쓰기 발행 시점 소유권 검사 (R3)

실행일: 2026-11-08
명령: `python3 scripts/run_rcci_fix.py` (81건), `python3 scripts/run_formal.py`
기계 판독 결과: [fix2_after/summary.json](fix2_after/summary.json)

## 무엇을 바꿨나 (B1·rCCI 공통)

| 파일 | 수정 |
|---|---|
| `rtl/common/coh_read_ingress.sv` | 입력 `wr_issue_probe`를 추가했다. 쓰기가 예약하려는 라인을 read 엔트리가 소유하는지 판정한다(rCCI는 구간 CAM, B1은 라인 CAM). 출력 `issue_fire`, `alloc_ready`를 추가했다. 동일성 assertion에 이 probe를 포함했다. |
| `rtl/common/coh_write_range_adapter.sv` | 입력 `rd_issue_probe`를 추가했다. 읽기가 할당하려는 라인을 write context가 소유하는지 판정한다. 구간은 `[lo, hi + hold)`이다. 출력 `issue_reserve`를 추가했다. |
| `rtl/common/rcci_m1_issue_arbiter.sv` (신규) | 같은 라인 동시 발행을 1비트 round-robin으로 중재한다. turn은 경쟁 cycle에 승자가 실제로 발행했을 때만 바뀐다. 이미 발행한 라인은 빼앗지 않는다. assertion은 `RANGE_ISSUE_M1_SAME_CYCLE`과 `RANGE_ISSUE_M1_LOSER_FIRED`이다. |
| `rtl/ace/axi_cci_ace_top.sv` | read 할당은 write 소유 라인이거나 중재에서 졌으면 막는다. write 예약도 read 소유 라인이거나 중재에서 졌으면 막는다. assertion `RANGE_ISSUE_M1_OVERLAP`을 추가했다(상대 소유 라인 발행 금지, 같은 cycle 같은 라인 발행 금지). |
| `scripts/ace.f` | 중재기 파일을 추가했다. |

**중재 규칙: work-conserving.** 처음에는 두 후보가 있기만 하면 중재했다. 그러자 사례 12에서 문제가 드러났다. 읽기가 트래커 부족으로 당장 발행할 수 없는데도 경쟁에서 이겨, 쓰기가 불필요하게 기다렸다. 그래서 **이번 cycle에 실제로 발행할 수 있는 쪽끼리만** 경쟁하도록 고쳤다.
- read는 `alloc_ready`이고, ACE 소유나 write 소유로 막히지 않은 경우이다.
- write는 candidate이고, ACE 소유나 read 소유로 막히지 않은 경우이다.

**교착 없음의 근거.** 한쪽이 상대 소유 라인을 기다리더라도, 그 라인의 완료(R 또는 B)는 상대의 다음 발행에 의존하지 않는다. 따라서 대기 관계가 순환하지 않는다. 중재로 진 쪽은 round-robin에 따라 다음 경쟁에서 이긴다.

## 결과

**시뮬레이션 (`run_rcci_fix.py`, 81건, 모두 기대대로).**

| 사례 | 내용 | 결과 |
|---|---|---|
| 12 `wr_hold_late_read` | write가 라인 4를 예약한 상태(line AW `READY=0`)에서 read가 라인 4에 도달한다 | read는 30 cycle 동안 할당하지 않고, AW `VALID`·payload가 유지된다. read는 라인 4~7을 모두 새 데이터로 받는다. |
| 19 read 먼저, 나중의 WriteRange가 read의 미래 라인을 덮음 | write가 라인 4를 먼저 예약하고 read는 대기한다 | read가 받은 라인 4~7 = 새 데이터(4라인). 최종 메모리 = 새 데이터. |
| 20 write 먼저, 나중의 ReadRange가 write의 미래 라인을 덮음 | read가 먼저 소유하고 write는 대기한다 | read는 모두 옛 데이터를 받는다. write가 read를 앞지르지 않는다. 최종 메모리 = 새 데이터. |
| 21 같은 8라인 ReadRange·WriteRange 동시 제시 | 같은 라인 경쟁 1회가 발생하고 중재된다 | 비공백(non-vacuous) 확인. 라인마다 옛 값 또는 새 값 중 하나로 일관된다. |

- 사례 21은 E=4·N_fly=16 구성에서도 PASS했다.
- 보수 gate 구성에서 사례 12·19·20·21은 PASS이다. ACE가 없으므로 gate가 영향을 주지 않는다.

**보완 4 mutation.**

| mutation | 사례 | 검출 |
|---|---|---|
| read 할당의 write 소유 검사 제거 | 19 | `RANGE_ISSUE_M1_OVERLAP` / `FIX1_M1_ISSUE_OVERLAP` |
| write 예약의 read 소유 검사 제거 | 20 | `RANGE_ISSUE_M1_OVERLAP` / `FIX1_M1_ISSUE_OVERLAP` |
| 같은 라인 중재 제거(write가 항상 통과) | 21 | `RANGE_ISSUE_M1*` |

**formal (중재기, yosys BMC).**

| 항목 | 결과 |
|---|---|
| `issue_arbiter_isolated_fair`: 같은 라인을 계속 경쟁할 때, 어느 쪽도 1 cycle 넘게 기다리지 않음 | PASS (BMC 20) |
| `issue_arbiter_owned_bounded_grant`: 발행 라인을 `L_OWNER=3` cycle 소유한 뒤 해제하는 환경에서, 대기 bound = `L_OWNER + 1` | PASS (BMC 24) |
| 도달성 witness: 경쟁에서 read 승리 / write 승리 | 둘 다 도달함 (EXPECTED_FAILURE_PASS) |
| mutation: turn update 제거 | bounded grant 위반 검출 |
| mutation: 두 쪽 모두 통과 | 같은 cycle 안전성 위반 검출 |

## 기존 회귀 (보완 4 반영 RTL)

| 실행 | 결과 |
|---|---|
| `run_rcci_stage2/3/5/6/8.py` | 모두 PASS (rc=0) |
| `run_formal.py` | **24건** PASS/expected-failure PASS. 기존 18건에 중재기 6건을 더했다. |
| `run_ace.py` | 68건 PASS |

`.*` 연결을 쓰는 단위 TB(`tb_coh_read_ingress(_range)`, `tb_coh_write_range_adapter`)에는 새 probe 포트를 idle 값으로 선언했다.

## 남은 범위

- **B1 구성의 면적 영향.** read→write probe에 adapter의 구간 비교를 쓴다. adapter는 B1에서도 모든 M1 쓰기 경로에 있으므로, B1에도 probe 1개 분량의 구간 비교가 합성된다. 보완 7 비용 표에서 이 몫을 분리해 보인다.
- **보완 5.** fatal 중 hold·중재 turn의 수명 시험과 구간 동일성 formal BMC가 남아 있다.
