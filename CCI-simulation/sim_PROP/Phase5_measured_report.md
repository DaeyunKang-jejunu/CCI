# Phase 5 — 제안 vs coarse **하이브리드 타임라인 분석** (policy-independent)

작성일: 2026-08-04 (성격 규정 정정: 2026-08-05). 이 보고서는 기존 `Phase6_report.md`(합성 post-hoc probe 버전)를 대체한다.

> **성격 규정 (중요, 코드리뷰 반영).** 아래 수치는 "실시간 게이트로 두 정책을 각각 timed 실행한 실측"이 **아니다.** 실제 트래픽·자원 경합·완료 시점은 타임드 시뮬레이션에서 나온 값이지만, "line까지 vs page까지" **대기(hazard-wait)는 기록된 완료 타임라인에서 사후 계산**한 것이다. 즉 **하이브리드/분석적 hazard-wait 분석(상한)**이며, "제안 메커니즘 직접 구현 완료 / 실측 전환 완료"로 해석해서는 안 된다. 파일명의 "measured"도 이 의미로 한정한다. 정확한 성격과 한계는 §5 참조.

## 측정 방식 (정직한 성격 규정)

other-master(MST0, port 0)가 destination 영역을 **stride 리더**로 읽어 copy front와 겹친다. 읽기는 **게이트로 막지 않고**(스케줄이 정책·게이팅 피드백에 오염되지 않게) 발행 시점·page·line을 기록한다. 실행 종료 후 **실제 완료 타임라인**(per-line `done_cycle`, `page_done_cycle`)에서 각 읽기의 대기를 두 정책으로 계산한다:

- proposed(line 점진): 그 line의 write 완료까지 대기 = `done_cycle[line] − issue`
- coarse(page 일괄): 페이지 전체 완료까지 대기 = `page_done_cycle − issue`

발행 시점·자원 경합·완료 시점은 모두 **타임드 시뮬레이션의 실측값**이고, "line까지 vs page까지"만 그 실측 타임라인에서 유도한다. `done_cycle[line] ≤ page_done_cycle`이 성립하므로 **모든 읽기에서 proposed ≤ coarse가 수학적으로 보장**되며, 단일 실행에서 두 정책을 공정 비교한다(동일 스케줄).

- 비회귀: L0(제안 off)=L1(제안 on, other off)=**262,206** (copy 미게이트).
- 무결성: 전 실행에서 실질 체크(alloc·DONE·doneBits·live·I2·I4) PASS, **monotonicity 위반 0**(102개 실행 전부 prop ≤ coarse).

## 대표 결과 (memcpy, r=16, s=10, n=8, stride=8)

| 지표 | proposed | coarse | 개선 |
|---|---|---|---|
| wait total | 1,508,593 | 2,221,353 | **−32.1%** |
| wait avg | 366.3 | 539.3 | −32% |
| wait p95 | 508 | 844 | −40% |
| wait p99 | 540 | 976 | −45% |
| conflict reads | 3,219 / 4,119 | — | — |
| copy window (cycles) | 278,528 (정책 무관) | — | — |
| tracker 점유 (range/line) | 3 / 85 (28.3x) | — | — |

## Tracker 점유 (교정본 — per-line AW 기준)

점유비는 conventional line-tracker가 한 line을 **그 line 자신의 AW(쓰기 발행) 시점부터** outstanding으로 세도록 교정했다(이전엔 페이지 첫 AW 기준으로 저-n을 과대계상). r16 s10 기준:

| n | range peak | line peak | 비율 |
|---|---|---|---|
| 1 | 2 | 14 | 7.0x |
| 2 | 2 | 22 | 11.0x |
| 4 | 2 | 67 | 33.5x |
| 8 | 3 | 85 | 28.3x |
| 16 | 3 | 84 | 28.0x |
| 64 | 5 | 320 | **64.0x** |

n=64는 AW 1개=페이지 1개라 원래 정확(64.0x, 산술 상한과 일치). 저-n은 발행율에 따라 동시 outstanding line이 적어 비율이 낮다(정직값). 전체 그리드 occ_ratio 범위 **1.0 ~ 64.0x**.

## (r,s,n) 그리드 (stride=n, 96점)

- 충돌 발생 구간(conflict>50) **53/96점**에서 proposed의 other-master 대기 감소 **평균 42.7% (0.5 ~ 95.7%)**.
- copy window는 정책과 무관(단일 실행). tracker 점유비는 n·발행율에 따라 **최대 64x**(위 교정 표).
- 나머지 43점은 stride=n가 그 (r,s,n)에서 front를 잘 추종하지 못해 충돌이 적음 → 효과 미미(아래 소멸 조건 참조).
- CSV: `summary_measured.csv` (열: r,s,n,copy_cycles,range_peak,line_peak,occ_ratio,reads,conflict,wait_prop,wait_coarse,reduction_%,avg_*,p95_*,p99_*,I1_info).

## 효과 곡선 · 소멸 조건 — stride 서브스윕 (r16, s10, n8)

