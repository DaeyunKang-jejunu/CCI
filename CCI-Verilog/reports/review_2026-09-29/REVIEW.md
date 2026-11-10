# AXI–CCI REVIEW — 현재 상태

최종 확인: **2026-11-02**. 현재 소스와 최신 실행 기준의 판정·결과·남은 범위만 정리한다. 해결된 결함의 원문 분석, 과거 수치와 판단은 아래 보존 문서에 그대로 있다.


## 1. 판정 요약

**v9 경로(B0/B1/P, `axi_cci_top`).** 정상 응답·단일 range context·full-line M1 write·in-order AXI 범위에서 선정된 기능과 OOC 면적 실험에는 근거가 있다. 기능 회귀(정상 132·의도된 실패 16), XSim 교차검증 43건(정상 33·의도된 실패 10), formal 16건, post-route 구현이 현재 source hash와 일치한다. 대표 비용은 **DUT P−B1 +782 LUT / +462 FF, BRAM 0**이다. 규모 측정(37·38·40·44번)으로 tracker 점유·할당 대기, snoop latency 민감도, 동시 M0 read/write 대기를 RTL에서 실측했다. snoop endpoint FIFO 불변식은 선정한 세 DEPTH/LATENCY 구성에서 시간 깊이 무제한 k-induction으로 증명했고, coherent ingress의 assertion은 깊이 20 BMC로 확인했다(41번).

**ACE 확장(`axi_cci_ace_top`).** v9 core 위에 8종 cache snoop, 5-bit CRRESP, CD와 dirty writeback, ACE initiating 요청(ARSNOOP/AWSNOOP/DOMAIN/BAR, RACK/WACK), DVM(1-part), barrier pair, shareable exclusive, 2-target snoop 집계와 optional filter를 추가했다. 기본 깊이 4의 manager context bank와 endpoint/fabric/service snoop context로 서로 다른 context의 manager 요청과 여러 snoop을 동시에 진행한다. 2026-10-08 source는 Verilator/XSim 정상 각 17건·의도된 실패 46건과 B1/P/2-target+filter 5 ns post-route를 통과했다(WNS 여유 P +0.105 ns, 2-target +0.037 ns). 다중-context 결함 10.1~10.4는 50번으로 해결했고, 10.5(DVM 전역 격리)는 시작 edge의 반대 채널 동시 수락이 남아 **부분 해결**이다(10절). full ACE compliance가 아니다.

**Range READ 부분 구현.** M1 coherent read ingress와 CleanInvalid NQ 경로, 253-bit READ/WRITE 공용 Range Context와 단일-context `P-RD-Q`를 추가했다. dirty/clean/miss 1-line은 CD/writeback B 이후 memory read, RLAST 완료와 context 재사용까지 통과했다. 최신 ACE 회귀는 Verilator 정상 18·의도된 실패 50건이다. 공유 read/write tracker, 명시적 `rd_q` association, sparse/full-page, 선택적 ACE hazard, 2-context, XSim·합성·성능은 남아 있으므로 `P-RD` 완료나 성능 결과로 주장하지 않는다(11절).

**주장하지 않는 것.** 전체 coherent system의 정확성, 폴더 모든 코드의 무결함, CCI 전체의 시간 깊이 무제한 formal proof(ingress는 bounded), 외부 인터페이스와 보드 clock/reset sign-off, 일반적인 처리량 우위.

## 2. 최신 실행

| 종류 | 실행 | 결과 |
|---|---|---|
| v9 기능 회귀 | `simulation_20261008T010758Z_4a29aa20` | 정상 132, 의도된 실패 16, 별도 측정 104(scale_sweep 60 + read/write extension 각 16 + probe_variation 12), Python 결과 판정 단위시험 8 |
| v9 XSim 교차검증 | `xsim_20261008T010758Z_3a493843` | 43건: 기존 9 + seed 10, cross_targeted 2, latency 12, 의도된 assertion 실패 4, RTL mutant 6 |
| v9 formal | `formal_20261007T030139Z_94db1c83` | endpoint k-induction 3, ingress BMC(B1/P) 2, witness 6, mutant 5 |
| v9 post-route | `implementation_20261007T093606Z_1bc5647a` | B0/B1/P timing·route·DRC gate 통과, 기능 비용 수치 동일 |
| ACE 회귀 | `ace_20261102T074008Z_965b5c1b` | Verilator 정상 18, 의도된 실패 50. Range READ dirty/clean/miss와 분류·hazard 변이 포함. 이번 source의 XSim은 미실행 |
| ACE synthesis | `ace_synthesis_20261008T011847Z_bbcc3d07` | 50번 수정 후 다중-context module 7종과 B1/P/2-target top, synthesis-only PASS |
| ACE post-route | `ace_implementation_20261008T012531Z_43d6eb18` | 50번 수정 후 B1/P/2-target+filter 5 ns timing·route·DRC gate 통과 |

모든 결과는 `reports/latest_*.json`이 가리키는 manifest로 추적하며, source/artifact hash가 현재와 다르거나 실행이 PASS가 아니면 결과 생성기가 수치를 출력하지 않는다. [자동 생성 결과](../INTEGRATION_RESULTS.md).

## 3. v9 기능 검증 구성

정상 132건에는 AXI protocol 검출기 10건, decoder formal 1건과 교차 simulator 1건이 포함되므로 "동일 종류의 시뮬레이션 132개"로 해석하지 않는다. 측정 104건(scale_sweep 60 + read/write extension 각 16 + probe_variation 12)은 132건과 분리해 센다.

| scope | 건수 | 내용 |
|---|---:|---|
| directed_suite | 12 | root AXI·grant lock 2건, 기본·변형 depth의 B1/P 전체 suite 10건 |
| parameter_directed | 6 | ingress depth 1/3/5의 conventional 수명·hazard·reset, P range hazard·duplicate·drain·setup 경계 |
| seeded_ready_stalls | 6 | seed 1/7/123 × B1/P, case reset마다 초기화되는 READY 난수 trace |
| constrained_traffic | 8 | seed 11/29/101/997 × B1/P, 실행당 24개 주소/mask/순서/setup-overlap/M0·M1 혼합 시나리오 |
| benchmark_isolation | 12 | 세 seed × 두 mode × 독립 실행/137-cycle prelude, 전체 suite의 METRIC과 일치 |
| memory_cache / memory_cache_parameters | 2 / 6 | byte copy, resident invalidation, late fill poison; (LINES, AXI depth, latency) 경계 |
| cache_collision | 4 | LINES 1/2/8/16의 final-beat/load/stalled-AR AC, 다른 tag·old resident 교체 |
| memory_collision | 3 | latency 0/5/255의 read-first·다른 주소·held R·후속 read |
| axi_outstanding_parameters | 3 | depth 1/3/5, 두 master 각 16 read/write, 외부 outstanding 상한·drain |
| axi_fifo_overlap | 3 | depth 1 full 보류 계약, depth 3/5 AW/B·AR/RLAST 동시 handshake 각 40회 |
| protocol_error_detection | 10 | 조기/누락 WLAST·RLAST, BID/RID 불일치, outstanding 없는 B/R, AW/AR overflow 방어 flag |
| seed_expansion | 14 | 기본 구성에서 READY seed 2~6 × B1/P, traffic seed 41/77 × B1/P (43번) |
| latency_matrix | 32 | (slave, snoop) latency (1,1)/(20,40) × B1/P 빌드마다 full suite·seed 2~6·traffic 41/77 (43번) |
| cross_targeted | 2 | suite에서 0이던 tracker_alloc×setup(P)·tracker_alloc×m0_accept 유도, 발생과 push×setup=0을 assertion으로 확인 (43번) |
| endpoint_parameters | 6 | depth/latency = (1,0),(1,1),(3,0),(3,12),(16,1),(16,12) |
| decoder (exhaustive / cross-simulator / formal) | 3 | Verilator·Icarus 49,152개 경계 조합, Yosys SAT 조합 명세 증명 |
| negative_assertion / mutation / fifo_mutation / negative_parameter | 4 / 9 / 2 / 1 | 의도된 실패 16건 |
| scale_sweep (측정) | 60 | B1/P × tracker 1/2/4/8/16 × 8/64/256 line × range 밖 write 0/25% |
| scale_extension (측정) | 16 | B1/P × tracker 4/16 × snoop latency 4/12/32/64, 256 line, 동시 M0 read probe |
| scale_write_extension (측정) | 16 | 같은 matrix의 동시 M0 write probe, AW admission 대기 측정 |
| probe_variation (측정) | 12 | B1/P × tracker 4/16 × probe 거리 (ahead, behind) = (1,2),(4,8),(16,32), 1024 line, 8 cycle 간격 (44번) |

XSim 43건과 formal 16건은 위 132건에 포함하지 않는다. XSim은 Verilator matrix의 부분집합(42번)이며 protocol detector·cache/memory·scale 측정은 반복하지 않는다.

## 4. 하드웨어 비용

### 4.1 v9 post-route

Vivado 2024.1, `xczu7ev-ffvc1156-2-e`, 5 ns, OOC 공통 clock source, `OBSERVE_DEBUG=0`. 레지스터 shell과 공통 snoop endpoint를 포함해 구현하고 DUT 계층을 대표값으로 쓴다.

