# rCCI 단계 4 진행 결과

작성일: 2026-11-05  
상태: 완료 — B1 기능 경로, write service fault, exact admission metadata, 원인별 stall counter와 buffer 선택 완료

## 이번 구현 범위

- `coh_write_ingress`에 `TAGGED_NQ` 모드를 추가했다. ACE top에서는 conventional B1
  쓰기의 snoop을 legacy AC/CR FIFO로 보내지 않고 tagged service의 `NQ_WRITE` owner로
  보낸다.
- MakeInvalid 요청에는 write tracker 번호를 붙이고, service context tag와 tracker 번호의
  대응을 top에 저장한다. status가 돌아오면 원래 tracker 번호로 복원해 그 tracker의
  `snoop_done`만 갱신한다.
- MakeInvalid 응답 전에는 downstream memory AW를 발행하지 않는다. 응답이 역순으로
  도착해도 외부 AW 발행은 ingress 순서를 유지한다.
- `AUTO`, `EXPLICIT`, `NQ_READ`, range-read preparation, `NQ_WRITE`의 다섯 요청원을
  held-request round-robin으로 중재한다. NQ_WRITE의 AC opcode는 MakeInvalid(`0b1101`)이다.
- standalone B1/P는 `TAGGED_NQ=0` 기본값으로 기존 legacy AC/CR 동작을 유지한다.
- B1 읽기 snoop을 `CleanInvalid`에서 `ReadOnce`로 변경했다. CR의 DataTransfer 비트로
  hit/miss를 분류하며 hit은 CD 512비트를 128-bit R 네 beat로, miss는 기존 memory
  AR/R로 반환한다.
- snoop 완료 순서와 외부 R 반환 순서를 분리했다. 뒤 hit가 먼저 완료돼도 앞 miss의
  RLAST 전에는 hit R을 내보내지 않으며 RID와 RLAST는 ingress 순서를 따른다.
- ReadOnce 뒤 cache copy가 유지되는지 dirty/clean hit에서 확인했다. miss는 cache line을
  새로 할당하지 않는다.
- NQ_WRITE 응답의 tracker 연관 오류와 CR Error를 sticky `write_service_fault`로 수집해
  ACE top의 `fatal_fault`와 admission 차단에 연결했다. fault 뒤에는 신규 AW, 미발행
  conventional snoop, downstream AW를 모두 정지한다.
- MakeInvalid가 dirty line에서 반환할 수 있는 DataTransfer/PassDirty는 오류로 보지 않는다.
  tagged service가 CD와 dirty writeback을 끝낸 뒤 status를 내므로 Error 비트가 없는 응답은
  write tracker를 정상 완료시킨다.
- admission pool 반환을 owner 검색 방식에서 `owner + exact token tag` 방식으로 변경했다.
  M1 read/write는 ordered ingress의 admission 순서 FIFO, ACE manager는 context별 register,
  EXPLICIT은 활성 요청 register에 tag를 보존한다. stale·duplicate·wrong-owner 반환은 즉시
  `admission_fault`가 되며 top의 fatal/admission 차단에 포함된다.
- EXPLICIT의 이전 release와 다음 allocation이 같은 cycle에 겹치면 새 allocation이 local
  register 갱신에서 우선한다. pool은 반환 token을 같은 cycle에 재할당하지 않으므로 두 요청은
  서로 다른 tag를 사용한다.
- 32-bit saturating cycle counter 5개를 ACE top에 추가했다. 공통 token 부족, M1 read ingress
  depth 부족, M1 write ingress depth 부족, ACE manager context 부족, DMA drain 대기를 구분한다.
  한 요청이 local depth와 token 부족에 동시에 집계되지 않도록 token grant를 기준으로 원인을
  분리한다. ACE 요청도 `drained`가 거짓이면 drain counter에만, drain 뒤 token이 없으면 token
  counter에만 집계한다.
