# rCCI RTL 파형 설명

최종 RTL(2026-11-10)로 생성한 GTKWave 파형 19종의 시나리오와 보는 방법을 정리한다. 표의 시간은 각 FST 파일에서 직접 읽은 값이다. 논문에는 사용하지 않는 코드 공유용 자료이다.

## 1. 공통 사항

### 여는 방법

`AXI-bus-Verilog-Modelling-NEW` 폴더(WSL 터미널)에서 실행한다.

```sh
gtkwave -r waves/gtkwaverc waves/rcci/<이름>/<이름>.fst waves/rcci/<이름>/<이름>.gtkw
gtkwave -r waves/gtkwaverc waves/ace_cci/<이름>/<이름>.fst waves/ace_cci/<이름>/<이름>.gtkw
```

| 파일 | 내용 |
|---|---|
| `.fst` | 시뮬레이션에서 기록한 신호 값 |
| `.gtkw` | 표시할 신호, 순서, 그룹, 표시 형식 |
| `waves/gtkwaverc` | 전체 시간 범위로 맞춰 여는 설정 |

RTL을 수정한 뒤에는 `make waves-rcci` 또는 `python3 scripts/run_ace_waves.py --case all`로 다시 생성한다.

### 파형 목록

| 분류 | 파형 | 절 |
|---|---|---|
| ACE 기본 동작 | `ace-opcodes`, `ace-p`, `ace-b1`, `ace-multi` | 3 |
| 기존 vs 제안 | `b1-rd-8l`, `rcci-rd-8l`, `b1-wr-8l`, `rcci-wr-8l` | 4 |
| 동시 진행 라인 | `rcci-rd-w1`, `rcci-rd-w4`, `rcci-rd-w16`, `rcci-wr-w1`, `rcci-wr-w4`, `rcci-wr-w16` | 5 |
| CPU와의 상호작용 | `conflict-writeback`, `noconflict-ace`, `r-buffer-cpu-refill` | 6 |
| 읽기 · 쓰기 동시 | `rw-range-64l`, `rw-same-lines` | 7 |

## 2. 신호 읽는 법

클럭 주기는 10 ns이다.

| 신호 | 의미 |
|---|---|
| `M1_AR*`, `M1_R*` / `M1_AW*`, `M1_W*`, `M1_B*` | DMA 포트 (ACE-Lite) |
| `ACE_*` | CPU 요청 포트 |
| `M0_*` | 일반 AXI 포트 |
| `ac_*`, `cr_*`, `cd_*` | CPU 캐시로 가는 스눕과 응답 |
| `S_*` | 메모리 포트 |
| `read_ingress_count` | 사용 중인 읽기 엔트리 수 |
| `read_tracker_count` | 동시에 진행 중인 읽기 라인 수 |
| `write_context_count`, `write_line_outstanding` | 쓰기 엔트리 수, 동시에 진행 중인 쓰기 라인 수 |
| `rd_issue_fire`, `wr_issue_cand`, `wr_issue_reserve` | 읽기 라인 발행, 쓰기 발행 후보, 쓰기 라인 예약 |
| `rd_e0_*`, `wr_e0_*` | 0번 범위 엔트리의 상태 (`e1`은 1번) |

범위 엔트리의 주요 필드는 다음과 같다.

| 필드 | 의미 |
|---|---|
| `issue_idx` | **다음에 발행할 라인 번호**. 5이면 라인 0~4를 발행했고 라인 5가 다음 차례 |
| `out_idx` | DMA에 전달을 마친 라인 수 (읽기) |
| `w_idx`, `b_idx` | W를 받은 라인 수, B를 받은 라인 수 (쓰기) |
| `lo_line`, `hi_line` | 소유 구간 `[lo, hi)`. **페이지 안의 라인 오프셋**(0~64)이며 절대 주소가 아님 |

주요 인코딩은 다음과 같다.

| 신호 | 값 | 의미 |
|---|---|---|
| `M1_ARSNOOP` | 0 / 6 | ReadOnce / ReadRange |
| `M1_AWSNOOP` | 1 / 7 | WriteLineUnique / WriteRange |
| `ARLEN`, `AWLEN` | 4n − 1 | n라인 (`0x1F` = 8라인, `0x7F` = 32라인, `0xFF` = 64라인) |
| `ac_snoop` | 0 / 13 (`0xd`) | ReadOnce / MakeInvalid |

