# 보완 1 — R1/R1′ 재현 결과 (수정 전 RTL)

실행일: 2026-11-08
명령: `python3 scripts/run_rcci_fix.py --before`
기계 판독 결과: [fix1_before/summary.json](fix1_before/summary.json). 사례별 로그는 같은 폴더에 있다.

## 시험 구성

- **TB.** `tb/tb_cci_ace_integration.sv`에 `+fix1_case=N` 시나리오 10개와 `+fix1_monitor` ownership monitor를 추가했다. 두 plusarg가 없으면 기존 회귀 동작은 바뀌지 않는다.
- **ownership monitor.** RCCI_PLAN 14.6-7의 충돌 쌍을 검사한다.
  - (a) M1 라인 발행 ↔ registered ACE 활성 span. 발행은 read tracker 할당 또는 write line AW이다.
  - (b) M1 라인 발행 ↔ 같은 cycle의 ACE handshake span
  - (c) ACE 수락 span ↔ 이미 M1이 소유한 라인. 소유 라인은 read tracker·line entry와 write line entry이다.
- **실행 방식.** 각 사례를 두 번 실행한다.
  - monitor를 켠 **ownership** 판정
  - monitor를 끈 **data** 판정. 최종 메모리 값과 DMA가 받은 데이터를 비교한다.
- **구성.** `USE_RANGE=1`, `LINE_TRACKER_ENTRIES=4`이다. 따라서 read/write N_fly는 4이다.
  - 사례 2만 `LINE_TRACKER_ENTRIES=2`를 쓰고, 라인 0~1을 cache hit로 둔다.
  - 이유: M1 R을 붙잡으면 공유 in-order 메모리 R 경로가 막혀 manager의 ReadUnique refill도 멈추기 때문이다. 이것은 시험 환경의 제약이다.

## 결과

| # | 시나리오 | ownership | data | 근거 |
|---|---|---|---|---|
| 1 | WriteRange 진행 중 라인 5 ACE WriteBack (WACK 지연) | **FAIL** | PASS | ACE context 활성 중 write line 5 AW 발행 |
| 2 | ReadRange 진행 중 라인 5 ACE ReadUnique (RACK 지연) | **FAIL** | PASS | ACE 활성 중 read 할당 |
| 3 | ReadRange 진행 중 라인 5 ACE WriteBack (W 지연) | **FAIL** | **FAIL** | DMA가 라인 5에서 **CPU WriteBack 이전의 옛 메모리 값**을 받음 (`FIX1_READ_RANGE_DATA line=5`) |
| 4 | WriteRange 진행 중 라인 5 ACE ReadShared (RACK 지연) | **FAIL** | PASS | ACE 활성 중 write line AW |
| 5 | WriteRange 진행 중 non-shareable ReadOnce burst(라인 5~6) | **FAIL** | PASS | span 5..6 활성 중 line 5 발행 |
| 6 | ReadRange 진행 중 라인 5 non-shareable WriteNoSnoop | **FAIL** | PASS | ACE 활성 중 read 할당 |
| 7 | 빈 상태에서 B1 ReadOnce와 ACE ReadShared 같은 cycle 수락 | **FAIL** | PASS | 두 요청 모두 55000 ps에 수락 → 다음 cycle B1 read 할당 |
| 8 | B1 WriteLineUnique와 ACE WriteUnique 같은 cycle 수락 | **FAIL** | PASS | 같은 cycle 수락 → B1 line AW 발행 |
| 9 | B1 WriteLineUnique와 ACE ReadShared 같은 cycle 수락 | **FAIL** | PASS | 같은 cycle 수락 → B1 line AW 발행 |
| 10 | 이미 소유한 write line 0에 꼬리가 걸치는 non-shareable ReadOnce burst(라인 −1~0) | **FAIL**(수락 쌍) | PASS | ACE 수락 해저드가 burst의 **base 라인만** 비교 |

- 사례 7~9는 `USE_RANGE=0`(B1 전용 구성)에서도 같은 위반이 재현된다. 따라서 **R1′는 B1 기준 구현의 결함**이다.
- 기존 회귀 영향 없음: 통합 시험 mode 0/1과 stage 8 사례 1~4가 PASS이다.

## 해석

1. **R1 확인 (사례 1~6).** 범위의 아직 발행하지 않은 라인은 ACE 수락 검사에 보이지 않는다. 범위 발행도 ACE 활성 여부를 보지 않는다.
   - 사례 3은 소유권 위반이 **실제 데이터 오류**로 이어지는 경로다. CPU가 WriteBack AW를 먼저 내고 W를 나중에 보내면(AXI 허용), 그 사이 발행된 범위 라인의 메모리 읽기가 옛 값을 DMA에 돌려준다.
2. **사례 1의 data PASS 이유.** 쓰기 쪽 최종값 역전은 이 모델에서는 생기지 않았다. manager의 메모리 AW가 WriteBack AW 수락 즉시 WB 쓰기 포트를 잡아 메모리 쓰기 순서가 지켜졌기 때문이다. 그러나 ownership 위반은 그대로이므로 수정 대상이다.
3. **R1′ 확인 (사례 7~9).** `ACE_MANAGER_BUSY`는 레지스터 값이다. 그래서 빈 상태에서는 ACE와 M1이 같은 cycle에 함께 수락된다.
4. **새 발견 (사례 10).** ACE 수락 해저드(`ace_*_hazard`)는 ACE 요청의 base 라인만 M1 소유 라인과 비교한다.
   - non-shareable ReadOnce burst의 뒤쪽 라인이 이미 M1이 소유한 라인과 겹쳐도 ACE가 수락된다.
   - 이것은 14.3의 ACE span footprint(65비트 INCR footprint)를 **수락 시점 probe에도 적용**해야 한다는 뜻이다. 보완 2에서 함께 수정한다.

## 다음 단계

보완 2를 구현한 뒤 `python3 scripts/run_rcci_fix.py`(after 모드)를 실행한다. 20개 판정이 모두 PASS여야 한다.