| 구성 | DUT LUT | DUT FF | Shell 포함 LUT | Shell 포함 FF | WNS ns | WHS ns |
|---|---:|---:|---:|---:|---:|---:|
| B0 | 523 | 478 | 527 | 1642 | +2.351 | +0.001 |
| B1 | 2417 | 2083 | 2533 | 3399 | +0.698 | +0.001 |
| P | 3199 | 2545 | 3309 | 4003 | +0.797 | +0.010 |

대표 **DUT P−B1 = +782 LUT / +462 FF**, shell 포함 +776 LUT / +604 FF / CARRY8 +19 / BRAM 0. 모든 LUT 차이를 셀 단위로 귀속한 것은 아니다. 세 구성 모두 setup/hold/pulse-width failing endpoint 0, 내부 no-clock/unconstrained 0, route count 일관, 허용 OOC DRC 경고만 존재 조건을 통과했다.

### 4.2 ACE 확장

50번 수정을 반영한 2026-10-08 RTL의 synthesis(`ace_synthesis_20261008T011847Z_bbcc3d07`)와 post-route(`ace_implementation_20261008T012531Z_43d6eb18`) 결과다.

| 구성 | synthesis LUT / FF | post-route LUT / FF | WNS / WHS ns |
|---|---:|---:|---:|
| B1 top | 17092 / 8723 | 17080 / 8723 | +0.444 / +0.010 |
| P top | 17918 / 9189 | 17964 / 9189 | +0.105 / +0.020 |
| 2-target + filter top | 26729 / 16263 | 26389 / 16263 | +0.037 / +0.012 |
| endpoint / fabric / controller bank / manager bank | 4392/7188 · 10303/7526 · 4478/2481 · 9402/3617 | — | — |

P−B1은 synthesis +826 LUT / +466 FF, post-route +884 LUT / +466 FF이다. exclusive monitor를 bank 하나로 합쳐 manager bank FF가 이전 6421에서 3617로 줄었다. fabric CD 연결 bypass와 grant hold로 WNS 여유가 P +0.105 ns, 2-target+filter +0.037 ns로 작아졌으므로, 주파수를 올리거나 target을 늘릴 때 먼저 확인할 경로다. 이 흐름은 shell 없이 top을 직접 OOC 처리하고 외부 pin 경로를 false path로 제외하므로 v9 DUT 계층 수치(4.1)와 측정 경계가 다르다. 두 표를 직접 비교하지 않으며, v9 +782/+462에는 ACE 확장이 포함되지 않는다.

## 5. 측정 결과

### 5.1 8-line copy benchmark

기본 periodic workload에서 B1/P는 83/91 cycle, 최대 tracker 8/0이다. seed 1/7/123의 B1/P cycle은 83/93, 97/107, 95/103이며 전체 suite 뒤·독립 실행·137-cycle 사전 지연 뒤에 모두 같다. 비교 기준은 case reset 이후 시간 기준의 동일 READY trace이며 P setup 비용을 포함한다. 이 규모에서는 점유 절감만 확인되고 처리량 개선은 없다.

### 5.2 규모 측정 (37번)

최신 v9 회귀의 `scale_sweep.csv`(값은 37번 첫 측정 이후 모든 재실행에서 동일). ingress 16, snoop latency 12, periodic READY stall, P는 4KB page마다 setup.

| 256 line, range 밖 write 없음 | T=1 | T=2 | T=4 | T=8 | T=16 |
|---|---:|---:|---:|---:|---:|
| B1 최대 / 평균 점유 | 1 / 0.97 | 2 / 1.93 | 4 / 3.83 | 8 / 7.70 | 16 / 15.10 |
| B1 할당 대기 (cycle) | 7,394 | 3,560 | 1,653 | 1,496 | 0 |
| B1 cycle | 7,685 | 3,852 | 1,946 | 1,819 | 1,819 |
| P 점유 · 할당 대기 | 0 · 0 | 0 · 0 | 0 · 0 | 0 · 0 | 0 · 0 |
| P cycle | 2,147 | 2,147 | 2,147 | 2,147 | 2,147 |

- B1은 line이 tracker보다 많으면 tracker를 계속 채우고(평균 ≈ T), T=16에서야 할당 대기가 사라진다. P는 range write가 tracker를 우회해 모든 T에서 0이며 TB가 assertion으로 확인한다.
- P는 tracker 0개로 B1 T=4 수준(2,147 vs 1,946 cycle)이고, tracker가 충분한 B1(T≥8, 1,819)보다 18% 느리다.
- P의 대신 쓰는 자원: 단일 range context를 실행 시간의 94~99% 점유하고, page가 여럿이면 이전 context 완료를 기다리는 setup 대기가 생긴다(256 line, 4 page: 333 cycle). ingress 대기는 B1과 비슷하거나 크다(write_release 전에는 write를 내보내지 않음).
- range 밖 write 25%(256 line + 64건)에서 P는 그 write만큼만 tracker를 써 최대 4·평균 2.84이고 T≥4에서 할당 대기 0이다. 같은 조건의 B1은 16개가 필요하다.

응답 latency와 READY stall은 고정 패턴이며 단일 context·단일 slave 조건의 결과다. 일반적인 성능 우위·열위로 확대하지 않는다.

### 5.3 snoop latency와 동시 M0 대기 (38번)

256 line, B1/P × tracker 4/16 × snoop latency 4/12/32/64. copy 중 M0가 16 cycle마다 한 line을 읽는다. ahead = copy front 4 line 앞의 대상(아직 미기록), behind = 8 line 뒤의 대상, other = copy와 무관한 page. 대기는 ARVALID가 ARREADY 없이 유지된 cycle.

| snoop latency | 4 | 12 | 32 | 64 |
|---|---:|---:|---:|---:|
| B1 T=4 cycle | 1,810 | 1,946 | 3,226 | 5,249 |
| B1 T=16 cycle | 1,810 | 1,819 | 1,839 | 1,870 |
| P cycle (T 무관) | 2,115 | 2,147 | 2,441 | 2,953 |
| M0 ahead 대기 B1 / P (평균) | ≤ 1 / 130 | ≤ 1 / 134 | ≤ 1 / 171 | ≤ 1 / 235 |
| M0 behind 대기 B1 T4 / B1 T16 / P (평균) | 59 / 59 / 50 | 61 / 59 / 51 | 117 / 59 / 51 | 165 / 60 / 50 |
| M0 other 대기 (평균, 전 구성) | ≤ 1 | ≤ 1 | ≤ 1 | ≤ 1 |

- **처리 시간:** tracker가 부족한 B1(T=4)은 latency에 가장 민감하고(×2.9), P는 중간(×1.4), tracker가 충분한 B1(T=16)은 거의 영향이 없다(×1.03). latency 64에서 P는 B1 T=4보다 44% 빠르고 B1 T=16보다 58% 느리다.
- **P의 latency 노출 원인:** P의 cycle 증가분은 ingress 대기 증가분과 같다(latency 4→64에서 둘 다 +838). page마다 64개 MakeInvalid의 CR이 모두 돌아와야(endpoint 동시 16개) write_release가 되므로 latency가 page 단위로 드러난다. B1 T=16은 snoop과 write가 page 경계 없이 겹친다. setup 대기(333)와 freeze(8)는 latency와 무관하다.
- **다른 master 대기:** P는 range 활성 시점부터 아직 쓰지 않은 대상 line을 그 line의 B까지 막으므로, copy front 앞을 읽는 M0는 130~235 cycle 기다린다. B1은 ingress에 들어온 line만 막아 이 경우 대기가 거의 없다. 이미 수락된 line(behind)은 P가 약간 빨리 풀고, B1 T=4는 tracker 대기 때문에 latency에 따라 늘어난다. 무관한 page는 모두 1 cycle 이하.
- **해석 범위:** 선무효화는 대상 line을 copy 시작 전에 무효화하는 의미이므로 front 앞 대기는 정확성 비용이다. C++ 분석(line 점진 해제 vs page 일괄 해제)과는 비교 기준이 다르다. probe 간격·주소 패턴이 고정이고 표본 수가 7~20건이며, 단일 context·단일 slave 조건이다.

### 5.4 동시 M0 write AW 대기 (40번)

38번과 같은 256-line matrix에서 M0가 16 cycle마다 4-beat write를 낸다. 주소 분류도 같으며 표의 값은 AWVALID가 AWREADY 없이 유지된 cycle의 평균이다. 각 AW 수락 뒤 W 4 beat와 B까지 완료한 뒤 다음 표본을 내므로 read probe와 표본 수·발행 시점은 다르다.

| snoop latency | 4 | 12 | 32 | 64 |
|---|---:|---:|---:|---:|
| B1 T=4 ahead / behind | 0.18 / 60.27 | 0.50 / 64.08 | 0.00 / 105.06 | 0.22 / 181.33 |
| B1 T=16 ahead / behind | 0.40 / 60.25 | 0.20 / 60.20 | 0.33 / 60.20 | 0.14 / 63.88 |
| P ahead / behind (T=4·16 동일) | 143.00 / 60.00 | 151.00 / 60.25 | 225.25 / 60.25 | 353.00 / 60.00 |
| other (전 구성) | ≤ 0.50 | ≤ 0.67 | ≤ 1.00 | ≤ 0.33 |