사례 파형 5종(`conflict-writeback`, `noconflict-ace`, `rw-range-64l`, `rw-same-lines`, `r-buffer-cpu-refill`)은 TB, ACE top, 범위 상태 신호만 저장되어 있다.

## 3. ACE 기본 동작

### 3.1 `ace-opcodes` — ACE 요청과 스눕

**시나리오.** ACE manager와 스눕 서비스에 세 가지 요청을 차례로 낸다. 범위 전송은 포함되지 않는다. 신호 이름은 `ar_*`, `aw_*`, `r_*`, `service_ac_*`, `service_cr_*` 등이다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 105 | `ar` 수락 | ReadShared, `0x1000` (`ar_snoop=1`) |
| 225, 235 | `r_last`, `r_ack` | CD 데이터로 완료, 스눕 CR `11001` |
| 315 | `ar` 수락 | ReadNotSharedDirty, `0x1040` (`ar_snoop=3`) |
| 395 | `svc_aw` 수락 | dirty 데이터를 메모리에 다시 씀, 스눕 CR `11101` |
| 495, 505 | `r_last`, `r_ack` | 완료 |
| 585 | `aw` 수락 | WriteLineUnique, `0x1080` → MakeInvalid로 변환, CR `10000` |
| 705, 715 | `b`, `w_ack` | 완료 |

**핵심.** CPU 캐시 상태에 따라 CR 응답, CD 전송, dirty writeback이 어떻게 달라지는지 볼 수 있다. CD는 8 beat(라인 2개)이다.

### 3.2 `ace-p` — 통합 시험 (제안 구성)

**시나리오.** 통합 TB의 기본 시험을 그대로 기록한 파형이다(`USE_RANGE=1`, 캐시 1개). 하나의 시나리오가 아니라 여러 동작을 이어 붙였으며 5720 ns에 끝난다.

| 시간 (ns) | 신호 | 동작 |
|---|---|---|
| 75, 735 | `M1_AW` | 라인 쓰기 2번 (`0x12_0000_1040`) |
| 995 | `M0_AR` | 일반 AXI 읽기 |
| 1125, 1575, 1835 | `M1_AR` | 라인 읽기 3번 (ReadOnce) |
| **2095** | `M1_AR` | **ReadRange** 8라인 (`0x12_0000_3000`), `M1_RLAST` 2825 |
| **2915** | `M1_AW` | **WriteRange** 8라인 (`0x12_0000_1400`), `M1_B` 3525 |
| 3595~5015 | `ACE_AR` | CPU 읽기 6번 (ReadShared, `ARSNOOP=0xb` 포함) |
| 3895, 5215 | `ACE_AW` | CPU 쓰기 2번 (5215는 WriteBack) |
| 4605 | `M0_AW`, `M1_AW` | 같은 cycle에 수락 |

**핵심.** 라인 요청과 범위 요청이 같은 RTL에서 함께 동작하는 것을 볼 수 있다. 특정 동작만 보려면 4~7절의 파형이 더 적합하다.

### 3.3 `ace-b1` — 통합 시험 (기존 구성)

**시나리오.** 3.2와 같은 시험을 기존 방식(`USE_RANGE=0`)으로 실행했다. ReadRange와 WriteRange 부분이 없고 4220 ns에 끝난다.

| 시간 (ns) | 신호 | 동작 |
|---|---|---|
| 75, 735, 3105 | `M1_AW` | 라인 쓰기 3번 |
| 995 | `M0_AR` | 일반 AXI 읽기 |
| 1125, 1575, 1835 | `M1_AR` | 라인 읽기 3번 |
| 2095~3515 | `ACE_AR` | CPU 읽기 6번 |
| 2395, 3715 | `ACE_AW` | CPU 쓰기 2번 |
| 3105 | `M0_AW` | M1 AW와 같은 cycle에 수락 |

