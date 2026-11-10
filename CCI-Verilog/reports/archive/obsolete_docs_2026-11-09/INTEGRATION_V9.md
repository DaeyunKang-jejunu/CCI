> **단계 7 archive 문서:** 이 문서는 setup/P-WR 기반 v9 결과를 설명한다. 해당 RTL과 구형 실행기는 `reports/archive/rcci_pre_stage7_2026-11-06`에서 재현한다. 현재 활성 ReadRange/WriteRange 경로와 명령은 `RCCI_PLAN.md`, `README.md`, `reports/rcci_stage7/STAGE7_RESULTS.md`를 따른다.
>
> 2026-10-05 확장: 이 문서의 기본 v9 경로와 별도로 `axi_cci_ace_top`의 snoop/CD/dirty writeback 경로를 추가했다. 새 인터페이스와 지원 범위는 [ACE_EXTENSION.md](ACE_EXTENSION.md)에 명시한다. 아래의 MakeInvalid-only 및 면적 설명은 기본 v9 측정에 관한 것이다.

# AXI–CCI v9 통합 구현

최종 확인: 2026-10-07. RTL 접합, 기능 회귀, AXI 오류 검출기, scale read/write 측정, 명시적 OOC clock source 아래 post-route setup/hold 검증 완료.

기준 문서: `CCI_AXI_통합_계획_코드리뷰_v9_2026-09-28.md`.
참고용 `hw_overhead_sv_참고용/rtl`과 `full_cci/rtl`을 검토하고, 기존 AXI 데이터 경로 위에 B1/P 공통 coherence 제어를 연결했다. 참고용 RTL은 원본 상태로 보존했다.

## 구성과 진입점

| 구성 | Top | 역할 |
|---|---|---|
| B0 | `rtl/top/axi_b0_top.sv` | grant lock을 보완한 순수 AXI |
| B1 | `rtl/top/axi_b1_conventional_top.sv` | 공통 ingress + conventional tracker/AC/CR/hazard |
| P | `rtl/top/axi_p_range_top.sv` | B1 + range context/예약/완료/초기 무효화 |

세 top은 `axi_cci_top`을 인스턴스화하며 AXI의 기존 flat 포트를 유지한다. 추가 포트는 range setup, M0 AC/CR, snoop idle 및 관찰용 상태이다. B0/B1의 setup 입력은 비활성이다. 기본 주소 64비트, 데이터 128비트, ingress/AXI outstanding/tracker/AC FIFO depth는 각각 16이다.

기존 루트 AXI 파일과 테스트벤치 경로를 유지했다. Appendix의 파일 분리는 권장 구조로 해석하여 공통 ingress, tracker allocation, AC scheduler/FIFO는 `rtl/common/coh_write_ingress.sv` 한 모듈 안에 응집시켰다. B1/P의 큐 및 할당 알고리즘이 갈라지지 않도록 하기 위한 선택이다.

## 연결 및 수명

- M1 AW 수락 시 ID/64비트 주소/LEN을 저장한다. P는 동일 event에서 PATH를 확정하고 RANGE이면 `wr_issued_mask`를 예약한다. B1에서는 PATH 저장 플롭이 generate로 제거된다.
- `retire_head`를 기준으로 두 구간의 priority encoder를 사용하여 age 순서상 가장 오래된 미할당 conventional entry에 tracker를 할당한다. 뒤 entry도 AC를 미리 처리할 수 있다. tracker는 ingress index와 수명 상태만 보관한다. 주소는 해당 ingress entry에서 읽으며 중복 58-bit 주소 저장과 tracker CAM을 제거했다.
- AC는 가장 오래된 eligible conventional entry부터 선택하고, 선택한 주소/index를 레지스터에 보관하여 AC stall 중 변경되지 않는다. AC handshake마다 tracker index FIFO에 push하고 순서대로 돌아오는 CR마다 해당 tracker의 `snoop_done`을 설정한다. handshake 사이클에 다음 eligible 요청을 refill하므로, 준비된 요청과 FIFO 여유가 있으면 매 cycle AC를 발행한다.
- AW 발행 순서는 `issue_head`가 보장한다. AW 발행 후 포인터만 전진하며 entry는 B까지 보존한다. W는 기존 arbiter의 accepted-AW FIFO 순서로 전달한다. WDATA 전체 버퍼는 추가하지 않았다.
- downstream `wr_q`에는 B1/P 공통 `ingress_idx`만 추가했다. `is_range`/`line_idx`는 추가하지 않았다. 실제 `S_BVALID && S_BREADY`에서 index를 되돌리고 ingress의 PATH/주소를 읽어 tracker 반환 또는 range done 갱신 후 retire한다.
- 살아 있는 conventional ingress entry 전체를 하나의 hazard CAM으로 검사한다. 미할당 entry도 포함하므로 수락→할당 사이와 tracker 부족 상태에서도 M0 AR/AW를 보호한다. valid tracker가 같은 conventional ingress entry를 가리킨다는 불변식을 assertion으로 검사한다.
- M0 AW/AR가 downstream에 이미 제시되어 grant lock된 경우, 나중에 생긴 hazard/setup으로 VALID를 철회하지 않는다. 이 요청은 먼저 제시된 요청으로서 drain한다.

