# rCCI 단계 5 결과 — ReadRange

작성일: 2026-11-06  
상태: 완료 — 범위 읽기 기능 경로, 단계 5 directed/mutation, 전체 회귀 및 합성 통과

## 구현 결과

- M1의 shareable `ARSNOOP_READ_RANGE(0b0110)`를 실제 요청으로 수락한다. `USE_RANGE=0`에서는
  같은 opcode를 거부한다.
- 외부 AR 한 건이 ingress 엔트리 한 개를 점유한다. 엔트리는 7비트 `lines`, `issue_idx`,
  `out_idx`와 base address, ID, LEN을 보존한다. 64라인 요청에서 `issue_idx`와 완료 시 저장되는
  `out_idx`가 64를 표현한다.
- B1과 ReadRange가 global line tracker pool을 공유한다. `RANGE_READ_WINDOW=W`는 여러 엔트리를
  합친 live line tracker 수를 W 이하로 제한한다. 기본 구성은 W=16이며 elaboration에서
  `W <= M1_READ_TRACKERS`와 `W <= MAX_OUTSTANDING_TRANSACTIONS`를 검사한다.
- line tracker 할당과 NQ 전달을 tracker-tag FIFO로 분리했다. 서비스가 backpressure를 주어도
  free tracker가 있으면 W개까지 창을 채울 수 있다.
- 스눕은 ReadOnce다. DataTransfer hit는 512비트 CD를 line tracker에 복사해 service context를
  조기에 반환하고, miss는 내부 M1에 64 B AR(`ARLEN=3`)을 낸다.
- `issue_head`는 line tracker 할당 순서, `send_head/send_idx`는 snoop 결과와 memory AR 발행 순서,
  `retire_head/out_idx`는 외부 R 출력 순서를 각각 관리한다. 뒤 라인의 snoop이 먼저 끝나도 외부
  R 순서는 바뀌지 않는다.
- 내부 miss RLAST는 라인마다 발생하지만 외부 `M1_RLAST`는 범위의 마지막 라인 마지막 beat에서만
  보인다. admission token과 `reads_pending`도 그 최종 handshake에서 한 번만 해제된다.
- 범위 hazard는 live line tracker, 즉 현재 창의 라인에만 걸린다. 같은 페이지의 아직 창에 들어오지
  않은 라인은 과잉 차단하지 않는다. 기존 setup READ의 context hazard는 단계 7 제거 전까지 호환
  경로로 남겨 두었다.
- ReadRange 형식은 64 B 정렬, `(ARLEN+1)%4=0`, 한 4 KB 페이지, 128-bit SIZE, INCR,
  shareable DOMAIN, Modifiable CACHE, normal LOCK/BAR를 요구한다. 위반 요청은 READY를 내리지 않고
  sticky top fault를 세운다.

## 검증

재현 명령:

```sh
python3 scripts/run_rcci_stage5.py
```

| 시험 | 자극과 판정 | 결과 |
|---|---|---|
| `range_w1/w4/w8` | 각 W에서 1·8·64라인 ReadRange, line index 기반 hit/miss 혼합 | PASS |
| 64라인 경계 | LEN=255, 63번 라인 뒤 종료, count와 tracker 전부 0 | PASS |
| R 조립 | hit CD와 miss memory source를 주소 순서로 소비, 최종 beat만 RLAST | PASS |
| 창 hazard | `[out_idx, issue_idx)` 첫 라인은 차단, W 바로 다음 라인은 통과 | PASS |
| 여러 범위 | 서로 다른 ID의 4라인 범위 두 건을 먼저 수락하고 ingress 순서로 완료 | PASS |
| ACE top 통합 | 8라인 중 앞 7라인 memory miss, 마지막 line clean CD hit | PASS |
| M0 혼합 | ReadRange가 진행되는 동안 다른 page의 M0 64 B 읽기 완료 | PASS |
| 형식 행렬 | 기능 off, LEN, 4 KB, DOMAIN, SIZE, BURST, CACHE, LOCK, BAR, 정렬 위반 | 모두 거부 PASS |
| `no_issue_increment` | `issue_idx` 증가 제거 | EXPECTED FAILURE PASS (`RANGE_NQ_ORDER`) |
| `no_output_increment` | `out_idx` 증가 제거 | EXPECTED FAILURE PASS (`RANGE_READ_POINTER_WINDOW`) |
| `drop_window_hazard` | live tracker의 M0 AR hazard 제거 | EXPECTED FAILURE PASS |
| `overblock_full_page` | 범위와 같은 page 전체를 hazard 처리 | EXPECTED FAILURE PASS |
| `accept_4k_crossing` | 4 KB 비교 완화 | EXPECTED FAILURE PASS |
| `line_rlast_leak` | 내부 라인 RLAST를 외부에 그대로 전달 | EXPECTED FAILURE PASS |

기계 판독 결과는 [summary.json](summary.json)에 저장한다.

최종 단계 5 RTL을 고정한 뒤 다음 상위 검증도 다시 실행했다.

| 범위 | 명령 | 결과 |
|---|---|---|
| 전체 ACE 회귀 | `python3 scripts/run_ace.py` | PASS — 70건(정상 19, expected-failure 51), `ace_20261106T010635Z_9f3404e5` |
| 기존 AXI/CCI 회귀 | `python3 scripts/run_regression.py` | PASS — 252건(정상 236, expected-failure 16), `simulation_20261106T011524Z_464d23c3` |
| ACE 합성 | `python3 scripts/run_ace_synthesis.py` | PASS — B1/P 및 하위 ACE 모듈, `ace_synthesis_20261106T012210Z_78b8fb39` |

합성은 Vivado 2024.1의 synthesis-only 결과다. 배치·배선 및 timing sign-off를 뜻하지 않는다. 동일 기본
구성에서 B1 top은 35,686 CLB LUT / 20,458 register, P top은 37,542 CLB LUT / 21,122 register로
합성됐다. 이 수치는 단계 5 회귀 확인용이며 최종 면적 비교와 원인 분해는 단계 11에서 수행한다.

## 단계 5 이후 남은 계약

- 단계 6에서 logical adapter context와 기존 B1 line tracker를 결합해 WriteRange의 W 4-beat 분할과 B 병합을 구현했다. 결과는 `reports/rcci_stage6/STAGE6_RESULTS.md`에 기록한다.
- 단계 7에서 setup READ와 `range_ctx/read_release` 호환 경로 및 old P-WR 모듈을 active file list에서 제거한다.
- 단계 8에서 range가 다른 line/range 엔트리와 겹칠 때의 반대 방향 hazard, ACE manager 동시 admission,
  CR Error의 line-level SLVERR 생성, reset/error mutation, formal bounded progress를 완성한다.
- 현재 arbiter 계약처럼 M1 memory response는 발행 순서로 돌아온다고 가정한다. ID 간 out-of-order
  memory response 지원은 이 계획의 제한 사항이다.