- P의 아직 쓰지 않은 대상(ahead)은 page 선무효화가 끝나고 해당 line의 range write B가 올 때까지 AW가 막혀 latency 4→64에서 평균 143→353 cycle로 늘었다. tracker 수에는 영향받지 않았다.
- B1 T=4의 이미 진행된 대상(behind)은 tracker 포화와 응답 지연의 영향을 받아 60→181 cycle로 늘었다. T=16에서는 평균 60~64 cycle로 유지됐다. 무관한 page는 모든 구성에서 1 cycle 이하이다.
- 이는 고정 interval·주소 순환과 한 번에 하나의 M0 write를 끝내는 조건의 AW admission 측정이다. 전체 write latency나 일반적인 master 간 공정성 수치로 확대하지 않는다.

### 5.5 RTL 계측 coverage (24번)

B1/P(ingress/tracker/AC FIFO = 16/16/16)의 positive 실행 22건(기존 14 + seed_expansion 7 + cross_targeted 1)을 구성별로 합산한다. scale·latency 실행은 별도 빌드라 분모에 포함하지 않는다.

| 구성 | line/block | branch | toggle |
|---|---:|---:|---:|
| B1 | 61/69 (88.41%) | 128/150 (85.33%) | 5014/10448 (47.99%) |
| P | 77/85 (90.59%) | 167/184 (90.76%) | 10052/13492 (74.50%) |
| AXI FIFO d1 / d3 / d5 | 23/32 | 63/90 · 64/90 · 64/90 | 26.20% · 27.71% · 28.76% |

Verilator 계측 point 기준이며 요구사항 검증률이나 pass gate가 아니다. 미실행 line/branch(B1 30개, P 25개)를 소스와 대조해 모두 분류했다. B1의 arbiter L350 full 분기는 cross_targeted 실행(tracker 수를 넘는 conventional burst)에서 새로 실행되었다. 이 분류는 unreachable proof나 waiver가 아니다.

| 원인 | 위치 | 판단 |
|---|---|---|
| DEBUG 출력(`DEBUG=0`) | arbiter `resp_str`(L295~300), DEBUG print 분기(L515·522·528·604·610) | 구조상 미실행 |
| 프로토콜 위반 검출 | arbiter WLAST 불일치(L460), B 순서/ID(L489·492), R 순서/ID/RLAST(L561·564·567), full 상태 handshake(L442·452) | 정상 coverage suite에서는 미실행. 39번 unit test가 실제 handshake 8건과 overflow white-box 2건으로 sticky flag를 독립 확인 |
| 큐 full 분기 | arbiter L393·551 (P는 L350 포함) | 통합 구성(depth 16)에서는 미도달, AXI FIFO depth 1 구성에서 별도 검사 |
| FSM `default` | arbiter L483·590 | 2-state enum이라 도달 불가 |
| B1에서 비활성인 range 분기 | ingress L142~146(`invalidating` 참), L250(range B) | B1에서 상수 0 |
| assertion 실패 분기 | top L282 | 정상 실행에서 도달 불가 |

**미실행 toggle 분류(43번).** `scripts/classify_toggle.py`가 regression 안에서 미실행 toggle point를 신호 역할 규칙으로 분류해 `toggle_classification.json`에 남긴다. 규칙에 맞지 않으면 unclassified로 남기며 현재 0이다.

| 분류 | B1 | P | 의미 |
|---|---:|---:|---|
| range_path_tied_off_in_B1 | 2499 | – | USE_RANGE=0에서 setup/context/range AC 경로가 상수 |
| address_outside_window | 1090 | 1427 | 시험 주소 창 밖의 상위 address/page bit |
| payload_data | 1172 | 1172 | data bit. coherence 제어는 data를 보지 않음 |
| fixed_protocol_field | 519 | 586 | LEN/LAST/ID/SNOOP/source가 지원 subset에서 고정 |
| line_mask_unused_lines | – | 90 | 계측 실행에서 range에 들어가지 않은 line의 mask bit |
| occupancy_parameter_dependent | 70 | 76 | full/count/index MSB. 작은 depth 빌드(비계측)에서만 도달 |
| response_okay_only / error_flag_negative_only / tb_constant_handshake | 60 / 20 / 4 | 64 / 20 / 5 | OKAY만 사용, 오류 flag는 negative 실행에서만, TB가 상수로 유지 |
| 합계 | 5434 | 3440 | unclassified 0 |

분류는 미실행 사유의 설명이며 해당 기능의 검증을 대신하지 않는다. 특히 `tracker_full_stall`은 계측 빌드(T=16)에서 0이지만, scale_sweep의 T≤4 빌드에서 실제로 발생하고 측정된다.

**동일 cycle 사건 cross coverage(43번).** TB가 매 cycle 8개 사건(ingress push, AW issue, B retire, tracker alloc, AC, CR, M0 accept, setup)의 동시 발생 28쌍을 세어 `CROSS_COVERAGE`로 출력하고, runner가 tb_cci_integration의 모든 positive 실행에서 합산한다(`cross_coverage.json`).

| 구성 | Hit 쌍 | 0인 쌍과 판단 |
|---|---:|---|
| B1 | 21/28 | setup 7쌍: B1에 setup 경로 없음(구조적) |
| P | 22/28 | ingress_push×setup, m0_accept×setup: setup_fire가 admission_freeze를 올려 M1 AW와 (grant lock 밖의) M0 AR/AW를 닫음(구조적). aw_issue·b_retire·ac·cr × setup 4쌍: 구조적 제외가 아니지만 **미관측** |

종전 suite에서 0이던 tracker_alloc×setup(P)과 tracker_alloc×m0_accept(P)는 `cross_targeted` 실행이 발생시키고 assertion으로 확인한다(P 전체 합산 64회·84회)(setup 핸드셰이크를 마지막 conventional AW의 할당 cycle에 맞춤). 쌍 단위 동시성이며 3개 이상 사건의 조합이나 FIFO 상태별 cross는 아니다.

### 5.6 probe 거리 변화 (44번)

1024 line(16 page) copy 동안 M0가 8 cycle마다 읽고, ahead/behind 거리를 바꿨다. 값은 AR 대기 평균 / 최대(대기 발생/표본) cycle이다. P는 tracker를 쓰지 않으므로 T=4와 T=16이 같다.

| 구성 | 거리 (ahead, behind) | ahead | behind | other |
|---|---|---|---|---|
| B1 T=4 | (1, 2) | 0.13 / 1 (6/47) | 107.26 / 109 (46/46) | 0.15 / 1 |
| B1 T=4 | (4, 8) | 0.14 / 1 (9/64) | 62.39 / 64 (64/64) | 0.14 / 1 |
| B1 T=4 | (16, 32) | 0.24 / 1 (31/130) | 0.24 / 1 (31/130) | 0.25 / 1 |
| B1 T=16 | (1, 2) | 0.00 / 0 | 96.65 / 97 (46/46) | 0.00 / 0 |
| B1 T=16 | (4, 8) | 0.00 / 0 | 54.75 / 55 (64/64) | 0.00 / 0 |
| B1 T=16 | (16, 32) | 0.24 / 1 | 0.24 / 1 | 0.25 / 1 |
| P (T=4·16 동일) | (1, 2) | 136.72 / 163 (32/32) | 76.74 / 100 (31/31) | 0.13 / 1 |
| P | (4, 8) | 122.20 / 193 (34/40) | 35.17 / 58 (33/40) | 0.18 / 1 |
| P | (16, 32) | 57.05 / 249 (31/73) | 0.21 / 1 | 0.23 / 1 |

- B1은 아직 쓰지 않은 line(ahead)을 막지 않고, 이미 지나간 line(behind)을 conventional entry가 retire될 때까지 막는다. behind 거리가 32 line이면 해당 entry가 이미 retire되어 대기가 사라진다.
- P는 page 선무효화 후 range write B까지 ahead line을 막는다. 거리가 멀수록 평균은 줄지만(137→57) page 경계 근처 표본 때문에 최대는 오히려 커진다(163→249). behind도 range B 전에는 막혀 거리 2에서 77 cycle이다.
- 표본 수는 대기 시간에 따라 달라지는 closed-loop probe 결과이며(하나가 끝나야 다음을 냄), 일반적인 latency 분포가 아니다.

## 6. 항목별 상태