## Range 동작

`range_ctx_t`는 VALID 1 + STATE 2 + PAGE 52 + LINE_MASK 64 + WR_ISSUED_MASK 64 + DONE_MASK 64 + SOURCE 4 = **251비트**이다. AC 진행 상태와 setup 대기 레지스터는 이 논리 context 폭과 별도의 제어 비용이다.

`setup_valid && setup_ready`에서 setup을 캡처한다. 새로운 M0 AW/AR 및 M1 AW/AR admission을 멈추고 이미 수락되었거나 grant lock된 요청을 drain한다. ingress/tracker/AC FIFO/AXI AW-W-B 및 AR-R 상태와 snoop endpoint가 모두 idle일 때만 context를 활성화한다. M1 AR도 freeze하여 계속 유입되는 read 때문에 quiescence가 불가능해지는 일을 방지했다.

setup 규약:

- `setup_source=1`: DMA M1. M0는 source 0이다.
- 주소는 64바이트 정렬이다.
- `setup_mask != 0`: 페이지 기준의 명시적 sparse mask. count는 무시한다.
- `setup_mask == 0`: `setup_addr[11:6]`부터 `setup_count`개의 연속 line. count 1~64, page crossing 금지.
- 잘못된 요청도 setup handshake로 소비하되 `setup_error`를 한 cycle 발생시키고 context는 할당하지 않는다.
- pending/active context가 있으면 새로운 setup의 READY는 0이다.

INVALIDATING에는 range AC만 발행한다. 마지막 required CR까지 받은 뒤 TRACKING/write_release가 된다. target line의 첫 M1 write만 RANGE로 분류하고 같은 line의 후속 write는 conventional이다. `done_mask ⊆ wr_issued_mask ⊆ line_mask`를 검사한다. 모든 등록 line의 실제 B가 완료되어야 context가 해제된다. 누락 target은 simulation watchdog으로 실패한다.

## AC/CR endpoint와 지원 범위

`m0_snoop_endpoint`는 AC를 수락하고 FIFO 순서를 보존해 CR을 반환하는 clean-cache MakeInvalid responder이다. 각 요청의 지연 카운터를 두며, CR backpressure 때 앞 응답을 보존한다. 통합 테스트에서는 실제 point-to-point AC/CR 포트로 연결하고 독립적으로 AC와 CR을 stall한다. 합성 shell에도 B1/P 공통 endpoint를 포함한다.

이 구현은 full ACE cache hierarchy가 아니다. dirty cache data/CD, snoop filter, 다중 cached master, out-of-order B/R, 다중 range context, abort/recovery는 포함하지 않는다. 기존 `simple_axi_slave`도 데이터 저장 메모리가 아니라 응답/transaction 모델이다. memory-backed slave는 같은 edge의 read/write를 동일 process에서 read-first 순서로 처리하고, held R payload를 보존한다. `put_byte`는 rising edge 밖의 초기화에만 사용한다. 기존 control-path 회귀와 별도로 `tb/axi_memory_slave.sv`, `tb/m0_clean_cache_model.sv`, `tb/tb_cci_memory_cache.sv`에서 실제 byte 저장·복사·재읽기를 검증한다. clean cache는 기본 8-line이며 1/2/16-line 추가 구성도 검증하는 direct-mapped, 단일 pending refill 모델이며 AC와 겹친 refill은 cached master가 poison하여 캐시에 재설치하지 않는다. 이는 이전 read의 line 전체가 원자적 snapshot이라는 보증이나 일반적인 cache hierarchy 검증은 아니다. 합성 endpoint 자체에는 이 cache가 포함되지 않는다.

