# rCCI RTL 수정 계획 (읽기·쓰기, 교수님 방식)

작성일: 2026-11-02  
상태: 단계 1~8 구현 및 단계별 검증 완료(2026-11-06). 단계 8에서 read/write ingress의 양방향 line/span hazard, read/write Error-only의 SLVERR drain, Error+DataTransfer/PassDirty fail-stop, reset 복구와 일반 ACE의 비충돌 M1 동시 admission을 구현했다. 단계 8 전용 simulation 6건, mutation 6건, formal 18건, 전체 ACE 회귀 68건과 Vivado OOC synthesis-only 10개 구성이 통과했다. formal bounded-progress는 tagged line write 1개, ready stall 0, CR/B 최대 3 cycle, property bound 14, BMC depth 20의 명시적 범위이며 64-line 완료는 directed simulation 결과이다. 활성 ACE가 있는 동안 새 M0/M1은 아직 보수적으로 직렬화하므로 완전한 양방향 주소별 admission은 후속 범위로 남긴다. 단계 7의 legacy archive와 단계 3의 tagged status/data/release·공통 admission pool 계약은 유지한다.  
후속 상태(2026-11-08): 단계 8 이후 코드 리뷰와 Codex 교차 검토 3회로 다음 결함과 불일치를 확인했다(14.0).
- R1: 범위의 미발행 라인과 ACE 충돌
- R1′: ACE와 M1이 같은 cycle에 수락되는 경쟁. B1에도 있다.
- R2: 범위 엔트리별 구간 비교기 미구현
- R3: M1 읽기·쓰기 반대 방향 검사 누락

14절의 보완 0~8로 수정한다. 발행 시점 소유권 검사와 쓰기 예약 구조는 **B1 기준 구현에도 똑같이 적용**한다. 논문 5장의 B1/rCCI 비교는 보완 5 회귀를 통과한 RTL로 다시 측정한다.  
근거: 교수님 피드백 2026-11-02 (`CCI_P/261102_교수님_피드백.txt`, `CCI_P/rCCI_261101_2.pptx` 노란 블록)  
결정: 읽기와 쓰기 **모두** 교수님 방식으로 바꾼다(2026-11-02). 이 문서가 `RCCI_READ_PLAN.md`(읽기 전용 초안)와
`RANGE_READ_EXTENSION_PLAN.md`(setup + CleanInvalid 방식)를 대체한다.

---

## 1. 핵심 아이디어

DMA의 대량 전송(burst read: 메모리 → Flash·네트워크, burst write: Flash·카메라 → 메모리)을 기존 CCI는 64 B
라인마다 트랜잭션 하나로 받아 **라인마다 트래커 엔트리를 하나씩** 잡는다. rCCI(range CCI)는:

1. **범위를 요청 하나로 알린다.** 읽기는 AR, 쓰기는 AW의 SNOOP 신호에 새 값(범위 타입)을, LEN에 크기를 싣는다.
   별도 setup 인터페이스는 없다.
2. **범위 하나 = 논리 요청 context 하나.** context가 라인 수를 저장하고, 라인마다 스눕 → 응답 → 데이터 처리를
   반복한다. 처리 중인 최대 W개 라인은 기존 line tracker pool을 실행 자원으로 사용한다. 따라서 여기서 "하나"는
   외부 요청 수명과 admission을 나타내는 logical context이며, 물리 line 실행 칸을 하나만 쓴다는 뜻이 아니다.
3. **기존 line FSM을 재사용한다.** Range Controller는 line FSM 위에서 주소·포인터·창과 R/W/B 조립을 관리한다.
   단계 5 읽기는 ingress 내부에, 단계 6 쓰기는 `coh_write_range_adapter`에 이 논리 controller를 두었다.
   Path Classifier는 새 range 요청 경로에 사용하지 않는다.
4. **엔트리 수(admission capacity)는 CPU와 DMA가 공유한다.** CPU(ACE manager)의 일관성 요청과 DMA의 읽기 · 쓰기는 공통 토큰 T개를
   얻어야 진행한다(5.2 공통 admission pool). FSM과 metadata 배열은 요청 종류별로 분리되어 있으므로 "같은 물리 트래커 배열을 공유"하는
   구조가 아니라 **"동시에 활성일 수 있는 요청 수 T를 공유"**하는 구조이다. 논문 · 그림에서도 이 뜻으로 쓴다.

전제: 디렉터리(스눕 필터)는 없다(브로드캐스트 스눕). AC는 라인 단위이다. 범위 AC와 디렉터리는 향후 연구이다.

### 1.1 rCCI가 줄이는 것과 그대로인 것

| 줄어드는 것 | 그대로인 것 |
|---|---|
| 외부 논리 요청 context와 admission: 범위 n 라인당 n → 1 | 실행 중인 line tracker는 처리량을 위해 최대 W개 사용 |
| 해저드 비교기: 라인 엔트리 T개 × 포트 P개의 라인 비교 → 범위 엔트리 E개(E < T) × P개의 구간 비교. 구간 비교 하나는 하한·상한 비교 2개로 구현된다. **(2026-11-09 정정) 비용은 기존 하드웨어를 유지하고 범위 하드웨어를 더한 증가분으로 측정한다(15.8).** (4.5, 14.4) | 메모리 R·B 순서 계약 (arbiter `rd_q`·B 순서) |
| DMA의 주소 요청: n → 1 (AR 또는 AW 한 번) | 메모리 접근 수 (라인마다 64 B) — 단, 4.6의 연속 miss 합치기는 선택 |
| 엔트리 할당·중재 횟수, 쓰기의 B 응답: n → 1 | 데이터 양 |

### 1.2 용어
- **hit (읽기)**: 스눕한 캐시가 데이터를 준 경우(CR DataTransfer = 1). clean 사본은 데이터를 주지 않을 수 있으므로
  "캐시 hit"과 같지 않다. 데이터를 받지 못하면 **miss**로 보고 메모리에서 읽는다.
- **hit 판정**: 디렉터리가 없어 스눕은 모든 CPU로 가므로 **모든 CR**을 받은 뒤 판정한다. 하나라도 DataTransfer = 1이면 hit이고,
  데이터는 CR이 아니라 CD 채널로 온다(D3-199).
- **PassDirty 전제**: ReadOnce 스눕에 CPU가 dirty로 넘기면(PassDirty = 1) interconnect가 그 라인을 메모리에 다시 써야 한다
  (표 D5-7, D5-241). 규격은 clean으로 넘기기를 권장하며, 우리 CPU 모델(`ace_cache_snoop_endpoint`)은 ReadOnce에
  PassDirty = 0으로 답하고 상태를 유지한다(`tb_ace_snoop_service`에서 확인). 또 스눕 컨트롤러(`ace_snoop_controller`)는
  PassDirty = 1이면 스스로 메모리에 다시 쓰고(AW/W/B) 실제 B를 받은 뒤 응답을 끝내므로, 트래커 FSM에는 이 분기를 그리지 않는다.
- **CR·CD 순서**: CD가 CR보다 먼저 올 수 있으며, 스눕 컨트롤러가 CD를 따로 버퍼링한다. FSM의 WAIT_CR → WAIT_CD는
  트래커가 보는 논리적 순서이다.
- **Range Controller**: 엔트리의 `lines / issue_idx / out_idx` 카운터, down-count FSM, 엔트리별 구간(`[lo, hi)`) 해저드 비교기,
  R·W·B 조립부를 묶은 블록. 마이크로아키텍처 그림에서 Line Tracker 위에 그린다.

---

## 2. 분석 모델 (실험 전 예측)

기호: `Ls` 스눕 지연(AC → 마지막 CR 및 필요한 CD 수신 완료), `Lc` context 완료부터 status가 tracker에서 사용 가능하고
데이터 없는 miss · MakeInvalid context가 release될 때까지의 **보수적 제어 지연**(둘 중 늦은 시점까지),
`Lm` 메모리 읽기 지연(AR → 첫 R), `Lw` 메모리 쓰기 지연(W 끝 → B),
라인 하나 = 4 beat, 버스 한계 = 4 cycle당 1 라인, 서비스의 동시 스눕 context 수 = `S`(`ACE_SNOOP_CONTEXTS`, 현재 4. CPU 요청을 받는 ACE manager context 수 `ACE_MANAGER_CONTEXTS`와는 다른 자원),
arbiter의 최대 outstanding = `Q`(`MAX_OUTSTANDING_TRANSACTIONS`, ACE top 16).

두 자원은 **점유 시간이 다르다.** ingress 엔트리는 논리 요청이 끝날 때까지, line tracker(범위 창 칸)는 해당 라인의
R 마지막 beat까지 점유된다. 단계 5 구현은 완료된 CD 512비트를 line tracker에 복사하고 service context를 즉시 반환한다.
따라서 miss와 hit 모두 service context 점유는 스눕·상태/데이터 전달·release 구간(`Ls + Lc`)이며, 앞 라인의 R을 기다리는
시간은 line tracker가 부담한다. line tracker pool 크기와 W가 데이터 보존 상한이다.

| | 기존 방식 (엔트리 T개) | rCCI (엔트리 1개, 창 W) |
|---|---|---|
| 엔트리(창 칸) 하나가 라인을 잡는 시간 | 읽기 miss ≈ Ls + Lc + Lm + 4, hit ≈ Ls + Lc + 4 / 쓰기 ≈ Ls + Lc + 4 + Lw | 같음 (창 칸 기준). 엔트리는 범위 전체 동안 1개 |
| DMA 한 스트림의 처리량 (라인/cycle, 읽기 miss) | ≈ min( T/(Ls+Lc+Lm+4), S/(Ls+Lc), Q/(Lm+4), 1/4 ) | ≈ min( W/(Ls+Lc+Lm+4), S/(Ls+Lc), Q/(Lm+4), 1/4 ) |
| 읽기 hit 비중이 클 때 | line tracker의 512-bit buffer가 R 차례까지 데이터 보존 | 같은 pool의 W개 창 칸이 데이터 보존; service context는 조기 반환 |
| 버스를 꽉 채우는 데 필요한 동시 라인 수 | T ≥ (Ls+Lc+Lm+4)/4 | W ≥ (Ls+Lc+Lm+4)/4 |
| n 라인 전송의 엔트리·시간 점유 | ≈ n × (라인 하나 시간) | ≈ 1 × (전송 시간) |
| DMA가 내야 하는 동시 요청(outstanding) | ≥ T 개의 AR/AW | 1 개 |

- 예: Ls = 12, Lm = 20, Lc = 1이면 (12+1+20+4)/4 = 9.25이므로 올림하여 10이다. 기존 방식은 한 스트림에
  **엔트리 10개(+ DMA outstanding 10)**가 필요하고, rCCI는 **엔트리 1개 + 10칸 창**으로 같은 처리량을 낸다.
  서비스 context의 점유는 hit/miss 모두 대략 `Ls + Lc`이므로 버스 한계에 도달하려면
  `S ≥ ceil((Ls+Lc)/4)`가 필요하며, 위 예에서는 S ≥ 4로 현재 S = 4가 경계이다. hit 데이터 대기는 line tracker
  buffer가 담당한다. 메모리 쪽은 Q ≥ (20+4)/4 = 6이 필요하다.
- 실제 RTL 값 중 Ls, Lm, Lw는 단계 1에서 기존 B1 파형으로 측정한다. 아직 존재하지 않는 새 status/release 경로의 Lc는
  단계 1에서 0 / 1 / 2 / 4 cycle로 sweep했고, 단계 3 RTL에서 no-data/data 모두 `Lc=2` cycle로 실측해 C++ 모델과 그래프를 보정했다.
- **단계 1 측정 완료(2026-11-04)**: 무정지 B1 지원 블록과 memory slave(`RESP_LATENCY=0`)에서
  `Ls_nodata=1`, `Ls_data=4`, `Lm=2`, `Lw=2` cycle을 handshake 기준으로 측정했다. `Lc=0/1/2/4` sweep과
  B1/rCCI C++ 비교 결과는 `reports/rcci_stage1/STAGE1_RESULTS.md`에, 단계 3 `Lc` 측정 근거는 `reports/rcci_stage3/STAGE3_RESULTS.md`에 기록했다.
- 따라서 이득은 **엔트리가 모자랄 때** 나타난다. 동시 스트림이 여러 개이거나, 트래커를 다른 마스터와 나눠 쓰거나,
  T가 작을 때 기존 방식은 엔트리 할당을 기다리고, rCCI는 나머지 엔트리를 다른 요청에 남긴다.
- **W = 1이면 rCCI가 더 느리다**(라인마다 지연이 직렬로 쌓임). 그래서 엔트리 안 파이프라인(4.4)이 필수이다.
- **면적 근거 (2026-11-09 정정: 아래 감소 논리는 쓰지 않는다. 비용은 기존 대비 증가분으로 측정한다, 15.8)**: 창 W의 상태 비용(포인터 · 라인 수 약 22비트 + 창 칸마다 (서비스 태그 + 라인 상태), 4.1)이 엔트리 하나를 더 두는 비용보다 작고, 더 크게는
  **해저드 비교기**가 줄어든다.
  - 기존 방식은 엔트리 T개마다 라인 주소 비교기를 둔다. 비교기 수는 해저드를 보는 요청 포트 P개(M0 AR/AW, ACE manager AR/AW, M1 AW·AR)만큼이므로 T × P개이다.
  - rCCI는 범위 엔트리마다 포트별 구간 비교(`lo ≤ line < hi`) 1개를 둔다. 하드웨어로는 59비트 비교 2개이다(14.4).
  - 같은 처리량에 필요한 엔트리 수가 E < T이므로, 비교기 수는 E × P × 2로 줄어든다. 엔트리 수가 같으면(E = T) 오히려 늘 수 있다.
  - 이 차이는 10절의 LUT·FF 비교에서 전체 top 비교와 비교기 단독 합성(14.8)으로 따로 보인다.
- **공정 비교 조건**: 기존 방식은 DMA가 AR/AW를 T개 이상 동시에 낼 수 있어야 엔트리를 채운다. DMA outstanding 수와
  Q, S를 실험 조건으로 명시하고, 기존 방식의 성능이 엔트리가 아니라 DMA나 arbiter에서 막히지 않게 둔다.

이 모델을 C++ 시뮬레이터로 먼저 확인하고(단계 1), RTL로 기능과 면적을 확인한다.

---

## 3. 프로토콜 확장

### 3.1 범위 읽기 (AR)

| 신호 | 값 |
|---|---|
| `ARSNOOP` | `ARSNOOP_READ_RANGE` = `0b0110` (새 값 ReadRange, 각 라인은 ReadOnce 의미) |
| `ARDOMAIN` | Inner / Outer Shareable |
| `ARADDR` | 64 B 정렬, 범위 시작 |
| `ARLEN` | 4n − 1 (n = 1~64, 128비트 버스 기준). **AXI beat 의미 그대로** |

R: beat를 주소 순서로, **RLAST는 마지막 라인의 마지막 beat에만**. 라인마다 출처(CD 또는 메모리)가 달라도 순서를 지킨다.

### 3.2 범위 쓰기 (AW)

| 신호 | 값 |
|---|---|
| `AWSNOOP` | `AWSNOOP_WRITE_RANGE` = `0b111` (새 값 WriteRange, 각 라인은 WriteLineUnique 의미: 라인 전체 덮어쓰기, 스눕 MakeInvalid) |
| `AWDOMAIN` | Inner / Outer Shareable |
| `AWADDR` / `AWLEN` | 64 B 정렬 / 4n − 1 (128비트 버스 기준) |

- DMA는 W 4n beat를 보내고 **B 하나**를 받는다(AXI burst 규칙). CCI는 W를 라인 단위(4 beat, 라인 끝에 WLAST)로
  나누어 메모리에 쓰고, 메모리의 라인별 B를 모두 받은 뒤 DMA에 B 하나를 돌려준다.
- 각 라인은 전체를 덮어쓰므로 스눕은 **MakeInvalid**이며 데이터 회수가 필요 없다.

### 3.3 공통

- AXI4 INCR 최대 256 beat × 16 B = **4 KB = 64 라인 = 한 페이지**, 그리고 "burst는 4 KB 경계를 넘지 않는다" 규칙이
  그대로 범위 조건이 된다. LEN을 새로 정의할 필요가 없다.
- 라인 수는 일반식 `lines = (LEN+1) × (버스 바이트) / 64`이다. 128비트 버스(16 B)에서 `(LEN+1)/4`이며, RTL은
  지금의 `DATA_WIDTH = 128` assertion에 이 전제를 묶어 둔다(다른 폭은 지원하지 않음을 명시).
- WriteLineUnique · MakeInvalid 같은 라인 크기 트랜잭션은 한 라인으로 제한된다(D3-182). 새 SNOOP 값은 **범위 단위 처리를 요청하는 확장**이다.
- **M1 디코드 행렬.** opcode 0은 DOMAIN에 따라 뜻이 바뀌므로(ReadOnce / ReadNoSnoop, WriteUnique / WriteNoSnoop, 표 D3-7 · D3-8)
  opcode만으로 분류하지 않는다. M1(rCCI 평가용 DMA 포트)은 아래 네 가지만 받는다.

  | 분류 | DOMAIN | SNOOP | LEN · 형식 | 처리 |
  |---|---|---|---|---|
  | 라인 읽기 (B1) | Inner / Outer Shareable | `ARSNOOP = 0b0000` (ReadOnce) | `ARLEN = 3`, 64 B 정렬 | 수락 (라인 엔트리) |
  | 범위 읽기 | Inner / Outer Shareable | `ARSNOOP = 0b0110` (ReadRange) | 외부 범위 규칙 | 수락 (범위 엔트리) |
  | 라인 쓰기 (B1) | Inner / Outer Shareable | `AWSNOOP = 0b001` (WriteLineUnique) | `AWLEN = 3`, 64 B 정렬. WSTRB는 이후 W data phase에서 검사 | AW 수락 (라인 엔트리) |
  | 범위 쓰기 | Inner / Outer Shareable | `AWSNOOP = 0b111` (WriteRange) | 외부 범위 규칙. WSTRB는 이후 W data phase에서 검사 | AW 수락 (범위 엔트리) |
  | Non-shareable ReadNoSnoop · WriteNoSnoop | Non-shareable · System | 0 | — | **거부** (fail-fast 형식 오류) |
  | 부분 쓰기 WriteUnique, maintenance(CleanShared · CleanInvalid · MakeInvalid) | — | — | — | **거부** (maintenance는 EXPLICIT 서비스 포트에서만) |
  | rCCI를 끈 구성의 0b0110 · 0b111, 채택하지 않은 다른 Reserved 값 | — | — | — | **거부** |

  bypass를 두지 않는 이유: bypass 요청도 같은 M1 R / B를 쓰므로 발행 순서 · 응답 조립 · W 귀속에 별도 경로가 필요해진다.
  4장 워크로드(3.5)는 모두 일관성 전송이므로 범위를 줄인다. 논문 제한 사항에 "M1은 일관성 라인 · 범위 요청만 지원"으로 적는다.
  기존 회귀 중 M1에 Non-shareable 요청을 보내는 테스트는 단계 2에서 찾아 tie-off 값을 바꾼다. 모든 허용 · 거부 조합을
  directed test와 mutation에 넣는다.
- **외부 범위 요청과 내부 라인 요청의 규칙을 구분한다.** D3-10(cache line size 트랜잭션 제약)은 burst 길이를 1, 2, 4, 8, 16 beat로
  제한하므로 범위 요청에 "그대로" 적용하지 않는다.
  - 외부 ReadRange · WriteRange(rCCI가 정의하는 규칙): INCR, 64 B 정렬, SIZE = 버스 폭(16 B), LEN + 1 = 4의 배수(최대 256 beat),
    4 KB 경계 안, DOMAIN = Inner / Outer Shareable, BAR · LOCK = normal, CACHE = Modifiable, WriteRange는 모든 W beat의 WSTRB = 전부 1.
  - 내부 라인 요청: 범위를 64 B로 나눈 뒤 각 라인에는 ReadOnce / WriteLineUnique(MakeInvalid)의 ACE 조건을 적용한다.
- **사설 확장.** Reserved 값을 쓰는 ReadRange · WriteRange는 표준 ACE 트랜잭션이 아니라 requester(DMA)와 rCCI가 함께 이해하는
  폐쇄형 시스템 안의 확장이다. 기능을 끈 구성과 일반 ACE component는 이 값을 만들거나 전달하지 않고, rCCI가 이 값을 종단해 내부 표준
  라인 동작(ReadOnce / MakeInvalid 스눕 + 메모리 ReadNoSnoop / WriteNoSnoop)으로 바꾼다. 메모리 쪽으로 Reserved 값을 전달하지 않는다.
  논문에서는 "ACE/ACE-Lite 호환"이 아니라 "ACE/ACE-Lite 시스템 안의 사설 확장"으로 표현한다.
- **새 값** (근거: `RCCI_SNOOP_ENCODING.md`, 대상은 ACE/ACE-Lite만, ACE5 계열 제외, 교수님 확인 대기):
  - 읽기 `ARSNOOP = 0b0110`(**ReadRange**): ACE(표 D3-7)·ACE-Lite(표 D11-1)에서 Reserved.
  - 쓰기 `AWSNOOP = 0b111`(3비트, WriteRange): ACE(표 D3-8)·ACE-Lite(표 D11-2)에서 Reserved.
    WriteLineUnique는 라인 크기만 허용되므로(D3-182) 여러 라인 전체 덮어쓰기에는 새 값이 필요하다.
  - 쓰기 범위는 WriteLineUnique처럼 모든 strobe = 1이어야 한다(D3-182).
  - RTL 상수 위치: ACE sideband opcode를 모은 `ace_snoop_pkg`에 `ARSNOOP_READ_RANGE`, `AWSNOOP_WRITE_RANGE`를 **한 번만** 정의하고 rCCI 모듈이 import한다(`cci_pkg`에 중복 정의하지 않음).
- **단계 2 반영(2026-11-04).** 위 두 상수와 M1 AR/AW 속성 포트, `M1_WSTRB`를 ACE top 경계에 추가했다. 이 단계에서는
  B1의 ReadOnce / WriteLineUnique만 기능적으로 수락하며, 새 범위 opcode의 디코드와 실행은 단계 5·6에서 활성화한다.
  기존 B1 TB는 shareable, SIZE=16 B, INCR, Modifiable, normal BAR/LOCK, ARLEN/AWLEN=3, WSTRB=all-one을 명시한다.
  단계 5에서 `ARSNOOP_READ_RANGE`, 단계 6에서 `AWSNOOP_WRITE_RANGE`의 디코드와 실행을 활성화했다.
  속성 오류는 handshake하지 않고 sticky fault를 세우는 fail-fast 정책으로 통일했으며 상세 검증 결과는
  `reports/rcci_stage2/STAGE2_RESULTS.md`와 `reports/rcci_stage5/STAGE5_RESULTS.md`에 기록했다.
- 요청자별 해제: DMA(ACE-Lite)는 마지막 RLAST / B handshake. ACE-Lite에는 RACK·WACK이 없다.
  교수님 FSM의 "Wait for RACK/WACK"은 요청자가 ACE(CPU)일 때의 분기로 FSM에 남긴다.

---

## 4. 트래커와 FSM

### 4.1 엔트리 필드 (현재 read·write tracker 엔트리에 추가)