- ACE context counter는 manager의 네 fixed-ID slot을 모두 점유한 뒤 재사용 slot 요청이
  READY를 받지 못하는 cycle을 센다. 이는 DMA와 ACE 사이의 현재 drain 직렬화와 별개로,
  여러 ACE manager transaction 자체가 동시에 outstanding인 경우를 관측한다.

## B1 hit 데이터 보존 위치 결정

최종안은 generic response adapter가 받은 512-bit CD를 B1 read tracker에 복사하는 현재
line-buffer 방식이다. 기본 `M1_READ_TRACKERS=16`에서 고정 8,192 bit(1,024 B)가 추가된다.
이 문서 작성 당시의 setup READ는 tracker를 쓰지 않았다. 단계 5(2026-11-06) ReadRange 구현은 B1과
같은 global line tracker pool을 사용하며 범위 하나가 최대 W개를 창 칸으로 점유한다. 별도 `512 × W`
배열을 더하지는 않으며, 고정 pool 비용을 B1과 R-W가 공유한다. 최신 구조는
`reports/rcci_stage5/STAGE5_RESULTS.md`에 기록했다.

service context 보존안은 tracker의 8,192-bit 복사를 없앨 수 있다. 그러나 완료된 hit가 앞선
miss 또는 R backpressure 뒤에서 기다리는 동안 해당 snoop context를 반환할 수 없다. 기본
`ACE_SNOOP_CONTEXTS=4`에서는 대기 hit 네 개만으로 모든 service context가 점유되어 다섯 번째
snoop이 정지한다. tracker 복사안은 adapter가 데이터를 넘긴 직후 service context를 반환하므로
16개 read tracker의 ordered R 대기와 4개 snoop service context를 분리한다. 이미 검증한 앞 miss·
뒤 hit 역순 완료와 16-entry outstanding 계약을 유지하기 위해 이 처리량 이점을 선택했다.

최신 Vivado 2024.1 OOC synthesis-only 결과는 다음과 같다. 현재 배열은 BRAM으로 추론되지
않았으며 수치는 placement/routing timing sign-off가 아니다.

| 구성 | LUT | FF | BRAM tile |
|---|---:|---:|---:|
| ACE B1 | 29,516 | 20,077 | 0 |
| ACE P | 30,880 | 20,593 | 0 |
| ACE 2-target + filter | 38,864 | 27,604 | 0 |

실행 ID는 `ace_synthesis_20261105T070809Z_342c132e`다. 면적 우선 파생 구성에서는 tracker
data 배열을 reset 대상 control struct와 분리해 LUTRAM/BRAM 추론을 검토할 수 있지만, 이는
기능 계약 변경 없이 수행할 수 있는 후속 최적화다.

## 전용 검증

재현 명령은 다음과 같다.

```sh
python3 scripts/run_rcci_stage4.py
```