**핵심.** `read_ingress_count`, `read_tracker_count`가 1을 넘지 않는다. `ace-p`와 비교하면 범위 구간(2095~3525 ns)이 없는 것이 차이이다.

### 3.4 `ace-multi` — 캐시 2개 구성

**시나리오.** 3.3과 같은 시험을 캐시 마스터 2개(`CACHED_MASTERS=2`, `USE_RANGE=0`)로 실행했다. 4950 ns에 끝난다.

| 시간 (ns) | 신호 | 동작 |
|---|---|---|
| 75, 865, 3705 | `M1_AW` | 라인 쓰기 3번 |
| 1155 | `M0_AR` | 일반 AXI 읽기 |
| 1285, 1875, 2165 | `M1_AR` | 라인 읽기 3번 |
| 2495~4175 | `ACE_AR` | CPU 읽기 6번 |
| 2865, 4445 | `ACE_AW` | CPU 쓰기 2번 |

**핵심.** `ac_*`, `cr_*`, `cd_*`(캐시 0)와 `AC1*`, `CR1*`, `CD1*`(캐시 1)를 함께 보면 스눕이 두 캐시에 나가고 응답이 모이는 것을 볼 수 있다. 전체 시간은 `ace-b1`보다 길다(4950 ns vs 4220 ns).

## 4. 기존 방식 vs 제안 방식 (8라인)

동일한 8라인 전송을 기존 방식(B1, 엔트리 4개)과 제안 방식(rCCI, 범위 엔트리 16개, 동시 진행 라인 4개)으로 처리한다.

### 4.1 `b1-rd-8l` — 기존 방식 읽기

**시나리오.** `0x12_0010_0000`부터 8라인을 라인마다 ReadOnce로 읽는다. CPU 캐시에 홀수 번째 라인(1, 3, 5, 7)이 dirty로 있어 hit이고, 짝수 번째 라인은 miss이다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 145, 155, 165, 175 | `M1_AR` 수락 | 라인 0~3 요청 (엔트리 4개가 참) |
| 175~205 | `ac_*` | 라인 0~3 스눕 |
| 235, 325, 465, 585 | `S_AR` 수락 | miss 라인 4개만 메모리 읽기 |
| 325 | `M1_RVALID` | 첫 데이터 전달 |
| 355 | `M1_RLAST` | 라인 0 완료 |
| 375, 415, 465, 505 | `M1_AR` 수락 | 엔트리가 비는 대로 라인 4~7 요청 |
| 745 | `M1_RLAST` | 마지막 라인 완료 |

**핵심.** `M1_AR`이 **8번**, `M1_RLAST`도 **8번** 나온다. `read_ingress_count`는 4까지 올라간다.

### 4.2 `rcci-rd-8l` — 제안 방식 읽기

**시나리오.** 같은 8라인을 ReadRange 하나(`ARSNOOP=6`, `ARLEN=0x1F`)로 읽는다. dirty 조건도 같다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 145 | `M1_AR` 수락 | ReadRange 요청 **1번** |
| 155~185 | `rd_e0_issue_idx` 1→4 | 라인 0~3 발행 |
| 175~205 | `ac_*` | 라인 0~3 스눕 |
| 235, 325, 445, 565 | `S_AR` 수락 | miss 라인만 메모리 읽기 |
| 325 | `M1_RVALID` | 첫 데이터 전달 |
| 365~495 | `rd_e0_issue_idx` 5→8 | 슬롯이 비는 대로 라인 4~7 발행 |
| 725 | `M1_RLAST` | 범위 끝에서 **1번만** |

**핵심.** 스눕 8번과 메모리 읽기 4번은 기존 방식과 같다. 달라지는 것은 `M1_AR` 1번, `M1_RLAST` 1번, `read_ingress_count` 최대 1이다. `read_tracker_count`는 4까지 올라가 내부에서는 라인 단위로 동시에 진행한다.

### 4.3 `b1-wr-8l` — 기존 방식 쓰기