M1 coherent write는 64바이트 정렬, AWLEN=3인 128비트×4 beat full-line write를 전제로 하며 위반하면 simulation에서 실패한다. AXI 모델에 AWSIZE/WSTRB/AWBURST 포트가 없으므로 부분 write를 표현하지 않는다. M0 hazard는 시작 line 기준이며 M0 요청 역시 line 안에 머무는 burst를 사용해야 한다. BRESP/CRRESP 오류 복구는 P1 범위로 남아 있다. 정상 OKAY 응답을 전제로 한다. 범위를 넘는 M0 AW/AR 및 오류 CR/B는 simulation assertion으로 즉시 실패시킨다. 이 검사는 합성 하드웨어의 recovery 기능이 아니다.

## 실행

```sh
make lint
make test
# 또는
python3 scripts/run_regression.py
```

Verilator `--timing --assert`를 사용하며 decoder에는 Icarus 및 Yosys도 필요하다. `make test`는 결과 판정 단위시험 8개도 함께 실행한다. 기본 빌드 디렉터리는 `/tmp/cci_axi_v9`; `CCI_BUILD_DIR`로 변경할 수 있다. 빌드/실행 로그와 측정 CSV는 고유한 `reports/runs/simulation_<UTC>_<ID>/`에 생성한다. 정상/검증 완료 132개(작은 depth parameter_directed 6개, AXI protocol 오류 검출기 10개, decoder formal 1개, seed_expansion 14개, (slave, snoop) latency (1,1)/(20,40)의 latency_matrix 32개, cross_targeted 2개 포함)와 의도된 실패 16개를 검사한다. AXI 오류 검출기는 조기/누락 WLAST·RLAST, BID/RID 불일치, outstanding 없는 B/R을 실제 handshake로 주입하고, 포트에서 도달 불가능한 AW/AR full+handshake 방어 분기는 white-box로 확인한다(REVIEW 39). 별도 scale_sweep 60 case(B1/P × tracker 1/2/4/8/16 × 8/64/256 line × range 밖 write 0/25%, `+scale_bench +lines=N +outside=K`)로 tracker 점유·할당 대기·range context/setup 대기를 측정해 `scale_sweep.csv`에 남긴다(REVIEW 37). read/write extension은 각각 16 case로 `SNOOP_LATENCY` 4/12/32/64와 copy 중 동시 M0 read의 AR 대기(`+m0_probe=16`, `m0_wait.csv`) 및 M0 write의 AW 대기(`+m0_write_probe=16`, `m0_write_wait.csv`)를 측정한다(REVIEW 38·40). probe_variation 12 case는 1024 line에서 probe 거리 (ahead, behind)=(1,2)/(4,8)/(16,32)를 바꾼다(REVIEW 44). 미실행 toggle 분류(`toggle_classification.json`)와 8-사건 동일 cycle 쌍 cross coverage(`cross_coverage.json`)도 함께 생성한다(REVIEW 43). 이어서 negative test는 비정상 종료와 지정 오류 marker가 모두 일치해야 PASS이다. PATH page 비교를 제거한 mutation은 독립 scoreboard가 검출해야 한다. 별도로 range hazard의 page 비교/line_mask/~done_mask 제거 mutation은 해당 M0 수락 제한 시간 오류로 검출해야 한다.

Vivado 2024.1, 기본 part `xczu7ev-ffvc1156-2-e`, 5 ns:

```sh
vivado -mode batch -source synth/run_b0.tcl
vivado -mode batch -source synth/run_b1.tcl
vivado -mode batch -source synth/run_p.tcl
```

최종 source hash를 함께 보존하고 세 구성을 실행하려면 `python3 scripts/run_implementation.py`를 사용한다. WSL에서 Windows 설치를 사용한 실행 예:

```sh
python3 scripts/run_implementation.py --windows-vivado 'D:\Vivado\2024.1\bin\vivado.bat' --jobs 2
```

