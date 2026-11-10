# rCCI 단계 2 구현·검증 결과

작성일: 2026-11-04  
상태: PASS

## 구현 범위

- `axi_cci_ace_top`의 M1 요청 경계에 AR/AW의 `SNOOP`, `DOMAIN`, `SIZE`, `BURST`, `CACHE`, `LOCK`, `BAR`를 추가했다.
- `M1_WSTRB`를 arbiter의 AW 순서 기반 W 경로와 memory slave까지 전달한다. 비일관 M0처럼 strobe 입력이 없던 기존 경로는 all-one으로 명시했다.
- `ace_snoop_pkg`에 사설 확장 값 `ARSNOOP_READ_RANGE=4'b0110`, `AWSNOOP_WRITE_RANGE=3'b111`을 정의했다. 범위 요청의 실제 수락과 실행은 단계 5·6의 범위 tracker에서 구현한다.
- 현재 단계의 M1 B1 계약은 ReadOnce/WriteLineUnique, shareable, 64 B 정렬, 4 beat, 16 B/beat, INCR, Modifiable, normal BAR/LOCK이다. AW 수락 뒤의 모든 W beat는 full strobe여야 한다.
- arbiter는 W data와 WSTRB를 가장 오래된 미완료 AW route에 함께 결합한다. AW가 없는데 W가 수락되는 경우, stall 중 W payload가 바뀌는 경우, 기존 WLAST 위치 위반을 assertion으로 검출한다.

## 전용 회귀

실행 명령은 `python3 scripts/run_rcci_stage2.py`이며 로그와 기계 판독 결과는 이 디렉터리의 `*.log`, `summary.json`에 저장된다.

| 시험 | 자극·검사 | 결과 |
|---|---|---|
| `ace_b1` | 명시적인 B1 AR/AW 속성과 full WSTRB로 기존 ACE 통합 시나리오 실행 | PASS |
| `wstrb_route` | M0/M1에 서로 다른 WSTRB 패턴을 주고 동시 AW 뒤 W가 AW FIFO 순서의 route와 함께 전달되는지 검사 | PASS |
| `wstrb_memory` | 16 byte beat에서 하위 8 byte strobe만 켜고, 선택 byte만 갱신되는지 검사 | PASS |
| `negative_1` | partial M1 WSTRB | EXPECTED FAILURE: `M1_WSTRB_CONTRACT` |
| `negative_2`~`negative_8` | ARSNOOP, ARDOMAIN, ARSIZE, ARBURST, ARCACHE, ARLOCK, ARBAR를 각각 한 항목씩 위반 | EXPECTED FAILURE: `M1_AR_ATTRIBUTE_CONTRACT` |
| `reject_9`~`reject_10` | ARLEN 또는 ARADDR 정렬 위반을 4 cycle 동안 제시 | PASS: ingress가 READY를 내리지 않고 거부 |
| `reject_11`~`reject_19` | AWSNOOP, AWDOMAIN, AWSIZE, AWBURST, AWCACHE, AWLOCK, AWBAR, AWLEN, AWADDR 정렬을 각각 한 항목씩 위반 | PASS: READY를 내리지 않고 sticky fail-stop fault로 거부 |
| `negative_20` | 예상 beat보다 이른 WLAST | EXPECTED FAILURE: `ACE_INTEGRATION_PROTOCOL` |

## 단계 경계

이 결과는 새 속성 포트와 WSTRB/W framing 계약의 배선 및 오류 검출을 확인한다. 이후 단계 3~6에서 tagged service, 공통 admission pool, ReadRange와 WriteRange의 R/W/B 조립까지 구현했으며 최신 상태는 `RCCI_PLAN.md`와 단계 3~6 결과 문서에 기록한다.

## 최종 회귀와 정적 검사

| 검사 | 결과 |
|---|---|
| `python3 scripts/run_regression.py` | PASS — 252건(정상 236, expected-failure 16), `reports/runs/simulation_20261104T053445Z_a6185e84` |
| `python3 scripts/run_ace.py` | PASS — 69건(정상 18, mutation expected-failure 51), `reports/runs/ace_20261104T053445Z_812a7bfb` |
| `python3 scripts/measure_rcci_stage1.py` 재측정 | PASS — Ls(no-data/data)=1/4, Lm=2, Lw=2 cycle로 단계 1 결과 불변 |
| Verilator standalone lint | PASS — `axi_b0_top`, `axi_b1_conventional_top`, `axi_p_range_top`, `axi_cci_top`, `synth_register_shell` |

ACE 변이 runner는 원본이 `scripts/rtl.f`에 있는 경우에도 실제 변이 파일을 사용하도록 수정했다. 이에 따라 예약 range op 수락 변이가 실제 RTL에 주입되고 `RANGE_READ_RESERVED_OP`로 검출되는 것을 확인했다. 단계 2 시작 전 active RTL/TB/script는 `reports/archive/rcci_pre_rework_2026-11-04`에 SHA-256 manifest와 함께 보존했다.

