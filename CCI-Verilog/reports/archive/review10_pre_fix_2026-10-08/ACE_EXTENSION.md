# ACE snoop / CD 확장

2026-10-07. 기존 v9의 MakeInvalid-only 실험 경로를 보존하면서 `axi_cci_ace_top`을 추가했다. 새 top은 v9의 AXI/CCI 제어 경로, 5-bit CRRESP, CD, dirty writeback에 더해 ACE initiating-manager의 ARSNOOP/AWSNOOP/DOMAIN 요청을 AC snoop과 메모리 접근으로 변환한다. DVM Message/Complete, barrier pair, shareable exclusive와 최대 2개 cached target의 snoop 집계·선택적 filter도 포함한다. 새 endpoint는 `ace_cache_snoop_endpoint`이다. 기존 `m0_snoop_endpoint`는 이전 면적 비교용 clean responder로 남긴다.

## 확인한 공백과 구현

| 기존 공백 | 추가 구현 |
|---|---|
| MakeInvalid만 생성/응답 | 8종 cache snoop decoder 및 상태 전이 |
| 2-bit 정상/오류 CR | 5-bit CRRESP: DataTransfer, Error, PassDirty, IsShared, WasUnique |
| cache 데이터/dirty 상태 없음 | 64-byte direct-mapped line storage, I/SC/UC/SD/UD, local probe/install/store/clean eviction |
| CD 없음 | 128-bit CDDATA, CDVALID/CDREADY/CDLAST, 4-beat line snapshot |
| CR/CD 순서 처리 없음 | CR와 CD를 독립적으로 수락; CD가 CR보다 먼저 완료되는 경우도 처리 |
| dirty 보존 경로 없음 | PassDirty의 64-byte 데이터를 AXI INCR writeback하고 실제 B 이후 완료 |
| 기존 작업과 새 요청 간 순서 없음 | v9 ingress/range/AXI 응답 drain 후 유지보수 요청 수락, 완료까지 신규 AW/AR/setup 보류 |
| 실패 후 재사용으로 dirty 데이터 소실 가능 | writeback B 오류에서 데이터 보존, fault latch, 후속 요청 차단 |
| initiating master의 ACE 요청 포트 없음 | `ACE_AR*`/`ACE_AW*`/R/W/B와 ARSNOOP/AWSNOOP/DOMAIN/BAR/CACHE/LOCK/AWUNIQUE 추가 |
| 요청과 AC snoop의 자동 변환 없음 | IHI 0022H D5-1 매핑과 snoop→dirty writeback→메모리 접근 순서를 직렬 제어 |
| transaction completion acknowledge 없음 | 최종 R/B handshake 뒤 RACK/WACK까지 해당 manager context와 response owner 유지 |
| DVM·barrier·exclusive 거부 | DVM AC 전파, read/write barrier pair, ID+line PoS exclusive monitor와 EXOKAY |
| snoop target 1개 | 2-target broadcast/CR·CD aggregation, 명시적 directory update 기반 filter |
| ACE manager 단일 transaction | ID 고정 4-context bank, 같은 ID 직렬화, 다른 context의 R/B out-of-order 완료 |
| AC/CR/CD 단일 transaction | endpoint·fabric·service의 ordered 4-context FIFO와 target별 association |