`run_impl.tcl -tclargs B0|B1|P [period_ns] [part] [output_directory]`로 조건을 지정할 수 있다. `synth_register_shell`의 공통 입력/출력 레지스터와 B1/P 공통 endpoint를 포함해 OOC place/route한다. 기본 part의 OOC clock source는 `BUFGCE_X0Y96`(해당 part에서 dictionary 순서상 첫 BUFGCE site)로 명시해 세 구성의 timing 가정을 통일한다. 최종 route 후 hold 보정과 재배선을 수행한다. 외부 pin↔경계 레지스터 경로만 false path이며 내부 DUT/endpoint의 register-to-register 경로는 5 ns로 측정한다. simulation slave와 traffic generator는 합성 대상에서 제외한다. shell 외부 AC/CR 입력은 내부 endpoint가 대체하므로 합성에서 제거된다. 기본 `OBSERVE_DEBUG=0`은 관찰용 출력 레지스터를 제거한다. DUT 내부 LUT/FF를 대표 비용으로, setup 경계 레지스터와 공통 endpoint를 포함한 전체 비용을 보조값으로 구분한다.

## 검증 대응

| v9 항목 | 회귀 검증 |
|---|---|
| B0, A16/A17 | 기존 AXI 회귀 + 늦게 나타난 경쟁 master 하에서 stalled AW/AR payload 확인 |
| T1~T3, T5 | 16 AW 수락, oldest-first tracker 할당, non-head AC 및 독립 AC/CR scoreboard |
| T4, T14 | 8-line 동일 workload에서 P tracker 점유 0, B1/P CSV 비교 |
| T6 | tracker 16 / AC FIFO 4, CR 차단으로 full을 만들고 재개 |
| T7/T8 | actual B 보류 중 M0 AR/AW 차단, 서로 다른 64비트 page는 통과 |
| T9~T11 | 1/8-line, start 17/count 4, line 63, sparse mask, full page 64-line |
| T12/T13 | RANGE→동일 target CONVENTIONAL→normal 혼합 및 HOL 순서 |
| T14B | tracker 4/8/16 sweep, 64건 conventional 순환으로 tracker 부족·pointer wrap 검증 |
| T15 | actual B index/ID/order와 독립 done/reservation bitmap scoreboard |
| T16 | B 보류 및 AW/AR grant lock 중 setup drain/activation 금지 |
| T17 | INVALIDATING 중 range AC 주소/중복 검사, conventional FIFO 비어 있음 |
| T18 | target 일부 누락 시 watchdog expected failure |
| 추가 | 전체 suite에서 invalidation/W/B/R 중 reset, M1 read/setup drain, AC 연속 발행. depth 1/3/5에서도 hazard/duplicate/setup drain/mid-burst reset을 검사하며 parameter_directed로 표기. 다중-entry HOL은 depth≥3 |
| Range 차단 | conventional entry 없이 INVALIDATING/write 수락 전 TRACKING/B pending의 AR·AW 차단 및 actual B 후 해제. 반대 채널은 서로 다른 비대상 주소로 통과 검증 |
| Range 통과 | active context를 유지하고 비대상/다른 page/done target의 M0 AR/AW 수락을 각각 8 cycle 이내 확인. READY stall과 경쟁 요청을 통제 |
| Seed 범위 | seed 1/7/123의 READY stall과 case reset RNG 초기화. 측정값이 전체 suite/독립 실행/137-cycle prelude에서 일치 |
| 제약 기반 트래픽 | seed 11/29/101/997 × B1/P: 각 24개 시나리오에서 주소·mask·대상 순서·gap·setup drain 시점·M0/M1 혼합 변경 |
| Decoder | Verilator/Icarus 각각 49,152개 조합 및 Yosys SAT 전체 입력 조합 명세 증명 |
| Endpoint | depth 1/3/16, latency 0/1/12의 여섯 조합에서 order/latency/bounds/drain 검사 |
| Memory collision | latency 0/5/255의 read-first·다른 주소·held R 시험, 256의 parameter 위반 검출 |
| 데이터 | B1/P 실제 8-line memory copy, byte 비교, cache hit/invalidation 및 late refill poison. (cache lines, AXI depth, memory latency)=(1,1,0),(2,3,5),(16,5,12) 추가 |
| AXI FIFO overlap | depth 3/5에서 AW/B·AR/RLAST 동시 handshake 각각 40회, depth 1의 full 보류·다음 cycle 수락, write/read count 변이 검출 |
| AXI outstanding | depth 1/3/5에서 두 master의 read/write, 외부 handshake 기준 outstanding 상한·drain 및 overlap 수치 |
| Cache collision | LINES 1/2/8/16의 final beat/AC, load/AC, stalled AR/AC, 같은 index의 다른 tag 및 old resident 교체 |

