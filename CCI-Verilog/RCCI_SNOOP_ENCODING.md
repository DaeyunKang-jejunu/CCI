# rCCI 범위 요청의 SNOOP 인코딩

작성일: 2026-11-03 (RCCI_PLAN.md 단계 0)  
범위: **ACE / ACE-Lite만** 다룬다(ACE5 계열 제외). CPU = ACE, DMA = ACE-Lite.  
참고 규격: ARM IHI 0022H (`CCI_P/IHI0022H_amba_axi_ace_protocol_spec.pdf`)

## 1. 결론

| 방향 | 값 | 이름 | 근거 |
|---|---|---|---|
| 읽기 | `ARSNOOP = 0b0110` | **ReadRange** | ACE(표 D3-7, D3-179)와 ACE-Lite(표 D11-1, D11-313)에서 Reserved |
| 쓰기 | `AWSNOOP = 0b111` (3비트) | WriteRange | ACE(표 D3-8, D3-180)와 ACE-Lite(표 D11-2, D11-313)에서 Reserved |

- 읽기 범위의 각 라인은 ReadOnce 의미(스눕 ReadOnce, CPU는 사본을 유지할 수 있음 — 표 D5-7, I로 버리는 것도 허용)이다.
- **WriteRange 정의**: 범위 안 각 라인을 WriteLineUnique로 처리하는 범위 쓰기. 각 라인은 전체 덮어쓰기(모든 strobe = 1)이고
  스눕은 MakeInvalid이다. 부분 쓰기(WriteUnique, 스눕 CleanInvalid)가 아니다. WriteLineUnique는 cache line
  크기만 허용되므로(D3-182, D1-161) 여러 라인 전체 덮어쓰기에는 새 값이 필요하다.
- 기존 방식(B1)은 라인 크기 요청(LEN = 3)만 받는다.
- RTL: `ace_snoop_pkg`의 `ARSNOOP_READ_RANGE = 4'b0110`, `AWSNOOP_WRITE_RANGE = 3'b111` (한 번만 정의).

## 2. ARSNOOP (4비트) — ACE / ACE-Lite

"All unused ARSNOOP[3:0] encodings are Reserved." (D3-179)

| 값 | ACE (표 D3-7) | ACE-Lite (표 D11-1) | 후보 |
|---|---|---|---|
| 0b0000 | ReadNoSnoop / ReadOnce | 같음 | ✕ |
| 0b0001 | ReadShared | - | ✕ |
| 0b0010 | ReadClean | - | ✕ |
| 0b0011 | ReadNotSharedDirty | - | ✕ |
| 0b0100 | Reserved | Reserved | 가능 |
| 0b0101 | Reserved | Reserved | 가능 |
| **0b0110** | **Reserved** | **Reserved** | **채택** |
| 0b0111 | ReadUnique | - | ✕ |
| 0b1000 | CleanShared | CleanShared | ✕ |
| 0b1001 | CleanInvalid | CleanInvalid | ✕ |
| 0b1010 | Reserved | Reserved | 가능 |
| 0b1011 | CleanUnique | - | ✕ |
| 0b1100 | MakeUnique | - | ✕ |
| 0b1101 | MakeInvalid | MakeInvalid | ✕ |
| 0b1110 | DVM Complete | - | ✕ |
| 0b1111 | DVM Message | - | ✕ |

- ACE·ACE-Lite 공통 Reserved: 0b0100, 0b0101, 0b0110, 0b1010.
- 0b0110을 고른 이유: 네 값 모두 ACE/ACE-Lite에서는 동등하다. 0b0110은 이후 규격판에서도 정의되지 않은 값이라
  (근거: AMBA AXI Issue K(2023) 표 A8.3, Issue L(2025) 표 A7.4에서 ARSNOOP 0b0110 = RESERVED)
  가장 무난하다(0b0100·0b0101·0b1010은 이후 판에서 다른 트랜잭션에 쓰였다).

## 3. AWSNOOP (3비트) — ACE / ACE-Lite

"All unused AWSNOOP[2:0] encodings are Reserved." (D3-180)

