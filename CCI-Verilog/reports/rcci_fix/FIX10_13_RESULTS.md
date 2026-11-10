# 보완 10~13 — M0 경로, stress, 경미 수정, R8 버퍼링

실행일: 2026-11-09
명령: `python3 scripts/run_regression.py`, `python3 scripts/run_rcci_stress.py`
결과 파일:
- [active_regression.json](active_regression.json): 통합 회귀 판정과 source hash
- [fix2_after/summary.json](fix2_after/summary.json): fix runner 178건
- [stress/summary.json](stress/summary.json): stress 100건

## 무엇을 바꿨는가

| 항목 | 문제 | 수정 |
|---|---|---|
| 보완 10 (R6·R7) | ACE 처리 중 M0 요청 중복 처리, grant 고정 중 M0 VALID 하강 | M0 VALID를 그대로 core에 전달하고, 차단은 core의 `EXT_M0_*_HAZARD`로 수행. ACE는 제시된 M0를 기다림 |
| 보완 11 (R9) | 무작위 혼합 시험 없음 | `RCCI_STRESS` 모드와 `run_rcci_stress.py`: M1 읽기·쓰기, M0, ACE 에이전트가 256라인에서 동시 동작 |
| 보완 12 (R10·R11·R13) | M0 burst 꼬리 미비교, barrier·DVM·Evict 과잉 차단, AW 1 cycle 추가 차단 | M0 span 비교, ACE probe를 `ace_*_owns`로 한정, Evict 비소유, `m1_aw_read_block` 축소 |
| 보완 13 (R8) | DMA의 R 수락이 CPU refill을 막음 | 방식 (b): 메모리 R을 항상 트래커 버퍼에 받고, 외부 M1 R은 버퍼에서만 보냄 |

## 통합 회귀 결과 (active_regression.json: PASS)

| 단계 | 결과 |
|---|---|
| stage 2, 3, 5, 6, 8 | PASS |
| fix runner | **178건 모두 기대대로** |
| stress quick (5개 구성 × 5 seed) | PASS |
| ACE 전체 | PASS (136행 중 빌드 68행 제외 68건) |
| formal | 30건 PASS / expected-failure PASS |

### fix runner 178건의 구성

| 구성 | 건수 | 결과 |
|---|---|---|
| 기본 rCCI: 사례 × ownership/data | 62 | PASS |
| 보수 gate(`RANGE_ACE_ISSUE_GATE=1`) | 30 | 27 PASS. 사례 14·16·31은 기대한 과잉 차단 |
| E=4·N_fly=16 | 7 | PASS |
| 구성 행렬 | 58 | PASS |
| mutation | 21 | 모두 검출 |

## 신규 사례와 mutation

| 사례 | 내용 | mutation (검출 표지) |
|---|---|---|
| 26 | ACE busy 중 M0가 대기하고 중복 처리되지 않음 | `m0_not_stalled_by_ace` |
| 27 | grant 받은 M0가 해저드 중에도 VALID 유지 | `m0_valid_gated_outside_core` |
| 28 | ACE가 제시된 M0를 기다림 | `ace_admit_ignores_presented_m0` |
| 29 | DMA가 R을 안 받아도 CPU refill 완료 | `memory_r_waits_for_dma` |
| 30 | M0 burst 꼬리가 소유 라인과 겹치면 대기 | `m0_probe_base_line_only` |
| 31 | Evict는 라인을 소유하지 않음 | `evict_owns_line` |

## Stress (전체)

- 5개 구성(B1-T16, R-E4-RW16, R-E16-RW4, R-E4-RW16-2CACHE, 2CACHE + snoop filter) × 20 seed, **100건 모두 PASS**.
- 검사: 읽은 데이터가 찢어지지 않았고 실제로 쓰인 버전인지, ownership monitor, M0 core/외부 handshake 수, AXI 안정성, drain, fault 없음.
- 검출력: 보완 10 이전 RTL에서 같은 시험이 R6(`ACE_PENDING_UNDERFLOW`, seed 3·5), R10(`M0_AR_CROSSES_LINE`, seed 1·2), timeout(seed 4)을 찾아냈다.

## 재측정 과정에서 고친 검증 환경 (RTL 변경 없음)

| 항목 | 원인 | 조치 |
|---|---|---|
| mutation 대상 불일치 3건 (stage 5, fix, ACE) | RTL 수정으로 대상 코드 변경 | 대상 문자열 갱신. fix·ACE 전체 대상이 현재 RTL과 일치함을 확인 |
| `read_interval_equiv_bmc` 반례 | 환경이 같은 snoop 요청에 응답을 두 번 주는 경우를 허용 | 요청당 응답 1회 가정 추가 (tagged service 계약) |
| `own_span_base_line_only` 미검출 | ownership monitor가 DUT의 span을 그대로 읽음 | monitor가 저장된 요청에서 span을 직접 계산 |
| stress·fix 빌드 지연 (49분 이상) | 큰 사례 task와 64라인 루프 전개로 g++ 입력이 비대 | stress 빌드에서 사례 task 제외, fix 빌드에 `--unroll-count 2` (4~8초) |

## 성능·비용 재측정

상세는 [PERF_RESULTS.md](../rcci_perf/PERF_RESULTS.md), [COST_RESULTS.md](../rcci_cost/COST_RESULTS.md).

| 항목 | 이전 | 재측정 |
|---|---|---|
| 읽기 첫 데이터 (B1 = rCCI) | 14 cycle | **18 cycle** |
| 읽기 처리량 (창 ≥4) | 8.04 | 8.06 cycle/라인 |
| 쓰기 처리량 | 5.07 | 5.07 (변화 없음) |
| 엔트리 점유, DMA 요청 수 | 2.5 vs 15.2, 4 vs 256 | 동일 |

**비용 측정 방법 변경 (2026-11-09).** 이전 비교(엔트리 4개 rCCI vs B1-T16)는 용량이 다르고 기존 하드웨어를 제거한 구성이어서 폐기했다. RTL을 파라미터로 분리해 기준 B1에서 범위 하드웨어를 빼고, 제안 방식은 B1을 모두 유지한 채 범위 하드웨어를 더했다. 구간을 페이지 일치 + 7비트 오프셋으로 줄인 최종 RTL에서 같은 용량(16)의 값은 LUT 58,058 → 63,374(+9.2%), FF 21,569 → 22,872(+6.0%)이다. 이 변경 후 통합 회귀, stress 100건, 성능 재측정을 다시 수행했으며 성능 수치는 변하지 않았다.
