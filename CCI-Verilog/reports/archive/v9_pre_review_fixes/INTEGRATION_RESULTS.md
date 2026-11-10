# AXI–CCI v9 통합 결과

측정: 2026-09-28. 최종 로그·소스 대조 및 결과 갱신: 2026-09-29.

## 기능 검증

`make lint` 및 `make test` 실행. Verilator 5.048, `--timing --assert`.

- B0 기존 AXI 회귀: M0/M1 각각 B 16건, R 64 beat, RLAST 16건.
- 별도 AW/AR grant-lock 및 64비트 high-address 안정성 테스트 PASS.
- B1/P × tracker 4/8/16, 추가 tracker 16 / AC FIFO 4: 8개 구성 PASS.
- ingress/actual-B 순서, WDATA 값·순서, AC 주소·순서 및 CR association을 독립 scoreboard로 확인.
- page alias, actual-B 이전 해제 금지, range 1/8/64-line, page 중간/sparse mask, duplicate fallback, HOL, dual hazard, setup drain, reset 검증 PASS.
- missing-target watchdog: 의도된 `RANGE_WATCHDOG:` 비정상 종료 확인 PASS.

상세 로그: [simulation](simulation/). 기능/지원 범위: [INTEGRATION_V9.md](../INTEGRATION_V9.md).

## Runtime 측정: 같은 8-line 입력

설정: ingress/AXI outstanding 16, endpoint latency 12 cycles, slave response latency 5 cycles. AW/W/AR에 주기적 stall을 넣었다. P completion cycle에는 setup/initial invalidation도 포함한다. cycle 계수는 test 시작부터 drain 확인 후 3-cycle 확인 여유까지이므로 절대 latency 일반화에 사용하지 않는다.

| 구성 | Tracker / AC FIFO | Peak tracker | Tracker-full stall | Ingress stall | Copy cycles | Accepted writes/cycle |
|---|---:|---:|---:|---:|---:|---:|
| B1 | 4 / 4 | 4 | 40 | 0 | 86 | 0.093023 |
| P | 4 / 4 | 0 | 0 | 0 | 91 | 0.087912 |
| B1 | 8 / 8 | 8 | 0 | 0 | 83 | 0.096386 |
| P | 8 / 8 | 0 | 0 | 0 | 91 | 0.087912 |
| B1 | 16 / 16 | 8 | 0 | 0 | 83 | 0.096386 |
| P | 16 / 16 | 0 | 0 | 0 | 91 | 0.087912 |
| B1 | 16 / 4 | 8 | 0 | 0 | 83 | 0.096386 |
| P | 16 / 4 | 0 | 0 | 0 | 91 | 0.087912 |

기본 16/16에서는 B1 peak tracker 8, P 0이다. P의 tracker 사용 감소를 확인했지만 copy cycle은 B1 83, P 91로 이 workload에서 성능 개선은 관찰하지 않았다. tracker 4개에서는 B1 allocation stall 40 cycles, P 0이다. 이 stall은 ingress READY stall과 다른 지표이다. 둘 다 ingress stall 0인 8-line workload이며, 결과를 일반적인 처리량 개선이나 tracker 축소의 무손실성으로 확대하지 않는다.

## Post-route hardware cost

공통 registered shell, 기본 ingress/tracker/AC FIFO 16, B1/P 동일 ordered endpoint(depth 16, latency 8), Vivado 2024.1, xczu7ev-ffvc1156-2-e, 5 ns OOC 구현. shell 관찰 출력 레지스터를 포함하며 외부 pin 경로는 제외하고 내부 경로를 timing 분석한다.

| 구성 | LUT | FF | CARRY8 | BRAM tile | WNS ns | TNS ns | Setup failing endpoints | WHS ns | THS ns | Hold failing endpoints |
|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| B0 | 527 | 1642 | 0 | 0.0 | 2.53 | 0.0 | 0 | 0.034 | 0.0 | 0 |
| B1 | 3602 | 4275 | 192 | 0.0 | 0.487 | 0.0 | 0 | 0.011 | 0.0 | 0 |
| P | 4411 | 5010 | 211 | 0.0 | 0.367 | 0.0 | 0 | 0.01 | 0.0 | 0 |

P−B1: LUT **+809**, FF **+735**, CARRY8 **+19**, BRAM **+0**.

FF 증분 분해: DUT 내부 **+462 FF**, 경계 register shell **+273 FF**, 공통 endpoint **0 FF**. 합계 +735 FF이다. B1에서 상수화되는 range setup/관찰 포트의 경계 레지스터가 P에서는 남으므로 shell 증분이 생긴다. DUT 내부 증분과 shell 포함 총비용을 구분해야 한다. 계층별 LUT는 cross-hierarchy combining 때문에 단순 합산하지 않는다.

- B0: 200 MHz setup/hold 만족. [utilization](B0/post_route_utilization.rpt), [timing](B0/post_route_timing_summary.rpt), [critical paths](B0/critical_paths.rpt).

- B1: 200 MHz setup/hold 만족. [utilization](B1/post_route_utilization.rpt), [timing](B1/post_route_timing_summary.rpt), [critical paths](B1/critical_paths.rpt).

- P: 200 MHz setup/hold 만족. [utilization](P/post_route_utilization.rpt), [timing](P/post_route_timing_summary.rpt), [critical paths](P/critical_paths.rpt).

OOC clock source는 세 구성 모두 `BUFGCE_X0Y96`로 명시했다. 최초 source 미지정 보고서는 최종 timing 결과에서 제외했다. 저장된 routed checkpoint에 clock source를 적용하고 `phys_opt_design -hold_fix`/`route_design`으로 보정한 과정은 `clock_hold_fix.log`에 보존했다. 재현용 기본 flow도 clock source 지정 및 post-route hold 보정을 포함한다. 외부 clock tree와 보드 pin을 구현한 결과가 아니라 이 clock source 가정 아래의 내부 경로 분석이다.

OOC 구현은 외부 출력에 실제 보드 부하가 없어서 `RTSTAT-10 No routable loads` 경고가 발생한다. 외부 pin 경로를 제외한 내부 타이밍 측정이며 보드 pin/IO timing sign-off 결과는 아니다. 각 구성의 `source_manifest.json`은 최초 route 입력의 hash를 보존한다. 이후 clock 제약 및 hold 보정의 script hash와 동일 RTL 여부는 `post_route_repair_manifest.json`에 별도로 기록했다. 현재 `run_impl.tcl`은 보정된 clock 제약과 hold-fix 단계를 포함하므로 최초 route 시점의 Tcl hash와는 다르며, RTL hash는 세 구성 모두 일치함을 확인했다.

기존 참고 prototype의 +678/+261/+20은 이 표의 근거가 아니다. 이번 수치는 현재 구현의 common queue/ordered allocator/hazard CAM/endpoint/register shell을 포함한 경계에서의 측정값이다. 기본 16/16 area 비교와 tracker-depth sensitivity 실험은 분리했다.

## 해석 범위

실제 full-cache coherence/dirty-data writeback 및 메모리 내용까지 검증한 결과가 아니다. clean-cache MakeInvalid endpoint, in-order AXI 응답, M1 full-line write, 단일 DMA source/context, 정상 response라는 범위에 한정한다. 모든 target을 쓰지 않는 operation은 완료되지 않으며 watchdog negative regression이 이를 검출한다. 추가 상세 제약은 통합 문서에 명시했다.