| 값 | ACE (표 D3-8) | ACE-Lite (표 D11-2) | 후보 |
|---|---|---|---|
| 0b000 | WriteNoSnoop / WriteUnique | 같음 | ✕ |
| 0b001 | WriteLineUnique | 같음 | ✕ |
| 0b010 | WriteClean | - | ✕ |
| 0b011 | WriteBack | - | ✕ |
| 0b100 | Evict | - | ✕ |
| 0b101 | WriteEvict | - | ✕ |
| 0b110 | Reserved | Reserved | 가능 |
| **0b111** | **Reserved** | **Reserved** | **채택** |

- ACE·ACE-Lite 공통 Reserved는 0b110, 0b111 두 개이며 동등하다. 0b111을 채택하고, 교수님이 다른 값을 고르시면
  `ace_snoop_pkg` localparam 하나만 바꾼다.
- ACE-Lite는 0b010~0b101도 쓰지 않지만, CPU(ACE)와 같은 인코딩 공간을 공유하므로 ACE에서 정의된 값은 피한다.

## 4. 공통 조건

외부 범위 요청(ReadRange · WriteRange)과, rCCI가 범위를 나눠 만드는 내부 라인 요청의 규칙을 구분한다(`RCCI_PLAN.md` 3.3).

- **외부 범위 요청 — rCCI가 새로 정의하는 규칙**: INCR, 64 B 정렬, SIZE = 버스 폭(16 B), LEN + 1 = 라인 beat 수(128비트 버스에서 4)의
  배수(최대 256 beat), 4 KB 경계를 넘지 않음, DOMAIN = Inner / Outer Shareable, BAR · LOCK = normal, CACHE = Modifiable.
  표 D3-10(D3-182, cache line size 트랜잭션 제약)은 burst 길이를 1, 2, 4, 8, 16 beat로 제한하므로 범위 요청에 그대로 적용하지 않는다.
  BURST · SIZE · 정렬 · BAR · LOCK · CACHE 조건만 D3-10과 같은 취지로 가져오고, 길이는 위의 rCCI 규칙을 따른다.
- **내부 라인 요청**: 범위를 64 B로 나눈 각 라인에는 ReadOnce / WriteLineUnique(스눕 MakeInvalid)의 ACE 조건을 적용한다.
- 쓰기 범위는 WriteLineUnique처럼 **모든 W beat의 strobe가 전부 1**이어야 한다(D3-182). 아니면 MakeInvalid가 CPU의 dirty 바이트를
  버린 뒤 일부 바이트만 써서 결과가 틀린다. 이를 검사하려면 M1에 WSTRB 포트가 필요하다(`RCCI_PLAN.md` 5.2).
- 스눕(AC)은 규격대로 **cache line 크기**이다("A snoop transaction must be a full cache line in length", D3-194).
  범위 AC는 향후 연구.

## 4.1 사설 확장으로서의 위치 (`RCCI_PLAN.md` 3.3)

- Reserved 값을 쓰는 ReadRange · WriteRange는 표준 ACE 트랜잭션이 아니라, requester(DMA)와 rCCI가 함께 이해하는 **폐쇄형 시스템 안의
  사설 확장**이다. "표준 ACE/ACE-Lite 호환"으로 표현하지 않는다.
- 기능을 끈 구성과 일반 ACE component는 이 값을 만들거나 전달하지 않는다. rCCI가 이 값을 종단하고 내부 표준 라인 동작으로 바꾸며,
  메모리 쪽으로 Reserved 값을 전달하지 않는다(메모리 요청은 ReadNoSnoop / WriteNoSnoop).
- RTL 상수는 `ace_snoop_pkg`에 한 번만 정의한다(`ARSNOOP_READ_RANGE = 4'b0110`, `AWSNOOP_WRITE_RANGE = 3'b111`).

## 5. 교수님께 확인받을 것

1. 읽기 `ARSNOOP = 0b0110`(ReadRange), 쓰기 `AWSNOOP = 0b111`(WriteRange) 값과 이름.