**시나리오.** `0x12_0010_0000`부터 8라인을 라인마다 WriteLineUnique로 쓴다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 65~95 | `M1_AW` 수락 | 라인 0~3 요청 |
| 125~185 | `ac_*` | MakeInvalid (`ac_snoop=0xd`) |
| 195 | `M1_W` | 첫 쓰기 데이터 |
| 225 | `M1_WLAST` | 라인 0의 W 완료 |
| 285 | `M1_B` | 라인 0 응답 |
| 295, 345, 395, 445 | `M1_AW` 수락 | 라인 4~7 요청 |
| 665 | `M1_B` | 마지막 응답 |

**핵심.** `M1_AW`, `M1_WLAST`, `M1_B`가 모두 **8번**이다.

### 4.4 `rcci-wr-8l` — 제안 방식 쓰기

**시나리오.** 같은 8라인을 WriteRange 하나(`AWSNOOP=7`, `AWLEN=0x1F`)로 쓴다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 65 | `M1_AW` 수락 | WriteRange 요청 **1번** |
| 85~145 | `wr_e0_issue_idx` 1→4 | 라인 0~3 예약과 발행 |
| 125~185 | `ac_*` | MakeInvalid |
| 195 | `M1_W` | 첫 쓰기 데이터 |
| 275~635 | `wr_e0_b_idx` 1→8 | 메모리 응답을 라인별로 수집 |
| 295~445 | `wr_e0_issue_idx` 5→8 | 라인 4~7 발행 |
| 585 | `M1_WLAST` | 범위 끝에서 1번 |
| 645 | `M1_B` | 응답 **1번** |

**핵심.** `M1_AW`, `M1_WLAST`, `M1_B`가 각각 1번이다. 내부의 MakeInvalid 8번과 메모리 쓰기 8번은 기존 방식과 같다.

## 5. 동시 진행 라인 수 비교 (32라인)

범위 엔트리 16개로 32라인을 처리하면서 동시 진행 라인 수 N_fly만 1, 4, 16으로 바꾼다. 캐시 hit는 없다.

### 5.1 `rcci-rd-w1`, `rcci-rd-w4`, `rcci-rd-w16` — ReadRange

공통으로 65 ns에 ReadRange(`ARLEN=0x7F`) 1번을 수락하고, 첫 R은 245 ns이다.

| 파형 | N_fly | `read_tracker_count` 최대 | 마지막 스눕 (ns) | 마지막 메모리 AR (ns) | `M1_RLAST` (ns) |
|---|---|---|---|---|---|
| `rcci-rd-w1` | 1 | 1 | 6605 | 6665 | **6785** |
| `rcci-rd-w4` | 4 | 4 | 2465 | 2525 | **2755** |
| `rcci-rd-w16` | 16 | 16 | 1505 | 1565 | **2755** |


### 5.2 `rcci-wr-w1`, `rcci-wr-w4`, `rcci-wr-w16` — WriteRange

공통으로 65 ns에 WriteRange(`AWLEN=0x7F`) 1번을 수락하고, 첫 W는 195 ns이다.

| 파형 | N_fly | `write_line_outstanding` 최대 | 마지막 W (ns) | 마지막 스눕 (ns) | `M1_B` (ns) |
|---|---|---|---|---|---|
| `rcci-wr-w1` | 1 | 1 | 6735 | 6635 | **6795** |
| `rcci-wr-w4` | 4 | 4 | 1845 | 1745 | **1905** |
| `rcci-wr-w16` | 16 | 16 | 1465 | 1085 | **1835** |

**핵심.** N_fly가 클수록 빨라지다가 메모리 상한에서 멈춘다. `rcci-wr-w16`은 W를 1465 ns에 모두 받지만 메모리 쓰기 응답이 끝나는 1835 ns까지 B를 보내지 않는다.

## 6. CPU와의 상호작용

### 6.1 `conflict-writeback` — 같은 라인을 CPU가 WriteBack (사례 3)

**시나리오.** DMA의 ReadRange가 진행되는 도중에 CPU가 같은 범위의 라인 하나를 WriteBack한다. 범위가 그 라인 앞에서 기다리는지 확인한다.