| # | 영역 | 항목 | 현재 상태 |
|---|---|---|---|
| 1 | v9 | 독립 PATH/bitmap oracle | 유지, classifier page mutation 검출 |
| 2 | v9 | CR/B 오류 | simulation fail-fast; hardware recovery는 범위 밖 |
| 3 | v9 | memory/cache/refill | 최소 clean-cache 시험과 read-first 충돌 시험; 실제 master 계약은 범위 밖 |
| 4 | 검증 | 결과 생성기 | source/artifact·완료 manifest와 보고서 완전성 검사 |
| 5 | 검증 | 검증 다양성 | 작은 depth·mid-burst reset·setup 경계·endpoint·제약 트래픽 |
| 6 | 검증 | 참고용 코드 경계 | 명시적 file list, reference 모델은 검증 대상과 분리 |
| 7 | v9 | tracker 중복 주소/CAM | 제거 상태 유지 |
| 8 | v9 | DUT/shell 분리 | 관찰 출력 제거, DUT 대표 비용 |
| 9 | v9 | conventional AC 연속 발행 | retire/refill·연속 handshake 회귀 |
| 10 | v9 | range 과잉 차단 | 비대상/다른 page/done line의 bounded 수락과 mutation |
| 11 | 검증 | 작은 depth | `parameter_directed`; 다중-entry HOL은 depth≥3 |
| 12 | 검증 | 랜덤화 범위 | READY seed와 제약 트래픽 분리 |
| 13 | v9 | range-only 차단 | 세 phase × 두 채널, actual B 이전 차단·이후 해제 |
| 14 | v9 | AR/AW 독립·오연결 | 동시 probe, 개별 disable/오연결 mutation |
| 15 | 검증 | 잘린 보고서 수락 | fixture와 손상 시험으로 거부 |
| 16 | 검증 | 성능 RNG 이력 의존 | case reset 초기화, 독립/지연 실행 일치 |
| 17 | 검증 | memory read/write race | read-first 단일 process |
| 18 | 검증 | reference multi-context | 면적 sweep의 기능 검증 한계 명시, reference RTL 재설계 안 함 |
| 19 | 검증 | 재현성·parameter·경고 | tool/config/command 기록, warning 종류 gate, parameter 제약 |
| 20 | 문서 | 문서·진입점 | 현재/과거 REVIEW 분리, 실행 경로 구분 |
| 21 | 검증 | test-only cache 교체·AC 동시성 | 우선순위 수정, LINES 1/2/8/16 재현 시험 |
| 22 | v9 | XSim range hazard 갱신 | context별 continuous assignment로 XSim에서 같은 assertion 통과 |
| 23 | 검증 | AXI FIFO 동시성 | 전용 시험과 count 변이 2종 |
| 24 | 검증 | coverage 수치화 | line/branch/toggle point와 미실행 목록 |
| 25 | ACE | top pending 카운터 | handshake별 계수, 폭 확대, underflow/overflow assertion |
| 26 | ACE | barrier RACK/WACK 유실 | 응답 단계에서 ACK 래치 |
| 27 | ACE | AxBAR=2 오류 write W 미배출 | Evict 외 W 전량 소비 후 B |
| 28 | ACE | AxBAR=2 오류 read 짧은 burst | dataless만 1 beat, 나머지 ARLEN+1 |
| 29 | ACE | DVM payload·2-part | 원 주소 전달, 2-part는 두 part 동일 SLVERR |
| 30 | ACE | manager protocol error fail-stop | `fatal_fault`로 admission·manager·명시적 snoop 차단 |
| 31 | ACE | IDLE AR/AW 중재 | 1-bit round-robin |
| 32 | ACE | `SF_UPDATE`+AC 동시 입력 | update 우선, 그 cycle AC 미수락 |
| 33 | ACE | 동시 M0/M1 AW의 reservation kill | 2-entry kill vector |
| 34 | ACE | 같은 target filter tag collision | target과 무관하게 broadcast 전환 |
| 35 | 검증 | fail-stop 시험 상호 차단·생성 문서 | admission class별 단독 시험, 생성기 갱신 |
| 36 | ACE | 다중 line 회귀·post-route | `LONG_STRESS`, ACE 구현 흐름 |
| 37 | 측정 | 규모 측정 | `scale_sweep` 60 case, tracker 점유·할당 대기 실측 |
| 38 | 측정 | 규모 측정 확장 | snoop latency sweep, 동시 M0 read 대기(`scale_extension` 16 case) |
| 39 | 검증 | AXI protocol 오류 검출기 | malformed handshake 8건, full+handshake 방어 분기 2건, sticky flag 확인 |
| 40 | 측정 | M0 write 대기 | 동시 M0 write의 AW admission 대기(`scale_write_extension` 16 case) |
| 41 | 검증 | 순차 formal | endpoint FIFO k-induction 증명, ingress assertion B1/P 깊이 20 BMC, witness 6·mutant 5 (`run_formal.py`) |
| 42 | 검증 | XSim matrix | seed·latency·cross_targeted·의도된 실패 4·RTL mutant 6 추가, 9→43건 |
| 43 | 검증 | coverage 확장 | toggle 분류(unclassified 0), 8-사건 쌍 cross coverage, cross_targeted 2, seed_expansion 14, latency_matrix 32 |
| 44 | 측정 | probe 거리 변화 | 1024 line, ahead/behind (1,2)/(4,8)/(16,32), `probe_variation` 12 case |
| 45 | 검토 | 41~44번 검토 | runner gate 보완 후보 식별(7.11), 미반영 |
| 46 | ACE 확장 | 다중 outstanding·ID별 out-of-order·복수 snoop | 4-context manager bank와 snoop endpoint/fabric/service, R/B 역전, owner/직렬화 변이 구현·검증 |
| 47 | ACE manager | W FIFO push/pop 동시 count | 새 AW와 기존 마지막 W의 동시 handshake를 단일 case 갱신하고 overlap 변이로 검증 |
| 48 | ACE top | 자동/명시적 snoop response owner | 단일 owner bit를 수락 순서 FIFO로 교체하고 교차 수락·routing 변이 검증 |
| 49 | ACE top | service/manager WB arbitration | 별도 valid+owner로 ID-less WB를 B까지 잠그고 동시 VALID를 backpressure |
| 50 | ACE 다중-context | REVIEW 10.1~10.6 보완 | 공유 exclusive monitor·store 직렬화·commit 재검사, 중재 지점 grant 고정, AC 요청 순서, CR/CD 연결 해결; DVM 격리는 시작 edge 잔여(10절); 회귀 5건·변이 12종 |

25~36·46~50번은 새 시험과, 수정 전 동작을 되살리는 변이(expected failure)로 고정했다. 37·38·40·44번은 측정이며 완료 건수·P의 tracker 미사용·probe 표본 존재를 TB assertion으로 확인한다. 41번 formal은 witness로 비공허성을, mutant로 검사 강도를 확인한다.

## 7. 항목 상세

### 7.1 결과 판정·재현성 (15, 16, 19, 20)

- **15.** 실제 Vivado B0/B1/P 보고서를 `scripts/fixtures/hardware`에 format fixture로 보존한다. DRC 필수 section·violation count·행·detail 일치와 허용 rule(RTSTAT-10 / No routable loads만)을 검사하고 새 rule은 실패한다. route는 logical = exempt + routable, routable = fully-routed, routing error 0을 요구한다. `make test`가 판정 단위시험을 먼저 실행한다. fixture는 parser 입력이며 최신 측정값이 아니다.
- **16.** READY RNG를 reset마다 같은 seed로 다시 시작한다. `+bench_only`, `+bench_delay=N`으로 독립/지연 실행의 모든 METRIC이 full-suite 결과와 같은지 확인한다.
- **19.** manifest에 도구 version, host, compile/execute argv, seed, clock/latency, case scope를 남기고 timeout 시 stdout도 보존한다. 알려진 compiler warning 네 종류만 허용한다. slave `RESP_LATENCY` 0..255, cache LINES 1 또는 2의 거듭제곱을 강제한다. 제약 트래픽은 총 192개 시나리오이며 실행마다 contiguous/sparse 12개씩, duplicate 24개, read/write 혼합 bin을 assertion으로 요구한다(P는 setup-overlap 8개 추가).
- **20.** full runner, standalone Tcl, historical checkpoint repair를 문서에서 구분한다. reference `run_verilator.sh`의 종료 코드 문제를 고쳤으며 reference suite를 새로 인증한 것은 아니다.

### 7.2 메모리·cache 모델 (17, 21)

- **17.** `axi_memory_slave`는 같은 posedge process에서 RDATA를 먼저 계산하고 W bytes를 저장하는 read-first 모델이다. 제시된 R payload는 RREADY=0 동안 유지된다. 진행 중 read의 line 전체가 원자적 snapshot이라는 보증은 아니며, pending fill poison은 cached-master TB 모델의 역할이다.
- **21.** 같은 index의 old resident AC와 다른 tag의 마지막 refill beat가 겹치면 새 fill까지 무효화하던 우선순위를 고쳤다. `tb_cache_collision`이 LINES 1/2/8/16에서 6개 bin을 요구하며, 수정 전에는 old resident 교체 시나리오가 실패했다.

### 7.3 XSim 교차검증 (22)

XSim 2024.1에서 주소만 바뀔 때 range hazard hit가 갱신되지 않아 `HAZARD_BLOCK_MISSING:AR:INVALIDATING`으로 실패했다([진단 로그](../runs/xsim_20260930T022525Z_b919684a/cci_mode1.log)). 동적 packed-struct bit select를 쓰는 `always_comb`의 sensitivity 차이로 추정하며 simulator 원인을 확정한 것은 아니다. context별 generate/continuous assignment로 표현을 바꾸고 같은 assertion으로 통과했다. 전체 CCI의 Icarus 실행은 packed-struct·lifetime·SVA 제약으로 불가해([시도 기록](latest_audit/full_cci_iverilog_attempt.txt)) decoder만 Icarus로 교차검증한다.

### 7.4 FIFO 동시성·coverage (23, 24)