| 필드 | 폭 | 내용 |
|---|---|---|
| (기존) `valid, snoop_issued, snoop_done, entry` | 3 + IW | ingress entry 번호로 ID·주소·LEN 참조 |
| `kind` | 1 | 0 = 라인, 1 = 범위 (SNOOP 값으로 결정) |
| `lines` | 7 | 라인 수 n (라인 엔트리 = 1) |
| `issue_idx` | **7** | 다음에 AC를 보낼 라인 (0~64) |
| `out_idx` | **7** | 다음에 완료할 라인(읽기: R 전달, 쓰기: 메모리 B) (0~64) |
| shared `line_tracker[]` | pool 크기 × (제어 비트 + 읽기 data 512) | B1과 범위가 공유. 범위는 최대 W개를 전역 창 칸으로 사용 |

- **포인터 7비트.** 64라인 요청은 완료 시 `out_idx = 64`가 되어야 하므로 `lines` · `issue_idx` · `out_idx` 모두 7비트이다
  (6비트면 63 → 0으로 wrap되어 완료 조건과 불변식이 깨진다). 주소 생성에 쓰는 라인 번호는 발행 시점에 0~63으로 제한한다.
- **읽기 line tracker 구조(단계 5 구현).** `valid / snoop_issued / snoop_done / hit / mem_issued`, ingress entry 번호,
  7비트 line index, 512비트 hit data를 저장한다. NQ 요청 태그 FIFO가 line tracker 번호를 서비스 context 태그와 연결하며,
  status/data를 tracker에 복사한 뒤 service context를 반환한다. free tracker를 찾는 global pool이므로 W가 2의 거듭제곱일 필요가 없다.
- **전역 창.** 창 배열을 범위 엔트리마다 복제하지 않는다. B1과 ReadRange가 같은 line tracker pool을 사용하고,
  `tracker_count < RANGE_READ_WINDOW`일 때만 다음 라인을 할당한다. 따라서 여러 범위를 합친 live line 수가 W 이하이고,
  `[out_idx, issue_idx)` 밖 라인은 tracker가 없어 hazard 비교에도 들어가지 않는다.
  - 보완 3(14.4) 이후에는 hazard 비교를 tracker가 아니라 logical context의 구간 레지스터 `[lo_line, hi_line)`(59비트)로 한다.
  - read와 write의 창은 서로 독립이다. read N_fly(`RANGE_READ_WINDOW`)는 모든 read context가, write N_fly(`RANGE_WRITE_WINDOW`)는 모든 write context가 공유한다.
  - logical context 수 E와 line 실행 depth N_fly는 별도 파라미터로 분리한다(14.4-5).
- **쓰기 context 구조(단계 6 구현).** WriteRange는 `coh_write_range_adapter`의 context FIFO에 외부 논리 AW를
  하나 저장한다. context는 `lines / issue_idx / w_idx / b_idx`(각 7비트), line 내부 `w_beat`, 누적
  `resp`, ID와 base address를 가진다. adapter가 만든 각 64 B 내부 AW는 기존 B1 `coh_write_ingress`의
  line tracker를 사용해 MakeInvalid와 memory write를 실행한다. 모든 context를 합친 내부 line outstanding은
  `RANGE_WRITE_WINDOW` 이하이다. 즉 범위마다 W칸을 복제하지 않고, 논리 context와 기존 line 실행 자원을
  두 수준으로 결합한다.
- 방향별 metadata 비트(읽기 data buffer 제외):

  | | 고정 비트 | 칸 비트 | S = 4, W = 9 |
  |---|---|---|---|
  | 읽기 엔트리 | kind 1 + lines · issue · out 21 + R beat 카운터 2 = 24 | shared tracker당 제어·entry·line index + data 512 | 엔트리 24비트 + 공통 pool |
  | 쓰기 context | valid·kind·B완료 3 + ID 4 + base 64 + 포인터 28 + W beat 2 + 누적 BRESP 2 = 103 | 기존 B1 write tracker를 최대 W개 사용 | context 103비트 + 기존 공통 실행 자원 |

  공통 토큰 owner table(토큰 T개 × (종류 + 로컬 번호))은 엔트리 비용과 분리해 계산한다.
  단계 4 비교 결과 hit 데이터는 tracker당 512-bit line buffer에 보존하는 안으로 확정했다. service context 보존은 기본 S=4에서
  ordered R을 기다리는 hit 네 개만으로 모든 snoop context를 점유하지만, tracker 복사는 context를 조기에 반환하여 R=16 outstanding을
  유지한다. 기본 추가 저장량은 pool 16개 × 512 = 8,192 bit이다. 단계 5 ReadRange도 이 pool에서 최대 W개를 사용하므로
  별도 `512 × W` 배열을 추가하지 않지만, 범위 실행 중에는 W개까지 line tracker를 점유한다.
  Vivado OOC 결과와 선택 근거는 `reports/rcci_stage4/STAGE4_PROGRESS.md`에 기록했다.
- elaboration assertion: `W ≥ 1`, `S ≥ 1`, `Q ≥ 1`, 읽기 W와 쓰기 W 각각 `≤ line tracker pool 크기`, `≤ Q`. 쓰기 W는 `≤ write line ingress depth`이며, 외부 write context 수 E와는 무관하다.
- 라인을 순서대로 처리하므로 **bitmap(DONE_MASK) 대신 포인터 두 개**로 충분하다.

불변식 (assertion + formal 대상, 기존 mask 불변식을 대체):

- `out_idx ≤ issue_idx ≤ lines`, `issue_idx − out_idx ≤ W`
- 해제 ⇔ `out_idx == lines` 이고 (읽기) 마지막 beat RLAST handshake / (쓰기) DMA B handshake
- 읽기 RLAST는 `out_idx == lines − 1`인 라인의 마지막 beat에서만, 쓰기 DMA B는 엔트리당 정확히 1번
- `kind = 라인`이면 `lines == 1`

### 4.2 기존 방식 FSM (교수님 정의, 라인 1개)

```text
읽기:  IDLE -AR 저장-> SNOOP -AC(ReadOnce)-> WAIT_CR
         hit  -> SEND_R_CD (서비스의 512비트 CD 데이터를 R 4 beat로)
         miss -> MEM_AR (non-shareable, 64 B) -> WAIT_R -> R 4 beat 전달
       -> (요청자 ACE ? WAIT_RACK : FREE)

쓰기:  IDLE -AW 저장-> SNOOP -AC(MakeInvalid)-> WAIT_CR
       -> MEM_AW (64 B) -> W 4 beat 전달 -> WAIT_B
       -> B 전달 -> (요청자 ACE ? WAIT_WACK : FREE)
```

### 4.3 rCCI FSM (같은 FSM + down-count)

```text
IDLE -범위 요청 저장 (lines = (LEN+1)/4, issue_idx = out_idx = 0)-> SNOOP
SNOOP -AC(base + issue_idx)-> WAIT_CR -> (읽기: hit/miss 처리 / 쓰기: 라인 W 4 beat를 메모리로) -> 라인 완료
라인 완료: out_idx++
   out_idx < lines -> SNOOP (다음 라인)
   out_idx = lines -> 읽기: 그 라인 마지막 beat에 RLAST / 쓰기: DMA에 B 하나 -> FREE
```