- **DMA:** `0x12_0000_1C00`부터 8라인 ReadRange (`ARSNOOP=6`, `ARLEN=0x1F`), 동시 진행 라인 4개
- **CPU:** 라인 5(`0x12_0000_1D40`)에 WriteBack (`AWSNOOP=3`), W는 약 150 cycle 늦게 보냄
- **판정:** DMA가 받은 라인 5가 CPU가 쓴 새 값이어야 통과

ACE에서는 CPU가 WriteBack의 AW를 먼저 내고 W를 나중에 보낼 수 있다. 그 사이에 DMA가 라인 5를 메모리에서 읽으면 CPU가 쓰기 전의 옛 데이터를 가져간다. 수정 전 RTL에서 실제로 이 오류가 났다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 50 | `M1_ARVALID` | DMA가 ReadRange 요청 |
| 65~95 | `rd_e0_issue_idx` 1→4 | 라인 0~3 발행 (창 4개가 참) |
| 100 | `ACE_AWVALID` | CPU가 라인 5에 WriteBack AW |
| 105 | `ACE_MANAGER_BUSY` 1 | CPU 요청 처리 시작 |
| 275 | `rd_e0_issue_idx` = 5 | 라인 4까지 발행, **라인 5에서 멈춤** |
| 585 | `rd_e0_out_idx` = 5 | 라인 0~4를 DMA에 전달 완료, 이후 R이 멈춤 |
| 1610~1650 | `ACE_WVALID` | CPU가 W 데이터 전송 |
| 1695 | `ACE_BVALID` | CPU에 쓰기 응답 |
| 1710 | `ACE_WACK` | CPU 처리 종료 (`ACE_MANAGER_BUSY`는 1715에 0) |
| **1725** | `rd_e0_issue_idx` = 6 | **라인 5 발행 재개** |
| 1735, 1745 | `rd_e0_issue_idx` 7, 8 | 라인 6, 7 발행 |
| 2075 | `M1_RLAST` | 범위 완료 |

**핵심.** 275 ns부터 1725 ns까지 `rd_e0_issue_idx`가 5로 유지된다. 그동안 `rd_issue_fire`는 0이다. 라인 4 발행이 275 ns로 늦은 것은 창이 찼다가 라인 0이 끝나 슬롯이 비었기 때문이며 CPU 충돌과는 무관하다. 멈춘 동안 `rd_e0_hi_line`은 `0x35`이므로 라인 5(오프셋 `0x35`)는 구간에 들어 있지 않다.

### 6.2 `noconflict-ace` — 다른 라인의 CPU 요청 (사례 14)

**시나리오.** WriteRange가 진행되는 동안 CPU가 **다른 페이지**를 읽는다. 관련 없는 CPU 요청 때문에 범위가 멈추지 않는지 확인한다.

- **DMA:** `0x12_0000_1400`부터 8라인 WriteRange
- **CPU:** `0x12_0000_7000` ReadShared, RACK을 DMA 쓰기 응답 이후로 미룸

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 55 | `M1_AW` 수락 | WriteRange 요청 |
| 75~135 | `wr_e0_issue_idx` 1→4 | 라인 0~3 발행 |
| 145 | `ACE_AR` 수락 | CPU ReadShared, `ACE_MANAGER_BUSY` 1 |
| 305 | `ACE_RLAST` | CPU 읽기 데이터 완료 (RACK은 아직) |
| 315 | `M1_W` | 첫 쓰기 데이터 |
| **415~565** | `wr_e0_issue_idx` 5→8 | **CPU 처리 중에도 라인 4~7 계속 발행** |
| 760 | `ACE_RACK` | CPU 처리 종료 (`ACE_MANAGER_BUSY`는 765에 0) |
| 775 | `M1_B` 수락 | 범위 완료 |

**핵심.** `ACE_MANAGER_BUSY`가 1인 동안에도 `wr_e0_issue_idx`가 계속 증가한다. 6.1과 비교하면 겹치는 라인이 있을 때만 멈춘다는 것을 알 수 있다.

### 6.3 `r-buffer-cpu-refill` — DMA가 R을 받지 않을 때 CPU 진행 (사례 29)

**시나리오.** DMA가 ReadRange를 내고 R을 받지 않는 동안 CPU가 읽기를 수행한다. DMA의 R 지연이 CPU를 막지 않는지 확인한다.