- **23.** 기존 workload에서 0이던 AW/B·AR/RLAST 동시 handshake를 `tb_axi_fifo_overlap`이 depth 3/5에서 각각 40회 요구하고, ID·W 순서·B 경로·R 데이터·수명 count·pointer wrap을 확인한다. count 변이 2종은 `FIFO_LIFETIME_COUNT`로 검출한다. ingress/AC FIFO/endpoint의 모든 cross 조합을 검증한 것은 아니다.
- **24.** 계측 결과는 5.5절. 계측 빌드와 `tb_cci_integration` 빌드에는 Verilator 5.048의 `__Vfork_*__sync` 생성 오류 우회로 `--output-split 0`을 쓴다. RTL과 assertion은 바꾸지 않았다.

### 7.5 ACE 결함 수정 (25~29)

재현용 TB로 확인한 결함이다.

- **25. pending 카운터.** top은 `{AW any, B any}`로 ±1만 셌다. M0 AW(arbiter)와 M1 AW(ingress)가 같은 cycle에 수락되면 +1만 반영되고, 이후 B 두 개로 5-bit 카운터가 31로 underflow해 유지보수·manager 요청이 영구히 막혔다. handshake 수를 각각 더하고, 폭을 `MAX_OUTSTANDING_TRANSACTIONS + M1_INGRESS_DEPTH` 기준으로 넓혔다(`PENDING_SAME_CYCLE_AW`, `count_any_aw`).
- **26. barrier ACK.** IHI 0022H D3.3은 RACK을 last R 다음 cycle에 1 cycle만 보내고 다른 transaction을 기다려 늦추지 말라고 규정한다. manager는 `BARRIER_ACK`에서만 ACK를 받아, R이 먼저 끝나고 B가 늦으면 RACK을 잃고 교착했다. 기존 시험은 RACK을 늦게 보내 이를 놓쳤다. `BARRIER_RESP` 단계에서도 해당 응답이 끝난 뒤의 ACK를 래치한다(`BARRIER_ONTIME_ACK`, `drop_early_barrier_rack`).
- **27. 오류 write.** `aw_bar!=0` 조건 때문에 AxBAR=2 오류 write가 W 없이 B를 반환해 다음 transaction과 W가 섞였다. Evict만 W 없이 B를 반환하고 나머지는 `DISCARD_W`로 모든 beat를 소비한다(`AXBAR2_ERROR_WRITE_DRAIN`, `skip_bar2_error_w_drain`).
- **28. 오류 read.** AxBAR=2 data read 오류가 1 beat로 끝났다. dataless 요청(CleanUnique, MakeUnique, CleanShared, CleanInvalid, MakeInvalid, DVM)만 1 beat, 나머지는 ARLEN+1 beat SLVERR이다(`AXBAR2_ERROR_READ_BEATS`, `short_bar2_error_read`).
- **29. DVM.** AC 주소를 64B 정렬하면서 DVM 주소 [5:0] (표 D13-10: ASID/VA valid, Leaf, Stage, 2-part)을 지웠다. DVM은 원 주소를 전달한다(`DVM_PAYLOAD`, `mask_dvm_payload`). 2-part DVM은 D13.2가 part 1의 CR 없이 part 2를 AC로 발행할 것을 요구하지만 part pair와 Complete lifecycle context를 구현하지 않았으므로 미지원으로 정하고, part 1과 이어지는 part 2에 같은 단일-beat SLVERR을 반환하며 snoop하지 않는다. part 2가 DVM Message/같은 ID가 아니면 `protocol_error`(`accept_two_part_dvm`).

### 7.6 ACE 정책 (30~32)

| 항목 | 변경 전 | 적용한 정책 | 근거 |
|---|---|---|---|
| 30. manager `ACE_PROTOCOL_ERROR` | 출력만 하고 admission은 계속 허용 | `fatal_fault = service_fault ∥ fabric_protocol_error ∥ ACE_PROTOCOL_ERROR`로 `fault`, v9 admission, manager `accept_enable`, 명시적 `req_valid/req_ready` 차단. 진행 중 R/B·RACK/WACK는 배출 | framing·association이 깨지면 transaction 경계를 신뢰할 수 없어 fail-stop이 안전. transaction-level SLVERR는 fatal 아님 |
| 31. IDLE AR/AW 동시 요청 | AR 고정 우선, AW 기아 가능 | 1-bit round-robin(reset 후 첫 tie는 AR). 단독 VALID는 즉시 수락, `BARRIER_PAIR`는 제외 | 단일 outstanding 구조에서 한 채널 기아가 전체 진행을 막음 |
| 32. `SF_UPDATE`와 AC 동시 입력 | 갱신 전 directory로 target 선택 후 sticky 오류 | update 우선, 그 cycle `ac_ready=0`, 다음 cycle 이후 갱신된 directory로 수락. 동시 입력 오류 판정 제거 | 오류 표시로는 이미 발생한 false-negative snoop을 되돌릴 수 없고 `SF_UPDATE`에 READY가 없음. update source에 backpressure가 필요해지면 `SF_UPDATE_READY`나 update FIFO로 확장 |

시험: 30은 WriteBack WLAST 오류 주입 후 `fault` 유지와 각 admission class의 단독 차단(35번), 31은 read 3·write 3을 동시에 계속 제시해 tie 5회 이상에서 수락이 번갈아 가는지(`AR_AW_ROUND_ROBIN`), 32는 sharer 추가·제거·DVM을 AC와 같은 cycle에 제시해 그 cycle `ac_ready==0`, 갱신된 target 선택, `protocol_error==0`을 확인한다(`SF_UPDATE_AC_ORDER`). 각 정책을 되돌리는 변이를 둔다.

### 7.7 30~32번 반영 후 추가 수정 (33~36)

- **33. reservation kill.** manager의 kill 입력이 한 쌍뿐이라 M0/M1 AW가 같은 cycle이면 M1 주소의 exclusive monitor가 남아 후속 CleanUnique가 잘못 EXOKAY로 성공할 수 있었다. 2-entry kill vector로 두 주소를 모두 무효화한다(`DUAL_RESERVATION_KILL`, `collapse_dual_reservation_kill`). D9.3상 non-exclusive write에 의한 무효화는 필수가 아니므로 보수적 선택이며, 비용은 4.2절.
- **34. filter collision.** 다른 target이 같은 index를 쓸 때만 broadcast로 전환해, 한 target이 filter index가 같고 tag가 다른 두 line을 가지면 앞 tag를 덮어써 false negative가 생길 수 있었다. 유효 sharer가 남은 index에 다른 tag의 present update가 오면 target과 관계없이 reset까지 broadcast로 전환한다. 정확한 교체는 기존 tag의 absent update 후 새 present update로 한다(`allow_same_target_filter_replace`).
- **35. fail-stop 시험.** 요청들을 동시에 제시하면 `req_valid`·ACE VALID가 core를 막아 fatal 결합을 일부 제거해도 통과할 수 있었다. admission class별로 단독 제시하고 내부 `service_req_valid=0`과 AC side effect 없음도 확인한다. fatal 결합, core block, manager `accept_enable`, 내부 valid, 외부 ready를 각각 제거하는 변이를 둔다. 결과 생성기의 ACE 기능 설명·synthesis 목록도 현재 기능에 맞췄다.
- **36. 다중 line·구현.** `LONG_STRESS` B1/P는 dirty line 2개의 CD snapshot·writeback(첫 CD 4 cycle 보류)과 core write 6개를 B backpressure와 함께 처리한다. B1은 CR 보류로 tracker 4개 포화를 관측한 뒤 회복하고, P는 6-line 선행 invalidation 후 tracker 0개로 완료한다. 384 bytes를 line별로 비교한다. `run_ace_implementation.py`/`run_ace_impl.tcl`은 B1/P/2-target+filter를 5 ns로 배치·배선한다.

### 7.8 규모 측정 (37)

기존 8-line benchmark는 range 대상 write만 있어 P의 tracker 점유·할당 대기가 구조적으로 0이고 B1의 할당 대기도 T≥8에서 0이었다. `tb_cci_integration`에 `+scale_bench +lines=N +outside=K`를 추가했다. N line을 4KB page 단위로 쓰고(P는 page마다 setup), K>0이면 K개 대상 write마다 range 밖 write 1개를 섞는다. 매 cycle tracker 점유(최대·평균), `tracker_full_stall`, ingress 대기, setup 대기, admission freeze, `range_active`를 누적해 `SCALE_METRIC`으로 출력하고, 완료 건수와 range 밖 write가 없을 때 P의 tracker 점유 0을 assertion으로 확인한다. `run_regression.py`의 `scale_sweep` scope가 coverage와 분리된 별도 빌드로 60 case를 실행해 `scale_sweep.csv`와 manifest `scale_metrics`에 남긴다. 결과는 5.2절. 같은 benchmark의 탐색 실행 기록은 [`reports/experiments/scale_sweep_2026-10-06/`](../experiments/scale_sweep_2026-10-06)에 있으며 값은 공식 run과 같다.

