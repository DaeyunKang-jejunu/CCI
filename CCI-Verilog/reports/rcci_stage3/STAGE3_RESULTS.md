# rCCI 단계 3 구현·검증 결과

작성일: 2026-11-05  
상태: PASS

## 구현 범위

- snoop context tag를 controller 번호로 사용하고 `AUTO`, `EXPLICIT`, `NQ_READ`,
  `NQ_WRITE` owner마다 depth `S`의 status completion queue를 두었다.
- status, dirty data 선택, context release를 분리했다. CD 경로는 `data_select`부터
  `data_done`까지 held-grant를 유지하고 release가 끝난 context만 재사용한다.
- CPU coherent AR/AW, M1 read, M1 write, 외부 EXPLICIT 요청이 기본 16개의 공통
  admission token을 공유한다. 반환 시점은 M1 마지막 R/B, ACE RACK/WACK,
  EXPLICIT 응답과 service release 완료다.
- `CPU_RESERVED_TOKENS` 정책을 추가했다. 기본값은 0이며 1 이상이면 해당 여유를
  M1 read/write admission에서 제외한다.
- NQ dirty `CleanInvalid`의 CD data는 NQ adapter가 소비한 뒤 tracker 응답과 release가
  진행되도록 연결했다.

## 태그 서비스와 지연

전용 testbench는 네 owner의 요청을 겹쳐 넣고 AC/CR/CD 완료와
status/data/release 소비 순서를 다르게 했다.

| 조건 | 확인 결과 |
|---|---|
| owner별 status queue | 한 owner가 status를 보류해도 다른 owner가 진행함 |
| dirty data backpressure | tag와 payload가 `data_done`까지 안정적으로 유지됨 |
| 역순 release | 완료 순서와 다른 tag release가 정확한 context를 해제함 |
| tag 재사용 | release 다음 cycle 이후에만 재할당함 |
| owner 오류 | 다른 owner가 tag를 선택하거나 release하면 fault를 검출함 |

무정지 10 ns clock에서 마지막 CR/CD handshake부터 owner `status_valid`까지 data/no-data
모두 `Lc=2` cycle이었다. 측정값은 `latency.json`에 저장했고 단계 1 C++ 모델과 그래프의
기본값으로 반영했다.

## admission pool 검증 경계

pool 단위 시험은 여러 owner의 동시 할당·반환, token 상한, grant 없는 accept,
exact token tag의 stale/duplicate 반환과 owner 불일치를 검사한다. owner 비교 제거 변이도
검출한다. 단계 4에서 M1 read/write admission 순서 FIFO, ACE manager context, EXPLICIT
register에 실제 token tag를 저장해 완료한 local 요청이 그 tag만 반환하도록 연결했다.

`CPU_RESERVED_TOKENS`의 RTL policy와 parameter 경계는 구현했다. 현재 ACE manager admission은
`drained` 조건으로 DMA와 전역 직렬화되어 있으므로 0/1 구성의 CPU 처리량·대기 비교는 ACE
AR/AW에 read/write tracker hazard를 연결하고 안전한 동시 진행을 허용한 뒤 수행한다.

## 전용 회귀

```sh
python3 scripts/run_rcci_stage3.py
```

| 시험 | 결과 |
|---|---|
| pool 정상 할당·반환 | PASS |
| 네 owner tagged service, backpressure, 역순 release | PASS |
| 다른 owner의 tag 접근 | PASS |
| B1/P ACE integration | PASS |
| C++ 단위 시험과 기본 `Lc=2` | PASS |
| exact tag 중복 반환 | EXPECTED FAILURE PASS |
| exact tag owner 불일치 | EXPECTED FAILURE PASS |
| pool owner 비교 제거 변이 | EXPECTED FAILURE PASS |
| service tag owner 고정 변이 | EXPECTED FAILURE PASS |

기계 판독 결과는 `summary.json`에 저장된다. runner는 이 Markdown 문서를 보존하면서
생성 로그와 JSON만 갱신한다.

## 완료 당시 전체 회귀

| 검사 | 결과 |
|---|---|
| ACE 전체 회귀 | PASS — 69건(정상 18, expected-failure 51) |
| 비 ACE 전체 회귀 | PASS — 252건(정상 236, expected-failure 16) |
| Verilator ACE top lint | PASS |
| Python runner 문법 검사 | PASS |

후속 단계 4의 최신 run ID와 변경 범위는 `reports/rcci_stage4/STAGE4_PROGRESS.md`에
기록한다.
