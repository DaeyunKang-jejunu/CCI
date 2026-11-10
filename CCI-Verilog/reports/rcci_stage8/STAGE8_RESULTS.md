# rCCI 단계 8 결과

실행일: 2026-11-06  
판정: **PASS**

## 구현

- read/write ingress가 M0, ACE manager, 반대 방향 M1 요청을 검사한다. M1 범위 probe는 base line만 보지 않고 `LEN`이 나타내는 전체 byte 구간과 활성 line의 교집합을 계산한다.
- M1 write Error-only CR은 해당 line의 W 4 beat를 받아 버리고 메모리 AW/W를 만들지 않으며, line B를 SLVERR로 합성한다. WriteRange adapter는 이를 최종 B에 병합한다.
- M1 read Error-only CR은 메모리 AR 없이 zero data/SLVERR 4 beat를 만들고 최종 범위 line에서만 RLAST를 낸다.
- Error와 DataTransfer 또는 PassDirty가 함께 오면 `ace_snoop_controller`가 CD를 기다리지 않고 즉시 fail-stop으로 들어간다.
- barrier/DVM/explicit maintenance만 drain을 요구한다. 일반 ACE 요청은 활성 M1 line과 겹치지 않으면 수락될 수 있다. 이미 활성인 ACE manager가 있는 동안 새 M0/M1 admission은 현재 보수적으로 정지한다.
- reset은 ingress, tracker, error-drain B 상태를 폐기하며 reset 뒤 새 요청에서 이전 응답을 재사용하지 않는다.
- explicit 요청 종료 뒤 drain latch가 남던 상태 버그를 함께 수정했다.

## 검증 결과

`python3 scripts/run_rcci_stage8.py` 결과는 [results.json](results.json)에 기록했다.

| 구분 | 결과 |
|---|---:|
| 정상 simulation | 6 PASS |
| simulation mutation | 6 expected-failure PASS |
| formal 전체 | 18 PASS/expected-failure PASS |
| 전체 ACE 회귀 | 68 PASS/expected-failure PASS |
| Vivado OOC synthesis-only | 10개 구성 PASS |

정상 simulation 6건은 write/ACE/M1 양방향 hazard, ReadRange 대 WriteRange의 전체 span overlap, read/write Error-only, Error+Data fatal, reset 복구, 같은 line ACE 차단과 다른 line ACE/M1 동시 outstanding을 포함한다. 1/8/64-line 및 W=1/4/8 경계 검증은 단계 5·6 회귀에서 다시 통과했다.

Mutation은 ACE write hazard 제거, M1 read span hazard 제거, write Error-only drop 제거, read span을 base-line 비교로 축소, 일반 ACE에 전역 drain 재도입, Error+Data fatal 제거를 각각 검출했다.

## Formal 범위와 수치

| 항목 | 값 | 근거 |
|---|---:|---|
| 대상 | tagged coherent line write 1개 | range adapter 밖의 line FSM 진행성 분리 검증 |
| ready stall | 0 cycle | harness가 NQ/out/drop을 항상 수락하는 강한 환경 가정 |
| `CR_LAT` | 3 cycle | NQ handshake 뒤 허용한 응답 상한 |
| `B_LAT` | 3 cycle | normal issue 또는 Error-only drain 뒤 B 상한 |
| property `BOUND` | 14 cycle | allocation/scheduling 여유 8 + CR 3 + B 3 |
| BMC depth | 20 | reset 1 cycle과 bound 이후 위반 관측 포함 |

정상 경로와 Error-only 경로 모두 `BOUND` 안에 retire됨을 증명했고, NQ completion을 제거한 mutation이 같은 property를 깨는 것을 확인했다. 이 증명은 64-line top 전체, CD/R/RACK/WACK를 포함한 시스템 liveness 증명이 아니다. 64-line 완료와 mixed hit/miss, RLAST/B 병합은 directed simulation으로 확인했다.

## 남은 구조적 제한

- ACE manager의 활성 주소 CAM을 M0/M1 admission에 직접 공개하지 않으므로, **ACE가 이미 활성인 동안 새 M0/M1은 주소와 무관하게 대기**한다. 반대 방향인 “활성 M1 중 일반 ACE 수락”은 line hazard로 완화했다. 완전한 양방향 line-granular 동시 admission에는 manager context 주소 CAM 출력과 v9 arbiter의 M0 outstanding 주소 CAM이 추가로 필요하다.
- formal의 ready stall은 0으로 고정했다. backpressure가 있는 whole-top bounded liveness는 후속 proof 범위다.

Vivado 결과는 synthesis-only OOC 확인이며 배치·배선 timing sign-off를 뜻하지 않는다.