**38번.** TB에 `SNOOP_LATENCY` 파라미터(endpoint latency, 기본 12)와 `+m0_probe=I`를 추가했다. probe는 copy와 병렬로 I cycle마다 ahead/behind/other 주소를 돌아가며 읽고, ARVALID 유지 cycle을 분류별로 누적해 `M0_METRIC`으로 출력한다. 세 분류 모두 표본이 있어야 통과한다(`M0_PROBE_COVERAGE`). runner의 `scale_extension` scope가 B1/P × tracker 4/16 × latency 4/12/32/64(latency 12는 scale_sweep 빌드 재사용, 나머지 12개 별도 빌드)로 16 case를 실행해 `m0_wait.csv`와 manifest `m0_metrics`에 남긴다. probe를 켜도 copy cycle은 probe 없는 실행과 같다. 결과는 5.3절.

### 7.9 AXI 오류 검출기와 M0 write 측정 (39, 40)

- **39.** `tb_axi_protocol_errors`가 조기/최종 누락 WLAST·RLAST, BID/RID 불일치, outstanding AW/AR가 없는 B/R을 실제 handshake로 주입한다. 외부 READY가 full에서 내려가므로 정상 포트 자극으로는 발생할 수 없는 AW/AR overflow 방어 분기만 내부 full count와 handshake를 한 edge 강제한다. 10건 모두 해당 flag 발생과 3 cycle sticky 유지를 확인한다. 이는 malformed downstream에 대한 검출기 unit test이며 recovery 검증은 아니다.
- **40.** `+m0_write_probe=I`는 read probe와 같은 ahead/behind/other 주소에 M0 AW를 내고 AW admission 대기를 `M0W_METRIC`으로 기록한다. 수락 뒤 W/B를 완결해 미완료 probe를 남기지 않으며 세 분류의 표본 존재를 assertion으로 확인한다. runner는 38번과 같은 16개 matrix를 `scale_write_extension`으로 실행하고 `m0_write_wait.csv`에 남긴다. 결과는 5.4절.

### 7.10 formal·XSim matrix·coverage·probe 변화 (41~44)

- **41.** `scripts/run_formal.py`가 RTL을 sv2v v0.0.11로 변환하고(assertion 유지, `$fatal` 절만 제거) yowasp-yosys 0.69 `sat`으로 검사한다. 환경은 `formal/`에 있다. endpoint는 `endpoint_invariants.vh`의 불변식(occupancy 상한, ready=count<DEPTH, valid window, tail=head+count, head부터 비감소 delay, delay≤LATENCY)을 DEPTH/LATENCY 2/0·3/2·4/3에서 시간 깊이 무제한 k-induction으로 증명한다. 이는 모든 parameter 값에 대한 일반 증명이 아니며 DEPTH=1은 simulation만 수행했다. ingress는 `formal_ingress.sv`가 2 page×4 line 주소, in-order downstream(발행 index 순서대로 B), 미해결 AC에만 OKAY CR을 주는 snoop, 첫 cycle reset을 가정하고 DUT 자체 assertion을 B1/P 깊이 20 BMC로 확인한다(DEPTH 3, TRACKERS 2, AC_DEPTH 2, watchdog 비활성). CR 응답은 OKAY로 고정했으므로 CR 오류 경로는 simulation negative 시험 범위이다. witness 6종(b_fire, tracker_full_stall, CR, setup 수락, range B release, M0 hazard)은 반례가 나와야 통과하고, mutant 5종(endpoint ready off-by-one·head 미전진, ingress retire head 미전진·issued 미표시·tracker 미해제)은 반례로 검출되어야 통과한다. 첫 실행에서 induction의 base-case 반례 문자열(`model found for base case: FAIL!`)을 놓치는 판정 오류를 발견해 수정했다.
- **42.** `run_xsim.py`에 B1/P seed 2/3/5·traffic 41/77, cross_overlap, (slave, snoop) latency (1,1)/(20,40) 빌드의 suite·seed 2·traffic 41, 의도된 assertion 실패 4종, RTL mutant 6종(각자 별도 XSim work 디렉터리)을 추가했다. cmd.exe가 batch 인자의 `=`를 구분자로 처리해 `--testplusarg seed=2`가 깨지는 문제를 launcher batch에서 인자를 따옴표로 감싸 해결했다.
- **43.** `tb_cci_integration`에 `SLAVE_LATENCY`/`SNOOP_LATENCY` 파라미터, `CROSS_COVERAGE` 출력, `+cross_overlap` 시나리오를 추가했다. runner는 `seed_expansion`·`latency_matrix`·`cross_targeted` scope와 `toggle_classification.json`·`cross_coverage.json`을 만든다. 결과는 5.5절.
- **44.** `+probe_ahead=`/`+probe_behind=`로 probe 거리를 바꾸고 runner의 `probe_variation` scope가 12 case를 실행한다. 결과는 5.6절.

### 7.11 41~44번 검토에서 확인한 보완점 (45)

41~44번의 보고 수치와 실행 건수는 manifest와 일치한다. 다음은 현재 PASS를 무효화하지 않지만 향후 변경이 검증 강도를 조용히 낮추지 않도록 runner에 추가할 gate다(미반영).

- **[중간] formal assertion inventory가 pass gate가 아니다.** `run_formal.py`는 Yosys의 `$assert` 개수를 manifest에 기록하지만 기대 개수나 최소 개수를 검사하지 않는다. sv2v 변환이나 RTL 편집으로 assertion 일부가 사라져도 남은 assertion만 통과하면 PASS가 될 수 있다. case별 기대 assertion 수(현재 endpoint 11/14/17, ingress B1/P 13/19)를 gate하고, P 전용 range 상태·hazard mutation도 추가하는 것이 적절하다. 현재 ingress mutation 3종은 모두 `USE_RANGE=0`이다.
- **[중간] cross coverage의 분모와 구조적 0 검사가 fail-closed가 아니다.** runner는 실제로 parse된 `pIJ` key 수를 `total`로 사용하므로 출력 key가 누락되면 28보다 작은 분모로도 PASS한다. 각 mode에서 정확히 28개 key가 존재하는지 검사해야 한다. `cross_overlap`은 ingress_push×setup=0만 assert하고, 문서에서 함께 구조적 0으로 분류한 m0_accept×setup=0은 출력만 한다. 두 조건을 모두 assertion으로 고정해야 한다.
- **[낮음] cross-targeted 자극의 난수 이력이 명시되지 않는다.** `cross_overlap`의 주소와 gap은 `$urandom`을 사용하지만 seed plusarg와 manifest 기록이 없다. 현재 두 simulator에서 목표 pair가 발생했으나 exact count와 스케줄의 재현성을 위해 전용 deterministic PRNG 또는 명시적 seed를 사용해야 한다.
- **[중간] toggle 분류는 신호명 정규식 기반의 휴리스틱이다.** `address_outside_window`, `fixed_protocol_field`, `occupancy_parameter_dependent` 같은 넓은 규칙은 기능적으로 중요한 미실행 bit도 같은 이름만으로 분류할 수 있다. `unclassified=0`은 모든 point가 규칙 이름에 매칭됐다는 뜻이며 사유의 타당성 증명은 아니다. category별 대표 point를 소스·시나리오와 대조하고, total/category count의 예상치 또는 baseline 변화를 gate해야 한다.
- **[낮음] latency matrix가 두 변수를 함께 움직인다.** (slave, snoop)=(1,1)/(20,40)만 있어 slave latency와 snoop latency의 영향을 분리하지 못한다. mixed corner (1,40)/(20,1)를 추가하면 어느 응답 경로가 실패나 지연을 유발하는지 구분할 수 있다.
- **[정보] probe 변화의 한계는 문서와 일치한다.** 44번은 read probe의 거리만 바꾸며 interval은 8, 요청은 closed-loop이다. write 거리 변화, arrival/address 분포와 open-loop 부하는 아직 측정하지 않았다.

### 7.12 검토했으나 결함이 아닌 항목

- non-exclusive store에 의한 exclusive 예약 해제: D9.3.4는 다른 agent의 non-exclusive store 뒤 false pass를 허용하므로 필수 의무가 아니다. 현재 구현은 M0/M1 write(33번)와 manager의 non-shareable·memory-update write로 matching 예약을 지우는 보수적 정책을 모든 context에 같게 적용한다(50번). 성공한 exclusive store에 의한 다른 ID 예약 해제는 D9.3.1의 필수 동작이며 50번에서 context 간에도 적용했다.
- 실패한 exclusive store가 attempt를 등록하는 것: D9.3.1 "If an Exclusive Store fails ... the attempt must be recorded"와 일치한다.

### 7.13 ACE 다중 outstanding 확장 결과 (46)

작업은 association 규칙을 먼저 정하고 manager, snoop endpoint/fabric, service 순으로
확장한 뒤 결함 주입을 추가하는 순서로 진행했다.

1. **관측 기준과 scoreboard.** manager outstanding은 AR/AW handshake부터 최종 R/B와
   RACK/WACK까지로 정의했다. `tb_ace_manager_outstanding`은 context peak, 수락·완료 ID,
   R/B 완료 순서와 최종 drain을 기록한다. snoop 시험은 AC 수락 수, target별 AC 수,
   CR/response 수와 peak context를 별도로 센다.
2. **manager context bank.** `ace_manager_request_bank`가 controller 4개를 ID 하위
   비트의 고정 slot에 매핑하고 exclusive monitor는 bank에 하나만 둔다(50번). 같은 ID와 같은 slot으로 충돌하는 ID는 앞 transaction의
   ACK까지 재수락하지 않으며 다른 slot은 병렬 진행한다. R/B owner는 ACK까지 고정한다.
   WID가 없는 W는 AW 수락 순서 FIFO로 route하며, downstream memory의 ID 없는 AR/R과
   AW/W/B는 방향별 한 transaction씩 처리한다. Barrier와 DVM은 모든 일반 context가 빈
   때 수락하고 실제 배정 context가 끝날 때까지 다른 요청을 막는 전역 operation이다(시작
   edge 잔여는 10절).