정량 결과와 구현 도구 실행 상태는 `reports/INTEGRATION_RESULTS.md`에 기록한다. 기존 +678 LUT/+261 FF는 이 구현의 측정값으로 사용하지 않는다.

## 최종 결과와 추적 정보

최신 수치는 [검증 결과](reports/INTEGRATION_RESULTS.md)에 생성한다. `reports/latest_simulation.json`과 `reports/latest_implementation.json`은 각각 현재 실행 manifest를 가리킨다. 실행은 source/config와 산출물 hash를 보존하며 source가 달라지거나 최신 실행이 실패/진행 중이면 결과 생성기가 이전 수치를 현재 결과로 출력하지 않는다.

```sh
python3 scripts/test_results_common.py
python3 scripts/summarize_results.py
```

구현 성공 조건은 도구 완료뿐 아니라 setup/hold/pulse-width 여유 ≥ 0, failing endpoint 0, 내부 no-clock/unconstrained endpoint 0, routing 수치 일관성 및 허용된 OOC DRC warning만 존재하는 것이다. 보고서 필수 section과 count가 없거나 불일치하면 실패한다. 이전 +809 LUT/+735 FF 결과는 보완 전 조건의 역사적 결과로 `reports/archive/v9_pre_review_fixes/`에 보존했다. REVIEW 7~9의 공통 최적화라도 P와 B1의 합성 결과가 달라질 수 있으므로 이전 증분을 그대로 인용하지 않는다.

Scenario/트래픽 bin coverage, decoder formal 및 decoder simulator 교차검증을 추가했다. RTL line/branch/toggle 계측과 미실행 point 목록을 추가했다. 이후 미실행 toggle 분류와 쌍 단위 cross coverage(REVIEW 43), snoop endpoint FIFO의 k-induction 증명과 coherent ingress assertion의 깊이 20 BMC(`make test-formal`, REVIEW 41), XSim의 seed·latency·mutation matrix(REVIEW 42)를 추가했다. 남은 확장은 ingress의 무한 깊이 증명, 3개 이상 사건·FIFO 상태별 cross, 일반 cache hierarchy 및 board clock/reset sign-off이다. 이번 결과를 폴더 전체 코드의 무결함 보증으로 확대하지 않는다.


기능 TB clock은 10 ns, control-path endpoint latency는 12 cycle, memory/cache endpoint는 4 cycle이다. 합성 shell은 5 ns 제약과 endpoint latency 8 cycle을 사용한다. runtime과 면적을 설명할 때 이 조건을 각각 명시한다. 측정 workload의 READY trace는 case reset 기준 시간 순서로 동일하게 시작하며, P setup 비용도 측정 구간에 포함한다.

단독 Tcl/`make synth-*` 결과는 `reports/standalone`에 저장되며 latest manifest를 갱신하지 않는다. 최신 검증 결과에는 `run_implementation.py`를 사용한다. `refresh_clock_reports.tcl`은 과거 checkpoint 복구용이다. 참고 RTL은 보존했고, multi-context 결과의 해석 제한과 reference 실행 shell의 종료 코드만 보완했다.


`make test-xsim`은 기본 B1/P, ingress depth 1/3, AXI FIFO depth 1/3/5의 9건에 seed·cross_targeted·latency·의도된 assertion 실패·RTL mutant를 더한 43건을 Vivado XSim에서 검사한다(REVIEW 42). 2026-09-30 교차검증에서 주소만 바뀔 때 range hazard hit가 갱신되지 않는 현상을 발견해 context별 continuous assignment로 표현을 정리했다. 판정 조건과 hazard assertion은 유지했다. test-only cache에는 old resident의 AC와 다른 tag의 fill 완료가 같은 index에서 겹칠 때 새 fill을 과잉 무효화하던 우선순위도 수정했다. 상세 재현 근거와 남은 범위는 REVIEW 21~22번에 기록한다.