| stride(lines) | conflict/reads | reduction% | p95 prop→coarse |
|---|---|---|---|
| 1 | 14 / 4258 | 60.9 | 0→0 |
| 2 | 15 / 4378 | 57.4 | 0→0 |
| 4 | 104 / 5195 | 46.2 | 0→0 |
| **8 (=n)** | **3219 / 4119** | **32.1** | **508→844** |
| 16 | 18 / 4167 | 51.8 | 0→0 |
| 32 | 24 / 5405 | 46.0 | 0→0 |
| 64 | 18 / 5500 | 66.3 | 0→0 |

핵심: **충돌은 stride = n(=8)에서만 크게 발생**한다(3,219 vs 나머지 14~104). copy line-rate/read-rate 비 ≈ n이므로 stride=n일 때만 MST0이 copy front를 추종해 in-flight 페이지를 때린다. 그 외 stride에서는 MST0이 앞서거나 뒤처져 완료된 페이지를 읽어 **충돌이 소멸(효과 없음)**. 즉 **효과 크기는 other-master 트래픽이 진행 중 front와 겹치는 정도에 종속**되며, 겹치지 않으면 사라진다. (stride≠8의 reduction% 수치는 표본(충돌)이 10~100건으로 작아 통계적 의미가 약함 — 판단은 conflict 수 기준.)

## 한계·유의 (정직 고지 — 코드리뷰 반영 확장)

1. **실시간 게이트 없음(성격)**: MST0 read는 hazard로 막지 않고 로그만 한다. 대기는 사후 계산이며, 실제로 read를 지연시키는 timed 게이트가 아니다. 따라서 이 값은 **인과적 성능 향상이 아니라, 관찰된 완료 순서에서 line별 해제가 page 일괄 대비 줄일 수 있는 hazard-wait의 분석적 크기**로만 읽어야 한다.
2. **단조성·copy 불변은 tautology**: `done_cycle[line] ≤ page_done_cycle`이라 per-read proposed ≤ coarse는 **수식상 필연**이고, copy 완료가 정책과 무관한 것도 **두 정책을 별도 실행한 게 아니라 한 실행에 두 식을 적용**했기 때문이다. 즉 이 둘은 게이트·FSM의 정확성 검증이 **아니다**.
3. **hazard-wait ≠ access latency**: 대기는 `done_cycle−issue`(또는 `page_done−issue`)로, 메모리 기본 지연·snoop·R 경합·RLAST 완료가 **포함되지 않은** hazard-wait다. other-master access latency 실측이라 부르면 안 된다.
4. **측정 범위(스트림 truncation)**: 실행은 copy(port1) 완료 시 종료하고 MST0 스트림 전체를 배수(drain)하지 않는다. 충돌은 copy 진행 중에만 발생하므로 **충돌 이벤트 손실은 없으나**, 로그된 read는 copy-동시 구간의 prefix라서 "전체 read 대비" 백분위·평균은 그 범위 기준으로 해석해야 한다(구성별 `reads`가 크게 다른 이유).
5. **descriptor demand ≠ RTL occupancy**: "range/line 최대 64x"는 자원 무제한 가정의 **동시 필요 descriptor 수요(산술 상한)**다. C++ live 모델은 여러 page를 동시 보유(peak 3~5)하나 RTL range tracker는 **단일 context**이고 RTL baseline은 **batch 단위 해제**라, 이 수치는 RTL 자원 점유도, FF/LUT 면적 절감비도 아니다. **HW 비용은 합성 결과로만 주장**한다.
6. **I1(write<write_release)은 정보성**: 관찰 모델이 copy write를 게이트하지 않아(비회귀 유지) 큰 s에서 모델상 invalidation 창이 실제 write 완료보다 늦어 I1>0(고 s 24개). 지연 지표는 실제 `done_cycle`을 쓰므로 무관. **단, 이는 C++이 early-invalidation ordering을 검증하지 않는다는 뜻**이며, 그 검증은 RTL(`cci_range_rim_tracker`)에 있다.
7. **효과는 트래픽 가정 종속**: other-master가 in-flight front와 겹칠 때만 이득(§소멸 조건). 대표 트래픽(stride≈n)은 near-worst-case에 가까움 → 상한에 가까운 효과. 발행률·충돌률 독립 제어(OTHER_ISSUE_INTERVAL 등)는 미구현이라 민감도는 stride 중심.
8. **control-path 모델**: 데이터 미이동. 지연은 타이밍/완료 시점 기준(기능·전역 가시성·ACE 적합성 주장 불가).

## 결론

동일 스케줄 단일 실행의 **하이브리드 분석**에서, line 점진 해제는 in-flight 페이지에 접근하는 other-master의 hazard-wait를 **coarse(page 일괄) 대비 평균 ~43%(대표점 32%, tail 40~45%) 줄일 수 있는 분석적 상한**을 보인다. 이는 인과적 timed 성능 향상이 아니라 "주어진 완료 순서에서의 이론적 hazard-wait 절감"이며, descriptor 수요는 최대 64x(산술 상한, RTL 점유·면적 아님) 낮다. 효과는 트래픽이 front와 겹칠 때만 나타난다. **실측 승격(실시간 게이트+별도 timed 실행+early-invalidation 강제)은 별도 작업으로 남아 있다.**