3. **ID 간 out-of-order 완료.** 느린 ID 0 ReadShared를 snoop에서 멈춘 동안 뒤의 ID 1
   ReadNoSnoop을 먼저 완료해 R 순서 `1→0`을 확인했다. 느린 ID 2 WriteUnique보다 뒤의
   데이터 없는 ID 3 Evict를 먼저 완료해 B 순서 `3→2`를 확인했다. 같은 ID probe는 앞
   transaction이 ACK되기 전에 handshake가 생기면 `ACE_SAME_ID_REACCEPT`로 실패한다.
4. **복수 snoop context.** `ace_cache_snoop_endpoint`와 `ace_snoop_fabric`은 ordered
   4-context FIFO를 사용한다. endpoint는 AC handshake 때 CR metadata와 line snapshot을
   보관하고, fabric은 context별 target mask·CR·CD를 수집한다. CR은 target별 가장 오래된
   CR 미수신 context에, CD는 DataTransfer=1이 확정된 context에 연결한다(50번). `ace_snoop_controller_bank`와 `cci_ace_snoop_service`도 4개
   controller와 owner FIFO로 확장했다. AC는 요청 수락 순서로 발행하고(50번) ID 없는
   upstream CR/CD 및 service response도 그 순서를 유지하며, dirty writeback은 ID 없는
   포트에서 직렬화한다.
5. **회귀와 결함 주입.** endpoint, 2-target fabric, 전체 service에서 response를 막은 채
   AC 4개를 먼저 수락해 peak 4와 ordered drain을 확인한다. 같은-ID gate 제거, endpoint/fabric
   직렬화 복원, snoop owner association 붕괴, W-order count(47번) 변이로 고정한다. 현재 실행
   건수는 2절이다.

첫 transaction이 미완료인 동안 두 번째 AR/AW와 최대 네 AC가 실제 handshake되고, 서로 다른
manager ID의 R/B는 역전 완료될 수 있으며, 마지막에는 manager·snoop context가 0으로 drain되는
범위까지 확인했다. 이 확장의 slot 간 exclusive, 중재 지점 payload 안정성, AC 발행 순서,
CR/CD 교차 진행 결함은 10절(50번)에서 수정했다. 미확인 경계는 8절 4항에 있다.

### 7.14 manager W-order FIFO 동시 갱신 (47)

`ace_manager_request_bank`의 최초 구현은 data-bearing AW 수락 시 `wq_count+1`, 마지막 W
수락 시 `wq_count-1`을 서로 다른 `if`에서 대입했다. 두 handshake가 같은 edge에 오면 뒤의
nonblocking 대입이 앞의 대입을 덮어 새 AW owner를 잃을 수 있었다. push/pop 조합 `case`로
count를 한 번만 갱신하도록 수정했다. `tb_ace_manager_outstanding`은 첫 WriteBack의 마지막 W와
두 번째 WriteBack AW를 같은 cycle에 handshake한 뒤 두 B와 최종 drain을 확인한다.
`break_wq_push_pop_count` 변이는 수정 전 이중 대입을 복원해 timeout marker로 검출한다.

### 7.15 top-level owner와 WB association (48, 49)

- **48.** service 내부 요청 수만 4개로 늘리고 top의 `service_owner_auto`를 단일 비트로
  유지하면, 자동 manager snoop 뒤에 명시적 `req_*`가 수락될 때 앞 응답의 목적지가
  덮인다. `ACE_SNOOP_CONTEXTS` 깊이의 owner FIFO로 바꾸고 request handshake 때 auto 여부를
  push, service response handshake 때 pop한다. 통합 시험은 첫 auto CR/CD를 보류한 상태에서
  explicit MakeInvalid를 뒤에 수락시킨 뒤, 첫 응답이 ACE R로, 둘째가 `rsp_*`로 가는지
  확인한다. `collapse_top_service_owner` 변이는 두 owner를 explicit으로 합쳐
  `TOP_SERVICE_OWNER_ASSOCIATION`으로 검출한다.
- **49.** service와 manager가 공유하는 WB 포트의 owner bit는 service owner=0과 idle=0을
  구별하지 못했다. 별도 `wb_owner_valid`를 추가하고 AW handshake부터 실제 B handshake까지
  새 AW를 막는다. 새 grant는 service 우선이며, 이미 AWVALID를 낸 source는 handshake까지
  grant를 유지한다(50번). 이 포트는 ID가 없으므로 의도한 직렬화 계약이다.

## 8. 남은 범위

1. **ACE 미해결 결함.** 10.5 잔여: global operation 수락 edge에서 반대 채널 일반 요청이 함께 수락된다(10절). 이 항목을 고치기 전에는 DVM/barrier 전역 격리를 완료로 주장하지 않는다.
2. **runner gate(45번, 7.11).** formal assertion 개수 gate와 P 전용 ingress 변이, cross coverage 28-key schema와 두 structural-zero assertion, `cross_overlap` 난수 seed 기록, toggle category 대표 point audit와 baseline gate, mixed latency corner (1,40)/(20,1).
3. **coverage·동시성.** P의 aw_issue·b_retire·ac·cr × setup 4쌍은 구조적 제외가 아니지만 미관측이다. 3개 이상 사건 조합, FIFO 점유 상태별 cross, parameter 전체 Cartesian product는 하지 않았다. 미실행 line/branch/toggle 분류는 waiver나 unreachable proof가 아니며, 작은 depth·오류 응답 실행은 계측 빌드가 아니다.
4. **ACE 검증 경계.** top auto/explicit service request hold의 directed 시험과 변이, 외부 cached-target model을 직접 연결한 fabric 통합 시험, manager context depth 2·snoop depth 1/2, 같은 ID의 복수 outstanding, 같은 low-ID slot ID의 병렬 처리, 두 dirty writeback의 latency 교차, 여러 context에 걸친 reset/fatal. exclusive store 직렬화는 line과 무관하게 한 번에 하나만 받는 보수적 구현이다.
5. **formal.** endpoint FIFO 증명은 세 parameter 구성에 한정되고 DEPTH=1은 simulation 범위다. ingress는 작은 parameter의 깊이 20 bounded 검사이며, 무한 시간 증명에는 ingress ring과 tracker·AC FIFO 관계의 보조 불변식이 필요하다. `axi_cci_top`·arbiter·ACE 확장은 formal 범위 밖이다. XSim은 Verilator matrix의 부분집합이다.
6. **RTL 설계 확장(범위 결정 필요).** 실제 cached master의 자동 snoop/refill·permission 계약, 3개 이상 cached target, 다중 range context, 2-part DVM과 DVM Sync Complete lifecycle, ACPROT security tagging, hardware abort/recovery, dirty 자동 eviction, ID-less memory·writeback의 out-of-order, 외부 interface와 보드 clock/reset sign-off. reference multi-context RTL은 B/CR association을 재설계하지 않고 재사용할 수 없으므로 v9 단일-context 구현과 혼합하지 않는다.
7. **규모 측정.** 다중 context throughput/점유, write probe 거리 변화, 고정 간격이 아닌 주소·도착 분포, open-loop probe는 측정하지 않았다. 현재 조건에서 P는 tracker가 충분한 B1보다 느리고 copy front 앞의 대상 line을 더 오래 막는다.

## 9. 실험 조건 구분

기능 TB clock 10 ns, control-path endpoint latency 12 cycle, cache TB endpoint 4 cycle, slave 응답 latency 5 cycle. latency_matrix와 XSim latency 사례만 (slave, snoop) latency를 (1,1)/(20,40)으로 바꾼다. v9 합성 shell은 5 ns 제약과 endpoint latency 8 cycle, ACE 구현은 shell 없는 직접 OOC top이다. 이 조건들을 하나의 동일 실험으로 표현하지 않는다. shell은 측정용 경계이며 제품용 AXI register slice로 검증된 회로가 아니다.

## 10. 다중-context ACE 보완 (50번)

46~49번 다중 outstanding 확장을 IHI 0022H D3.7~D3.9·D9.3~D9.4와 대조해 6개 결함을 확인했고(원문 분석은 [수정 전 사본](REVIEW_before_review10_fix_2026-10-08.md)), 2026-10-08에 수정했다. 수정 뒤 독립 재검토에서 10.5의 시작 edge 잔여를 새로 확인했다.

| # | 결함(심각도) | 상태 |
|---|---|---|
| 10.1 | exclusive monitor가 context별로 분리되어 다른 slot ID의 성공 store가 예약을 해제하지 못함(높음) | 해결 |
| 10.2 | 중재 지점에서 VALID 유지 중 payload 변경 — memory AR, snoop request, snoop WB AW, top WB AW, service request(중간~높음) | 해결. service request는 hold·assertion만 있고 directed 시험 없음 |
| 10.3 | snoop controller bank가 AC를 낮은 index 순으로 발행(중간) | 해결 |
| 10.4 | fabric이 CR(k, 데이터 없음)과 같은 cycle의 CD(k+1)를 k에 연결(중간) | 해결 |
| 10.5 | DVM 전역 구간이 ID slot에 따라 달라짐(낮음) | **부분 해결** — 실제 slot 추적은 해결, 시작 edge 잔여 |
| 10.6 | 문서 건수·monitor 설명 불일치 | 해결 |