인코딩·응답 비트·허용 상태 전이·채널 의존성은 [Arm IHI 0022H](https://developer.arm.com/-/media/Arm%20Developer%20Community/PDF/IHI0022H_amba_axi_protocol_spec.pdf)의 D3.6~D3.9, D5.3, D6.5를 기준으로 확인했다. 구현은 허용 정책 중 다음 하나를 선택한다. 여기서 dirty는 SD/UD이며 miss는 모두 DataTransfer 없이 응답한다.

| ACSNOOP | 연산 | hit 시 CD | 종료 상태 | PassDirty |
|---|---|---|---|---|
| 0 | ReadOnce | 항상 | 기존 상태 유지 | 0 |
| 1 | ReadShared | 항상 | SC | 기존 dirty 여부 |
| 2 | ReadClean | 항상 | SC | 기존 dirty 여부 |
| 3 | ReadNotSharedDirty | 항상 | SC | 기존 dirty 여부 |
| 7 | ReadUnique | 항상 | I | 기존 dirty 여부 |
| 8 | CleanShared | dirty만 | SC | 기존 dirty 여부 |
| 9 | CleanInvalid | dirty만 | I | 기존 dirty 여부 |
| 13 | MakeInvalid | 없음 | I | 0 |
| 14 | DVM Complete | 없음 | cache 상태 유지 | 0 |
| 15 | DVM Message | 없음 | cache 상태 유지 | 0 |

IsShared는 유효 사본을 유지할 때, WasUnique는 snoop 전 UC/UD일 때 설정한다. MakeInvalid의 dirty 데이터 폐기는 기존 v9의 full-line overwrite 계약에 사용한다. 부분 write에 MakeInvalid를 재사용하면 안 된다. 새 요청 경로에서도 해당 opcode의 폐기 의미를 호출자가 보장해야 한다.

## 연결 방법

```sh
# 두 file list를 함께 사용한다.
verilator --lint-only --timing --assert -f scripts/rtl.f -f scripts/ace.f --top-module axi_cci_ace_top
make test-ace       # Verilator service/통합/변이 + XSim 교차검증 (WSL/Windows Vivado)
python3 scripts/run_ace.py  # Verilator만 실행할 때
make synth-ace     # 별도 synthesis-only 확인
python3 scripts/run_ace_implementation.py  # B1/P/2-target+filter OOC place/route
```

`axi_cci_ace_top`의 기존 S_* 포트와 WB_* 포트는 **동일한 메모리/주소 공간**에 연결해야 한다. WB_*를 다시 snooping ingress에 연결하지 않는다. WB 포트는 snoop dirty writeback과 initiating-manager의 실제 memory access가 공유하는 ID-less 단일-outstanding 포트이다. snoop writeback은 128-bit, AWLEN=3, AWSIZE=4, AWBURST=INCR, WSTRB=all-ones이다. manager access는 요청의 LEN/SIZE/BURST와 WSTRB를 전달하고 WB_AR/R도 사용한다. 일반 AXI 버스에 접속할 때 고정 ID와 응답 routing을 외부 어댑터에서 제공한다.

주소 공간은 하나의 security domain으로 한정한다. ACPROT/DOMAIN에 따른 secure/non-secure cache tagging은 추가하지 않았다.

새 AC/CR/CD 포트를 `ace_cache_snoop_endpoint` 또는 같은 계약의 외부 cached master에 연결한다. `CACHED_MASTERS=1`은 기존 AC/CR/CD만 사용하고 fabric을 우회하며, 2이면 AC1/CR1/CD1을 함께 사용한다. `ace_snoop_fabric`은 두 target의 CR/CD를 독립 수집하고 동일한 clean data 중 하나를 선택한다. 서로 다른 data, 둘 이상의 PassDirty, 잘못된 CD framing은 오류다. `USE_SNOOP_FILTER=1`이면 `SF_UPDATE_*`가 authoritative directory이므로 모든 allocation/eviction을 빠짐없이 알려야 한다. direct-mapped directory에서 유효한 line과 다른 tag가 같은 index에 충돌하면 target이 같아도 그 index는 reset까지 conservative broadcast로 전환되어 false negative를 피한다. 새 tag로 정확히 교체하려면 기존 line의 absent update로 entry를 비운 뒤 present update를 보내야 한다. `SF_UPDATE_VALID`는 같은 cycle의 AC보다 우선한다. update cycle에는 `ACREADY`를 내리고, 유지된 AC는 다음 cycle 이후 갱신된 directory로 target을 고른다. 따라서 update와 AC가 겹치는 것은 오류가 아니며 외부가 별도로 피할 필요가 없다. DVM은 directory와 무관하게 모든 active target으로 전파한다.

CDVALID는 CRREADY/CDREADY를 기다리지 않는다. endpoint는 AC handshake 때 context별 line snapshot과 CR metadata를 보관하며 CR 또는 CD가 보류되어도 payload를 유지한다. endpoint와 fabric은 기본 깊이 4까지 새 AC를 먼저 수락하고, 무ID CR/CD는 AC 수락 순서로 반환한다. fabric은 target마다 가장 오래된 미완료 context에 CR/CD를 연결하고 upstream에도 원래 AC 순서를 유지한다.

top은 manager가 자동 생성한 snoop과 외부 `req_*` snoop을 같은 service에 넣되, 기본 깊이 4의 owner FIFO로 수락 순서를 기록한다. service의 ordered response는 FIFO head에 따라 manager 또는 외부 `rsp_*`로 전달된다. service dirty writeback과 manager memory write가 공유하는 ID-less WB write 포트는 별도 valid/owner를 AW부터 실제 B까지 유지하며 한 번에 하나만 진행한다.

`req_valid/req_ready`, `req_addr`, `req_snoop`가 명시적 snoop 요청 인터페이스이다. `rsp_valid/rsp_ready`는 CD와 필요한 writeback B까지 완료된 결과를 전달한다. `rsp_resp`는 **원본 CR 메타데이터**이며 최종 AXI RRESP가 아니다. PassDirty가 1인 원본 CR을 반환하더라도 이 service는 이미 writeback을 완료한 뒤 응답한다. 이를 initiating master의 dirty 책임 이전 비트로 복사하면 안 된다. `rsp_data`는 DataTransfer=1일 때 유효한 512-bit snapshot이다.

### ACE initiating-manager 요청

`ACE_AR*`와 `ACE_AW*`는 기본 4개 context에서 처리한다. ID 하위 비트를 고정 context에 매핑하므로 같은 ID와 같은 context로 충돌하는 ID는 앞 transaction의 RACK/WACK까지 직렬화되고, 다른 context의 ID는 동시에 진행한다. R/B owner는 첫 response부터 RACK/WACK까지 고정하며 서로 다른 context는 완료 준비 순서에 따라 out-of-order로 응답할 수 있다. AXI4 W는 WID가 없으므로 AW 수락 순서를 유지한다. Barrier와 DVM은 모든 일반 context가 빈 때 수락하는 전역 ordering operation이다. manager가 하나라도 active인 동안 기존 M0/M1/setup 신규 admission은 정지하지만, drain 후 여러 ACE 요청은 context 여유 범위에서 추가 수락한다. 구현한 권장 매핑은 다음과 같다.

| initiating 요청 | 발생 AC | 데이터/메모리 동작 |
|---|---|---|
| ReadShared | ReadShared | snoop CD가 있으면 4-beat R로 반환, 없으면 WB_AR/R로 memory read |
| ReadUnique | ReadUnique | 위와 같고 snooped copy는 Invalid |
| CleanUnique | CleanInvalid | dirty CD를 memory에 기록하고 데이터 없는 단일 R 응답 |
| WriteUnique | CleanInvalid | dirty writeback 완료 후 요청 WSTRB write; partial line 허용 |
| WriteBack | 없음 | 요청 데이터를 memory에 기록 |
| Evict | 없음 | W와 memory access 없이 B 응답 |
| DVM Message / Complete | 같은 DVM opcode | target의 CR을 모아 데이터 없는 단일 R 응답 |
| exclusive ReadShared / ReadClean | 같은 read snoop | ID+line monitor를 등록하고 성공 RRESP=EXOKAY |
| exclusive CleanUnique | CleanInvalid 또는 없음 | monitor match면 전파 후 EXOKAY, miss면 side effect 없이 OKAY |
| memory / synchronization barrier | 없음 | 같은 BAR/DOMAIN의 AR+AW pair를 받은 뒤 독립 R/B 응답, RACK+WACK 후 종료 |

같은 decoder는 ReadOnce/ReadClean/ReadNotSharedDirty/MakeUnique, cache-maintenance CleanShared/CleanInvalid/MakeInvalid, WriteLineUnique/WriteClean/WriteEvict도 인코딩한다. AxBAR=2는 barrier가 아니라 barrier ordering을 무시하는 정상 요청으로 처리한다. barrier는 주소 0, LEN=0, data-bus SIZE, INCR, CACHE=0010, LOCK=0, SNOOP=0을 요구한다. DVM은 LEN=0, data-bus SIZE, INCR, CACHE=0010, shareable DOMAIN을 요구하며 Complete 주소는 0이어야 한다. DVM 메시지는 주소 전체가 encoding이므로(표 D13-10의 [5:0] ASID/VA valid, Leaf, Stage 포함) ARADDR을 그대로 ACADDR로 전달한다. 2-part DVM(ARADDR[0]=1)은 part pair와 Complete lifecycle용 별도 context를 아직 구현하지 않아 지원하지 않는다. part 1과 바로 다음 AR인 part 2에 같은 단일-beat SLVERR을 반환하고 snoop하지 않는다.

barrier의 R/B는 서로 독립적으로 완료되며, RACK/WACK는 각자의 응답이 끝난 다음 cycle부터 받는다(D3.3). 다른 채널의 응답이 아직 보류 중이어도 ACK pulse를 놓치지 않는다.

현재 manager data path는 128-bit beat, 64-byte line, 기본 4 outstanding context로 제한한다. coherent read와 데이터 없는 line operation은 64-byte 정렬, `LEN=3`, `SIZE=4`, INCR을 요구한다. WriteUnique와 memory-update write는 16-byte beat의 INCR이며 한 cache line을 넘지 않아야 한다. `AxCACHE[1]`은 Modifiable이어야 한다. 잘못된 DOMAIN/opcode/shape는 AC나 memory side effect 없이 오류 R/B로 완료한다. 오류 응답도 burst 형식을 지킨다. 데이터 없는 요청(CleanUnique, MakeUnique, CleanShared, CleanInvalid, MakeInvalid, DVM)만 1 beat이고 나머지 read는 ARLEN+1 beat이다. 오류 write는 Evict를 제외하면 W beat를 모두 소비한 뒤 B를 반환한다. AxBAR=2 요청도 같다. ReadShared/ReadUnique가 dirty CD를 받으면 service가 먼저 memory writeback하므로 최종 RRESP의 PassDirty는 0으로 반환한다. WB memory 포트에는 ID가 없어 read와 write 방향별 memory transaction은 각각 직렬화되며, dirty writeback도 한 번에 하나다. Snooping과 memory access, 그리고 read/write 방향은 서로 병렬 진행할 수 있다.

Shareable exclusive는 IHI 0022H D9에 따라 ARLOCK ReadShared/ReadClean과 ARLOCK CleanUnique를 사용한다. AWLOCK WriteUnique를 exclusive store로 해석하지 않는다. ID별 line monitor는 M0/M1 write admission에 의해 무효화된다. 이 monitor는 현재 top의 한 initiating interface와 그 ID thread를 위한 PoS subset이다.

`quiescent`는 시스템이 cached master의 local access 및 미완료 refill 의무까지 정지·정리했다는 외부 grant이다. wrapper는 추가로 실제 AXI B/RLAST, ingress, range, setup drain을 확인한다. write/read pending은 M0/M1 경계에서 handshake마다 세므로 M0 AW(arbiter)와 M1 AW(ingress)가 같은 cycle에 수락돼도 둘 다 반영된다. grant는 maintenance_busy 동안 유지한다. busy 중 새 AXI AW/AR/setup은 backpressure되며 기존 응답 채널을 임의로 차단하지 않는다. 여러 cache/master에 대한 coherence ordering은 이 grant만으로 구현되지 않는다.

local endpoint 명령은 0=probe, 1=install, 2=unique line store, 3=clean eviction이다. install의 state는 상위 cache-fill/permission 제어기가 정한다. shared line store는 거부하며, dirty victim은 동일 tag에 대한 reinstall도 거부한다. 먼저 CleanInvalid/clean 절차로 dirty 데이터를 회수해야 한다. 이 포트 자체가 AXI refill/ownership 획득 프로토콜은 아니다.

## 오류 및 reset

- 미지원 opcode와 비정렬 주소는 CR Error를 반환하며 line을 변경하지 않는다.
- CDLAST 위치 오류, PassDirty without DataTransfer 등의 불일치는 fault로 중지한다.
- legacy MakeInvalid의 CR 오류 또는 예상 밖 DataTransfer/PassDirty는 v9 CR retirement를 보류하고 fault·신규 admission 차단을 유지한다. 오류를 정상 invalidation 완료로 전달하지 않는다.
- writeback B 오류는 완료에 Error를 표시하고 수집한 line을 계속 보존한다. 이후 요청과 v9 신규 admission은 차단한다. reset 전에 소프트웨어/상위 복구기가 데이터를 회수해야 한다. 자동 retry/abort 복구는 구현하지 않았다.
- `fault`는 sticky fatal 상태이다: snoop service fault, fabric 무결성 오류, manager `ACE_PROTOCOL_ERROR`(DVM part-2 association, memory RLAST/manager WLAST framing, 비정상 FSM state) 중 하나라도 발생하면 reset 전까지 M0/M1/setup, 명시적 snoop 요청, 새 ACE AR/AW를 받지 않는다. 진행 중인 transaction의 R/B와 RACK/WACK는 끝까지 배출한다. 비지원 요청·shape 오류에 돌려주는 transaction-level SLVERR는 fatal이 아니다.
- reset은 transaction과 cache 상태를 폐기하는 cold-reset 계약이다. dirty 상태를 보존하는 warm reset을 의미하지 않는다.

## 검증과 결과의 범위

`tb_ace_snoop_service`는 8 opcodes × 5 cache states의 40개 경우를 독립 oracle로 검사한다. CR/CD의 양쪽 순서, CR/CD/AW/W/B/완료 backpressure, 실제 memory bytes, state transition, unique store, dirty eviction 거부, 미지원 opcode, drain grant, reset, writeback 오류 보존을 확인한다.

`tb_ace_manager_transactions`는 기존 여섯 요청에 DVM Message/Complete, exclusive load/store 성공·실패·intervening write, 두 barrier 종류와 양쪽 pair 도착 순서, AxBAR=2를 실제 cache와 byte memory에 연결해 검사한다. 2026-10-06 보완으로 DVM payload 보존, 2-part DVM 두 part의 동일 오류 응답, AxBAR=2 오류 write의 W 전량 소비와 오류 read의 ARLEN+1 beat, B보다 먼저 온 spec 타이밍 RACK을 받는 barrier도 검사한다.

`tb_ace_snoop_fabric`은 2-target broadcast, 동일 clean data 선택, 단일 dirty owner, DVM broadcast, filter hit/miss, 다른 target 및 같은 target의 tag collision fallback, update/AC ordering, 서로 다른 cache data 오류를 검사한다.

`tb_ace_manager_outstanding`은 manager context peak 2, 같은 ID 재수락 차단, 느린 ID 0 ReadShared보다 ID 1 ReadNoSnoop의 R이 먼저 완료되는 순서 `1→0`, 느린 ID 2 WriteUnique보다 ID 3 Evict의 B가 먼저 완료되는 순서 `3→2`, RACK/WACK 이후 전체 drain을 검사한다. 또한 기존 WriteBack의 마지막 W pop과 다음 WriteBack AW push를 같은 cycle에 만들어 W-order FIFO의 동시 count 갱신과 두 transaction의 drain을 검사한다. `tb_ace_snoop_outstanding`, `tb_ace_snoop_pipeline`, `tb_ace_snoop_service_outstanding`은 각각 endpoint, 2-target fabric, 전체 snoop service에서 응답을 막은 채 4개 요청을 수락해 peak 4를 만든 뒤 ordered CR/response와 drain을 확인한다.

`tb_cci_ace_integration`은 B1/P에서 legacy MakeInvalid, drain, dirty CD/writeback과 top의 자동 ReadShared/WriteUnique 경로, 같은 cycle의 M0/M1 AW 이후 pending 카운터 복귀·두 exclusive reservation 무효화·유지보수 요청 수락을 검사한다. expected-failure 변이는 기존 28종에 같은-ID gate 제거, endpoint/fabric 직렬화 복원, snoop owner association 붕괴, W FIFO 동시 count 결함, top auto/explicit owner 붕괴를 더한 34종이며 각각 독립 marker로 검출한다.

실행 근거는 `reports/latest_ace.json`, `reports/latest_ace_synthesis.json`, `reports/latest_ace_implementation.json`의 manifest이다. 최신 다중-context 실행은 `ace_20261007T085201Z_c07dfa59`이며 Verilator 정상 12건, XSim 정상 12건과 의도된 실패 34건을 모두 통과했다. synthesis-only 실행 `ace_synthesis_20261007T085651Z_35e4d45b`도 새 bank와 B1/P/2-target top을 통과했다. B1/P top은 각각 18590/11519, 19403/11981 LUT/FF이고 manager bank는 10871/6421, controller bank는 4433/2467 LUT/FF다. 같은 source의 `ace_implementation_20261007T090351Z_5768748f`는 B1 18627/11519(WNS/WHS +0.554/+0.008 ns), P 19459/11981(+0.556/+0.010 ns), 2-target+filter 28546/19053(+0.274/+0.003 ns)를 5 ns에서 완전 배선하고 timing·DRC gate를 통과했다.

직접 OOC top의 외부 pin 경로는 제외하고 내부 register-to-register 경로만 timing 판정했으므로 외부 인터페이스와 board clock/reset sign-off는 아니다. 기존 v9의 LUT +782 / FF +462는 이 ACE 확장을 포함하지 않는다.

## 아직 지원하지 않는 ACE 전체 기능

3개 이상 cached target, requester 자기 자신을 제외하는 multi-interface routing, 같은 ID의 다중 outstanding, ID-less WB memory 자체의 out-of-order, 2-part DVM 메시지(현재 오류 응답), DVM Sync의 참여자별 Complete lifecycle/최대 256 outstanding, ACPROT security-domain tagging, 실제 CPU cache의 자동 refill/permission 상태 갱신, dirty 자동 eviction과 자동 오류 복구는 별도 기능이다. filter는 명시적 update 계약을 지키는 2-target direct-mapped directory이며 일반 cache hierarchy directory가 아니다. RACK/WACK와 barrier ordering은 전역 직렬화 subset이다. 이 구현을 full ACE compliance 또는 전체 시스템 coherence proof로 표현하지 않는다.