기존 방식의 line FSM은 `lines = 1`에 해당한다. rCCI는 이 line FSM을 바꾸어 복제하지 않고, 그 위의
Range Controller가 최대 W개의 line 실행을 발행·회수한다. W=1이면 교수님 초안("CR 받으면 개수 하나 감소,
다시 AC")과 같은 순차 루프가 된다. 기존 FSM과 제안 controller + line FSM을 각각 상태도로 그려 4장에 넣는다.

### 4.4 엔트리 안의 파이프라인 (창 W)와 발행 순서

- `issue_idx`는 `out_idx`보다 최대 **W** 라인 앞설 수 있다(파라미터 `RANGE_WINDOW`). W = 1이면 4.3의 순차 FSM이다.
- 스눕 결과(태그 · hit / miss · 오류)는 공유 line tracker(4.1)에 라인 번호 순서로 기록한다. 서비스 응답의 소비 순서는 AC 순서와 같다고 가정하지 않는다.
- **W = n이면 범위 전체를 먼저 무효화하는 기존 P-WR의 "선무효화"와 같다.** 즉 이전 구현은 이 구조의 한 극단이며,
  W를 바꾸면 선무효화의 정도를 조절할 수 있다(4장 설명과 실험에 활용).

**전역 발행 순서 규칙 (교착 방지, 필수).** arbiter는 M0와 M1이 공유하는 in-order `rd_q` 하나로 메모리 R을
AR 발행 순서대로 돌려준다(B도 같은 순서 계약). R 조립부가 자기 차례가 아닌 R을 받지 않으면(RREADY = 0), 그 R이
`rd_q` head를 막아 뒤의 R도 오지 않는다. 예: entry 2의 메모리 AR이 entry 1의 남은 라인보다 먼저 나가면 entry 2의 R이
head에 오고, 조립부는 entry 1을 기다리며 받지 않으므로 교착이 된다. 따라서:

1. **같은 요청자(응답이 같은 in-order 경로로 돌아오는 M1 요청들)** 안에 **발행 커서 하나**를 둔다. 공통 토큰을 쓰는 CPU 요청은 이 순서에 묶지 않는다(CPU 응답은 별도 경로). 스눕(AC)과 miss 라인의 메모리 AR은 **출력 순서(ingress 순서 →
   엔트리 안 라인 순서)로만** 발행한다. 창 W는 엔트리별이 아니라 **출력 순서 기준 in-flight 라인 수**이다.
   앞 엔트리의 모든 라인을 발행한 뒤에야 다음 엔트리의 라인을 발행한다(라인 엔트리 여러 개 = 길이 1 범위 여러 개).
2. hit 라인은 메모리 AR을 내지 않으므로 `rd_q` 순서에 영향이 없다. 조립부는 `out_idx` 라인이 miss면 `rd_q` head를,
   hit면 서비스 데이터를 소비한다.
3. 쓰기 tracker도 같은 규칙: 메모리 AW·W는 출력 순서로만 발행하고, B 병합부는 B 순서 계약에 따라 받는다.
4. assertion: "R 조립부가 기다리는 miss 라인의 R은 항상 M1 몫의 `rd_q` 가장 앞 항목이다", "발행 순서 = 출력 순서".

**서비스 응답 수신 (기본안: 태그 수신).** 서비스 응답 큐는 ACE manager(AUTO), EXPLICIT, NQ(읽기·쓰기)가 공유하는
순서 큐이다. 읽기 hit 응답을 자기 차례까지 큐에 붙잡아 두면, 그 뒤의 쓰기 MakeInvalid 응답이 막혀 W 채널이 멈추고
DMA의 R·W 의존에 따라 순환 대기가 생길 수 있다. 따라서:

- 서비스 컨트롤러 bank가 이미 context마다 CR·CD를 갖고 있으므로, NQ owner가 **태그(context 번호)로 자기 응답을
  순서와 무관하게 꺼내는** 인터페이스로 바꾼다. 응답 큐는 다른 owner를 막지 않는다. **(기본안)** 계약:
  1. 요청 handshake 때 bank가 할당한 context 태그를 requester에 돌려준다(그 cycle의 `req_ready`와 함께 유효).
  2. requester는 태그를 엔트리와 창 칸에 저장한다.
  3. bank는 context별 완료 상태와 CR · CD를 소비될 때까지 보존한다.
  4. **응답은 상태 통지 → (hit만) 데이터 선택 → release의 세 단계로 나눈다.** 응답 handshake 하나로는 miss의 빠른 context 반환과
     hit의 데이터 보존을 동시에 만족할 수 없기 때문이다(hit 응답을 READY = 0으로 붙잡으면 grant가 고정되어 다른 owner를 막고,
     handshake하면 context가 해제되어 CD가 사라진다).
     - **상태 단계:** context가 완료되면 bank가 `status_tag / status_owner / status_resp`를 **그 owner의 status completion queue**에
       정확히 한 번 넣는다(push). 총 service context 수가 S이므로 각 owner queue의 깊이는 우선 S로 두어 어느 한 owner가 S개를 모두
       점유해도 completion 유실이나 bank backpressure가 없게 한다. queue 출력은 표준 valid/ready로 유지하고 tracker는 예약된 칸이
       있으므로 항상 받을 수 있다. AUTO · EXPLICIT adapter는 각자 1-entry 수신 register를 두며, 상태 통지만으로 context를 해제하지 않는다.
     - **소비 단계:** miss와 데이터 없는 MakeInvalid는 상태를 칸에 복사한 즉시 `release_tag`로 반환한다. hit는 `out_idx` 차례에
       `data_select_tag`로 512비트 CD를 읽어 R 4 beat를 보내고, 마지막 R beat handshake 뒤 `release_tag`를 낸다.
     - AUTO · EXPLICIT처럼 응답을 바로 쓰는 owner도 같은 status / release 규칙을 쓴다. 한 owner의 늦은 release가 다른 owner의
       status 통지를 막지 않는다(owner별 큐).
     - `data_select`는 hit 칸의 태그로만 낼 수 있다. CD read-port grant는 `data_select_valid/tag` handshake 때 잡고 `data_done`까지
       held-grant로 유지하며, 그동안 512비트 데이터와 tag를 안정적으로 유지한다. NQ 읽기는 네 번째 R beat handshake에 `data_done`을
       내고, AUTO · EXPLICIT adapter는 기존 512비트 응답 register가 데이터를 받은 handshake에 `data_done`을 낸다. `data_done` 전에는
       해당 tag의 release를 허용하지 않는다.
     - assertion: 태그마다 `status_seen → (data_consumed) → released` 순서, release는 정확히 한 번, status와 release를 같은 cycle에
       허용하는 것은 miss · MakeInvalid만.
  5. release 뒤에만 태그를 재사용한다. **초기 구현은 같은 cycle 반환 · 재할당을 금지**하고 다음 cycle부터 재사용한다(ABA 혼동 방지).
  6. **다중 owner 중재.** 서비스를 공유하는 owner는 AUTO(ACE manager), EXPLICIT, NQ 읽기, NQ 쓰기 네 종류이다.
     - bank는 요청 handshake 때 태그와 owner 종류를 함께 저장하고 그 owner에게만 태그를 준다. 다른 owner가 그 태그를 고르면
       assertion과 sticky protocol fault로 검출한다.
     - status는 owner별 큐로 나뉘므로 중재가 필요 없다. 공유 자원인 **CD 데이터 읽기 포트**(`data_select`)와 **release 포트**만
       top의 held-grant round-robin으로 중재한다. release는 한 cycle에 끝나므로 grant를 오래 붙잡지 않는다.
     - 기존 `req_order`는 AC 발행 순서를 지키는 issue FIFO로만 유지한다. context 해제는 FIFO head가 아니라 `release_tag`로 처리하고,
       `req_count` · free bitmap도 그 context를 기준으로 갱신한다.
     - 검증: 네 owner 동시 완료, 완료 태그 역순 release, hit의 늦은 release 동안 다른 owner의 status · release 진행, data 포트 backpressure,
       context 전부 사용 후 반환. bounded progress는 bank 전체와 owner별로 확인한다(7절 formal 가정 아래).
  - CR · CD 입력은 AC 순서로 context에 연결되지만, PassDirty writeback과 응답 backpressure 때문에 **최종 완료의 소비 순서가 AC 순서와
    같다고 가정하지 않는다.**
- **단계 5 선택 — shared line buffer.** hit 데이터를 status와 함께 global line tracker의 64 B buffer로 복사한 뒤 service context를
  조기에 반환한다. B1이 이미 사용하는 tracker data pool을 ReadRange 창도 공유하므로 별도 엔트리별 `64 B × W` 배열은 없다.
  이 선택은 service context가 앞선 R 순서를 기다리지 않게 하며, 정확한 storage 비용은 단계 11에서 B1과 R-W 구성별 합성으로 비교한다.
- "서비스 context 하나는 유한 cycle 안에 release된다"는 bounded-progress 속성을 두고(7절의 환경 가정 아래),
  읽기·쓰기 혼합 formal(BMC)로 교착 구조가 없음을 확인한다.

**읽기·쓰기 데이터 경로.**

- **읽기**: R 출력은 `out_idx` 라인의 출처(서비스 데이터 또는 `rd_q` head)만 받는다. 위 규칙 덕분에 기다리는 R은
  항상 head에 있으므로 교착이 없다.
- **쓰기**: DMA의 W beat는 `out_idx` 라인의 MakeInvalid CR이 끝났을 때만 받는다(그 전에는 WREADY = 0).
  W 데이터를 앞서 받아 둘 버퍼는 두지 않는다.

**in-flight 상한.** 창 W는 Q(`rd_q` 깊이)와 shared line tracker pool 크기를 넘을 수 없다. ACE top은
`RANGE_READ_WINDOW ≤ MAX_OUTSTANDING_TRANSACTIONS`와 `RANGE_READ_WINDOW ≤ M1_READ_TRACKERS`를 elaboration assertion으로 검사한다.

### 4.5 해저드

**소유 구간.**
- 라인 엔트리(B1)는 지금처럼 ingress 수락부터 해제까지 그 라인을 소유한다.
- 범위 엔트리는 **스눕을 보냈고 아직 완료하지 않은 라인**, 즉 `[out_idx, issue_idx)`(최대 N_fly 라인)만 소유한다. write는 예약(hold) 중인 라인 1개를 더한다(14.4).
  - 이것은 기존 방식의 "처리 중인 라인"과 같은 의미이다. 그래서 일관성 보장이 같고, CPU 차단이 기존 방식보다 넓어지지 않는다.
- 비교는 엔트리마다 구간 레지스터 `[lo_line, hi_line)`(59비트)와 하는 interval match 1개이며, 하드웨어로는 하한·상한 비교 2개이다(2절 면적 근거, 14.4).

**창의 목적은 읽기와 쓰기가 다르다.**
- **쓰기**: MakeInvalid 뒤 메모리 쓰기 전에 CPU가 그 라인을 다시 읽어 옛 값을 캐시에 올리는 것을 막는다(필수).
- **읽기**: 같은 라인의 버스 트랜잭션 순서를 지킨다. 스눕 응답과 메모리 읽기 사이에 다른 요청이 끼어 값이 섞이지 않게 하는 것이다.
  - ReadOnce에서 CPU는 사본을 유지할 수 있다(표 D5-7, I로 버리는 것도 허용). 그래서 UD 라인에 대한 CPU의 **silent write**(버스 요청 없음)는 막을 수 없고 막을 필요도 없다.
  - DMA가 읽는 값은 "스눕 시점의 값"으로 정의하며, 기존 방식과 같다.

**수락 시점 검사 (새 요청이 기다리는 쪽).** 막힌 요청은 READY를 내려 대기시킨다(Hazard check).
- 대상: M0 AR/AW, ACE manager AR/AW, 반대 방향 M1 요청
- M1 요청은 LEN이 덮는 전체 burst span으로 비교한다.

**발행 시점 검사 (M1 라인이 기다리는 쪽, B1·rCCI 공통).**
- 모든 M1 라인은 발행 직전에 그 라인을 다른 owner가 처리 중인지 다시 검사한다. B1 라인과 범위 라인 모두이다. 처리 중이면 그 라인의 발행만 멈추고, 이미 발행한 라인은 계속 진행한다.
  - 읽기에서 발행은 tracker 할당이다.
  - 쓰기에서 발행은 line 예약(hold)이다.
- 검사 대상:
  - **ACE manager의 활성 span.** shareable·non-shareable을 가리지 않고, 실제 memory/coherence side effect가 있는 요청이 대상이다. 유지 기간은 RACK/WACK까지이다.
  - **같은 cycle의 ACE handshake span.**
  - **반대 방향 M1 구간.**
- 범위 엔트리는 라인마다 이 검사를 반복해야 기존 방식과 같은 보장이 된다. B1 라인도 같은 cycle에 ACE와 함께 수락될 수 있으므로(14.0 R1′) 같은 검사를 거친다.
- 같은 cycle 경쟁의 우선순위는 다음과 같다.
  - ACE handshake가 우선이다. 이때 "같은 라인의 ACE 요청이 끝없이 연속되지 않는다"는 환경 가정을 둔다.
  - read와 write 범위 사이는 1비트 round-robin으로 정한다.
- 쓰기 내부 AW는 `VALID`를 낸 뒤 취소할 수 없다. 그래서 발행 결정은 hold 레지스터에 잡은 뒤 handshake까지 유지한다(14.3).
- 전역 발행 커서(4.4)와 함께 쓰므로 뒤 엔트리가 앞 엔트리를 앞지르지 않는다.

**M0 계약.**
- M0(ACE top 안에서 `COHERENT=0`인 비일관 AXI master)에 대한 보장은 두 가지이다.
  - 새 M0가 활성 M1 구간과 겹치면 막는다.
  - M0가 활성이면 새 ACE를 막는다.
- 이미 나가 있는 M0와 나중에 발행되는 M1 라인은 B1과 마찬가지로 직렬화하지 않는다. 이 경우는 서로 다른 AXI master 사이의 비순서 접근으로 정의한다(14.0).

ACE 요청자의 엔트리는 RACK·WACK까지 해저드를 유지한다.

### 4.6 연속 miss 합치기 (선택)

범위를 미리 알므로 연속된 miss 라인의 메모리 AR을 burst 하나로 합칠 수 있다(메모리 요청 수 감소, DRAM row hit
증가). 먼저 C++ 모델에서 on/off로 효과를 보고, 효과가 크면 RTL에 넣는다.

---

## 5. 현재 RTL 상태와 모듈별 수정

### 5.1 현재 상태 (단계 8 완료 시점)

| 위치 | 현재 동작 |
|---|---|
| `coh_read_ingress.sv` | 외부 B1/ReadRange를 순서대로 저장하고 shared read line tracker와 tagged NQ_READ ReadOnce를 사용한다. CD hit는 tracker buffer에서 R로 조립하고 miss는 64 B memory AR로 실행한다. Error-only는 zero/SLVERR R 4 beat를 만들며 M0/ACE/M1 WriteRange 전체 span hazard를 검사한다 |
| `coh_write_ingress.sv` | 내부 64 B AW를 순서대로 저장하고 라인마다 write tracker와 tagged NQ_WRITE MakeInvalid를 사용한다. 정상은 실제 B에서 해제하고 Error-only는 W 4 beat를 drop한 뒤 합성 SLVERR B로 해제한다. M0/ACE/M1 ReadRange span hazard를 검사한다 |
| `coh_write_range_adapter.sv` | 외부 B1/WriteRange AW context FIFO, 64 B line AW 생성, W 4-beat 분할, 전역 line window, line B 병합 및 외부 B 생성을 담당한다 |
| old P-WR 모듈 | active tree에서 삭제. 제거 전 소스와 standalone 실행 환경은 stage-7 archive에만 보존 |
| `axi_cci_ace_top.sv` | ReadRange tracker와 WriteRange adapter를 M1 경계에 두고, 공통 admission token은 외부 논리 요청당 한 번만 할당·반환한다. 일반 ACE는 활성 M1 line과 겹치지 않으면 drain 없이 수락하고 barrier/DVM/EXPLICIT만 drain한다. 활성 ACE 중 새 M0/M1은 보수적으로 대기한다 |
| `cci_ace_snoop_service.sv` | owner별 tagged status queue, CD data-select held grant, tag release 경로로 AUTO/EXPLICIT/NQ_READ/NQ_WRITE를 서비스한다 |

**단계 8 시점의 알려진 결함 (2026-11-08 확인, 14절에서 수정).**
- R1: 범위의 미발행 라인이 ACE 수락 검사에 보이지 않는다.
- R1′: ACE와 M1(B1 포함)이 같은 cycle에 함께 수락될 수 있다.
- R2: 해저드 비교가 read는 tracker 단위, write는 line entry 단위이다.
- R3: 발행 시점의 M1 읽기·쓰기 반대 방향 검사가 없다.
- non-shareable ACE 읽기의 burst 모양(FIXED/WRAP, SIZE)을 검사하지 않는다.

위 동작 설명은 수정 전 상태이다.

### 5.2 단계 1~8 반영 결과

| 모듈 | 수정 |
|---|---|
| `ace_snoop_pkg.sv` | `ARSNOOP_READ_RANGE`, `AWSNOOP_WRITE_RANGE` (한 번만 정의) |
| `cci_pkg.sv` | active source에서 삭제. ACE opcode는 `ace_snoop_pkg.sv`, read/write tracker 상태는 각 모듈의 local type으로 소유 |
| `coh_read_ingress` (파일·모듈 이름 유지, 논문 그림에서는 read tracker) | ① top이 SNOOP/DOMAIN을 디코드해 `in_range`, `in_attr_ok`로 전달<br>② 라인/범위 정렬·LEN·4 KB 검사<br>③ tagged NQ ReadOnce와 hit CD buffer, miss line memory AR<br>④ 전역 발행·출력 커서로 RID/RLAST 조립<br>⑤ Error-only zero/SLVERR R 생성<br>⑥ M0/ACE/M1 write span hazard와 실제 RLAST 해제<br>⑦ setup 시절 `path_range / read_release / range_ctx` 제거 |
| `coh_write_ingress` + `coh_write_range_adapter` | 단계 4에서 line MakeInvalid를 tagged NQ_WRITE로 이전했고 단계 6 adapter가 외부 B1/WriteRange를 64 B line으로 나눈다. 단계 8에서 Error-only line의 W 4 beat drop, 합성 SLVERR line B와 최종 BRESP 병합, ACE/M1 read span hazard를 추가했다 |
| `axi_cci_ace_top.sv` | M1 속성 포트, read tracker, write range adapter와 공통 admission pool을 소유한다. 단계 8에서 일반 ACE의 전역 drain을 제거하고 활성 M1 read/write CAM과 충돌하지 않을 때 admission한다. barrier/DVM/EXPLICIT drain은 유지한다 |
| `axi_cci_top.sv`, `axi_b0_top.sv` | ACE top 내부에서는 `axi_cci_top`을 `COHERENT=0`인 순수 2-to-1 bus core로 사용한다. standalone B0 wrapper도 새 line-only interface로 정리했다. standalone B1/P wrapper는 삭제했고 새 B1/rCCI 결과는 ACE top에서만 만든다 |
| 단계 7 삭제 완료 | `cci_range_rim_tracker`, `cci_ac_range_gen`, `cci_range_req_decoder`, `cci_range_hazard_checker`, `cci_pkg.range_ctx_t`, active setup 배선, old standalone B1/P shell·TB·runner |
| arbiter | 변경 없음. tracker가 내는 라인 단위 AR/AW/W는 M1 요청으로 들어가고 `rd_q`·B 순서 계약을 그대로 씀 |
| `cci_ace_snoop_service.sv`, `ace_snoop_controller_bank.sv` | 단계 3 완료: 요청 시 태그·owner 저장, owner별 status completion queue, `data_select_tag`, `release_tag`, release 뒤 태그 재사용 |
| **공통 admission pool** | 단계 3 완료: CPU(ACE manager), M1 읽기, M1 쓰기가 공통 토큰 T개를 공유하고 각 FSM·metadata 배열은 분리 유지 |
| TB | 범위 AR/AW 생성기, R 순서·데이터 checker, W 분할·B 병합 checker, dirty 라인 배치, setup 구동 제거, **관측 카운터**(엔트리 점유 cycle, 할당 대기 cycle을 **토큰 부족 / 로컬 depth 부족**으로 나눠 계수, 해저드 대기 cycle, 서비스 context 점유) |
| 스크립트 | `scripts/rtl.f`, `scripts/ace.f`, `scripts/run_ace.py`, 합성 스크립트: 삭제 모듈 제거. 모듈 이름을 유지하므로 나머지 경로는 그대로 |

### 5.3 구성 이름

| 구성 | 내용 |
|---|---|
| `B0` | 비일관 AXI (기존) |
| `B1-T{T}` | **ACE top 기준** 기존 방식: 라인 요청마다 엔트리 1개, 교수님 FSM (읽기 ReadOnce, 쓰기 MakeInvalid). 14절의 발행 시점 소유권 검사와 쓰기 예약 구조를 rCCI와 똑같이 적용한 구현을 비교 기준으로 한다 |
| `R-E{e}-RW{r}-WE{e}-WW{w}` | **ACE top 기준** rCCI: 범위 요청당 엔트리 1개. read context 수 E·read N_fly, write context 수 E·write N_fly를 이름에 모두 표시한다(예: 기본 `R-E4-RW16-WE4-WW16`) |
| (기록) `P-WR-old` | 이전 setup 방식 구현. 결과는 보존하되 논문 본문 비교에서는 제외(필요 시 부록) |


### 5.4 공통 admission pool 계약

| 항목 | 계약 |
|---|---|
| 토큰을 쓰는 요청 | M1 라인 · 범위 읽기, M1 라인 · 범위 쓰기, ACE manager context를 점유하는 CPU 요청(ReadShared · ReadUnique · ReadClean · ReadNotSharedDirty · ReadOnce · CleanUnique · MakeUnique · WriteUnique · WriteLineUnique, hazard 순서가 필요한 WriteBack · WriteClean · Evict) |
| 토큰을 쓰는 요청 (추가) | 명시적 maintenance(CleanShared · CleanInvalid · MakeInvalid)와 EXPLICIT 서비스 요청 — 서비스 context를 점유하므로 |
| 토큰을 쓰지 않는 요청 | Barrier, DVM, ReadNoSnoop · WriteNoSnoop(일관성 직렬화를 하지 않는 메모리 우회 요청. M1에서는 거부, 3.3 행렬) |
| depth와 T의 관계 | 각 로컬 depth(read ingress, write ingress, ACE manager context)는 T 이상으로 둘 수 있고, **활성 요청 합계는 항상 T 이하**. 할당 대기는 "토큰 부족"과 "로컬 depth 부족"으로 나눠 센다(로컬 depth 때문에 토큰이 남아도 수락되지 않는 경우를 구분) |
| 획득 | AR / AW handshake **전에** 로컬 ingress 공간과 공통 토큰을 **함께** 확보. 둘 중 하나라도 없으면 READY를 내리지 않음 |
| 해제 | M1 읽기 = 마지막 R handshake, M1 쓰기 = DMA B handshake, ACE 읽기 · 쓰기 = RACK · WACK. 오류 drain도 같은 최종 응답 시점까지 유지 |
| owner table | 토큰마다 요청 종류와 로컬 엔트리 / context 번호 저장 |
| 논리 요청당 토큰 수 | 외부에서 수락한 논리 요청 하나당 정확히 하나. 이미 token을 가진 ACE manager 또는 M1 요청이 내부 AUTO / NQ service context를 만들 때 두 번째 token을 얻지 않는다. 별도 외부 `EXPLICIT` 요청만 독립 요청으로 token 하나를 얻는다 |
| EXPLICIT 해제 | 외부 `rsp_valid && rsp_ready`와 해당 service context의 `release_tag` handshake가 모두 끝난 뒤 반환한다. 순서가 다르면 두 완료 비트를 기록해 늦은 쪽에서 한 번만 반환한다 |
| 중재 | held-grant round-robin(종류 간). 기본 구성은 **CPU 전용 예약 없음**(`CPU_RESERVED_TOKENS = 0`): 기존 방식에서 DMA가 엔트리를 채우면 CPU가 기다리는 상황을 그대로 측정하기 위함. 긴 범위가 토큰을 점유하는 동안 CPU가 기다릴 수 있음을 결과에 명시 |
| 비교 구성 | `CPU_RESERVED_TOKENS = 1`을 별도 구성으로 두고 처리량 · 대기 시간을 함께 비교(sweep 전용) |
| assertion | 토큰 · 로컬 엔트리 동시 할당 · 해제, count 상한, 중복 반환, owner 불일치 |
| 면적 해석 | 공통 토큰은 동시 활성 요청 수를 제한할 뿐 분리 배열을 없애지 않는다. 각 배열 depth와 T의 관계를 단계 0에서 정하고, 면적 표에는 read / write / ACE 분리 배열과 owner table을 모두 포함한다. "물리적으로 하나인 트래커 배열"과 같은 면적 구조로 해석하지 않는다 |

---

## 6. 구현 단계

**필수(R)** 단계만으로 논문 4·5장이 완성되도록 나눴다. **선택(O)**은 결과를 보고 정한다.

| 단계 | 구분 | 작업 | 완료 조건 |
|---|---|---|---|
| 0 | R | 계약 확정(3~5절 및 14절): SNOOP 값 · 이름(교수님 확인), M1 속성 포트 · 고정값, 창 칸 구조, 서비스 태그 계약, admission pool 규칙, 오류 계약. 기존 · 제안 FSM 그림 | 계약 문서와 `ace_snoop_pkg` 상수 확정 |
| 1 | R | **완료(2026-11-04) — 분석 모델 + 독립 C++ 모델 초안**: 현재 B1 RTL 파형에서 Ls·Lm·Lw 측정, Lc 0 / 1 / 2 / 4 cycle sweep → 기존(T 엔트리) vs rCCI(1 엔트리, W), 읽기·쓰기, 다중 스트림, T·W·S·Q·DMA outstanding sweep, hit(dirty) 비율, (O) 연속 miss 합치기. 과거 setup 제안용 `CTracker`·`cci_range.h` 대신 `CCI-simulation/rcci_model`에 독립 모델을 추가. 결과: `reports/rcci_stage1/STAGE1_RESULTS.md` | 2절 식 대비 최대 오차 0.073%, Lc 민감도·성능 SVG와 전체 CSV 생성 |
| 2 | R | **완료(2026-11-04) — M1 속성 포트와 WSTRB**: SNOOP · DOMAIN · SIZE · BURST · CACHE · LOCK · BAR, WSTRB를 ACE top과 하위 bus/memory 경로에 추가. 기존 TB는 B1 값을 명시적으로 tie-off. WSTRB의 AW 순서 귀속, W payload 안정성, AW 없는 W, WLAST, B1 속성 계약 assertion과 expected-failure 시험 추가. 결과: `reports/rcci_stage2/STAGE2_RESULTS.md` | 단계 2 전용 회귀 및 전체 기존 회귀 통과 |
| 3 | R | **완료(2026-11-05) — 태그 서비스 + 공통 admission pool**: 4 owner별 depth S status queue, 상태/데이터/release 분리, CD data held-grant, context release 후 재사용, CPU·M1 read·M1 write·EXPLICIT 공통 T-token pool, handshake별 반환, exact tag·owner 검사와 `CPU_RESERVED_TOKENS` 정책. 기존 B1 tracker 배선을 유지하고 NQ dirty CleanInvalid 데이터도 명시적으로 소비. `Lc=2` 실측 후 단계 1 모델과 그래프 재생성. 결과: `reports/rcci_stage3/STAGE3_RESULTS.md` | 전용 정상/오류/mutation, B1/P 통합, 전체 ACE 69건과 비 ACE 252건 회귀 통과 |
| 4 | R | **완료(2026-11-05) — B1 읽기·쓰기를 교수님 FSM으로**: 쓰기 MakeInvalid의 tagged NQ_WRITE 전환, 읽기 ReadOnce hit CD → R·miss memory R, 역순 완료에서 ordered AW/R, write sticky service fault, exact local token metadata와 Error admission 차단 구현. token/local depth/ACE context/DMA drain별 saturating cycle counter와 분류 검증 완료. B1 hit은 service context 4개의 조기 반환과 read outstanding 16개 유지를 위해 tracker당 512-bit line buffer로 확정. `CPU_RESERVED_TOKENS=0/1` CPU 경쟁 비교는 단계 8의 ACE hazard 연결로 DMA 전역 직렬화를 안전하게 완화한 뒤 수행. 결과: `reports/rcci_stage4/STAGE4_PROGRESS.md` | clean / dirty / miss, outstanding, backpressure, token·depth·context·drain stall 분류, OOC 합성 |
| 5 | R | **완료(2026-11-06) — rCCI 읽기**: `ARSNOOP_READ_RANGE`, 범위당 ingress 엔트리 1개, 7비트 `lines/issue_idx/out_idx`, shared line tracker 기반 전역 창 W, ordered snoop/memory 발행 커서, line miss AR 분할, hit buffer R 조립, 외부 최종 RLAST, format fail-fast. 결과: `reports/rcci_stage5/STAGE5_RESULTS.md` | 1 / 8 / 64 라인, W=1/4/8, hit·miss 혼합, 두 범위·서로 다른 ID, M0 읽기 혼합, 4KB·속성 거부, mutation 6종, 전체 ACE 70건·기존 회귀 252건·synthesis-only 통과 |
| 6 | R | **완료(2026-11-06) — rCCI 쓰기**: `AWSNOOP_WRITE_RANGE`, 외부 AW당 논리 adapter context 하나, 7비트 `lines/issue_idx/w_idx/b_idx`, 기존 B1 MakeInvalid/write tracker를 사용하는 전역 line window W, 64 B AW와 4-beat W 분할, line BRESP 병합, 외부 B 하나, format/data fail-fast. 결과: `reports/rcci_stage6/STAGE6_RESULTS.md` | 1 / 8 / 64라인, W=1/4/8, dirty·clean cache invalidation, memory byte 전수 비교, B backpressure, WSTRB·WLAST·4KB·속성 거부, mutation 7종, 전체 ACE 71건·기존 회귀 252건·synthesis-only 통과 |
| 7 | R | **완료(2026-11-06) — legacy 분리**: active ACE 경로의 setup 방식 코드, P-WR 모듈, `range_ctx_t`, 구형 standalone B1/P와 전용 TB/runner를 제거했다. 제거 전 117개 파일을 hash manifest가 있는 독립 archive로 보존했다. active file list는 line-only core와 ReadRange/WriteRange 경로만 포함한다. 결과: `reports/rcci_stage7/STAGE7_RESULTS.md` | 단계 2·5·6 회귀, ACE 68건, formal 15건, OOC synthesis-only 10개 구성 PASS. archive manifest 117개 검증 및 legacy P 통합 대표 실행 PASS |
| 8 | R | **완료(2026-11-06) — hazard·오류·reset·bounded progress**: read/write line CAM에 ACE와 반대 방향 M1의 전체 burst span probe를 연결했다. read Error-only는 zero/SLVERR R, write Error-only는 W drop/합성 SLVERR B, Error+DataTransfer/PassDirty는 즉시 fail-stop이다. 일반 ACE는 비충돌 M1과 동시 outstanding이 가능하고 barrier/DVM/EXPLICIT만 drain한다. reset 재사용과 explicit drain latch도 검증·수정했다. 결과: `reports/rcci_stage8/STAGE8_RESULTS.md` | 전용 simulation 6건, mutation 6건, formal 18건 PASS. formal line-write bound: ready stall=0, CR=3, B=3, property=14, BMC=20. 64-line은 directed simulation. 활성 ACE 중 새 M0/M1의 주소별 완화와 backpressure whole-top liveness는 후속 범위 |
| 9 | — | (단계 3으로 통합: 공통 admission pool은 처음부터 도입) | — |
| 10 | O | 연속 miss 합치기 RTL (단계 1 결과가 의미 있을 때) | 메모리 요청 수 감소 확인 |
| 11 | R | 합성·면적은 보완 7(14.8)로 대체. 파형과 논문 그림은 보완 8과 함께 진행 | 14.8 완료 조건 |
| 보완 0~8 | R | **단계 8 이후 수정·보완(14절)**: 계약 확정 → R1 재현 → ACE 발행 검사·쓰기 예약(B1·rCCI 공통) → 구간 비교기 → M1 반대 방향 검사 → 전체 회귀 → 성능 측정 → 합성(LUT·FF) → 문서·덱·논문 정합 | 14.2~14.9 각 완료 조건 |

---

## 7. 검증 시나리오

| 분류 | 시나리오 | 판정 |
|---|---|---|
| 읽기 | 범위 1 / 8 / 64 라인, 모두 miss | 주소 순서 R, RLAST는 마지막 beat에만 |
| 읽기 | 범위 안 일부 라인 dirty(UD) | 그 라인만 CD 데이터, PassDirty = 0(clean으로 전달), CPU 사본 유지(모델 동작) |
| 쓰기 | 범위 1 / 8 / 64 라인, 일부 라인을 CPU가 UC·UD로 보유 | 라인마다 MakeInvalid 뒤 메모리 쓰기, CPU 사본 I, DMA에 B 하나 |
| 쓰기 | DMA가 W를 미리 몰아서 보냄 | 해당 라인 CR 전까지 WREADY = 0, 데이터 순서 유지 |
| 공통 | B1 n개 요청 vs rCCI 요청 1개 | 같은 데이터·메모리 상태 |
| 공통 | R·B backpressure, 응답 도착 순서 뒤섞임 | 출력 순서 불변, payload 안정 |
| 공통 | W = 1 / 2 / 4 / n | 같은 결과, W = n은 이전 선무효화와 같은 동작 |
| 공통 | 범위 요청과 라인 요청 혼합, 여러 ID | 같은 ID 순서, 엔트리별 해제 |
| 교착 | 범위 엔트리 2개 이상 + M0 읽기 + 쓰기 MakeInvalid 동시, R·B backpressure | 발행 순서 = 출력 순서, 모든 요청 유한 cycle 안 완료 |
| 오류 | 쓰기 범위 중간 라인 CR Error | 그 라인 W 4 beat drain, 다음 라인 정상, 최종 BRESP = SLVERR |
| 경계 | 64라인 범위 | `issue_idx` · `out_idx` 63 → 64 전이, 엔트리 해제, wrap 없음 |
| 태그 | 읽기 · 쓰기 혼합, PassDirty writeback, 응답 역전, 태그 재사용 | 태그 혼동 없음, 모든 context bounded progress |
| 형식 | WriteRange의 WSTRB 일부 0, SIZE · BURST · DOMAIN 위반, 메모리 EXOKAY | 형식 오류 검출(9절), EXOKAY는 protocol / config error |
| 공유 | CPU · DMA가 공통 토큰 T개를 경쟁 | starvation 없음, ACE 요청은 RACK · WACK까지 토큰 유지, `CPU_RESERVED_TOKENS = 0 / 1` 비교 |
| 서비스 owner | 네 owner 동시 완료, 역순 release, hit의 늦은 release, 다른 owner 태그로 data_select · release | 다른 owner 진행 불변, owner 불일치 fault, release 정확히 한 번, owner별 bounded progress |
| 디코드 | 3.3 행렬의 모든 허용 · 거부 조합(DOMAIN × SNOOP × LEN × WSTRB) | 허용 4종만 수락, 나머지 fail-fast, 기능을 끈 구성의 Reserved 값 거부 |
| W 채널 | WriteRange 4n beat, upstream WLAST 위치, **여러 AW를 먼저 수락한 뒤 W stream 전송**, W가 AW보다 먼저 도착 | 내부 WLAST는 4 beat마다 생성, upstream WLAST는 예상 위치에만, 가장 오래된 AW의 `AWLEN + 1` beat가 끝나야 다음 AW로 귀속이 넘어감, 귀속할 AW가 없거나 그 라인의 MakeInvalid가 안 끝났으면 WREADY = 0 |
| CR 조합 | Error만 / Error + DataTransfer / Error + PassDirty / 여러 target 혼합 | 9절 정책대로 라인 SLVERR 또는 service fatal |
| 해저드 | 창 `[out_idx, issue_idx)` 안 라인에 대한 M0 / ACE manager / M1 접근 | 완료 전까지 대기, 창 밖·다른 페이지는 통과 |
| 해저드 | 범위 처리 중 다음 라인을 CPU(ACE, shareable·non-shareable)가 먼저 처리 중. 여러 라인 burst의 뒤쪽 라인 겹침 포함 | 범위 엔트리가 그 라인 발행(read 할당 / write 예약)을 멈추고 대기, RACK/WACK 뒤 재개 |
| 해저드 | 이미 나가 있는 M0와 나중의 M1 라인 | 직렬화하지 않음(4.5 M0 계약). 검증 대상이 아니며 B1과 같음 |
| 해저드 | 빈 상태에서 ACE와 B1 M1이 같은 cycle에 수락(AR·AW 교차 조합) | 같은 라인이면 M1 첫 라인 발행이 ACE 해제 뒤, 다른 라인이면 지연 없음 |
| 해저드 | 읽기 범위와 쓰기 범위가 같은 라인을 같은 cycle에 처음 발행, 양쪽 VALID 지속 | 한쪽만 발행, round-robin으로 bound 안에 양쪽 진행 |
| 쓰기 예약 | 내부 AW hold 중 `line_aw_ready = 0`에서 같은 라인 ACE·read가 늦게 도착, hold 중 reset·fatal | AW `VALID`·payload 유지, 늦게 온 쪽 대기, 예약당 AW 1번 |
| footprint | ACE INCR 1·2·3라인, 4 KB 마지막 합법 burst·초과, 최상위 주소, SIZE 초과, FIXED/WRAP | 지원 범위만 수락, 나머지 SLVERR이며 주소 소유 없음 |
| 구간 경계 | 최상위 주소 page의 범위, E=4·N_fly=16 | 59비트 구간에서 wrap 없음, 구간 비교 = 기존 CAM(shadow 동일성) |
| formal 범위 | endpoint depth 2/3/4, line-write depth/tracker 2 | safety는 endpoint induction과 line ingress BMC로 검사한다. bounded progress harness는 tagged line write 1개에 ready stall=0, `CR_LAT=3`, `B_LAT=3`, `BOUND=14`, BMC depth=20을 적용하며 정상과 Error-only 모두 retire됨을 확인한다. NQ completion 제거 mutation이 bound를 깨야 한다. CD/R/RACK/WACK와 backpressure를 포함한 whole-top liveness 및 64-line 완료를 formal로 증명했다고 주장하지 않으며, 1/8/64-line·W=1/4/8은 directed simulation으로 보완한다. |
| mutation | RLAST를 라인마다, B를 라인마다 DMA로, `out_idx` 증가 누락, 해저드 창 제거·확대, 범위 요청 스눕 누락, 형식 오류 수락, WREADY 조기 허용, **뒤 엔트리 메모리 AR 선발행**, CR Error 라인 W 미drain, 발행 시점 ACE 검사 제거·B1 우회, 쓰기 예약 없이 AW 조합 gate, 구간 `lo/hi` 증가 누락·58비트 wrap, 같은 cycle 중재·turn update 제거, 새 상태 reset 누락, status 중복 push · overflow, `data_done` 전 release, release tag 불안정, 내부 AUTO/NQ의 token 이중 획득, EXPLICIT token 조기 반환 | 모두 검출 |

---

## 8. 이전 구현에서 그대로 쓰는 부분

- ordered ingress와 tracker pool 구조, NQ owner와 owner index 큐, held-grant round-robin
- endpoint local 명령 통합 계약 assertion
- arbiter의 in-order R·B 계약, 기존 B0 / B1 회귀 인프라

---

## 9. 오류와 제한

| 상황 | 처리 |
|---|---|
| 범위 요청 형식 오류 (3.3 외부 범위 규칙 위반: 비정렬, LEN + 1이 4의 배수 아님, 4 KB 경계 초과, SIZE · BURST · DOMAIN · BAR · LOCK · CACHE 위반) | 검증 모델: 미수락(READY = 0), sticky `config_fault`, 시뮬레이션 fatal(fail-fast). 합성 endpoint에서 계속 운용해야 하면 요청을 수락해 DECERR / SLVERR로 drain하는 별도 정책을 둔다 |
| WriteRange의 WSTRB · WLAST 위반 (data phase) | AW를 이미 받은 뒤에야 알 수 있으므로 "미수락"으로 처리할 수 없고, 버퍼 없이 W를 메모리로 바로 보내므로 앞 beat는 이미 기록될 수 있다. **기본 구현: 시뮬레이션 fail-fast 전용 오류**(sticky fault + 테스트 종료, 계속 운용 가능한 복구는 주장하지 않음). 합성 endpoint에서 오류 응답 후 계속 운용해야 하면 64 B 라인 데이터와 WSTRB · WLAST를 먼저 저장 · 검사한 뒤 MakeInvalid · 메모리 AW / W를 내는 **별도 buffered 구성**이 필요(이미 기록한 beat는 BRESP로 되돌릴 수 없음) |
| W 채널 규칙 | AXI4 W에는 ID(WID)가 없으므로 DUT는 W beat가 어느 AW의 것인지 관찰할 수 없다. 모든 W beat를 **가장 오래된 미완료 AW에 순서대로 귀속**시키는 것이 유일한 해석이다(앞 AW의 `AWLEN + 1` beat가 끝나야 다음 AW로 넘어감, write interleaving 미지원). W가 AW보다 먼저 올 수 있으므로(AXI4 허용) 귀속할 AW가 없거나 그 라인의 MakeInvalid가 끝나지 않았으면 WREADY = 0. master가 AW 순서를 어긴 데이터는 payload로 검출할 수 없고, 검출 범위는 beat 수 · 예상 위치의 WLAST · WSTRB · 주소별 메모리 결과이다. upstream `WLAST`는 범위의 마지막 beat에서만 허용하고, 내부 메모리 WLAST는 4 beat마다 새로 만든다(upstream WLAST를 그대로 전달하지 않음). upstream beat 수 · 내부 라인 beat 수 · 생성 WLAST · 최종 B 하나를 assertion으로 결합 |
| CR Error 조합 | `Error = 1, DataTransfer = 0, PassDirty = 0`만 라인 단위 오류로 처리(아래 두 행). `Error = 1`과 `DataTransfer = 1` 또는 `PassDirty = 1`이 함께 오면 데이터와 dirty 소유권을 믿을 수 없으므로 **service fatal**(지금 `ace_snoop_controller`의 fault/STOP과 같음). 여러 target의 CR을 합칠 때도 같은 우선순위(어느 target이든 Error + DataTransfer/PassDirty면 fatal). `ace_snoop_controller` · `ace_snoop_fabric` · read / write tracker가 같은 정책을 적용 |
| 읽기 CR Error (Error만) | 그 라인의 R 4 beat를 `RDATA = 0`, `RRESP = SLVERR`로 생성. 마지막 범위 라인일 때만 네 번째 beat에 RLAST |
| 쓰기 CR Error (Error만) | 그 라인의 DMA W 4 beat는 WSTRB · WLAST를 검사하며 받아 버리고(WREADY = 1) 메모리 AW · W는 내지 않음. 다음 라인은 계속 처리, 최종 BRESP에 SLVERR 누적 |
| 메모리 RRESP 오류 | 그 beat에 전달 |
| 메모리 BRESP 병합 | 정상 범위에는 EXOKAY가 올 수 없으므로 EXOKAY는 protocol / config error로 검출. 병합 우선순위 DECERR > SLVERR > OKAY |
| PassDirty writeback의 B 오류 | 일관성 회복이 보장되지 않으므로 일반 라인 BRESP와 구분해 **서비스 fatal**(지금 `ace_snoop_controller`의 fault와 같음), reset 또는 시스템 수준 복구 필요 |
| ACE data burst 형식 | INCR, `SIZE ≤ log2(DATA_WIDTH/8)`, 4 KB 경계 안, 65비트 끝 주소 overflow 없음만 지원. FIXED/WRAP과 범위 밖 형식은 SLVERR로 거부하며 주소 소유권을 갖지 않음(`active_span_valid = 0`). legality·footprint 함수는 한 곳에서 정의 |
| fatal fault 중 소유권 | 새 admission과 새 내부 라인 발행을 막고 허용된 drain만 진행. active span · 구간 · hold는 해당 응답(RACK/WACK, R/B)으로만 해제하고 조용히 지우지 않음. drain 뒤 남은 상태는 system reset까지 유지 |
| reset | 모든 엔트리 · 창 칸 · 서비스 context · 토큰 · ACE active span · 구간 레지스터 · 쓰기 hold · 중재 turn 폐기. reset 중이거나 직후에 이전 트랜잭션의 남은 W / R / B를 재사용하지 않는다는 시스템 가정을 TB와 assertion에 명시 |

제한: ID 간 out-of-order 응답 미지원, 범위는 한 페이지, AC는 라인 단위, 디렉터리 없음, ACE data burst는 INCR만, 이미 나가 있는 M0와 나중의 M1 라인은 직렬화하지 않음(4.5), ACE 우선 정책의 진행 보장은 "같은 라인의 ACE가 끝없이 연속되지 않는다"는 환경 가정에 의존.

**M1 범위·라인 전송의 제한 (15.4, R12).** M1은 64 B 정렬·전체 라인 단위의 일관성 전송만 지원한다. 형식 오류는 fail-stop이다(sticky `config_fault`). DMA의 R 수락 지연은 메모리 R 경로를 막지 않는다(R8 수정, 15.4).

---

## 10. 성능·면적 평가

| 지표 | 비교 | 도구 |
|---|---|---|
| 엔트리 점유(평균·최대) | B1 (라인당 1) vs rCCI (범위당 1) | RTL, C++ |
| 처리량·완료 cycle·첫 데이터 지연 | B1 (T = 1~16) vs rCCI (read/write N_fly = 1~16, E = 4) | C++ (MB 단위, 방향별 전역 창으로 RTL과 맞춤), RTL (≤ 64 라인, 다중 범위) |
| **다중 스트림 / 공유 admission capacity(토큰 T개)에서 다른 요청의 대기** | B1 vs rCCI, T sweep, `CPU_RESERVED_TOKENS = 0 / 1` | C++, RTL (단계 3의 공통 토큰 pool) |
| 동시 스눕 수 S, arbiter outstanding Q, DMA outstanding의 영향 | S(`ACE_SNOOP_CONTEXTS`) = 1·2·4·8, Q = 4·8·16. ACE manager context 수는 별도 열로 기록 | C++ |
| dirty 비율 0 / 25 / 50 / 100 % | CD 경로 비중 | RTL, C++ |
| 연속 miss 합치기 (선택) | on / off | C++ |
| 면적(LUT·FF) | 전체 top: 같은 용량에서 B1-T16 vs R-E16-RW16-WE16-WW16, B1-T8 vs R-E8-RW8-WE8-WW8의 증가분(15.8). 모듈별로 read ingress, write adapter/ingress, admission pool·owner table, 서비스, manager를 나눈다. **해저드 비교기 단독**: 라인 CAM T개 vs 구간 CAM E개(입출력 레지스터 경계 동일) | Vivado 2024.1 OOC **unconstrained synthesis-only** (14.8). timing은 평가하지 않음 |

---

## 11. 논문 산출물과 단계 대응

| 산출물 | 장 | 단계 |
|---|---|---|
| 기존 방식 FSM / 제안 FSM 상태도 | 4장 | 0 |
| 범위 엔트리가 들어간 트래커 표 그림 (3.6 그림 재사용, "4 라인 = 엔트리 1개") | 4장 | 0 |
| AR/AW 인코딩 표 (SNOOP 새 값, LEN 해석) | 4장 | 0 |
| Range Controller가 붙은 마이크로아키텍처 그림 | 4장 | 5~6 |
| 분석 모델 식과 예측 | 4장 끝 / 5장 앞 | 1 |
| 성능 그래프 (T·N_fly·S sweep, 다중 스트림, dirty 비율, CPU 대기) | 5장 | 보완 6 (14.7, C++ 보정 포함) |
| 파형 (범위 읽기·쓰기, RLAST·B 하나) | 5장 | 5~6 |
| 면적(LUT·FF) 표: 전체 top + 비교기 단독 | 5장 | 보완 7 (14.8) |

**다시 만들 기존 결과.**

- 5장: 지금의 C++ 결과(5.2)와 RTL 결과(5.3.1~5.3.3)는 setup 방식 기준이므로 B1-T / R-E-RW-WE-WW 구성으로 **모두 다시 측정**한다. 측정은 보완 5 회귀를 통과한 RTL(B1에도 발행 시점 검사 적용)에서만 한다.
- 4장 슬라이드: setup 방식 설명은 rCCI로 교체 완료(2026-11-04 덱 기준 4장 = 슬라이드 34~55).

**덱 반영 대기 (2026-11-04, 문서만 먼저 수정).**

| 슬라이드 (2026-11-04 번호) | 수정 |
|---|---|
| 41 (4.2.2 인코딩 표) | "INCR · 버스 폭 · strobe (표 D3-10)" → 외부 범위 규칙(rCCI 정의, 4의 배수 최대 256 beat)과 D3-10 차용 조건을 구분 |
| 47 · 52 · 55 (창 W, 조건과 비용, 4장 정리) | 읽기 logical entry는 고정 metadata이고 창은 B1과 공유하는 global line tracker pool임을 표시. 읽기 pool의 512-bit hit buffer 비용과 쓰기 metadata 비용을 분리 |
| 39 · 50 (Overview 전제, 구현 범위) | M1은 일관성 라인 · 범위 요청만 지원(Non-shareable 거부) |
| 51 (4.3.1 분석 모델) | hit data는 line tracker에 복사되고 service context는 조기 반환된다는 단계 5 선택 반영 |
| 40 · 48 (구조 · 마이크로아키텍처 그림) | "Line Tracker (shared)" → "엔트리 수(토큰 T개) 공유"로 표현 |
| 38 · 55 (4.1.2, 4장 정리) | "트래커는 CPU와 공유" → "엔트리 수(T)를 CPU와 공유" |
| 46 · 47 (범위 쓰기, 창 W) | WSTRB 위반은 시뮬레이션 fail-fast(기본 구현), W 채널 · WLAST 규칙 |

---

## 12. 향후 연구

- **범위 AC**: 스눕 하나로 여러 라인 확인(교수님 향후 과제).
- **디렉터리(스눕 필터)**: 사본이 없는 CPU로의 스눕 생략.
- **연속 miss 합치기**(단계 10을 하지 않은 경우).
- **2 페이지 이상 범위**: AXI 4 KB 경계 때문에 요청을 페이지 단위로 나눔. 여러 범위 엔트리의 연속 처리.

---

## 13. 완료 정의

1. SNOOP 새 값과 LEN 해석이 문서 · `ace_snoop_pkg` · TB에 일치한다.
2. B1과 rCCI가 동일한 라인 / 범위 처리 규칙을 쓰고 `lines = 1 / > 1`로 동작을 구분하며, 읽기 · 쓰기 모두 구현되어 있다. CPU · M1 읽기 · M1 쓰기는 공통 토큰 T개를 공유한다(FSM · metadata 배열은 방향별로 분리).
3. 범위 읽기: R이 주소 순서로 나오고 RLAST는 마지막 beat에만, hit 라인은 CD 데이터, PassDirty 라인은 스눕 서비스가 메모리에 반영.
4. 범위 쓰기: 라인마다 MakeInvalid 뒤 메모리에 쓰고, DMA에는 B 하나.
5. 해저드 구간 밖의 접근은 막지 않고, 구간 안의 접근은 그 라인 완료 전까지 막는다.
   - 모든 M1 라인(B1·범위)은 발행 직전에 ACE 활성 span, 같은 cycle ACE handshake, 반대 방향 M1 구간을 검사한다(4.5).
   - 쓰기 내부 AW는 예약 뒤 handshake까지 `VALID`·payload가 안정하다.
   - M0는 4.5의 M0 계약 범위에서만 보장한다.
6. 발행 순서 = 출력 순서, 서비스 context의 release 정확히 한 번, 4.1 포인터 불변식, 구간 비교 = 기존 CAM 동일성, 의도한 충돌 쌍의 소유권 safety와 중재기 bounded grant가 safety assertion과 formal(BMC, 작은 파라미터)로 확인되어 있고, bounded progress는 7절의 환경 가정 아래에서 확인되어 있다. 64라인 경계는 directed simulation · cover로 확인되어 있다.
7. **단계 7 완료:** setup 방식 코드는 active tree/file list에서 삭제되었고 활성 회귀가 통과한다. legacy 재현본은 hash manifest와 함께 별도 archive에만 존재한다.
8. 2절 모델(보정된 Ls·Lc·Lm·Lw)과 10절 지표가 C++·RTL로 측정되어 있고, LUT·FF(전체 top과 해저드 비교기 단독, 토큰 pool · owner table, 분리 배열 포함)가 B1 대비로 기록되어 있다. 합성은 unconstrained synthesis-only이며 timing은 주장하지 않는다. CPU 대기 감소는 물리 통합 트래커가 아니라 같은 admission capacity T에서 얻은 결과임을 명시한다.
9. **보완 10~13:** M0 경로 계약, R8 메모리 R 버퍼링, stress 100건, 통합 회귀, 성능·비용 재측정이 15.7에 기록되어 있다.

---

## 14. 단계 8 이후 수정·보완 계획 (2026-11-08, 교차 검토 3회 반영)

### 14.0 이 계획은 무엇인가

단계 1~8로 ReadRange·WriteRange의 기능 경로는 완성되었다. 그러나 2026-11-06 코드 리뷰에서 다음 결함과 불일치가 확인되었다. 2026-11-08 Codex 교차 검토 세 차례에서도 모두 사실로 확인되었다. 두 검토의 지적과 그 처리는 이 절 본문에 통합했다.

| 번호 | 리뷰 결과 | 성격 |
|---|---|---|
| R1 | 범위 요청의 **아직 발행하지 않은 라인**이 ACE 해저드 검사에 보이지 않는다. 그래서 ACE 요청이 그 라인을 처리하는 중에도 범위가 그 라인에 스눕·메모리 접근을 낼 수 있다. 원인은 범위의 내부 라인 발행(read `can_allocate`, write `line_aw_valid`)이 B1의 `!ACE_MANAGER_BUSY` 수락 경로를 다시 거치지 않는 데 있다 | 일관성 결함 (B1에는 없음) |
| R2 | 4.5절·10절은 범위 context마다 구간 비교 1개로 해저드 비교기가 줄어든다고 주장한다. 그러나 RTL은 다르다. read는 유효 트래커마다 `base + line_idx*64`를 다시 계산해 비교한다. write는 `coh_write_ingress`의 line entry마다 비교한다 | 논문 주장과 RTL 구조 불일치 |
| R1′ | 같은 cycle에 ACE와 M1 B1 요청이 함께 수락되면, B1 라인이 ACE 활성 라인과 겹쳐 발행될 수 있다. `ACE_MANAGER_BUSY`는 레지스터 값이고 ACE 수락은 M1의 같은 cycle 수락을 보지 않기 때문이다. **B1에도 있는 결함**이다 | 일관성 결함 (B1·rCCI 공통) |
| R5 | ACE 수락 해저드(`ace_*_hazard`)가 ACE 요청의 base 라인만 M1 소유 라인과 비교한다. 여러 라인 burst(non-shareable ReadOnce)의 뒤쪽 라인 겹침을 놓친다(2026-11-08 보완 1 사례 10에서 발견) | 일관성 결함 (B1·rCCI 공통) |
| R3 | M1 AR/AW 수락은 상대 방향에서 **이미 발행된** line/span만 본다. 이후 read 트래커 할당과 write line AW 발행에는 상대 방향 구간 검사가 없다. 또 두 방향이 같은 라인을 같은 cycle에 처음 발행하는 경쟁도 막지 않는다 | 4.5절 "반대 방향 검사" 미구현 |

이 밖에 논문 5장에 필요한 **RTL 성능 측정**과 **합성 비용 표**가 아직 없다.

**M0 방향의 계약 (2차 검토 결정).** 범위 내부 라인 발행은 이미 나가 있는 M0 요청의 주소를 보지 않는다. 그러나 이것은 rCCI만의 결함이 아니다.

- B1의 M1 AR/AW 수락(`M1_ARREADY`, `M1_AWREADY`)도 M0 pending을 보지 않는다.
- ACE top 안의 M0는 `COHERENT=0` 경로를 쓰는 비일관 AXI master이다. 스눕 대상이 아니며, 서로 다른 master 사이의 순서는 AXI가 보장하지 않는다.

따라서 다음과 같이 계약으로 정하고, 구현 대상(R4)으로 삼지 않는다.

- **보장한다.** 새 M0 요청이 활성 M1 구간(범위 창 포함)과 겹치면 막는다. 이 동작은 현재 구현되어 있으며, 보완 3 이후에는 구간 비교로 유지한다.
- **보장한다.** 활성 M0가 있으면 새 ACE를 막는다. 현재 `m0_*_pending == 0` 조건이다.
- **보장하지 않는다.** 이미 나가 있는 M0와 나중에 발행되는 M1 라인(B1 라인 또는 범위 라인) 사이는 B1과 마찬가지로 직렬화하지 않는다. 이 경우의 메모리 순서는 서로 다른 AXI master 사이의 비순서 접근으로 정의한다.
- 이 계약을 4.5절과 13절에 명시한다(보완 8). arbiter M0 outstanding CAM으로 이 방향까지 직렬화하는 것은 B1과 rCCI에 공통인 개선이므로 14.10의 선택 항목으로 둔다.

이 계획의 목적은 세 가지다. 위 결함을 고친다. 논문의 주장(범위 엔트리마다 구간 비교기)을 **바꾸지 않고 RTL로 실현**한다. 그다음 5장 성능·비용 자료를 만든다. 결정 사항은 다음과 같다.

- R2는 논문 주장을 유지하고, 범위 엔트리마다 구간 비교기를 구현한다(2026-11-08 결정).
  - (2026-11-09 정정) 면적 감소를 주장하지 않는다. 비용은 같은 용량에서 기존 방식 대비 증가분으로 측정한다(15.8).
  - 이 근거는 합성 결과(14.8)로 뒷받침한다. 구간 비교는 하한·상한 두 관계 비교로 구현된다. 따라서 엔트리 수가 같을 때도 감소한다고 단정하지 않는다.
- 발행 시점 소유권 검사와 쓰기 예약 구조는 B1 기준 구현에도 적용한다(2026-11-08 결정). 그래서 B1 RTL도 바뀌며, 5장 비교는 수정된 B1을 기준으로 다시 측정한다.
- 기능 검증은 RTL 정확성 확인용으로만 하고 논문에는 넣지 않는다. 논문 5장에는 성능과 비용(LUT·FF)만 쓴다.
- 2026-11-08 현재 소스로 `make lint`와 `run_rcci_stage8.py`가 다시 PASS했다. 그러나 이 시험들에는 "범위의 미발행 뒤쪽 라인과 ACE의 겹침"과 "read·write 내부 라인의 같은 cycle 첫 발행" 경우가 없다. 따라서 이 PASS는 R1·R3를 반박하는 근거가 아니다.

### 14.1 전체 순서와 의존 관계

```
보완 0 계약 확정 ──► 보완 1 재현 시험 ──► 보완 2 ACE 반대 방향 검사 ──┐
                 └─► 보완 3 구간 비교기(읽기·쓰기) ──► 보완 4 M1 반대 방향 검사 ──┴──► 보완 5 회귀·formal ──► 보완 6 성능 ──► 보완 7 합성·비용 ──► 보완 8 문서·덱·논문
```

- 보완 0에서 interface와 경쟁 우선순위를 먼저 확정한다(14.1.1 체크리스트). 이 작업이 끝나야 RTL 수정을 시작한다.
- 보완 1·2(R1)를 먼저 한다. 일관성 결함이 남은 RTL에서 측정한 성능은 믿을 수 없기 때문이다.
- 보완 3(R2)은 해저드 구조 자체를 바꾼다. 그래서 보완 4(R3)의 반대 방향 검사는 새 구간 비교기 위에 만든다.
- 보완 6·7의 측정은 보완 5의 회귀가 모두 통과한 RTL에서만 한다.

| 보완 | 대응 | 필수 여부 | 주요 파일 |
|---|---|---|---|
| 0 | 계약 확정 | 필수 | `RCCI_PLAN.md` 14절, top 파라미터 목록 |
| 1 | R1 재현 | 필수 | `tb/tb_rcci_fix1_ace_range.sv`(신규), `scripts/run_rcci_fix.py`(신규) |
| 2 | R1·R1′ 수정 | 필수 | `ace_snoop_pkg.sv`(legality·footprint 함수), `ace_manager_request_controller.sv`, `ace_manager_request_bank.sv`, `axi_cci_ace_top.sv`, `coh_read_ingress.sv`, `coh_write_range_adapter.sv` |
| 3 | R2 | 필수 | `coh_read_ingress.sv`, `coh_write_range_adapter.sv`, `coh_write_ingress.sv`, `axi_cci_top.sv`, `axi_cci_ace_top.sv` |
| 4 | R3 | 필수 | `coh_read_ingress.sv`, `coh_write_range_adapter.sv`, `axi_cci_ace_top.sv` |
| 5 | 회귀 | 필수 | `scripts/run_rcci_stage2/3/5/6/8.py`, `run_rcci_fix.py`, `run_ace.py`, `run_formal.py`, `run_regression.py` |
| 6 | 5.2절 | 필수 | `tb/tb_rcci_perf.sv`(신규), `scripts/run_rcci_perf.py`(신규), C++ 모델 |
| 7 | 5.3절 | 필수 | `synth/run_ace.tcl`, `scripts/run_ace_synthesis.py`, 비교기 단독 wrapper(신규), `reports/hardware_cost.csv` |
| 8 | 정합 | 필수 | `RCCI_PLAN.md`, 덱 4장, 논문 4·5장 |
| 9 | 선택 | 선택 | 아래 14.10 |

#### 14.1.1 보완 0 — 구현 시작 전 확정 체크리스트

**확정(2026-11-08).** 아래 항목은 14.0~14.9 본문과 4.5·7·9·10·11·13절에 반영해 계약으로 확정했다. 다만 확정한 것은 정책과 interface이다. 구현과 시험은 각 보완 단계에서 한다.

- [x] ACE active span은 manager bank 하나의 `ACE_MANAGER_CONTEXTS`를 기준으로 하며, `c_busy`(RACK/WACK)까지 유지한다 (14.3).
- [x] 주소 소유권의 기준은 "주소가 있고 실제 memory/coherence side effect가 있는 transaction인가"로 정한다. barrier·DVM과 legality 오류로 SLVERR만 받는 요청은 `active_span_valid = 0`이다. 정상 shareable·non-shareable 요청은 모두 1이다. 일반 burst를 덮도록 `first/last line` span으로 공개한다 (14.3).
- [x] ACE data burst의 지원 범위를 INCR, `SIZE <= log2(DATA_WIDTH/8)`, 4 KB 경계 안, 65비트 끝 주소 overflow 없음으로 고정한다. FIXED/WRAP은 legality에서 거부한다. legality 함수와 footprint 함수는 한 곳에서만 정의한다 (14.3).
- [x] ACE issue-stage 검사는 `kind_range`와 무관하게 B1·rCCI의 **모든** M1 read line 할당과 write line 예약에 적용한다 (14.3).
- [x] 쓰기 내부 발행은 `candidate → 예약(hold register) → AW handshake` 구조로 한다. 내부 AW의 `VALID`와 payload는 handshake까지 바뀌지 않으며, hold 중인 라인은 구간 hazard에 포함한다 (14.3, 14.4, 14.5).
- [x] 같은 cycle 경쟁의 우선순위를 정한다. ACE 대 범위는 ACE를 우선하고, "같은 라인의 ACE가 끝없이 연속되지 않는다"는 환경 가정을 둔다. read 범위 대 write 범위는 처음부터 1비트 round-robin을 쓴다 (14.3, 14.5).
- [x] ACE 수락 조건(`ACE_*READY`, `ace_*_hazard`)은 범위의 이번 cycle 발행 신호를 참조하지 않는다. 범위 쪽은 실제 ACE handshake로 같은 cycle 경쟁을 판단한다. 이 단방향 의존을 assertion으로 고정한다 (14.3).
- [x] M0 방향 계약(14.0)을 4.5절·13절 문구로 확정한다 (14.9).
- [x] 새 상태(active span, `lo/hi`, 중재 turn)의 reset·fatal 수명 정책을 정한다 (14.6).
- [x] interval endpoint와 span 계산은 59비트로 정의한다 (14.4).
- [x] read/write logical context 수 E와 line 실행 depth N_fly를 별도 파라미터로 분리한다 (14.4).
- [x] write 기준(reference) CAM 결과를 top까지 연결해, 구간 비교 결과와 cycle마다 같은지 확인할 수 있게 한다 (14.4).
- [x] E=4, N_fly=16 구성과 최상위 주소 page 경계 시험을 추가한다 (14.4).
- [x] 단계 2·3·5·6·8, ACE, formal, 신규 fix 시험을 하나의 active regression으로 묶어 실행한다 (14.6).
- [x] 합성은 전체 top 비용과 비교기 단독 비용으로 나눈다 (14.8).
- [x] PLAN·덱·논문에서 read N_fly와 write N_fly, 그리고 각 tracker 저장소를 구분해 쓴다 (14.9).

---

### 14.2 보완 1 — R1 재현 시험

**무엇인가.** 리뷰에서 코드 경로로 찾은 R1 결함을 top-level 시뮬레이션으로 실제로 재현하는 시험이다.

**왜 필요한가.**
- R1은 코드 분석으로 찾은 결함이고, 아직 파형으로 확인하지 않았다.
- 수정 전에는 실패하고 수정 후에는 통과하는 시험이 있어야, 보완 2가 실제로 결함을 막는다는 근거가 된다.
- 단계 8의 해저드 시험(`tb_rcci_stage8_hazards.sv`)은 `coh_write_ingress`만 따로 떼어 시험한다. 그래서 "범위의 뒤쪽 라인 + ACE" 조합을 다루지 못했다.

**결함의 경로 (WriteRange).**

1. M1이 8라인 WriteRange(라인 0~7)를 낸다. adapter가 이를 context 하나로 수락한다.
2. 라인 0~1만 write ingress로 발행된 상태에서, CPU가 UD 상태인 라인 5를 evict하며 ACE WriteBack을 낸다.
3. `ace_aw_hazard`는 write ingress 엔트리(라인 0~1)와 read 트래커만 본다. 라인 5는 아직 adapter 안에 있으므로 WriteBack이 수락된다.
4. adapter가 라인 5를 write ingress로 발행한다. 이때 ACE 활성 여부는 검사하지 않는다. MakeInvalid가 나간 뒤 DMA 메모리 쓰기가 진행된다.
5. CPU WriteBack의 메모리 쓰기가 DMA 쓰기보다 늦게 도착하면, 메모리에 **옛 dirty 데이터가 남는다**.

**결함의 경로 (ReadRange).** 다음 두 경우가 생길 수 있다.
- 범위 라인 i에 대한 CPU ReadUnique가 아직 RACK 전인데, ReadOnce 스눕이 그 라인으로 나간다.
- CPU WriteBack이 메모리에 반영되기 전에 범위의 miss 라인 메모리 AR이 먼저 나가 옛 값을 읽는다.

**어떻게 작업하는가.**

1. `tb_cci_ace_integration.sv`의 ACE top 환경(캐시 endpoint, 메모리 slave)에 `+fix1_case=N` 시나리오와 `+fix1_monitor` ownership monitor를 추가한다. 별도 TB 파일로 1,400행 환경을 복제하지 않는다. 실행은 `scripts/run_rcci_fix.py`(`--before`는 수정 전 기록)로 한다.
2. 시나리오:

   | 이름 | 자극 | 데이터 판정 |
   |---|---|---|
   | `wr_range_vs_writeback` | 8라인 WriteRange 수락 → 라인 0 발행 직후 CPU 라인 5 WriteBack. 메모리 B 지연은 DMA 쪽을 짧게, CPU 쪽을 길게 둔다 | 최종 메모리 라인 5 = DMA 데이터 |
   | `rd_range_vs_readunique` | 8라인 ReadRange 수락 → CPU 라인 5 ReadUnique, RACK 지연 | DMA가 받은 라인 5가 ReadUnique 완료 뒤의 일관된 값 |
   | `rd_range_vs_writeback` | 8라인 ReadRange, CPU 라인 5 UD → 범위 진행 중 WriteBack | DMA가 받은 라인 5 = CPU 최신 데이터 |
   | `wr_range_vs_readshared` | 8라인 WriteRange 진행 중 CPU 라인 5 ReadShared | CPU가 받은 값과 최종 메모리 값이 DMA 쓰기 전후 중 하나로 일관되고, 뒤따르는 MakeInvalid 뒤 cache endpoint에 옛 valid copy가 남지 않음 |
   | `wr_range_vs_ns_read_burst` | 8라인 WriteRange 진행 중 non-shareable ReadOnce burst. base는 라인 3이고 뒤쪽 라인이 라인 5까지 덮는다. R backpressure로 활성을 유지한다 | burst가 활성인 동안 라인 3~5가 발행되지 않음 |
   | `rd_range_vs_ns_write` | 8라인 ReadRange 진행 중 라인 5에 non-shareable WriteNoSnoop. WACK을 지연한다 | WACK 전 라인 5가 발행되지 않음 |

   - non-shareable 읽기는 `read_legal`에서 cache-line 모양을 요구하지 않으므로 여러 라인 burst가 될 수 있다(`ace_manager_request_controller.sv`). 그래서 burst의 뒤쪽 라인 겹침을 반드시 시험한다.
   - non-shareable 쓰기는 한 라인 안으로 제한된다.

   **B1 같은 cycle 시나리오 (B1·rCCI 공통 경로).** B1 요청도 같은 `coh_read_ingress` 할당 경로와 adapter의 내부 line AW 경로를 지난다. 그런데 `ACE_MANAGER_BUSY`(`|c_busy`)는 레지스터 값이고, ACE 수락은 M1이 같은 cycle에 수락되는지를 보지 않는다. 그래서 빈 상태에서 ACE와 B1 M1이 **같은 cycle에 함께 수락되면**, 다음 cycle에 B1 라인이 ACE 활성 라인과 겹쳐 발행될 수 있다. 이 결함은 현재 B1에도 있다.

   | 이름 | 자극 | 판정 |
   |---|---|---|
   | `b1_rd_vs_ace_ar_same_cycle` | 빈 상태에서 ACE AR과 B1 ReadOnce AR을 같은 cycle에 제시. 같은 라인과 다른 라인을 각각 시험 | 같은 라인이면 B1의 첫 line 할당이 ACE RACK 뒤에만 일어남. 다른 라인이면 지연 없음 |
   | `b1_wr_vs_ace_aw_same_cycle` | ACE AW와 B1 WriteLineUnique AW를 같은 cycle에 수락 | 같은 라인이면 B1의 line 예약이 ACE WACK 뒤에만 일어남 |
   | `b1_cross_same_cycle` | ACE AR + B1 write, ACE AW + B1 read 조합 | 위와 같음 |

   **쓰기 예약(hold) 시나리오.** 14.3-3의 예약 구조를 확인하는 시험이다.

   | 이름 | 자극 | 판정 |
   |---|---|---|
   | `wr_hold_late_ace` | write line을 예약한 뒤 `line_aw_ready=0`으로 붙잡은 상태에서, 같은 라인의 ACE VALID를 뒤늦게 넣는다 | AW `VALID`·payload가 유지되고 ACE가 대기함 |
   | `wr_hold_late_read` | 같은 hold 상태에서 같은 라인의 read 범위 candidate를 뒤늦게 만든다 | read가 대기하고 AW가 취소되지 않음 |
   | `wr_hold_reset_fatal` | hold 중 reset과 fatal fault | reset 뒤 hold가 비고, fatal 때는 hold를 조용히 지우지 않음 |

3. **관측점 (ownership monitor).** 최종 데이터만 비교하면, 메모리 arbiter 순서 때문에 결함이 늘 재현되지는 않는다. 또 "RACK 전에 AC가 없다"만 확인하면, 트래커는 먼저 할당되고 서비스 중재 때문에 AC만 늦어진 경우를 놓친다. 그래서 각 시나리오에서 다음 내부 사건도 함께 확인한다.
   - ACE의 해당 라인이 활성인 동안, read `can_allocate`가 그 라인을 소유하지 않는다.
   - 같은 기간에 그 라인의 NQ request와 memory AR이 발생하지 않는다.
   - write 쪽에서는 그 라인의 `line_aw_fire`가 발생하지 않는다. 따라서 MakeInvalid와 memory AW/W도 없다.
   - RACK/WACK으로 ACE context가 해제되면, 제한된 cycle 안에 그 범위 라인이 발행된다.
4. 자극 시점은 고정 cycle에 의존하지 않는다. adapter와 read ingress의 `issue_idx`를 계층 참조로 보고 정한다.
5. 현재 RTL에서 먼저 실행한다.
   - 최종 데이터 실패 **또는** "같은 라인 동시 소유" monitor 실패가 나오면 R1을 재현한 것으로 판정한다.
   - 로그와 파형은 `reports/rcci_fix/fix1_before/`에 보존한다.
6. 수정 후에는 데이터 판정과 ownership monitor를 모두 통과해야 한다.

**완료 조건.**
- 범위 6개와 B1 같은 cycle 3개 시나리오의 실행 스크립트가 있고, 수정 전 결과(ownership 또는 데이터 실패와 그 파형 근거)가 보고서에 남아 있다.
- 쓰기 예약 3개 시나리오는 예약 구조가 아직 없으므로 보완 2 구현과 함께 추가한다.

**진행 결과 (2026-11-08, 보완 1 완료).** 수정 전 RTL에서 10개 사례 모두 결함이 재현됐다. 상세는 `reports/rcci_fix/FIX1_BEFORE.md`와 `fix1_before/summary.json`에 있다.
- 사례 1~6(R1): ownership 위반이 모두 재현됐다.
  - 사례 3(ReadRange 진행 중 CPU WriteBack, W 지연)에서는 DMA가 라인 5의 **옛 메모리 값**을 받는 실제 데이터 오류가 났다.
  - 사례 1의 쓰기 최종값은 manager 메모리 AW가 WB 쓰기 포트를 먼저 잡아 지켜졌다. 그러나 ownership 위반은 남아 있다.
- 사례 7~9(R1′): ACE와 B1 M1이 같은 cycle(55000 ps)에 수락된 뒤 겹쳐 발행됐다. `USE_RANGE=0`에서도 재현되므로 B1 기준 구현의 결함이다.
- 사례 10(**신규 R5**): ACE 수락 해저드가 ACE burst의 base 라인만 비교한다. 그래서 non-shareable ReadOnce burst의 뒤쪽 라인이 이미 M1이 소유한 라인과 겹쳐도 수락된다. 보완 2에서 14.3-2의 footprint를 수락 시점 probe에도 적용해 함께 고친다.
- 사례 2는 `LINE_TRACKER_ENTRIES=2`에서 앞 두 라인을 cache hit로 두고 실행한다. M1 R을 붙잡으면 공유 in-order 메모리 R 경로가 막혀 manager의 refill도 멈추는 시험 환경의 제약 때문이다.
- 기존 통합 시험 mode 0/1과 stage 8 사례 1~4는 그대로 PASS이다.

---

### 14.3 보완 2 — ACE ↔ 범위 라인 발행 시점의 반대 방향 검사 (R1 수정)

**무엇인가.** M1 라인을 발행하기 직전에, 그 라인을 ACE manager가 처리 중인지 검사한다. 처리 중이면 그 라인의 발행만 멈춘다.
- 읽기에서 발행은 트래커 할당과 AC 발행이다.
- 쓰기에서 발행은 adapter의 line 예약과 그 뒤 write ingress로 넘기는 AW이다.
- **적용 대상은 B1·rCCI의 모든 M1 라인이다(`kind_range`와 무관).** R1의 "미발행 뒤쪽 라인" 결함은 범위에서만 드러난다. 그러나 같은 cycle에 ACE와 B1 M1이 함께 수락되는 경로(14.2)는 B1에도 있으므로, 발행 시점 소유권 계약은 B1·rCCI 공통으로 둔다.

이것은 4.5절 "반대 방향 검사"의 ACE 부분이다.

**왜 필요한가.**
- R1의 일관성 결함을 막는다.
- 4.5절은 범위 엔트리가 라인마다 발행 직전에 검사해야 B1과 같은 보장이 된다고 정했다. 그러나 단계 8은 외부 admission 시점만 검사했다.
- `!ACE_MANAGER_BUSY`로 범위의 내부 발행 전체를 멈추는 방법도 안전하기는 하다. 그러나 CPU의 어떤 요청이든 DMA 범위 전체를 멈추게 되어, 5장의 CPU+DMA 혼합 성능에서 rCCI가 불리해진다. 그래서 이 방법은 임시 안전장치와 비교 기준으로만 쓴다.

**어떻게 작업하는가.**

1. **임시 안전장치 (2-a).**
   - 파라미터 `RANGE_ACE_ISSUE_GATE=1`이면 read `can_allocate`와 write 예약(아래 2-c의 candidate 선택)에 `!ACE_MANAGER_BUSY`를 AND로 건다. 이미 hold된 AW `VALID`에는 걸지 않는다. 1이 게이트 활성이다.
   - 같은 cycle에 ACE와 M1이 함께 수락된 경우에도 다음 cycle부터 `ACE_MANAGER_BUSY`가 1이 된다. M1의 첫 라인 발행은 그보다 늦으므로, 이 게이트만으로도 B1 같은 cycle 시나리오가 통과해야 한다.
   - 이 구성으로 보완 1의 범위 6개·B1 같은 cycle 3개 시나리오가 통과하는지 먼저 확인한다.
   - 2-b·2-c가 검증되면 기본값은 0으로 바꾼다. 회귀와 성능 비교를 위해 0/1 두 구성은 계속 유지한다.
2. **ACE 활성 주소 공개 (2-b).**
   - top에는 ACE request manager bank가 하나만 있다. `CACHED_MASTERS`는 snoop target 수이지 manager bank 수가 아니다.
   - bank는 `ACE_MANAGER_CONTEXTS`(기본 4)를 기준으로 다음 신호를 출력한다.
     - `active_span_valid[c]`: 그 context가 주소 소유권을 갖는지
     - `active_first_line[c][58:0]`, `active_last_line[c][58:0]`: 요청이 덮는 첫 라인과 마지막 라인(59비트)
   - 정상 AR/AW handshake 때 대상 context에 span과 소유 여부를 저장한다.
   - **burst 지원 범위와 footprint.** 지금 non-shareable ReadOnce는 `read_legal`에서 `normal_bar`·`modifiable`·`known_read`만 검사한다. 그래서 FIXED/WRAP, 여러 라인 burst, 과도한 SIZE도 수락된다. 이 상태로는 `addr + (LEN+1)·2^SIZE − 1` 식이 INCR이 아닌 burst에서 틀린 footprint를 준다. 그래서 다음과 같이 고정한다.
     1. manager가 메모리로 전달하는 data burst의 legality에 다음 조건을 추가한다.
        - `BURST = INCR`
        - `SIZE <= log2(DATA_WIDTH/8)`
        - AXI 4 KB 경계 안
        - 65비트 끝 주소 계산에 overflow 없음
        - FIXED/WRAP은 현재 검증 모델이 메모리 시맨틱을 따로 검증하지 않았으므로, 새로 지원하지 않고 거부(SLVERR)한다.
     2. footprint는 65비트로 계산한다.
        - `first_line = {1'b0, addr[63:6]}`
        - `last_byte = {1'b0, addr} + beats·bytes_per_beat − 1`
        - `last_line = last_byte[64:6]`
        - endpoint 저장은 14.4대로 59비트이다.
     3. legality 함수와 footprint 함수는 package 함수 하나(또는 controller의 할당 metadata 출력)로 만들고, bank와 controller에 따로 복제하지 않는다.
   - **소유 기준은 "주소가 있고 실제 memory/coherence side effect가 있는 transaction인가"이다.** 스눕을 만드는지는 기준이 아니다.
     - barrier·DVM은 주소를 메모리 라인 소유권으로 해석하지 않으므로 `active_span_valid = 0`이다.
     - shareable 요청과 non-shareable 요청(ReadNoSnoop·WriteNoSnoop, non-shareable ReadOnce)은 모두 1이다. non-shareable 요청도 manager의 `MEM_AR/MEM_R`·`MEM_AW/MEM_W/MEM_B` 경로로 같은 물리 메모리에 접근한다. 또 현재 top의 ACE 수락 해저드(`ace_*_window_ok`)도 이미 non-shareable 요청에 똑같이 적용되고 있다.
     - non-shareable 읽기는 cache-line 모양을 요구하지 않으므로 여러 라인 INCR burst일 수 있다. 그래서 단일 line이 아니라 span으로 공개한다.
     - legality 오류로 SLVERR만 받고 memory/snoop side effect가 없는 요청은 `active_span_valid = 0`이다. 주소 소유권을 줄 이유가 없고, malformed footprint 때문에 생기는 overflow와 과잉 차단을 피할 수 있다.
   - **수락 시점 probe에도 같은 footprint를 쓴다(R5).** 현재 `ace_*_hazard`는 ACE 요청의 base 라인만 M1 소유 라인과 비교한다. 새 ACE 요청의 `[first_line, last_line]` span과 M1 소유 구간의 겹침으로 바꾼다. 보완 1 사례 10이 이 경우의 시험이다.
   - 유효 기간은 해당 controller의 `c_busy`가 유지되는 동안이다. 즉 정상 응답이든 오류 응답이든 RACK/WACK까지이며, 토큰 유무와 무관하다.
3. **발행 직전 비교 (2-c).**
   - **읽기.** read ingress에 `ace_active_*` 입력을 추가한다. 다음 발행 라인 `issue_line = base_line + issue_idx`(B1 라인은 그 라인 자체)가 활성 ACE span 안에 있으면(`first <= issue_line && issue_line <= last`) `can_allocate`를 내린다. `can_allocate`는 handshake가 없는 내부 결정이므로 조합으로 내려도 프로토콜 문제가 없다.
   - **쓰기: candidate → 예약 → AW handshake.** adapter의 `line_aw_valid`에 위 검사를 조합으로 AND하면 안 된다. adapter는 `line_aw_valid && !line_aw_ready |=> line_aw_valid && $stable(payload)`(`RANGE_WRITE_AW_STABILITY`)를 지켜야 한다. 그런데 AW를 내민 뒤 ACE handshake나 중재 패배가 늦게 오면 `VALID`를 내려야 하는 상황이 생기기 때문이다. 그래서 쓰기 발행을 두 단계로 나눈다.
     1. adapter는 `write_issue_candidate_valid/line/context`만 만든다. candidate는 아직 내부 AW `VALID`가 아니다.
     2. top의 소유권 판정이 winner를 정한다. 비교 대상은 registered ACE span, 그 cycle의 ACE handshake span, read issue candidate(14.5)이다.
     3. write가 선택되면 `write_issue_hold_valid`와 payload를 레지스터에 잡는다. 이 시점부터 그 라인을 소유한다. `line_aw_valid`와 payload는 이 hold 레지스터에서 나오며, `line_aw_ready` handshake까지 바뀌지 않는다.
     4. hold 중인 라인은 write 구간 hazard에 포함한다(14.4). 그래서 hold 뒤에 도착한 같은 라인의 ACE와 read 범위는 막힌다. 이미 내민 AW를 취소하지 않고도 소유권이 유지된다.
     5. assertion: `RANGE_WRITE_AW_STABILITY`, 중복 예약 금지, 예약 1개당 AW handshake 정확히 1번.
   - 비교기는 다음 발행 라인 1개 × `ACE_MANAGER_CONTEXTS` × 2개이다. 기본 구성에서는 59비트 비교 8개이다.
4. **같은 cycle 경쟁: ACE 우선, 범위는 1 cycle 대기.** registered active span만으로는 같은 cycle에 처음 경쟁하는 경우를 막을 수 없다.
   1. M1 쪽은 **실제 ACE handshake**(`ACE_ARVALID && ACE_ARREADY`, `ACE_AWVALID && ACE_AWREADY`)와 그 요청의 span을 본다. 그 span이 이번 cycle의 `issue_line`을 덮으면 read `can_allocate`를 내리고, write 예약을 하지 않는다. 이미 hold 중인 write AW에는 영향을 주지 않는다. 이 경우는 hold 라인이 ACE hazard로 ACE 쪽을 막는다.
      - raw VALID만 쓰면, 실제로는 수락되지 않을 ACE 요청 때문에 범위가 불필요하게 멈춘다. 그래서 raw VALID는 쓰지 않는다.
   2. **단방향 의존 규칙.** ACE 수락 조건(`ACE_*READY`, `ace_*_hazard`, `ace_*_window_ok`)은 범위의 이번 cycle 발행 신호(`can_allocate`, `line_aw_valid`)를 참조하지 않는다.
      - 현재 `ace_*_hazard`는 ingress의 레지스터 상태만 보므로 이 규칙을 이미 만족한다.
      - 이 규칙이 지켜지는 한 실제 handshake를 써도 조합 루프가 생기지 않는다. 따라서 manager bank에 별도의 `will_accept` interface를 추가하지 않는다.
      - 규칙은 lint(조합 루프 검사)와, 범위 발행 신호를 ACE READY 경로에 넣는 mutation으로 고정한다.
      - 이 규칙을 깨야 하는 구조 변경이 생기면, 그때 manager bank의 pre-accept(`ar/aw_will_accept`) 신호를 도입한다.
   3. assertion `RANGE_ISSUE_ACE_OVERLAP`은 두 가지를 검사한다.
      - M1 라인 발행(read 할당 또는 write 예약) cycle에, 그 라인을 덮는 registered active span이 있으면 안 된다.
      - 같은 cycle의 실제 ACE handshake span과 M1 라인 발행이 겹치면 안 된다.
      - B1 라인과 범위 라인 모두에 적용한다.
   4. **starvation 계약.** ACE 우선은 "같은 라인을 덮는 ACE 요청이 끝없이 연속되지 않는다"는 환경 가정 아래에서 범위의 진행을 보장한다.
      - 이 가정은 progress property, 성능 보고서, 논문 제한 사항에 명시한다.
      - 선택 사항으로, 범위가 기다리는 동안 같은 라인의 ACE를 연속 수락하는 횟수에 bound를 두는 카운터를 넣을 수 있다. 성능 결과에서 문제가 보일 때 적용한다.
5. 활성 ACE 동안 새 M0/M1 admission을 막는 단계 8의 동작은 이 단계에서 바꾸지 않는다. 이를 완화하는 작업은 14.10에서 다룬다.

**완료 조건.**
- 보완 1의 범위 6개, B1 같은 cycle 3개, 쓰기 예약 3개 시나리오가 2-a와 2-b/2-c 구성 모두에서 데이터 판정과 ownership monitor를 통과한다.
- footprint 시험이 통과한다(directed와 footprint formal 모두).
  - 단일 라인, 2~3라인 INCR
  - base 라인은 겹치지 않고 뒤쪽 라인만 겹치는 경우
  - 4 KB 마지막 합법 burst와 4 KB 초과
  - 최상위 주소 overflow
  - SIZE 초과, FIXED/WRAP 거부
- **비충돌 판정:**
  - 다른 라인의 ACE 요청이 있을 때, 주소 해저드 때문에 범위 발행이 막힌 cycle이 0이다.
  - 서비스 context, AC 포트, WB/memory 경로 공유로 생기는 대기는 별도로 세고 판정에서 제외한다.
  - 공정성 가정 아래 양쪽 요청이 유한 cycle 안에 완료된다.
- **mutation:**
  - 주소 비교기를 제거하면 같은 라인 시험에서 실패한다.
  - 비교기를 전역 busy gate로 바꾸면 다른 라인 non-overblock 시험에서 실패한다.
  - 같은 cycle handshake 비교를 제거하면 같은 cycle 경쟁 시험에서 `RANGE_ISSUE_ACE_OVERLAP`가 실패한다.
  - active span을 base line 하나로 줄이면(LEN 무시) non-shareable burst 시험이 실패한다.
  - `!kind_range`일 때 ACE issue 검사를 우회하면 B1 같은 cycle 시험이 실패한다.
  - write 예약 없이 `line_aw_valid`에 조합 gate를 걸면 `wr_hold_late_ace`에서 `RANGE_WRITE_AW_STABILITY`가 실패한다.


**진행 결과 (2026-11-08, 보완 2 구현).** 상세는 `reports/rcci_fix/FIX2_RESULTS.md`에 있다.
- **구현 범위.** B1·rCCI 공통으로 다음을 구현했다.
  - ACE 활성 span 공개: footprint는 `ace_snoop_pkg`에 한 곳에서 정의했다. non-shareable ReadOnce에는 INCR legality를 적용했다.
  - read 할당·write 예약 시점의 ACE 검사: ACE 활성 span과 같은 cycle handshake를 모두 본다.
  - 쓰기 candidate → hold → AW 구조
  - ACE 수락 probe의 span 비교(R5)
- **기본 구성.** 사례 1~11, 13~16의 ownership/data 30건이 모두 PASS했다.
- **보수 gate(`=1`).** 안전성은 PASS이다. 사례 14·16에서는 과잉 차단을 확인했다.
- **mutation.** 5종을 모두 검출했다.
- **회귀.** stage 2·3·5·6·8과 formal이 PASS했다.
- **남은 항목.**
  - 사례 12(read 범위 ↔ write hold)는 보완 4에서 다룬다.
  - fatal 중 hold 수명 시험은 보완 5에서 다룬다.
  - top의 hold 라인 비교는 보완 3의 write 구간 `[lo, hi + hold_valid)`로 흡수한다.

---

### 14.4 보완 3 — 범위 엔트리별 구간 비교기 (R2)

**무엇인가.** 해저드 비교를 line 단위에서 **logical context 단위**로 옮긴다. line 단위란 read는 트래커, write는 line ingress 엔트리를 말한다.
- 각 context는 자기가 현재 막고 있는 라인 구간 `[lo_line, hi_line)`을 레지스터로 갖는다.
- 각 포트의 probe는 이 구간과 비교한다.
- 범위 context의 구간은 4.5절의 창이다. 라인 context의 구간은 자기 라인 하나이다.
- 논리적으로는 "context당 interval match 1개"이다. 하드웨어로는 하한·상한 관계 비교 두 개로 구현한다.

**왜 필요한가.**
- 논문 4.5·10절의 주장(B1은 라인 엔트리마다 라인 비교 T × P개, rCCI는 범위 엔트리마다 구간 비교)을 RTL에서 실현해야 한다. 그래야 5.3절 비용 표가 이 주장을 뒷받침할 수 있다.
- 현재 구조:
  - **read:** 유효 트래커마다 엔트리 주소와 `line_idx`로 현재 라인을 만들어 비교한다. 그래서 비교기 앞에 16:1 주소 mux와 64비트 덧셈이 붙는다. conventional 엔트리는 트래커가 할당되기 전 구간을 별도의 엔트리 비교로 보완한다.
  - **write:** `coh_write_ingress`의 유효 line entry마다 직접 비교한다. 트래커 주소 계산은 없다.
- 면적 감소의 근거는 엔트리 수이다.
  - B1이 N_fly 라인을 동시에 처리하려면 DMA 요청 N_fly개를 받아야 한다. 그래서 엔트리가 T ≥ N_fly개 필요하고, 비교기는 T × P개가 된다.
  - rCCI는 범위 하나가 N_fly 라인을 덮으므로 E를 작게(예: 2~4) 둘 수 있다. 비교기는 E × P × 2개가 된다.
  - 라인 실행 칸은 두 방식이 같다. read는 512비트 버퍼를 가진 트래커, write는 MakeInvalid 상태 칸이다.

**어떻게 작업하는가.**

1. **구간 폭: 59비트.**
   - 최상위 64 B 라인 `0xffff_ffff_ffff_ffc0`의 다음 라인 번호는 `2^58`이다. 그래서 58비트로는 exclusive 상한이 overflow된다.
   - 4 KB 조건은 페이지 안 증가 폭을 제한할 뿐이다. 최상위 주소의 `hi`를 58비트에 담을 수 있게 해 주지는 않는다.
   - 저장: `logic [58:0] lo_line, hi_line`
   - probe: `{1'b0, addr[63:6]}`
   - span의 `probe_last`도 59비트로 계산한다.
2. **read context (`coh_read_ingress`).**
   - 수락할 때:
     - conventional 라인: `lo = probe_line`, `hi = lo + 1`. 수락 즉시 소유하며, 현재 동작과 같다.
     - 범위: `lo = hi = {1'b0, base[63:6]}`. 빈 구간에서 시작한다.
   - 범위 라인을 `can_allocate`로 발행하면 `hi <= hi + 1`이다.
   - 라인이 완료되면 `lo <= lo + 1`이다. 완료 시점은 miss 라인 R의 마지막 beat 또는 hit 마지막 beat이다.
   - 곱셈이나 mux 없이 증가기 2개로 `lo = base + out_idx`, `hi = base + issue_idx`를 유지한다.
   - 트래커의 주소 비교 루프는 삭제한다. `nq_addr`와 `out_addr`는 출력 포트당 1개만 `base + idx*64`로 계산한다.
3. **write context (`coh_write_range_adapter`).**
   - context마다 `lo_line`, `hi_line`을 둔다. 구간은 `[base + b_idx, base + issue_idx)`이다.
   - `line_aw_fire`에서 `hi + 1`, `line_b_fire`에서 `lo + 1`이다. Error-only drop의 합성 B도 `line_b_fire`에 포함한다.
   - **hold 라인 포함.** 14.3-3의 쓰기 예약 구조에서는 예약 시점부터 그 라인을 소유한다. 그러나 `issue_idx`·`hi` 증가는 AW handshake 시점에 둔다. W 귀속(`w_idx < issue_idx`)이 내부 AW 수락을 기준으로 하기 때문이다. 그래서 hold 중인 context의 hazard 구간은 `[lo, hi + hold_valid)`로 계산한다. hold 라인은 항상 `hi`가 가리키는 다음 라인이므로 비교식은 상한에 1을 더하는 것으로 충분하다.
   - adapter가 ACE AR/AW, M0 AR/AW, M1 AR span probe에 대한 hazard를 출력한다.
   - `USE_RANGE=1`에서는 `coh_write_ingress`의 line CAM을 `LINE_CAM=0`으로 끈다. 모든 M1 쓰기가 adapter context를 거치므로, adapter 구간이 같은 라인 집합을 덮는다.
   - `USE_RANGE=0`(B1)은 기존 line CAM을 그대로 쓴다. 비교 기준을 B1 원형으로 유지하기 위해서다.
4. **비교식.**
   - 라인 probe(M0, ACE): `probe_line >= lo && probe_line < hi`
   - M1 span probe: `probe_first < hi && probe_last >= lo`
5. **E와 N_fly 파라미터 분리.** 지금은 `M1_INGRESS_DEPTH` 하나가 read logical entry, adapter context, `axi_cci_top`의 write line ingress depth에 함께 쓰인다. 이 상태로는 E=4, N_fly=16을 구성할 수 없다. 다음과 같이 나눈다.

   | 역할 | 파라미터 | 의미 |
   |---|---|---|
   | read logical context | `M1_READ_CONTEXTS` | B1이면 line request entry 수, rCCI이면 범위 context 수 E |
   | read line 실행 칸 | `M1_READ_TRACKERS` | read N_fly 상한, 512비트 hit buffer 수 |
   | write logical context | `M1_WRITE_CONTEXTS` | adapter context 수 E |
   | write line ingress | `M1_WRITE_LINE_ENTRIES` | 내부 64 B AW entry 수, write N_fly 이상 |
   | write line tracker | `LINE_TRACKER_ENTRIES`(필요하면 새 이름) | MakeInvalid 상태 칸 수 |

   - 각 count 출력의 폭, elaboration assertion, admission depth stall counter도 해당 파라미터를 따르도록 바꾼다.
   - `RANGE_WRITE_WINDOW <= M1_WRITE_LINE_ENTRIES`와 `RANGE_WRITE_WINDOW <= line tracker 수`는 유지한다.
   - `RANGE_WRITE_WINDOW <= M1_WRITE_CONTEXTS` 조건은 제거한다.
6. **기준 비교(shadow) 동일성.**
   - read는 기존 트래커·엔트리 비교를 `ifndef SYNTHESIS` 아래 기준(reference)으로 남긴다. 같은 모듈 안에서 새 비교와 cycle마다 비교한다.
   - write는 새 구간이 adapter에 있고 기존 line CAM은 하위 `coh_write_ingress`에 있다. 그래서 기준 hazard를 top까지 출력해, 같은 probe에 대해 비교한다. `LINE_CAM=0` 구성에서도 이 시뮬레이션용 기준 경로는 유지한다.
   - assertion `HAZARD_INTERVAL_EQUIV`의 비교 시점은 소유권 사건과 같은 clock edge에 맞춘다.
     - read `hi`: `can_allocate`
     - read `lo`: R 또는 hit 마지막 beat
     - write `hi`: `line_aw_fire` (hold 라인은 예약 cycle부터 상한 +1로 포함하며, shadow 기준 CAM도 같은 hold 라인을 포함한다)
     - write `lo`: `line_b_fire`
     - conventional 라인: 수락 직후부터 최종 응답까지
   - formal에서도 작은 파라미터(context 2, 트래커 2~4, 범위 8라인 이하)로 같은 등식을 BMC로 확인한다.

**완료 조건.**
- 기존 단계 2·3·5·6·8 회귀와 ACE 회귀가 `HAZARD_INTERVAL_EQUIV`를 켠 상태에서 모두 통과한다.
- 다음 mutation이 모두 expected-failure로 검출된다.
  - `hi` 증가 누락
  - `lo` 증가 누락
  - 경계 비교 `<`/`<=` 변경
  - 58비트로 줄여 최상위 주소 page에서 wrap이 생기게 한 변경
- E=4, N_fly=16 구성이 elaboration, 정상·오류 drain, 1/8/64라인 시험을 통과한다.
- 최상위 주소 page 경계 시험이 통과한다.


**진행 결과 (2026-11-08, 보완 3 구현).** 상세는 `reports/rcci_fix/FIX3_RESULTS.md`에 있다.
- **구간 CAM.**
  - read: 엔트리마다 `lo/hi`(59비트)를 두고, `INTERVAL_CAM=USE_RANGE`로 켠다.
  - write: adapter context 구간 `[b_idx, issue_idx)`에 hold를 더한다.
  - rCCI는 write line CAM을 끈다(`LINE_CAM=0`). B1은 기존 라인 CAM을 유지한다.
- **동일성 확인.** `HAZARD_INTERVAL_EQUIV` assertion(read 모듈 안, write는 top)으로 매 cycle 기존 CAM과 동일함을 확인했다. 구현 중 빈 구간(`lo == hi`)의 span 겹침 버그를 이 assertion이 잡아 수정했다.
- **E와 N_fly 분리.** `M1_READ_CONTEXTS`, `M1_WRITE_CONTEXTS`, `M1_WRITE_LINE_ENTRIES`를 추가했다. E=4·N_fly=16 구성이 통합 시험과 사례 7·8·9·17·18을 통과했다.
- **M0 hazard 경로.** write 쪽 M0 hazard(hold, 구간)는 core의 `EXT_M0_*` 입력으로 넣었다. 이미 grant를 잡은 M0 요청은 hazard가 새로 생겨도 VALID를 내리지 않는 core의 예외를 그대로 쓰기 위해서다.
- **시험 결과.**
  - fix runner 65건이 모두 기대대로 나왔다. 사례 17(최상위 주소 page)·18(64라인 동시) 포함, mutation 9종 검출.
  - 기존 회귀: stage 2·3·5·6·8, formal 18건, ACE 68건이 PASS했다.
- **남은 항목.**
  - 구간 동일성의 formal BMC는 보완 5에서 한다.
  - R3·사례 12는 보완 4에서 한다.

---

### 14.5 보완 4 — M1 읽기 ↔ 쓰기 발행 시점의 반대 방향 검사 (R3)

**무엇인가.** 범위 엔트리가 라인을 발행할 때, 반대 방향 M1 경로가 그 라인을 처리 중인지 검사한다.
- 읽기 범위가 라인을 발행할 때는 write adapter 구간과 비교한다.
- 쓰기 범위가 라인을 발행할 때는 read context 구간과 비교한다.
- 양쪽이 같은 라인을 같은 cycle에 처음 발행하려 하면 중재로 한쪽만 통과시킨다.

**왜 필요한가.**
- M1 AR/AW 수락 시점에는 상대 방향의 이미 발행된 라인만 검사한다. 그래서 상대 범위의 뒤쪽 라인과 겹치는 요청이 수락되고, 이후 두 경로가 같은 라인을 동시에 처리할 수 있다.
- AXI는 AR과 AW 사이에 순서를 보장하지 않는다. 그래서 모든 경우가 곧바로 잘못된 최종값을 뜻하지는 않는다. 그러나 이 문서의 해저드 계약은 "라인을 발행하기 직전에 반대 방향의 활성 소유자를 다시 확인한다"이므로, 필수 보완으로 둔다.
- 상대 구간 비교만으로는 부족하다. 두 범위가 같은 라인을 아직 발행하지 않은 상태라면 양쪽 비교 결과가 모두 false이다. 그러면 같은 cycle에 함께 발행될 수 있으므로 중재가 필요하다.

**어떻게 작업하는가.**

1. 보완 3의 구간 비교기에 **발행 probe** 입력 1개를 추가한다. 상대 모듈의 "다음 발행 라인"을 받아 자기 구간과 비교한다.
2. read `can_allocate`와 write 예약(14.3-3의 candidate 선택)에 상대 쪽 hazard를 AND로 건다. hold된 AW `VALID`에는 걸지 않는다.
3. **같은 cycle 중재.**
   - read 할당 candidate와 write 예약 candidate의 라인이 같고, 둘 다 이번 cycle에 발행할 수 있으면 한쪽만 선택한다. 이 중재는 14.3-3의 top 소유권 판정과 같은 블록에서 한다(우선순위: ACE handshake → read/write round-robin).
   - **처음부터 1비트 round-robin을 쓴다.** 고정 우선순위는 같은 라인 요청이 계속 이어지는 부하에서 낮은 쪽의 진행을 보장하지 못한다. round-robin은 비용이 플립플롭 1개뿐이다.
   - turn은 실제 경쟁에서 한쪽이 선택된 cycle에만 바꾼다. 이미 활성인 transaction을 중간에 선점하지 않는다.
   - 선택되지 않은 쪽은 payload와 issue pointer를 그대로 유지한다.
   - turn은 reset 때 초기화하고, 경쟁이 없는 cycle이나 stall 중에는 임의로 바꾸지 않는다(assertion).
4. **교착 없음의 근거.** round-robin 공정성 아래에서 성립한다.
   - 한쪽 구간에는 이미 발행된 라인만 들어 있다.
   - 이미 발행된 라인의 R 또는 B 완료는 상대의 다음 라인 발행에 의존하지 않는다.
   - 따라서 한쪽이 상대 구간을 기다려도 구조적인 순환은 생기지 않는다.
5. assertion `RANGE_ISSUE_M1_OVERLAP`은 두 경우를 모두 금지한다.
   - 상대 활성 구간 안의 라인을 발행하는 경우
   - `read_issue_fire && write_issue_fire && same_line`

**완료 조건.**
- directed 시험이 유한 cycle 안에 끝나고 데이터가 일관된다. 시험 경우는 다음과 같다.
  - 정방향·역방향 부분 겹침
  - 완전 겹침
  - 같은 cycle 첫 라인 경쟁
  - 양쪽 VALID가 계속 유지되는 같은 라인 경쟁
  - R/B backpressure
- **중재기 formal (필수).** 두 harness로 나눠 증명한다.
  - **isolated arbiter harness:** 순수 grant의 safety와 fairness를 증명한다. 충돌하는 두 발행이 같은 cycle에 함께 일어나지 않고, 두 쪽이 계속 경쟁하면 번갈아 선택된다.
  - **통합 harness:** ownership 해제를 포함한 bounded grant를 증명한다. round-robin 플립플롭만으로는 bound가 나오지 않는다. 먼저 선택된 같은 라인 owner가 R/B 완료로 해제될 때까지 대기자는 기다려야 하기 때문이다. 그래서 다음 가정과 bound를 명시한다.
    - candidate payload는 선택될 때까지 안정적이다.
    - 내부 AW/tracker 자원과 service/memory ready는 정한 최대 지연 안에 온다.
    - 먼저 선택된 같은 라인 owner는 `L_owner` cycle 안에 해제된다.
    - 대기자의 grant bound는 `L_owner + 중재·레지스터 지연`이다.
- mutation은 다음 셋을 따로 두고, 각각 assertion 또는 formal로 검출한다.
  - 구간 비교 제거
  - 같은 cycle 중재 제거
  - turn update 제거


**진행 결과 (2026-11-08, 보완 4 구현).** 상세는 `reports/rcci_fix/FIX4_RESULTS.md`에 있다.
- **구현.**
  - 쓰기 예약 후보는 read 소유 구간과 비교한다(`wr_issue_probe`).
  - 읽기 할당 후보는 write 소유 구간과 비교한다(`rd_issue_probe`, hold 포함).
  - 같은 라인 동시 발행은 새 모듈 `rcci_m1_issue_arbiter`(1비트 round-robin)로 중재한다.
- **계획과 달라진 점: work-conserving 중재.** 계획은 두 후보가 있으면 중재하는 것이었다. 그러나 사례 12에서, 트래커 부족으로 발행할 수 없는 쪽이 이겨 상대를 불필요하게 막는 문제가 드러났다. 그래서 이번 cycle에 실제로 발행 가능한 쪽끼리만 경쟁하도록 했다.
- **시험 결과.**
  - 사례 12·19·20·21을 포함해 fix runner 81건이 모두 기대대로 나왔다. 보완 4 mutation 3종을 검출했다.
  - 중재기 formal: 공정성, `L_OWNER=3` 소유 해제 환경의 bounded grant(대기 ≤ 4), witness 2건, mutation 2건.
  - 기존 회귀: stage 2·3·5·6·8, formal 24건, ACE 68건이 PASS했다.

---

### 14.6 보완 5 — 전체 회귀와 formal 재확인

**무엇인가.** 보완 2~4로 바뀐 RTL에 대해, 활성 단계의 시험·formal·합성 검사를 하나의 active regression으로 다시 실행한다.

**왜 필요한가.** 해저드 구조와 발행 조건이 바뀌었으므로 기존 결과를 재사용할 수 없다. 이 회귀가 성능·비용 측정(보완 6·7)의 전제 조건이다.

**어떻게 작업하는가.**

1. 최소 재검증 집합:
   1. `run_rcci_stage2.py`: M1 속성, WSTRB, top interface 계약
   2. `run_rcci_stage3.py`: tagged service, 공통 admission pool
   3. `run_rcci_stage5.py`: ReadRange
   4. `run_rcci_stage6.py`: WriteRange
   5. `run_rcci_stage8.py`: hazard, Error-only, fatal 조합, progress formal
   6. `run_rcci_fix.py`(신규): 보완 1~4의 정상·mutation·경계 구성
   7. `run_ace.py`: 전체 ACE/manager/snoop 회귀
   8. `run_formal.py`: 기존 formal과 interval 동일성, 같은 cycle ownership property
   9. `run_rcci_stage1.py`와 C++ `rcci_model` test: RTL에서 다시 측정한 지연으로 성능 모델을 갱신할 때
   10. `run_ace_synthesis.py`: 기능 회귀가 모두 통과한 뒤의 새 구성 elaboration·OOC 합성
2. `scripts/run_regression.py`를 고쳐 위 집합을 한 번에 실행하게 한다.
3. 결과 manifest에는 다음 source의 hash를 포함한다: RTL, TB, runner, formal harness, 합성 Tcl, C++ model.
4. expected-failure는 단순히 nonzero로 끝났는지가 아니라, 계획한 assertion marker가 실제로 발생했는지로 판정한다.
5. 구성 행렬과 구성 이름.
   - 이름 규칙은 `R-E{read E}-RW{read N_fly}-WE{write E}-WW{write N_fly}`이다(예: 기본 구성 `R-E4-RW16-WE4-WW16`). B1은 `B1-T{T}`로 쓴다. CSV, manifest, 합성 구성명에 같은 규칙을 쓴다.
   - 기본 행렬: B1-T16, `R-E{4,16}-RW{1,4,16}-WE{4,16}-WW{1,4,16}` 가운데 read와 write를 같은 값으로 묶은 구성, `RANGE_ACE_ISSUE_GATE` 0/1.
   - read와 write를 독립적으로 sweep할 때는 축을 따로 기록한다.
6. **새 상태의 reset·fatal 수명.** 보완 2~4가 추가하는 상태는 ACE active span, interval `lo/hi`, write 예약 hold, 중재 turn, shadow reference이다.
   - reset 때 이 상태를 모두 초기화한다.
   - 시험: reset 직전에 range·ACE가 각각 활성인 상태를 만들고 reset한 뒤, 같은 ID와 같은 주소를 바로 다시 쓴다.
   - fatal fault 때는 새 admission과 새 내부 라인 발행을 막고, 문서가 허용한 drain만 진행한다(9절). active ownership은 drain 중에도 조용히 지우지 않고, 해당 응답(RACK/WACK, R/B)으로만 해제한다. drain이 끝난 뒤 남은 상태는 system reset까지 유지한다.
   - reset 해제 직후에 이전 transaction의 R/B/CD/RACK/WACK를 재사용하지 않는다는 시스템 가정은 기존 assertion으로 유지한다.
   - mutation: active span reset 누락, interval reset 누락, hold reset 누락, turn reset 누락.
7. **formal property 추가.** `HAZARD_INTERVAL_EQUIV`는 기존 CAM과 새 구간 비교의 출력이 같다는 것만 증명한다. 그래서 다음 property를 따로 둔다.
   - **소유권 safety는 의도한 충돌 쌍으로만 한정한다.** "같은 라인의 두 owner가 동시에 활성이 아니다"를 전역 속성으로 쓰면 너무 강하다. 서로 다른 ACE context 두 개나, 같은 방향 read 요청 두 개가 같은 라인을 함께 다루는 것까지 금지하는 계약은 아니기 때문이다. 검사하는 쌍은 다음 넷이다.
     - M1 line 예약/할당 ↔ registered ACE active span
     - M1 line 예약/할당 ↔ 같은 cycle ACE handshake span
     - M1 read line ↔ M1 write line(hold 포함)
     - 새 M0 handshake ↔ 이미 활성인 M1 구간
   - 14.0에서 보장하지 않기로 한 "이미 outstanding인 M0 ↔ 나중의 M1 라인"은 이 safety property에 넣지 않는다.
   - 같은 cycle safety: 위 충돌 쌍의 두 발행/수락 handshake가 같은 cycle에 함께 일어나지 않는다.
   - non-overblock: 다른 라인 probe는 구간 때문에 막히지 않는다.
   - bounded release: R/B/RACK/WACK와 서비스 응답이 정한 bound 안에 온다는 가정 아래 ownership이 해제된다.
   - bounded grant: 14.5의 isolated arbiter harness와 통합 harness(`L_owner` 가정 포함)
   - footprint: 14.3-2의 INCR footprint와 legality(4 KB, overflow, SIZE, FIXED/WRAP 거부)
   - whole-top liveness 전체는 계속 선택 항목(14.10)으로 둔다.
8. **coverage.** scenario marker로 다음 사건이 최소 한 번씩 일어났는지 기록한다.
   - 같은 라인 차단, 다른 라인 통과, 해제 후 진행
   - 같은 cycle 경쟁에서 양쪽 각각이 이기는 경우
   - Error-only 라인의 구간 해제
   - non-shareable burst 겹침
9. **(선택) XSim 교차 확인.** Verilator 회귀가 끝난 뒤, 대표 구성을 기존 `run_xsim.py`로 한 번 더 실행한다.
   - R-E4-RW16-WE4-WW16 기본 통합
   - ACE/range 같은 cycle 경쟁
   - read/write range 같은 cycle 경쟁
   - 59비트 경계
10. 결과는 `reports/rcci_fix/FIX_RESULTS.md`와 `results.json`에 남긴다. 실패가 하나라도 있으면 보완 6으로 넘어가지 않는다.

**완료 조건.** 모든 정상 시험이 PASS이고, 모든 expected-failure가 의도한 assertion marker로 실패한다. 위 formal property와 coverage marker가 모두 충족된다.


**진행 결과 (2026-11-08, 보완 5 완료).** 상세는 `reports/rcci_fix/FIX5_RESULTS.md`에 있다.
- **통합 회귀.** `run_regression.py` 한 번으로 stage 2·3·5·6·8, fix runner 154건, ACE 68건, formal 30건이 모두 PASS했다. 결과와 source hash 72개는 `active_regression.json`에 있다.
- **fatal 중 새 내부 발행 차단(RTL).** `issue_fatal_stop`을 추가했다. 기존에는 외부 admission만 막았다.
- **새 사례.**
  - 사례 22·23: Error-only 라인의 구간 해제
  - 사례 24: reset 수명. ACE span, read 구간, hold, turn을 모두 초기화하고 같은 ID·주소를 재사용한다.
  - 사례 25: fatal 수명. 새 발행 0건, hold 유지
- **구성 행렬.** `R-E{4,16}-RW·WW{1,4,16}` 6종과 B1-T16을 실행했다.
- **formal 추가.** read 구간 동일성 BMC(깊이 12)와 witness 3건, mutation 2건
- **남은 항목.**
  - XSim 교차 실행(선택)
  - write 구간 동일성은 시뮬레이션 assertion으로만 확인한다.

---

### 14.7 보완 6 — 성능 측정 (논문 5.2절)

**무엇인가.** B1과 rCCI를 같은 ACE top에서 RTL로 실행해 처리량·지연·엔트리 점유를 측정한다. MB 규모 sweep은 C++ 모델로 보충한다.

**왜 필요한가.**
- 논문 5.2절의 그래프가 아직 없다.
- 이전 5장 결과는 setup 방식 기준이라 쓸 수 없다(11절).
- rCCI의 이점은 엔트리 점유 감소와, 같은 admission capacity T에서 CPU 대기가 줄어드는 것이다. 이를 같은 RTL에서 수치로 보여야 한다.

**N_fly의 정의.** read와 write는 하나의 pool을 함께 쓰지 않는다.
- **read:** `RANGE_READ_WINDOW`와 `M1_READ_TRACKERS`는 모든 read context가 공유하는 read 전역 상한이다.
- **write:** `RANGE_WRITE_WINDOW`, write line ingress, write tracker는 모든 write context가 공유하는 write 전역 상한이다.
- 두 방향의 상한과 저장소는 서로 독립이다. 512비트 hit data buffer는 read tracker에만 있다.

**어떻게 작업하는가.**

1. **관측 카운터.** 시뮬레이션 전용이며 합성 면적에서 제외한다. `ifndef SYNTHESIS` 또는 TB의 계층 참조로 읽는다.
   - logical context 점유 cycle(합계·최대)
   - 라인 트래커 점유 cycle
   - 토큰 대기 cycle, 로컬 depth 대기 cycle(단계 4 카운터 재사용)
   - **주소 해저드 대기 cycle과 공유 자원 대기 cycle을 분리해서 센다**
   - DMA 첫 데이터 지연, 전송 완료 cycle
   - CPU 요청 지연(AR 수락까지의 대기, 완료까지)
2. **TB (`tb_rcci_perf.sv`).**
   - DMA 생성기: B1은 같은 데이터를 라인 요청 n개로 보낸다(outstanding은 T까지). rCCI는 범위 요청으로 보낸다(64라인 단위).
   - CPU 생성기: ReadShared/WriteBack을 낸다. 주소가 DMA와 겹치는 경우와 겹치지 않는 경우를 따로 둔다.
   - 기본 지연은 단계 1에서 측정한 Lm·Lc를 쓴다.
3. **sweep (`run_rcci_perf.py`).**

   | 축 | 값 |
   |---|---|
   | 전송 크기 | 1 / 8 / 64 라인, 다중 범위(256라인 = 4 KB × 4) |
   | 방식 | B1(T = 1, 2, 4, 8, 16), rCCI(read/write N_fly = 1, 2, 4, 8, 16, E = 4) |
   | dirty 비율 | 0 / 25 / 50 / 100 % |
   | CPU 부하 | 없음 / 비충돌 / 충돌 |
   | 토큰 | T = 16, `CPU_RESERVED_TOKENS` = 0 / 1 |

4. CSV에는 다음 값을 각각 별도 열로 기록한다. sweep 변수로도 따로 다룬다.
   - E
   - read N_fly, write N_fly
   - 공통 토큰 T
   - `ACE_MANAGER_CONTEXTS`: CPU 요청 context 수
   - `ACE_SNOOP_CONTEXTS`: snoop service context 수, 즉 2절의 S. AUTO/EXPLICIT/NQ 스눕을 동시에 처리하는 수이다. 기본값이 manager context와 같은 4이지만 서로 다른 자원이다.
   - memory outstanding Q
   - randomized ready/backpressure를 쓰는 시험은 seed를 기록하고, 최소 3개의 고정 seed로 min/median/max를 남긴다. 결정적(deterministic) 시험은 자극과 지연 파라미터를 manifest에 기록한다.
5. **비충돌 ACE 판정.** 전체 완료 cycle이 같은지로 판정하지 않는다. 주소 해저드 대기 cycle이 0인지로 판정한다.
6. **C++ 모델.** RTL 결과로 Ls·Lc·Lm·Lw를 보정한 뒤 MB 단위 전송과 S·Q sweep을 실행한다. RTL과 겹치는 지점(64라인)에서의 오차를 표로 남긴다.
   - 현재 `rcci_model.cpp`는 스트림(범위)마다 창을 따로 둔다(`st.active < window`). RTL은 방향별 전역 창과 전역 issue cursor를 쓰므로, 지금 모델은 RTL보다 낙관적이다.
   - 모델을 RTL 구조(방향별 전역 window, 전역 cursor)에 맞추고, `ACE_SNOOP_CONTEXTS`와 manager context를 분리한다.
   - 범위 2개 이상이 겹치는 RTL 지점에서 context 점유와 완료 cycle을 대조한다.
7. **산출물.** `reports/rcci_perf/`에 CSV와 그래프 스크립트를 둔다. 논문 그림은 `fig_cci`의 matplotlib 스타일로 그린다.

**완료 조건.**
- 5.2절 그래프에 필요한 데이터를 재현 가능한 명령으로 만든다: 처리량 대 N_fly/T, 엔트리 점유, CPU 대기, dirty 비율의 영향.
- C++ 모델과 RTL의 차이를 기록한다.


**진행 결과 (2026-11-08, 보완 6 완료).** 상세는 `reports/rcci_perf/PERF_RESULTS.md`에 있다.
- **RTL 측정.** 148회를 실행했고, 매 실행마다 데이터를 검증했다. 구성은 다음과 같다.
  - B1-T{1..16}, R-E4-RW·WW{1..16}, CPU 토큰 예약 1
  - 전송 크기, dirty 비율, CPU 부하
- **C++ 모델.**
  - 방향별 전역 창과 전역 cursor를 기본으로 바꿨다.
  - RTL로 보정했다(읽기 평균 오차 2%, 쓰기 9%).
  - 1 MB sweep 576점을 실행했다.
- **결과.**
  - 엔트리 점유: rCCI 평균 1.0~2.5, B1-T16은 15.2. DMA 요청: 256 → 4.
  - 처리량: 창 ≥ 4이면 같다(메모리 상한). 작은 창에서는 rCCI가 6~12% 빠르다.
  - 토큰이 부족한 4 스트림·T = 4(C++): rCCI 0.25, B1 0.235 lines/cycle.
- **계획과 달라진 점.** CPU 대기 감소는 관측되지 않았다. CPU 지연은 동시 진행 라인 수에 따른 메모리 큐잉이 결정하고, 토큰 대기는 거의 0이다. 논문 서술에서 이 두 효과를 분리해야 한다.
- **측정 환경의 제약.** TB 메모리 slave가 burst를 직렬로 처리하므로, miss 읽기는 라인당 약 8 cycle이 상한이다.
- **변경 사항.**
  - TB는 별도 파일이 아니라 통합 TB의 `RCCI_PERF` 모드로 구현했다.
  - TB 파라미터를 추가했다: `CACHE_LINES`, `MEM_OUTSTANDING`, `SNOOP_CONTEXTS`, `CPU_RESERVED_TOKENS`

---

### 14.8 보완 7 — 합성과 하드웨어 비용 (논문 5.3절)

**무엇인가.** B1과 rCCI 구성을 같은 조건으로 합성해 LUT·FF를 비교한다. 결과는 전체 top 비교와 비교기 단독 비교의 두 층으로 나눈다.

**왜 필요한가.**
- 현재 `reports/hardware_cost.csv`는 2026-10-08의 옛 B0/B1/P 결과이다.
- 11-06 합성 결과(B1 41,304 LUT / 22,108 FF, `P` 41,643 / 22,069)는 보완 3 이전 구조에서 나왔다. 엔트리 수도 B1과 같은 구성이라 구간 비교기의 효과가 나타나지 않는다.
- 논문 5.3절은 구현 환경과 LUT·FF 표로 비용을 제시한다(선배 논문 5.4절 형식).
- B1-T16과 R-E4-RW16-WE4-WW16의 ingress 전체 차이에는 비교기 말고도 여러 차이가 섞인다: context depth, range adapter, pointer/control, line tracker, admission 배선. 그래서 이 차이를 해저드 비교기만의 비용으로 해석하지 않는다.

**어떻게 작업하는가.**

1. **구성 이름 정리.** `P`를 14.6-5의 `R-E?-RW?-WE?-WW?` 규칙으로 바꾸고, `synth/run_ace.tcl`의 구성 표에 read/write E와 N_fly를 명시한다.
2. **전체 top 비교.**

   | 구성 | read E / read N_fly | write E / write line entries / write tracker | 토큰 T / manager ctx / service ctx S | 해저드 |
   |---|---|---|---|---|
   | B1-T16 | 16 / 16 | 16 / 16 / 16 | 16 / 4 / 4 | 라인 CAM |
   | R-E4-RW16-WE4-WW16 | 4 / 16 | 4 / 16 / 16 | 16 / 4 / 4 | 구간 비교 |
   | R-E16-RW16-WE16-WW16 | 16 / 16 | 16 / 16 / 16 | 16 / 4 / 4 | 구간 비교 (엔트리 수가 같을 때의 기준) |
   | (선택) B1-T8, R-E2-RW8-WE2-WW8 | | | | 작은 구성 |

   - 실제 합성 표와 CSV에도 위 열을 이 표처럼 나눠 둔다. 그래야 read와 write가 같은 값이라는 오해가 생기지 않는다.

   - `report_utilization -hierarchical`로 다음 모듈의 LUT·FF를 분리한다: read ingress, write adapter, write ingress, admission pool, 서비스, manager.
3. **비교기 단독 비교.** 포트 수와 probe register 조건을 같게 두고, CAM 방식만 바꾼 작은 합성 wrapper(또는 같은 모듈의 A/B generic 구성)를 만든다.
   - 합성기가 비교기를 지우지 못하도록 probe와 entry/span 값은 top 입력 레지스터에서 받고, hazard 결과는 출력 레지스터로 내보낸다.
   - line CAM과 interval CAM 사이에서 다음 조건을 같게 둔다: 포트 수, 레지스터 경계, valid gating, 출력 OR tree.
   - 라인 equality CAM × T개
   - interval CAM × E개
4. **환경.** Vivado 2024.1, `xczu7ev-ffvc1156-2-e`, OOC synthesis를 쓴다.
   - 현재 `synth/run_ace.tcl`에는 `create_clock`이 없다. 논문에는 LUT·FF만 쓰므로, 모든 구성에 **같은 unconstrained synthesis**를 적용하고 그 사실을 보고서에 적는다.
   - 나중에 클럭 제약을 넣는다면 period를 명시하고, 제약이 실제 run에 적용됐는지 log와 manifest로 확인한다.
5. **산출물.**
   - `reports/hardware_cost.csv`를 새 구성으로 교체한다. 옛 파일은 `reports/archive/`로 옮긴다.
   - 논문용 표를 만든다: 구성, LUT, FF, B1 대비 %.
   - 논문에는 전체 구현 비용을 주 결과로 쓴다. 비교기 단독 결과는 "구간 비교 구조 자체의 비용" 근거로 쓴다.
   - 보고서에는 synthesis-only이며 timing sign-off가 아님을 명시한다.

**완료 조건.**
- 모든 구성이 같은 스크립트 한 번으로 재현된다.
- 비교기 단독 비교에서 E < T일 때의 감소량이 수치로 나온다.
- 감소가 예상보다 작으면 그 원인(트래커 버퍼 비중 등)을 보고서에 적는다.


**진행 결과 (2026-11-08, 보완 7 완료. 이 절의 수치와 해석은 15.8로 대체되어 폐기).**
- **합성 조건.** Vivado 2024.1, xczu7ev, OOC unconstrained synthesis-only. `scripts/run_rcci_cost.py`와 `synth/run_rcci_cost.tcl`을 쓴다.
- **top 전체(B1-T16 대비).**

  | 구성 | LUT | FF |
  |---|---|---|
  | R-E4-RW16 | −32.6% | −14.3% |
  | R-E16-RW16 | −5.3% | +7.5% |
  | R-E2-RW8 (B1-T8 대비) | −20.1% | −10.3% |

  따라서 이득은 엔트리 수 감소에서 온다.
- **모듈별 차이.**
  - read ingress LUT −63%
  - write line ingress LUT −70% (`LINE_CAM = 0`)
  - 512비트 hit buffer와 서비스, manager는 두 방식이 같다.
- **비교기 단독.**

  | 비교 | LUT |
  |---|---|
  | interval CAM E=4 vs line CAM T=16 | 1,345 vs 3,568 (−62%) |
  | E=16 vs T=16 | +50% |

- **기존 비용 표.** `reports/hardware_cost.csv`를 교체했다. 이전 파일은 `reports/archive/hardware_cost_2026-10-08.csv`로 옮겼다.
- **구성 이름.** sanity 합성의 이름을 `P`에서 `R-E16-RW16-WE16-WW16`으로 바꿨다.
- **B1 비용 증가.** 보완 2~5를 B1에도 적용해 B1-T16 LUT가 41,304에서 53,574로 늘었다. 논문은 이 수정된 B1을 기준으로 비교한다.

---

### 14.9 보완 8 — 문서·덱·논문 정합

**무엇인가.** RTL 수정 결과와 리뷰에서 나온 서술 불일치를 PLAN, 덱 4장, 논문 4·5장에 반영한다.

**왜 필요한가.** 덱·논문의 서술과 RTL이 다른 부분이 확인되었다. 심사에서 그림과 구현이 다르면 설명이 어려워진다.

**어떻게 작업하는가.**

| 항목 | 현재 서술 | 정리 방향 |
|---|---|---|
| N_fly | 범위마다 창 W로 읽힐 수 있음 | read N_fly(모든 read context 공유)와 write N_fly(모든 write context 공유)를 구분한다. 두 방향을 합친 단일 상한으로 쓰지 않는다 |
| 트래커 구조 | "범위당 트래커 엔트리 1개" | read는 logical context E(구간 비교 포함)와 512비트 데이터를 가진 공유 read line tracker로 설명한다. write는 logical context E와 데이터 버퍼 없는 write line ingress/tracker로 설명한다. 5.3절의 "엔트리 점유"는 logical context 기준으로 정의한다 |
| FSM 해제 상태 | 4.2.3에 WAIT_RACK | M1(DMA)에는 RACK이 없다. 읽기는 마지막 R handshake, 쓰기는 외부 B handshake에서 해제한다. WAIT_RACK은 ACE 요청자 설명으로만 쓴다 |
| down counter | 그림: lines left −1 | RTL은 `out_idx`/`lines` 비교와 구간 레지스터로 구현한다. 동작이 같은 추상화임을 메모에 적고 그림은 유지한다 |
| 구간 비교기 수 | 4.5절 "구간 비교 1개" | "context당 interval match 1개"로 쓰고, 비용 설명에는 하드웨어 식이 하한·상한 비교 두 개임을 명시한다. 슬라이드 50 그림에 엔트리별 구간 비교 블록을 넣을지 검토한다 |
| ACE 활성 주소 | — | snoop target 수 `CACHED_MASTERS`와 request manager context 수 `ACE_MANAGER_CONTEXTS`를 구분해 쓴다. 주소 소유권은 shareable과 non-shareable을 모두 포함하는 span 단위임을 명시한다 |
| M0 방향 계약 | 4.5절 "막힌 요청: M0 AR/AW, …" | 14.0의 M0 계약을 4.5절과 13절에 명시한다. 새 M0는 활성 M1 구간과 겹치면 막는다. 이미 나가 있는 M0와 나중의 M1 라인은 B1과 마찬가지로 직렬화하지 않는다 |
| 서비스 context | 2절 S | S는 snoop service context(`ACE_SNOOP_CONTEXTS`)이고, ACE manager context와 다른 자원임을 명시한다 |
| 진행 보장 가정 | — | ACE 우선 정책의 환경 가정("같은 라인의 ACE가 끝없이 연속되지 않는다")을 논문 제한 사항에 쓴다 |
| 7절 해저드 검증표 | "범위 처리 중 다음 라인을 CPU·M0가 먼저 처리 중이면 범위 엔트리가 멈춘다" | 14.0의 M0 계약과 모순되므로 고친다. 이 보장은 CPU(ACE)에만 적용하고, 이미 나가 있는 M0와 나중의 M1 라인은 보장하지 않는다고 쓴다. B1·rCCI 공통 ACE issue 검사와 쓰기 예약 구조도 7절 표에 반영한다 |
| 10·11절 timing | 10절 "면적(LUT·FF)·timing", 11절 "면적·timing 표" | 필수 범위는 **LUT·FF, unconstrained synthesis-only**로 고치고 timing 주장을 지운다(14.8). timing을 논문에 남기려면 같은 clock constraint를 둔 implementation(`run_ace_implementation.py`)의 post-route WNS/TNS를 별도 필수 실험으로 올려야 한다. 논문 5.3절은 LUT·FF 표만 쓰기로 했으므로(선배 논문 5.4절 형식) 지금은 삭제한다 |
| 구성 이름 | `P`, `R-W{…}` | 14.6-5의 `B1-T?`, `R-E?-RW?-WE?-WW?` 규칙으로 PLAN·보고서·CSV를 통일한다 |
| burst 지원 범위 | — | ACE data burst는 INCR만 지원하고, FIXED/WRAP은 SLVERR로 거부한다는 범위를 9절(오류와 제한)에 추가한다 |

이 밖에 PLAN의 다음 부분을 갱신한다.
- 문서 머리의 상태 문단
- 5.1·5.2(현재 RTL 상태)
- 6절 단계 표(보완 0~8 행 추가)
- 7절 해저드 검증표, 9절 오류와 제한, 10·11절 평가 지표·산출물
- 13절 완료 정의

**진행 상황 (2026-11-08).** 위 표 가운데 PLAN 본문에 해당하는 수정은 반영을 마쳤다. 대상은 머리 상태, 1.1·1.2, 2, 4.1, 4.4, 4.5, 5.1, 5.3, 6, 7, 9, 10, 11, 13절이다. 남은 작업은 두 가지다.
- 덱 4장과 논문 4·5장 반영
- RTL 수정 결과에 맞춘 5.1·5.2 갱신(보완 5 이후)

**완료 조건.** PLAN·덱·논문의 용어(N_fly, logical context, 구간)가 RTL 파라미터와 1:1로 대응한다.

---

### 14.10 보완 9 — 선택 항목

| 항목 | 내용 | 진행 조건 |
|---|---|---|
| 활성 ACE → 새 M0/M1 admission 완화 | 새 요청의 M0 라인 또는 M1 burst span을 보완 2-b의 ACE active span과 직접 비교한다. 이 방향은 v9 arbiter outstanding CAM이 필요 없다 | 보완 6에서 CPU+DMA 혼합 시 이 대기가 성능을 크게 좌우할 때 |
| 이미 outstanding인 M0 → 새 ACE admission 완화 | 지금 top은 M0 pending count가 0이 될 때까지 ACE를 막는다. 주소별로 완화하려면 v9 arbiter가 M0 outstanding address/span CAM을 공개해야 한다 | 위 항목과 함께 판단 |
| 이미 outstanding인 M0 ↔ 나중의 M1 라인 직렬화 | 14.0 계약상 B1·rCCI 모두 직렬화하지 않는다. 같은 arbiter M0 CAM으로 범위·B1 라인 발행을 막으면 양방향 보장이 된다. 비교 기준을 유지하려면 B1과 rCCI에 동시에 적용해야 한다 | M0를 일관성 대상 master로 확장할 때 |
| ACE 연속 수락 bound | 범위가 기다리는 동안 같은 라인의 ACE를 연속 수락하는 횟수를 제한하는 카운터(14.3-4) | 성능 결과에서 범위 starvation이 보일 때 |
| whole-top bounded liveness | ready backpressure와 CD/R/RACK/WACK 최대 지연을 둔 compositional formal | 시간 여유가 있을 때. 논문 본문에는 쓰지 않음 |
| 여러 범위의 독립 발행 | 지금은 전역 issue cursor라서 앞 엔트리를 모두 발행한 뒤 다음 엔트리를 발행한다. 독립 cursor로 확장하려면 range-to-range 구간 검사와 공정 중재를 새로 설계해야 한다. 현재 구조에서도 같은 방향 요청의 순서와 반대 방향 ownership assertion은 문서에 명시한다 | 다중 스트림 성능 결과를 보고 결정 (향후 연구 후보) |
| 연속 miss 합치기 (단계 10) | 메모리 AR burst 병합 | C++ 결과가 의미 있을 때 |


---

## 15. 보완 7 이후 코드 리뷰 결과와 수정·보완 계획 (2026-11-09)

### 15.0 이 절은 무엇인가

(번호 규칙: 14.10의 "보완 9"는 선택 항목이다. 이 절의 신규 작업은 보완 10~13이다.)

보완 1~7을 마친 RTL 전체를 다시 읽고 검토했다(2026-11-08~09). rCCI 핵심 로직에서는 논리 오류를 찾지 못했다. 핵심 로직은 범위 읽기·쓰기, 구간 비교기, 발행 시점 소유권 검사, 쓰기 예약, read↔write 중재이다. 그러나 **M0 입력 경로에 B1·rCCI 공통 결함이 있다.** 하나는 시뮬레이션으로 재현했고, 다른 하나는 같은 원인이라는 것을 코드로 확인했다. 시스템 구조상 위험과 검증 공백도 확인했다.

이 절은 각 문제에 대해 무엇이 문제이고, 왜 생기고, 어떻게 고치고, 무엇으로 완료를 판정하는지를 적는다. 14절의 보완 8(문서 정합)은 이 절의 보완 10~12를 마친 뒤에 진행한다. M0 경로 수정은 B1과 rCCI의 RTL을 함께 바꾸므로, 보완 5·6·7의 회귀·성능·비용을 다시 측정해야 하기 때문이다.

| 번호 | 문제 | 등급 | 처리 |
|---|---|---|---|
| R6 | ACE가 처리 중일 때 M0 요청이 중복 처리됨 | **필수 (재현함)** | 보완 10 |
| R7 | M0 VALID가 core arbiter의 grant 고정 중에 내려갈 수 있음 | **필수 (코드 확인)** | 보완 10 |
| R8 | 공유 in-order 읽기 큐 때문에 DMA의 R 수락이 CPU 진행을 막음 | 구조 위험 | 보완 13 (방식 (b)로 수정 완료) |
| R9 | 검증이 directed 시험뿐이고, 무작위 혼합 스트레스가 없음 | 검증 공백 | 보완 11 |
| R10 | M0 burst가 한 라인 안이어야 한다는 계약을 시뮬레이션에서만 검사함 | 경미 | 보완 12 |
| R11 | barrier·DVM 요청이 주소 probe로 M1 소유 라인과 비교됨(과잉 차단) | 경미 | 보완 12 |
| R12 | 형식 오류 M1 범위 요청이 포트 전체를 멈추고, 부분 strobe 쓰기를 지원하지 않음 | 제한 사항 | 보완 13 (문서화) |
| R13 | Evict의 라인 소유, `m1_aw_read_block`의 1 cycle 추가 차단 | 경미(성능) | 보완 12 |

---

### 15.1 보완 10 — M0 입력 경로 수정 (R6·R7, B1·rCCI 공통)

#### 15.1.1 R6: ACE가 처리 중일 때 M0 요청이 중복 처리됨

**무엇이 문제인가.**
- `axi_cci_ace_top.sv`의 외부 `M0_ARREADY/AWREADY`에는 `!ACE_MANAGER_BUSY`가 들어 있다.
- 그런데 core로 들어가는 `M0_ARVALID/AWVALID`에는 이 조건이 없다. 현재 core 입력은 `M0_xVALID && !block_admission && !read_m0_x_hazard`이다.
- 그래서 ACE context가 처리 중인 동안 다음 일이 생긴다.
  - core는 M0 요청을 handshake하지만, M0 master는 READY=0을 보고 같은 요청을 계속 다시 낸다.
  - core 쪽에서 같은 요청이 여러 번 처리된다.
  - M0는 요청한 적 없는 R/B를 받는다.
  - top의 pending 카운터가 어긋난다.

**재현.**
- TB 사례 26(`RCCI_FIX_CASES` 블록): ACE ReadShared를 RACK 전 상태로 붙잡아 두고 M0 AR을 낸다.
- 결과: `ACE_PENDING_UNDERFLOW` assertion이 실패한다(외부 수락 수보다 완료 수가 많음).

**왜 지금까지 드러나지 않았나.**
- 이 결함은 단계 8의 "활성 ACE 동안 새 M0/M1은 대기" 정책을 넣을 때부터 있었다.
- M1 쪽 경로는 토큰 grant가 candidate(`!ACE_MANAGER_BUSY` 포함)를 거치므로 VALID와 READY가 일치한다. M0 쪽만 둘이 어긋났다.
- 기존 시험에는 ACE 처리 중 M0 요청을 내는 조합이 없었다.

#### 15.1.2 R7: M0 VALID가 core arbiter의 grant 고정 중에 내려감

**무엇이 문제인가.**
- core arbiter(`axi4_simple_2to1_bus_arbiter`)는 M0 요청을 메모리 쪽(`S_AxVALID`)에 내보내면 handshake 전까지 grant를 고정한다(`ar/aw_grant_locked`). 그동안 입력 VALID가 유지된다고 가정한다.
- 그런데 top은 core 앞에서 M0 VALID를 직접 끊는다. 끊는 조건은 `read_m0_*_hazard`와 `block_admission`이다.
- 메모리 쪽이 backpressure인 동안 이 조건이 새로 참이 되면, `S_AxVALID`가 handshake 전에 사라진다(AXI 위반). 예를 들면 다음 경우이다.
  - M1 읽기가 같은 라인을 할당한다.
  - fatal 또는 유지보수 상태로 들어간다.
- core에는 이 상황을 위한 예외가 이미 있다. `allow_m0 = !hazard || (lock && !route)`, 즉 grant가 고정된 M0 요청은 hazard가 새로 생겨도 통과시킨다. 보완 3에서 쓰기 쪽 hazard는 이 경로(`EXT_M0_*`)로 옮겼다. 읽기 쪽 hazard와 admission 차단만 아직 top에서 직접 끊고 있다.

**재현 계획.** 메모리 slave의 AR/AW ready를 막는다(force 또는 outstanding 포화). 그 상태에서 M0 AR이 arbiter에 grant 고정되게 하고, M1 읽기가 같은 라인을 할당하게 한다. 수정 전에는 `S_AR stability` assertion이 실패해야 한다.

#### 15.1.3 수정 방법

1. **M0를 막는 조건을 core 경로 하나로 모은다.**
   - top의 M0 차단 조건(`ACE_MANAGER_BUSY`, `block_admission`, `read_m0_*_hazard`)을 모두 core의 `EXT_M0_AR/AW_HAZARD` 입력으로 넘긴다. 기존의 write 쪽 hold·구간 hazard와 OR한다.
   - top은 core 앞에서 M0 VALID를 끊지 않는다. 외부 `M0_xREADY`는 core의 `M0_xREADY`를 그대로 쓴다.
   - 이렇게 하면 VALID와 READY가 항상 일치하고(R6 해결), grant가 고정된 요청은 core 예외로 통과한다(R7 해결).
2. **grant 예외가 계약을 깨지 않도록 ACE 수락 조건을 보강한다.**
   - grant가 고정된 M0 요청은 ACE가 처리 중이어도 통과할 수 있다. 따라서 ACE를 수락하기 전에 그런 M0 요청이 없어야 한다.
   - `ace_base_admit`의 `m0_*_pending == 0`에 조건을 더한다: core arbiter에 M0로 grant 고정된 AR/AW가 없을 것(`!(ar_lock && !ar_route)`, AW도 같음).
   - core에서 이 두 비트를 출력 포트로 내보낸다.
3. **fatal 의미를 정리한다.** fatal 이후에는 새 M0 요청을 받지 않는다. 다만 grant가 고정된 요청은 이미 발행된 것으로 보고 drain을 허용한다. 이는 PLAN 9절의 "새 요청 차단, 진행 중 transaction drain" 정책과 일치한다.
4. **M0 계약(14.0)을 다시 확인한다.** "새 M0 handshake ↔ 활성 M1 구간"은 계속 막힌다. 예외는 grant가 고정된 M0 요청뿐이며, 이것은 "이미 나가 있는 M0"로 취급한다. 14.0과 4.5절 문구에 이 정의를 추가한다.

#### 15.1.4 시험과 완료 조건

- 사례 26을 `run_rcci_fix.py`에 넣는다. 수정 전 FAIL, 수정 후 PASS. ACE 처리 중 M0 AR·AW 모두에서 core handshake 수가 외부 handshake 수와 같아야 한다.
- 사례 27(신규, R7): 메모리 backpressure + M0 grant 고정 + 같은 라인 M1 할당 / fatal 진입 / 유지보수 진입. `S_Ax` VALID 안정성 assertion을 통과해야 한다.
- 사례 28(신규): grant가 고정된 M0 요청이 있는 동안 ACE 요청은 수락되지 않고, M0 handshake 뒤에 수락된다.
- mutation:
  - core 입력 VALID에서 ACE busy 조건 누락 → 사례 26 검출
  - top에서 VALID 직접 차단 복원 → 사례 27 검출
  - ACE 수락의 lock 조건 제거 → 사례 28 검출
- 회귀: 보완 5 통합 회귀(`run_regression.py`) 전체가 PASS해야 한다.

---

### 15.2 보완 11 — constrained-random 스트레스 시험 (R9)

**무엇이 문제인가.**
- 지금까지의 fix 시험 154건은 모두 directed 시나리오이다. R6처럼 시나리오를 만들지 않은 조합은 놓친다.
- 그 밖의 공백:
  - write 구간 동일성은 시뮬레이션 assertion으로만 확인한다.
  - top 전체 liveness는 증명하지 않았다.
  - `CACHED_MASTERS = 2` + 범위 조합은 fix 시험에 없다.

**어떻게 작업하는가.**

1. 통합 TB에 `` `ifdef RCCI_STRESS `` 모드를 추가한다. seed는 plusarg로 받는다.
2. 다음을 동시에 무작위로 발생시킨다.
   - M1 B1 읽기·쓰기, ReadRange·WriteRange(1~64라인)
   - M0 AR/AW(한 라인 안)
   - ACE ReadShared, ReadUnique, WriteBack, WriteUnique, non-shareable ReadOnce burst, CleanShared
   - 주소는 작은 영역(예: 4 page)으로 제한해 충돌을 자주 일으킨다.
3. 무작위로 지연시킨다.
   - M1 R/B ready, M0 R/B ready, ACE R/B ready, RACK/WACK 지연
   - 메모리 slave ready, cache endpoint CR/CD
4. 검사기:
   - 보완 1의 ownership monitor(전 쌍)
   - 내부·외부 handshake 수 일치(R6 유형)
   - 모든 내부 AXI 인터페이스의 VALID/payload 안정성(R7 유형)
   - 결과 데이터 검사: 메모리 shadow model과 비교
   - 유한 시간 완료(timeout)
5. **데이터 검사 기준.** 같은 라인에 대한 요청은 이 문서의 해저드 계약이 정한 순서로 직렬화된다. shadow model은 각 요청이 실제로 발행된 시점(ownership 획득 cycle)의 순서로 메모리 값을 갱신한다. 읽기 결과는 그 시점의 값과 같아야 한다.
6. 구성: B1-T16, R-E4-RW16, R-E16-RW4, `CACHED_MASTERS = 2`(snoop filter on/off). 구성마다 seed 20개 이상, seed당 요청 수천 개.
7. 실패하면 seed와 자극 로그를 보존하고, 실패 사례를 directed 사례로 옮긴다.

**완료 조건.**
- 모든 구성과 seed가 PASS한다.
- 보완 10 이전 RTL에서는 이 시험이 R6를 스스로 찾아야 한다(검출력 확인).
- `run_regression.py`에 짧은 버전(구성당 seed 5개)을 넣는다.

---

### 15.3 보완 12 — 경미한 수정 (R10·R11·R13)

| 번호 | 문제 | 수정 | 완료 조건 |
|---|---|---|---|
| R10 | M0 burst가 한 라인 안이어야 한다는 계약을 `axi_cci_top.sv`의 시뮬레이션 assertion으로만 검사한다. 합성된 설계에서는 여러 라인 M0 burst의 뒤쪽 라인이 hazard 비교에서 빠진다. | 두 방안 중 하나를 고른다. (a) M0 hazard probe도 footprint span(`last_line`)으로 비교한다(구간 CAM과 line CAM 모두). (b) M0가 여러 라인 burst를 내지 않는다는 것을 시스템 계약으로 고정하고 논문 제한 사항에 쓴다. **권장안은 (a)**: 비용이 작고(probe 2개의 비교기가 등호에서 대소 비교로 바뀜), ACE footprint와 처리 방식이 같아진다. | 여러 라인 M0 burst의 뒤쪽 라인이 M1 소유 라인과 겹치는 사례에서 M0가 대기한다. |
| R11 | barrier·DVM 요청도 `ACE_AxADDR`로 M1 소유 라인과 비교된다. DVM의 주소는 메모리 주소가 아니다. | ACE probe의 valid를 "주소 소유 transaction일 때"로 제한한다(`!AxBAR[0] && !dvm(AxSNOOP)`). | DVM 주소가 M1 소유 라인과 같아도 즉시 수락된다. barrier 동작은 기존과 같다. |
| R13 | Evict(데이터 없는 eviction)가 WACK까지 라인을 소유해 M1 발행을 막는다. `m1_aw_read_block`이 M1 읽기 완료 cycle에도 AW를 1 cycle 막는다. | Evict는 `own_flag = 0`으로 둔다(메모리 side effect 없음). `m1_aw_read_block`은 retire cycle의 구간 갱신 시점을 확인한 뒤, 필요 없으면 제거한다(구간 CAM에서는 retire 다음 cycle에 이미 반영됨). | Evict 중에도 M1 발행이 지연되지 않는다. 제거 후에도 회귀가 PASS한다. |

---

### 15.4 보완 13 — 구조 위험과 제한 사항의 결정 (R8·R12)

**R8: DMA의 R 수락이 CPU 진행을 막음 (head-of-line blocking)**

- **현상.** core arbiter의 in-order 읽기 큐(`rd_q`)를 M0, M1 내부 읽기, ACE manager refill이 함께 쓴다.
  - DMA가 M1 R을 받지 않으면 그 뒤에 있는 CPU refill R도 멈춘다.
  - 사례 2와 25에서 시험 환경을 바꿔야 했던 원인이다.
  - 성능 측정에서 CPU 지연이 동시 진행 라인 수와 함께 늘어난 것도 같은 구조 때문이다(PERF_RESULTS 4절).
- **영향.** AXI상 DMA는 R을 늦게 받아도 된다. 따라서 실제 시스템에서는 CPU 진행이 DMA의 R 수락에 묶인다. DMA의 R 수락이 CPU 동작에 의존하면 교착도 가능하다.
- **선택지.**
  - (a) 논문 제한 사항으로 명시한다. "M1 R은 공유 in-order 메모리 경로를 쓴다. 시스템은 DMA가 R을 유한 시간 안에 받는다고 가정한다."
  - (b) M1 miss R을 읽기 트래커(라인 버퍼)에 먼저 받아 두고, 외부 R은 트래커에서 보내도록 바꾼다. 메모리 R 큐가 DMA RREADY와 분리된다. 이미 hit 라인은 512비트 버퍼에서 R을 보내므로, miss 라인도 같은 버퍼를 쓰면 된다. 추가 면적은 없다(트래커 버퍼를 재사용). 대신 miss 데이터 경로에 지연이 1 cycle 이상 생긴다.
- **결정 (2026-11-09).** (b)로 수정했다. 메모리 R은 항상 트래커 버퍼로 흡수하고 외부 M1 R은 버퍼에서만 낸다. miss 라인은 4 beat를 모두 받은 뒤 보내므로 읽기 첫 데이터가 4 cycle 늘고 read ingress LUT가 증가한다(15.7).

**R12: 형식 오류 범위 요청과 부분 strobe 쓰기**

- **현상.** 형식이 잘못된 M1 범위 요청(비정렬, 4 KB 초과, 속성 위반)은 sticky `config_fault`로 포트 전체를 멈춘다(SLVERR 응답 없음). M1은 부분 strobe 쓰기를 지원하지 않는다. B1 WriteLineUnique와 WriteRange 모두 full strobe만 허용한다.
- **처리.** 검증 모델의 fail-fast 정책(9절)을 유지하고, 논문 제한 사항에 다음 두 문장을 넣는다.
  - "M1은 64 B 정렬·전체 라인 단위의 일관성 전송만 지원한다."
  - "형식 오류는 fail-stop이다."
- 계속 운용 가능한 오류 응답(DECERR/SLVERR drain)은 향후 연구로 둔다.

---

### 15.5 진행 순서와 재측정

```
보완 10 (M0 경로, R6·R7) ─► 보완 12 (경미 수정) ─► 보완 11 (random 스트레스)
        └──────────────► 통합 회귀(보완 5) 재실행 ─► 성능(보완 6)·비용(보완 7) 재측정 ─► 보완 13 결정 반영 ─► 보완 8 (문서·덱·논문)
```

- 보완 10과 12는 B1과 rCCI의 RTL을 함께 바꾼다. 그래서 다음을 다시 실행하고 보고서를 갱신한다.
  - `run_regression.py`
  - `run_rcci_perf.py`
  - `run_rcci_cost.py`
- **비용 변화 예상.**
  - 보완 10: 거의 없다(조건을 core 쪽으로 옮기는 것과 lock 비트 2개).
  - R10 (a): M0 probe 비교기가 등호에서 대소 비교로 바뀌어 LUT가 조금 는다.
  - 증가분은 B1과 rCCI에 똑같이 들어가므로 상대 비교는 크게 바뀌지 않을 것이다. 수치는 재측정으로 확정한다.
- **성능 변화 예상.**
  - 보완 10은 ACE 처리 중 M0 동작만 바꾸므로 보완 6 결과(M0 부하 없음)에는 영향이 없을 것이다.
  - R13 수정은 쓰기 AW 수락을 1 cycle 줄일 수 있다.

### 15.6 완료 정의 (이 절)

1. 사례 26·27·28과 해당 mutation이 기대대로 나온다.
2. 무작위 스트레스(보완 11)가 모든 구성과 seed에서 PASS한다. 보완 10 이전 RTL에서는 R6를 찾아낸다.
3. 통합 회귀, 성능, 비용을 수정된 RTL로 다시 측정하고, 각 보고서(FIX*, PERF, COST)를 갱신한다.
4. R8·R12 처리 방식(제한 사항 또는 수정)이 4.5, 9, 13절과 논문 제한 사항에 반영된다.

### 15.7 진행 결과 (2026-11-09, 보완 10~13 완료)

상세는 `reports/rcci_fix/FIX10_13_RESULTS.md`, `reports/rcci_perf/PERF_RESULTS.md`, `reports/rcci_cost/COST_RESULTS.md`에 있다. 15.6의 완료 조건 1~3을 충족했고, 4는 이 문서(9, 13, 15.4절)까지 반영했다. 논문의 제한 사항 문구는 보완 8에서 반영한다.

- **검증.** 통합 회귀 PASS(fix 178건, ACE 68건, formal 30건, stress quick). 전체 stress 5개 구성 × 20 seed 100건 PASS.
- **R8 방식 (b)의 대가.** 읽기 첫 데이터 14 → 18 cycle(B1·rCCI 공통), 창 1~2의 읽기는 라인당 2~4 cycle 느려짐, 창 ≥4 처리량은 사실상 동일(8.04 → 8.06).
- **비용.** 15.8의 측정으로 대체했다.
- **15.5 예상과의 차이.** 보완 10·12의 비용 영향은 작을 것으로 예상했고, 실제 증가의 대부분은 보완 13에서 왔다.
- **C++ 보정.** 읽기 lc가 8에서 12로 바뀌었다. 4 스트림·T = 4에서 읽기 처리량은 B1 0.190, rCCI(N_fly ≥8) 0.250이다.
- **검증 환경 수정.** ownership monitor의 ACE span을 DUT와 독립적으로 계산하도록 고쳤고, read interval formal 환경에 snoop 응답 1회 가정을 추가했다.

### 15.8 비용 측정 기준 정정 (2026-11-09)

**목적.** RTL 구현의 목적은 제안 방식을 하드웨어로 구현할 때의 비용을 확인하는 것이고, 기존 방식은 얼마나 늘어나는지 보기 위한 기준이다. 검증은 구현이 올바름을 코드로 공유하기 위한 것이며 논문에 쓰지 않는다.

**이전 비교의 문제.** (1) rCCI를 엔트리 4개로 줄여 B1-T16과 비교했다. (2) `USE_RANGE=1`에서 라인 CAM을 제거해 추가가 아니라 교체였다. (3) 기준 B1에 쓰기 어댑터의 구간 레지스터와 구간 비교가 남아 있었다. 그래서 "LUT −32%"가 나왔고 이 값은 폐기한다. 1.1·2절·14절에 남은 "엔트리 수 감소에 따른 비교기 감소" 서술도 이 기준으로 읽는다.

**RTL 변경.**
- 기준 B1(`USE_RANGE=0`): 범위 카운터를 1비트로 줄이고(`LW`), 구간 비교 없이 라인 비교로 read↔write 검사를 수행한다. `lo/hi`는 합성에서 제거된다.
- 제안(`USE_RANGE=1`): 라인 CAM을 유지한다(`WRITE_LINE_CAM=1`, read는 line CAM OR 구간 비교).
- 합성 구성: 같은 용량의 쌍(B1-T16 / R-E16-RW16-WE16-WW16, B1-T8 / R-E8-RW8-WE8-WW8).

**결과 (구간 축소 전).** 16 엔트리에서 LUT +18,373 (+31.7%), FF +4,659 (+21.6%). 아래 구간 축소로 대체되었다. 상세는 `reports/rcci_cost/COST_RESULTS.md`.

변경 후 통합 회귀 PASS, stress 100건 PASS, 성능 수치 변화 없음. 라인 CAM과 구간 비교의 결과가 같으므로(`HAZARD_INTERVAL_EQUIV`) 증가분은 기존 하드웨어를 줄이지 않은 경우의 값이다.

**성능 조건 (2026-11-10).** 성능 측정도 면적과 같은 범위 엔트리 E = 16으로 맞췄다(`R-E16-RW{w}-WE16-WW{w}`). E = 4 결과와 74회 모두 동일하다(256라인 전송의 동시 범위는 최대 4개).

### 15.9 구간 표현 축소 (2026-11-10)

**문제.** 증가분의 약 90%가 59비트 `lo/hi` 레지스터와 59비트 크기 비교에서 나왔다(`reports/rcci_cost/COST_ANALYSIS.md`). 4장의 범위 비교(base + 포인터)와도 어긋난다.

**변경.** 범위는 4 KB 페이지 안이므로 `lo/hi`를 페이지 내 라인 오프셋 7비트로 저장하고, 비교는 페이지 일치(52비트)와 7비트 오프셋 크기 비교로 한다. 14.4의 "구간 폭 59비트" 결정을 대체한다. ownership monitor는 요청 주소와 포인터에서 직접 소유 구간을 계산한다.

**결과.** 16 엔트리에서 LUT 58,058 → 63,374 (+5,316, +9.2%), FF 21,569 → 22,872 (+1,303, +6.0%). 8 엔트리에서 LUT +1,591 (+4.0%), FF +628 (+4.1%). 통합 회귀 PASS, stress 100건 PASS, 성능 수치 변화 없음.