### 수정·시험·변이

| # | 수정 | 정식 회귀 | 변이(되살린 이전 동작 → 검출 marker) |
|---|---|---|---|
| 10.1 | `ace_manager_request_bank`에 단일 ID/line monitor를 두고 controller는 `EXTERNAL_MONITOR=1`로 이를 읽는다. 각 context의 등록·성공 store·manager write 해제 event를 bank가 모든 ID에 적용한다. exclusive store(ARLOCK CleanUnique)는 한 번에 하나만 수락하고, controller는 snoop 완료 시 자기 예약을 다시 확인한다. 일반 write 해제는 기존 보수적 local 정책을 유지하되 context 간에 같게 적용한다. | `tb_ace_manager_review10`: 다른 slot 순차 성공 후 실패, store 중첩 수락 차단과 후속 실패, 도중 kill 후 실패, 다른 slot write 후 실패 | context별 monitor·commit 해제 제거 → `EXCL_CROSS_SLOT`; 직렬화 제거 → `STORE_OVERLAP`; 재검사 제거 → `EXCL_COMMIT_RECHECK`; write 해제 제거 → `EXCL_WRITE_POLICY` |
| 10.2 | manager bank memory AR·snoop request, snoop bank dirty WB AW, top WB AW와 auto/explicit service request에 VALID && !READY 동안 grant를 고정하는 hold register와 payload 안정성 assertion을 추가했다. 새 grant의 우선순위는 그대로다. | `tb_ace_manager_review10`(늦게 온 낮은 index AR·snoop), `tb_ace_snoop_bank_review10`(재사용 controller의 WB AW), `tb_cci_ace_integration WB_CONTENTION=1` B1/P(막힌 manager WB AW 뒤의 service writeback) | hold 제거 → `MEM_AR_PAYLOAD_STABILITY`, `SNOOP_REQ_PAYLOAD_STABILITY`, `SNOOP_WB_AW_PAYLOAD_STABILITY`, `WB_AW_PAYLOAD_STABILITY` |
| 10.3 | `ace_snoop_controller_bank`가 `req_order` FIFO의 발행 pointer로 가장 오래된 미발행 요청부터 AC를 낸다. | `tb_ace_snoop_bank_review10`: 재사용 slot 시나리오에서 AC 순서 | 낮은 index 우선 복원 → `SNOOP_AC_` |
| 10.4 | fabric의 CD 연결이 같은 cycle에 수락되는 CR을 bypass하고, DataTransfer=1로 확정된 context에만 CD를 연결한다. 앞선 context의 CR이 아직 없으면 CDREADY를 보류한다. | `tb_ace_fabric_review10`: CR(k, 데이터 없음)+CD(k+1) 동시, CD가 자기 CR보다 먼저 온 경우 | 미확정 context에 CD 연결 복원 → `FABRIC_CD_ASSOCIATION` |
| 10.5 | 전역 operation을 수락한 실제 context를 `global_slot`에 기록해 **수락 다음 cycle부터** 해당 context 완료까지 격리한다. | `tb_ace_manager_review10`: slot 0/2 DVM 실행 중 후속 일반 AR 수락 차단 | slot 0 고정 복원 → `DVM_GLOBAL_ISOLATION` |
| 10.6 | `ACE_EXTENSION.md`(monitor·CR/CD·grant·DVM 계약), `TRANSACTION_SUPPORT_CHECKLIST.md`(132건, 공유 monitor, 신규 시험) 갱신 | — | — |

- **회귀.** `ace_20261008T011153Z_616e4c68`: Verilator 정상 17 + XSim 정상 17, 의도된 실패 46(신규 12 포함). 수정된 행을 가리키던 기존 변이 4종(`bypass_exclusive_monitor`, `fatal_explicit_req_leak`, `fatal_req_ready_open`, `collapse_top_service_owner`)의 기준 문자열을 갱신했고 같은 marker로 검출된다. `tb/` 추가로 v9 회귀와 XSim도 다시 실행했으며 v9 RTL과 비용은 바뀌지 않았다.
- **비용.** 4.2절.
- **10.4 정책.** 앞선 context의 CR이 아직 없으면 CDREADY를 보류한다. D3.9는 cached master가 CD handshake를 기다리지 않고 CR을 발행하도록 요구하므로 compliant target과는 교착하지 않는다. 외부 cached-target model을 붙인 통합 시험은 없다.

### 10.5 잔여: 전역 operation 시작 edge

global operation을 수락하는 edge에는 `global_active`가 아직 0이어서, 반대 AXI 채널의 무관한 요청도 다른 context로 같은 cycle에 수락될 수 있다. ID 2 DVM AR과 ID 1 non-shareable WriteBack AW를 같은 cycle에 제시하면 `ar_fire=1`, `aw_fire=1`, `outstanding_count=2`가 된다([재현](latest_audit/review10_postfix_2026-10-08)).

- **보완.** idle 상태에서 새 global AR/AW를 고르는 cross-channel admission grant를 하나만 허용하고, 같은 edge의 반대 채널 요청을 backpressure한다. DVM AR+barrier AW 동시 도착, barrier 시작과 일반 반대 채널 조합을 같은 시험에 넣는다. `GLOBAL_START_ATOMIC` assertion과 이전 동작 변이를 ACE runner에 추가하고 synthesis/post-route를 다시 실행한다.

## 11. Range READ 구현 상태 (2026-11-02)

계획서는 [RANGE_READ_EXTENSION_PLAN.md](../../RANGE_READ_EXTENSION_PLAN.md)이다. 이번 수정은 최종
`P-RD`가 아니라 기능 안전성을 먼저 확인하는 단일-context `P-RD-Q` 단계다.

| 항목 | 현재 상태 | 근거 |
|---|---|---|
| B1-CI ingress | 구현 | M1 AR을 acceptance부터 RLAST까지 보관하고, conventional entry마다 전용 read tracker와 NQ CleanInvalid를 연결. 4-entry/2-tracker unit에서 tracker full, out-of-order snoop response, strict issue order, R backpressure와 RRESP 진단 통과 |
| 253-bit context | 구현 | `valid/state/op/base/line/issued/done/source` 공용 형식. 기존 `wr_issued_mask` 이름은 호환 alias로 유지. `$bits(range_ctx_t)==253` assertion |
| P-RD-Q | 부분 구현 | READ setup은 기존 context를 할당하고 target별 CleanInvalid를 NQ_RANGE로 발행. 모든 prep response 뒤 일괄 release, M1 AR reservation에서 issued bit, 실제 RLAST에서 done bit. 1-line dirty/clean/miss와 context 3회 재사용 통과 |
| service arbitration | 부분 구현 | auto/explicit/NQ_CONV/NQ_RANGE 4-source held-grant round-robin과 ordered owner FIFO. legacy WRITE는 service 내부의 기존 별도 입력이라 계획의 단일 5-source arbiter는 아님 |
| hazard | 부분 구현 | context 준비부터 target RLAST까지 M0 AR과 M1 AW 차단, 완료 뒤 수락. conventional entry는 ingress acceptance부터 RLAST까지 M0/ACE AR/AW CAM 유지. ACE manager는 range 동안 선택적 hazard가 아니라 기존 drain 조건으로 전역 차단 |
| 오류 | 부분 구현 | malformed conventional AR fail-stop, service error owner와 memory RRESP 진단. Range prep error는 `range_fault`/global fault로 연결했으나 directed error-owner 회귀는 남음 |
| 검증 | 진행 | `ace_20261102T074008Z_965b5c1b`: 정상 18, expected-failure 50. 신규 변이 `drop_range_read_classification`, `drop_range_read_hazard` 검출. 기본 lint 및 기존 standalone P 전체 directed suite 통과 |

이번 구현에서 확인한 중요한 경계는 다음과 같다.

- setup이 pending인 동안 M1 AR을 받으면 active context가 생기기 전에 conventional로 오분류될 수
  있으므로, read ingress도 `admission_freeze` 동안 수락을 중지한다.
- 완료 line은 context가 다음 cycle에 해제되기 전이라도 `done_mask`로 hazard가 풀릴 수 있다. 시험의
  held VALID는 최초 READY handshake에서 즉시 내려야 하며, RTL은 이 정책을 유지한다.
- standalone `axi_cci_top`은 `ENABLE_RANGE_READ=0`이며 READ/reserved `setup_op`를 `setup_error`로
  거부한다. ACE wrapper만 READ를 활성화한다.

남은 구현 순서는 공용 read/write tracker pool과 명시적 `rd_q` association, sparse/연속/full-page
P-RD-Q, NQ source별 starvation·오류 owner, endpoint authorization, 선택적 ACE hazard를 적용한
비정지 `P-RD`, `NUM_CONTEXTS=2`, XSim·formal·GTKWave·합성/implementation·성능 측정이다. 현재
read tracker는 write tracker와 별도이므로 tracker 절감 비교 수치를 산출하지 않는다.
