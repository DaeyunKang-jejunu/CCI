# rCCI 단계 6 결과 — WriteRange

작성일: 2026-11-06  
상태: 완료 — 범위 쓰기 기능 경로, 단계 6 directed/mutation, 전체 회귀 및 합성 통과

## 구현 결과

- M1의 shareable `AWSNOOP_WRITE_RANGE(0b111)`를 실제 범위 요청으로 수락한다. `USE_RANGE=0`에서는
  같은 opcode를 거부한다.
- `coh_write_range_adapter`가 외부 AW 하나를 논리 범위 context 하나로 저장한다. context는 ID, base
  address, `lines`, `issue_idx`, `w_idx`, `b_idx`, line 내부 W beat, 누적 BRESP를 보존한다.
- 내부에는 주소가 64 B씩 증가하는 `AWLEN=3` 라인 AW를 생성한다. 각 라인 요청은 기존 B1 write
  ingress의 MakeInvalid, tagged NQ service, write tracker 및 memory write 경로를 그대로 사용한다.
- `RANGE_WRITE_WINDOW=W`는 모든 범위 context를 합친 내부 line outstanding 수를 W 이하로 제한한다.
  W는 외부 범위 context 수와 독립이며, top elaboration에서 실제 write tracker·ingress·bus outstanding
  capacity 이하인지 검사한다.
- 외부 W stream은 AW 수락 순서로 귀속한다. WriteRange의 내부 WLAST는 4 beat마다 생성하며, 외부
  WLAST는 범위 최종 beat에서만 허용한다. 모든 WSTRB가 1이어야 한다.
- 내부 B를 라인 수만큼 받은 뒤 외부 B를 정확히 한 번 낸다. 일반 응답의 BRESP는 라인 응답 중 가장 심한 값을
  보존하며 우선순위는 `DECERR > SLVERR > OKAY`이다. 외부 B가 backpressure를 받아도 BID/BRESP는
  안정적으로 유지된다.
- 외부 admission token과 `writes_pending`은 논리 AW/B에 한 번씩만 반영된다. 내부 라인 AW/B는
  외부 토큰을 추가로 얻거나 반환하지 않는다.
- WSTRB 또는 외부 WLAST 위반은 AW 뒤 data phase에서만 알 수 있으므로 sticky data fault와 assertion으로
  종료하는 fail-fast 계약이다. 이미 전달한 beat를 되돌리는 복구 가능한 endpoint는 이 단계 범위가 아니다.

이 구조에서 **논리 범위 하나는 adapter context 하나**를 점유하고, 실행 중인 라인은 최대 W개의 기존 B1
line tracker를 사용한다. 따라서 범위 전체를 기존 tracker 하나에 직렬로 몰아넣는 구조가 아니며, 범위마다
W칸 배열을 따로 복제하는 구조도 아니다. ReadRange의 logical ingress entry + global line tracker pool과 같은
두 수준 구조이다.

## 단계 6 전용 검증

재현 명령:

```sh
python3 scripts/run_rcci_stage6.py
```

| 시험 | 자극과 판정 | 결과 |
|---|---|---|
| `write_range_w1/w4/w8` | W=1·4·8 각각에서 1·8·64라인, 내부 주소 +64 B, line WLAST, line window, 외부 B 하나 | PASS |
| conventional B1 | 같은 adapter를 통과하는 1라인 WriteLineUnique의 AW/W/B 보존 | PASS |
| BRESP 병합 | 중간 line B에 SLVERR를 넣고 마지막 외부 BRESP까지 유지 | PASS |
| WSTRB 오류 | WriteRange 중 partial strobe | EXPECTED FAILURE PASS (`RANGE_WRITE_WSTRB`) |
| WLAST 오류 | 범위 최종 beat가 아닌 위치의 외부 WLAST | EXPECTED FAILURE PASS (`RANGE_WRITE_WLAST`) |
| ACE top 통합 | 8라인 WriteRange, dirty/clean cache line 포함, 8회 MakeInvalid, memory byte 전수 비교, B backpressure | PASS |
| mode 비교 | `USE_RANGE=0/1` 통합 시나리오 | 모두 PASS |
| 형식 행렬 | 기능 off, LEN, 4 KB, DOMAIN, SIZE, BURST, CACHE, LOCK, BAR, 정렬 위반 | 모두 미수락 + sticky fault PASS |
| 주소 증가 제거 | 내부 line 주소가 +64 B로 증가하지 않는 변이 | EXPECTED FAILURE PASS (`WRITE_RANGE_LINE_AW`) |
| issue 증가 오류 | `issue_idx`가 다음 라인을 건너뛰는 변이 | EXPECTED FAILURE PASS (`WRITE_RANGE_LINE_AW`) |
| 외부 WLAST 누출 | 외부 최종 WLAST를 내부 line WLAST로 직접 전달 | EXPECTED FAILURE PASS (`WRITE_RANGE_LINE_W`) |
| 조기 B | 모든 line B 전에 외부 B 생성 | EXPECTED FAILURE PASS (`WRITE_RANGE_EARLY_B`) |
| BRESP 누적 제거 | 중간 line 오류 응답을 버림 | EXPECTED FAILURE PASS (`WRITE_RANGE_MERGED_B`) |
| 창 직렬화 | W>1이어도 line window를 1로 고정 | EXPECTED FAILURE PASS (`WRITE_RANGE_LINE_AW`) |
| 4 KB 검사 제거 | 경계를 넘는 WriteRange 수락 | EXPECTED FAILURE PASS (`STAGE6_RANGE_FORMAT_ACCEPTED`) |

기계 판독 결과는 [summary.json](summary.json)에 저장한다. 총 24건이며 정상·거부 시험 15건과
expected-failure 9건이 모두 의도한 판정을 냈다.

## 최종 RTL 스냅샷 검증

| 범위 | 명령 | 결과 |
|---|---|---|
| 전체 ACE 회귀 | `python3 scripts/run_ace.py` | PASS — 71건(정상 20, expected-failure 51), `ace_20261106T020513Z_10db6697` |
| 기존 AXI/CCI 회귀 | `python3 scripts/run_regression.py` | PASS — 252건(정상 236, expected-failure 16), `simulation_20261106T021731Z_9e092158` |
| ACE 합성 | `python3 scripts/run_ace_synthesis.py` | PASS — B1/P 및 하위 ACE 모듈, `ace_synthesis_20261106T022418Z_3b7b0a94` |
| Python runner 구문 | `python3 -m py_compile ...` | PASS |

Vivado 2024.1 synthesis-only에서 기본 B1 top은 36,969 CLB LUT / 22,040 register, 범위 기능을 켠
P top은 39,167 CLB LUT / 22,727 register로 합성됐다. 이 수치는 단계 6 기능 회귀용이며 배치·배선,
timing sign-off 또는 최종 면적 원인 분해를 뜻하지 않는다. 최종 비교는 단계 11에서 수행한다.

## 단계 6 이후 남은 범위

- 단계 7에서 active ACE 경로에 남은 legacy setup range와 P-WR 모듈을 제거하고 archive 재현 경로와
  분리한다.
- 단계 8에서 range와 M0/ACE manager/다른 M1 요청 사이의 양방향 overlap hazard, CR Error line drain,
  메모리 EXOKAY fail-fast 검출, reset/error mutation, 작은 파라미터 formal 진행성을 완성한다.
- 현재 internal memory B는 기존 arbiter 계약처럼 발행 순서로 돌아온다고 가정한다. ID 간 out-of-order
  memory B를 재정렬하는 기능은 포함하지 않는다.