- **DMA:** `0x12_0000_1800`부터 8라인 ReadRange, `M1_RREADY=0`으로 유지
- **CPU:** `0x12_0000_7000` ReadShared

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 55 | `M1_AR` 수락 | ReadRange 요청 |
| 65~95 | `rd_e0_issue_idx` 1→4 | 라인 0~3 발행 |
| 145~235 | `S_AR` 수락 | 메모리 읽기 4번, 데이터는 라인 버퍼에 저장 |
| 605 | `ACE_AR` 수락 | CPU ReadShared |
| **765** | `ACE_RLAST` | **DMA가 R을 받지 않는데도 CPU 읽기 완료** |
| 770 | `ACE_RACK` | CPU 처리 종료 |
| 780 | `M1_RREADY` 1 | DMA가 R 수신 시작 |
| 785 | `M1_RVALID` 수락 | 첫 데이터 |
| 825~945 | `rd_e0_issue_idx` 5→8 | 라인 4~7 발행 |
| 1265 | `M1_RLAST` | 범위 완료 |

**핵심.** `M1_RREADY`가 0인 구간(780 ns 이전)에 `ACE_RLAST`가 나온다. 메모리 R을 트래커의 라인 버퍼에 받아 두므로 DMA의 R 수락과 분리되어 있다.

## 7. 읽기 · 쓰기 동시 진행

### 7.1 `rw-range-64l` — 64라인 Read · WriteRange 동시 (사례 18)

**시나리오.** 서로 다른 페이지에 64라인 ReadRange(`0x12_0001_1000`)와 WriteRange(`0x12_0002_1000`)를 같은 cycle에 낸다. 동시 진행 라인은 방향별 4개이다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 55 | `M1_AR`, `M1_AW` 수락 | 두 요청을 같은 cycle에 수락 (`LEN=0xFF`) |
| 65~95 | `rd_e0_issue_idx` 1→4 | 읽기 라인 0~3 발행 |
| 75~135 | `wr_e0_issue_idx` 1→4 | 쓰기 라인 0~3 발행 |
| 185 | `M1_W` | 첫 쓰기 데이터 |
| 235 | `M1_RVALID` | 첫 읽기 데이터 |
| 3605 | `M1_WLAST` | 쓰기 데이터 완료 |
| 3665 | `M1_B` | 쓰기 범위 완료 |
| 5305 | `M1_RLAST` | 읽기 범위 완료 |

**핵심.** 두 범위가 엔트리 하나씩만 쓰며 번갈아 진행된다. 스눕은 128번(읽기 64 + 쓰기 64), 메모리 읽기와 쓰기는 각각 64번이다.

### 7.2 `rw-same-lines` — 같은 8라인 Read · Write 동시 (사례 21)

**시나리오.** `0x12_0000_4000`부터 **같은 8라인**에 ReadRange와 WriteRange를 같은 cycle에 낸다. 같은 라인을 두 방향이 동시에 처리하지 않는지 확인한다.

| 시간 (ns) | 신호 | 일어나는 일 |
|---|---|---|
| 55 | `M1_AR`, `M1_AW` 수락 | 두 요청 수락 |
| 55 | `wr_issue_cand` 1 | 쓰기 라인 0이 발행 후보가 되지만 대기 |
| 65~95 | `rd_e0_issue_idx` 1→4 | 읽기 라인 0~3 발행 |
| 265 | `rd_e0_out_idx` = 1 | 읽기 라인 0 완료 |
| **265** | `wr_issue_reserve` 1 | **읽기가 끝난 라인 0을 쓰기가 예약** |
| 285~845 | `wr_e0_issue_idx` 1→8 | 쓰기가 읽기 뒤를 라인 단위로 따라감 |
| 825 | `M1_RLAST` | 읽기 범위 완료 |
| 1045 | `M1_B` | 쓰기 범위 완료 |

**핵심.** `wr_issue_cand`는 55 ns부터 1이지만 `wr_issue_reserve`는 읽기 라인 0이 끝난 265 ns에야 1이 된다. 범위 전체가 아니라 **라인 단위로** 뒤따른다.