| 시험 | 자극·판정 | 결과 |
|---|---|---|
| `write_nq` | B1 AW 두 개를 수락하고 MakeInvalid 요청 두 개의 tracker가 서로 다른지 확인 | PASS |
| `write_nq` 역순 응답 | 두 번째 tracker 응답을 먼저 반환하고 첫 AW가 조기 발행되지 않는지 확인 | PASS |
| `write_nq` ordered AW | 첫 tracker 응답 뒤 AW0, B0, 이어서 AW1, B1 순서와 최종 drain 확인 | PASS |
| legacy 차단 | tagged 모드에서 `ac_valid=0`, `cr_ready=0` 확인 | PASS |
| `mutation_write_rsp_tracker` | 모든 NQ 응답을 tracker 0에 쓰도록 변이 | EXPECTED FAILURE PASS (`WRITE_NQ_OOO_BYPASS`) |
| dirty MakeInvalid | DataTransfer/PassDirty status 뒤 AW가 정상 발행되고 fault가 없는지 확인 | PASS |
| NQ_WRITE Error | 정상 tracker에 Error status를 반환하고 sticky fault, AW/snoop 차단 확인 | PASS |
| `mutation_write_error_fault` | Error status의 sticky fault 대입 제거 | EXPECTED FAILURE PASS (`WRITE_NQ_ERROR_POLICY`) |
| `readonce` | 앞 miss·뒤 hit, hit 응답 선도착, miss RLAST 뒤 hit R 4 beat | PASS |
| `readonce` backpressure | 두 번째 hit beat stall 동안 RID/data/RLAST 안정 | PASS |
| `mutation_readonce_rlast` | hit RLAST를 항상 0으로 고정 | EXPECTED FAILURE PASS (`READONCE_HIT_BEAT`) |
| `mutation_m1_exact_token` | M1 read 반환 token tag를 1비트 변경 | EXPECTED FAILURE PASS (`ADMISSION_BAD_RETURN`) |
| `mutation_manager_exact_token` | ACE read context의 token tag 저장을 0으로 고정 | EXPECTED FAILURE PASS (`ACE_READ_TOKEN_TAG`) |
| token 부족 counter | token 1개를 M1 read R backpressure로 유지하고 M1 AW를 5 cycle 제시 | PASS (`token=5`, 나머지 0) |
| M1 read depth counter | ingress/tracker depth 1, CR hold 상태에서 두 번째 M1 AR을 5 cycle 제시 | PASS (`read_depth=5`, 나머지 0) |
| M1 write depth counter | ingress/tracker depth 1, CR hold 상태에서 두 번째 M1 AW를 5 cycle 제시 | PASS (`write_depth=5`, 나머지 0) |
| ACE drain counter | 미완료 M1 read가 있는 동안 ACE ReadShared를 5 cycle 제시 | PASS (`drain=5`, 나머지 0) |
| ACE context counter | CR hold로 manager context 4개를 채우고 slot 0을 다시 요청 | PASS (`context=5`, 나머지 0) |
| `mutation_admission_counter` | token stall counter 증가 조건을 비활성화 | EXPECTED FAILURE PASS (`COUNTER_TOKEN_CLASSIFY`) |
| `integration_mode0/1` | ACE B1/P 통합 시나리오 | PASS |

기계 판독 결과는 `reports/rcci_stage4/summary.json`에 저장된다.

## 전체 회귀

| 검사 | 결과 |
|---|---|
| `python3 scripts/run_ace.py` | PASS — 69건(정상 18, expected-failure 51), `ace_20261105T065019Z_a6ef9e46` |
| `python3 scripts/run_regression.py` | PASS — 252건(정상 236, expected-failure 16), `simulation_20261105T065019Z_e6b18090` |
| Verilator ACE top lint | PASS — 경고 없음 |
| Python runner 문법 검사 | PASS |
| `python3 scripts/run_ace_synthesis.py` | PASS — Vivado 2024.1 OOC synthesis-only, `ace_synthesis_20261105T070809Z_342c132e` |

비 ACE 회귀에서 새 optional NQ 포트를 사용하는 `.*` testbench 두 곳에는 비활성 tie-off를
추가했다. standalone RTL의 tagged 모드는 꺼져 있으며 기능 결과는 종전과 같다.

## 후속 단계 연결

1. `CPU_RESERVED_TOKENS=0/1` CPU 경쟁 수치는 단계 8의 ACE hazard 연결 뒤 측정한다. 현재 ACE
   manager admission은 `drained` 조건으로 DMA와 직렬화되어 있어, 예약 token이 있어도 active
   DMA 중에는 ACE가 진입하지 못한다. 미사용 상태인 `read_ace_ar_hazard/read_ace_aw_hazard`와
   write tracker의 ACE probe를 연결해 안전한 동시 진입을 허용하기 전에 0/1을 비교하면 예약
   정책이 아니라 전역 drain 정책을 측정하게 된다. 이번에 추가한 `ace_drain_stall_cycles`가 이
   영향을 별도로 수치화한다.

단계 4의 B1 기능 경로, write fault, exact token 계약, stall counter와 hit buffer 선택을 모두
완료했다. 범위 W 분할·B 병합은 단계 6 범위다.
