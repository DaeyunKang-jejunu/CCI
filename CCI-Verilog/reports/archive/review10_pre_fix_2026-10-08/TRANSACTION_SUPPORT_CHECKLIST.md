# AXI–CCI 트랜잭션 지원 체크리스트 (v9 + ACE 확장)

작성: 2026-10-07 (ACE 2차 확장 및 v9 검증 확장 반영 개정). 진입점 두 개를 나란히 비교한다.

| 진입점 | 구성 | 용도 | 근거 실행 |
|---|---|---|---|
| **v9** `rtl/top/axi_cci_top.sv` (`axi_b0_top` / `axi_b1_conventional_top` / `axi_p_range_top`) | B0 / B1 / P | 기존 면적 비교(DUT P−B1 +782 LUT / +462 FF), MakeInvalid-only clean responder | `simulation_20261007T022652Z_15dd917a`, `xsim_20261007T022652Z_0d59eab1`, `implementation_20261006T055930Z_371870a6` |
| **ACE** `rtl/ace/axi_cci_ace_top.sv` | B1 / P (`USE_RANGE`) | v9 core + cache/DVM snoop, CD/dirty writeback, barrier/exclusive, 2-target filter, 4-context manager/snoop | `ace_20261007T085201Z_c07dfa59` (Verilator 12 + XSim 12 + 변이 34), `ace_synthesis_20261007T085651Z_35e4d45b`, `ace_implementation_20261007T090351Z_5768748f` |

ACE top은 v9 `axi_cci_top`을 그대로 `core`로 인스턴스하고, 그 AC/CR 포트를 `cci_ace_snoop_service`(→ `ace_snoop_controller`)에 연결한다. 외부의 cached master 측은 `ace_cache_snoop_endpoint` 또는 같은 계약을 따르는 모듈이다.

## 표기

| 기호 | 의미 |
|---|---|
| ✅ | 합성 RTL이 지원하고 회귀에서 검증함 |
| ⚠️ | 조건부 지원, 또는 검증 범위가 제한적 |
| 🧪 | simulation assertion으로만 처리(fail-fast). 하드웨어 기능은 아님 |
| 🛑 | 하드웨어가 오류를 검출해 fault로 멈추고 데이터를 보존함(자동 복구는 없음) |
| ❌ | 미지원(포트·인코딩·로직 없음) |
| — | 해당 구성에 없음 |

---

## 1. 채널과 신호

| 항목 | v9 | ACE | 비고 |
|---|:---:|:---:|---|
| M0/M1/S의 AW·W·B·AR·R 5채널 | ✅ | ✅ | ACE top도 v9 core의 포트를 그대로 사용 |
| AxID 4b (slave 측 route bit 포함 5b), AxADDR 64b, AxLEN 8b, xDATA 128b | ✅ | ✅ | COHERENT 구성은 64b/128b 고정 |
| M0/M1/S 포트의 AxSIZE / AxBURST / WSTRB | ❌ | ❌ | full-width INCR로 가정 |
| AxLOCK, AxCACHE, AxPROT, AxQOS, AxREGION, AxUSER | ❌ | ⚠️ | ACE manager 전용 port는 AxLOCK/AxCACHE를 받고 검증. PROT/QOS/REGION/USER는 없음 |
| **ACE 요청 측 ARSNOOP / AWSNOOP / AxDOMAIN / AxBAR** | ❌ | ✅ | DVM, barrier pair, normal AxBAR=0/2 포함 |
| RACK / WACK | ❌ | ✅ | 최종 R/B handshake 후 ACK까지 busy/직렬화 유지. barrier는 R/B가 따로 끝나도 각 ACK를 바로 받음(D3.3) |
| AC 채널 (ACVALID/READY/ADDR 64b/SNOOP 4b) | ✅ | ✅ | |
| CR 채널 응답 폭 | ⚠️ 2b | ✅ 5b | ACE: [0] DataTransfer, [1] Error, [2] PassDirty, [3] IsShared, [4] WasUnique |
| CD 채널 (CDVALID/READY/DATA 128b/LAST) | ❌ | ✅ | line당 4 beat |
| ACPROT | ❌ | ❌ | 단일 security domain |
| Range setup side-band (`setup_*`) | ✅ P | ✅ P | ACE top에서는 유지보수 중 `setup_ready=0` |
| Snoop 요청/완료 인터페이스 (`req_*` / `rsp_*`, 512b `rsp_data`) | — | ✅ | 8종 snoop을 명시적으로 요청하는 포트 |
| 공유 memory 포트 (`WB_AW/W/B`, `WB_AR/R`) | — | ✅ | snoop dirty writeback과 ACE manager memory access가 공유. ID 없음, outstanding 1. S_*와 **같은 메모리**에 연결 |
| `quiescent` grant, `maintenance_busy`, `fault` | — | ✅ | |

## 2. AXI 트랜잭션 속성

| 항목 | v9 | ACE | 비고 |
|---|:---:|:---:|---|
| 2 master → 1 slave round-robin, grant lock | ✅ | ✅ | |
| multiple outstanding (AXI depth 16) | ✅ | ✅ | ACE manager 기본 4 context, snoop endpoint/fabric/service 기본 4 context. ACE active 동안 기존 M0/M1/setup은 보류 |
| in-order 응답 (B는 AW 순서, R은 AR 순서) | ✅ | ⚠️ | ACE는 같은 ID/context를 ACK까지 직렬화하지만 서로 다른 context의 R/B는 완료 준비 순서로 반환 |
| ID 간 out-of-order 완료 | ❌ | ✅ | `tb_ace_manager_outstanding`: R ID 1→0, B ID 3→2 |
| 자동 manager / 외부 explicit snoop 응답 association | — | ✅ | top owner FIFO, auto 뒤 explicit 교차 수락 후 ACE R와 `rsp_*` routing 검사 |
| FIXED / WRAP burst, narrow, unaligned | ❌ | ❌ | manager 구현은 128-bit beat INCR만 지원 |
| 부분 write / WSTRB | ❌ | ✅ | ACE WriteUnique 및 memory-update write, 한 64B line 내부로 제한 |
| exclusive access (EXOKAY) | ❌ | ✅ | shareable ARLOCK ReadShared/ReadClean/CleanUnique, ID+line monitor |

## 3. Master·방향별 트랜잭션

M0는 CPU 측 cached master(snoop 대상), M1은 DMA master이다.

| 트랜잭션 | v9 B0 | v9 B1/P | ACE B1/P | 동작 / 제약 |
|---|:---:|:---:|:---:|---|
| **M1 write** | ✅ | ⚠️ | ⚠️ | B1/P: 모든 M1 write가 coherent write다. 64B 정렬 + `AWLEN=3` full line만 허용(🧪). 무효화(MakeInvalid) 완료 후 downstream으로 발행하고 실제 B에서 retire |
| **M1 read** | ✅ | ⚠️ | ⚠️ | coherence 동작 없음(snoop·hazard 검사 없음). P는 setup drain 동안, ACE는 유지보수 중 신규 수락을 멈춤 |
| **M0 read / write** | ✅ | ⚠️ | ⚠️ | M0 자신은 snoop되지 않는다. 진행 중인 M1 coherent write와 같은 line이면 실제 B까지 차단. burst는 64B line 안에 있어야 함(🧪) |
| M0의 AXI 접근이 cache 모델에 반영됨 | — | ❌ | ❌ | ACE endpoint의 cache 내용은 별도 `local_*` 명령(probe/install/store/evict)으로만 바뀐다. M0 AXI read/write와 연동되지 않음 |
| 별도 ACE manager ReadShared/ReadUnique/CleanUnique | — | — | ✅ | ARSNOOP/DOMAIN을 decode하고 AC/CD 또는 memory R로 완료 |
| 별도 ACE manager WriteUnique/WriteBack/Evict | — | — | ✅ | WriteUnique만 CleanInvalid; WriteBack/Evict는 다른 cache를 snoop하지 않음 |
| 2개 cached master | — | ❌ | ✅ | `CACHED_MASTERS=2`, CR/CD 집계. 3개 이상은 미지원 |

## 4. Snoop 트랜잭션 (AC → CR / CD)

### 4.1 ACSNOOP 종류

ACE cache snoop 8종과 DVM 2종을 지원한다.

| ACSNOOP | 연산 | v9 | ACE | ACE hit 시 동작 (miss는 모두 CR=0, CD 없음) |
|---:|---|:---:|:---:|---|
| 0 | ReadOnce | ❌ | ✅ | CD 전송, 상태 유지, IsShared=1, PassDirty=0 |
| 1 | ReadShared | ❌ | ✅ | CD 전송 → SC. dirty였으면 PassDirty=1 → writeback |
| 2 | ReadClean | ❌ | ✅ | 〃 |
| 3 | ReadNotSharedDirty | ❌ | ✅ | 〃 |
| 7 | ReadUnique | ❌ | ✅ | CD 전송 → I. dirty였으면 PassDirty=1 → writeback |
| 8 | CleanShared | ❌ | ✅ | dirty일 때만 CD+PassDirty → SC, IsShared=1 |
| 9 | CleanInvalid | ❌ | ✅ | dirty일 때만 CD+PassDirty → I |
| 13 | MakeInvalid | ✅ | ✅ | CD 없음 → I. **dirty 데이터는 버린다**(full-line overwrite 전용). WasUnique는 snoop 전 상태가 UC/UD면 1 |
| 14 / 15 | DVM Complete / DVM Message | ❌ | ✅ | cache line을 보지 않고 CR=0. Complete는 주소 0 요구. 1-part 메시지만 지원하며 ARADDR 전체를 ACADDR로 전달 |
| 그 밖의 코드, 비정렬 주소 | ❌ | 🛑 | 〃 |

### 4.2 누가 어떤 snoop을 발행하는가

| 발행 경로 | v9 | ACE | 내용 |
|---|:---:|:---:|---|
| **legacy 경로**: M1 coherent write에 따른 conventional MakeInvalid(B1/P), range MakeInvalid(P) | ✅ | ⚠️ | MakeInvalid만 허용(🧪 `LEGACY_REQUIRES_MAKEINVALID`). ACE에서는 CR Error·DataTransfer·PassDirty가 오면 🛑 fault로 멈추고 v9 retire를 보류함 |
| **유지보수 경로**: `req_*`로 8종 snoop 중 하나를 명시적으로 요청 | — | ✅ | 결과는 `rsp_*`로 반환(CR 메타데이터 + 512b line). **AXI R 채널로 돌려주지 않음** |
| initiating manager의 ReadShared·ReadUnique·CleanUnique 자동 변환 | ❌ | ✅ | 각각 ReadShared, ReadUnique, CleanInvalid AC. CleanUnique는 데이터 없는 단일 R |
| WriteUnique·WriteBack·Evict 자동 처리 | ❌ | ✅ | 각각 CleanInvalid+write, no-snoop memory write, no-snoop/no-W B response |
| DVM Message/Complete | ❌ | ⚠️ | active target 전체에 같은 AC 전파, CR 집계 후 데이터 없는 R. 2-part(ARADDR[0]=1)는 두 part 모두 같은 SLVERR, snoop 없음 |
| barrier pair | ❌ | ✅ | memory/synchronization AR+AW pair, R/B 독립 backpressure와 RACK/WACK |
| shareable exclusive | ❌ | ✅ | ARLOCK load 등록, CleanUnique pass/fail 및 EXOKAY/OKAY |

### 4.3 Snoop 처리 방식

| 항목 | v9 | ACE | 비고 |
|---|:---:|:---:|---|
| 동시에 진행 중인 snoop 수 | 최대 AC FIFO(16) | 기본 **4** | endpoint·fabric·service context bank가 이전 응답 보류 중에도 AC를 수락 |
| CR 순서 | ✅ in-order | ✅ | |
| CR과 CD를 독립적으로 수락(CD가 CR보다 먼저 와도 됨) | — | ✅ | 변이 `cd_waits_cr` 검출 |
| CR/CD backpressure 중 payload 유지 | ✅ CR | ✅ | assertion |
| 새 AC는 이전 CR/CD가 보류 중이어도 수락 | — | ✅ | 무ID CR/CD와 상위 service response는 수락 순서를 유지 |
| legacy와 유지보수 요청이 동시에 오면 | — | ✅ | legacy가 우선. 단 유지보수는 core가 drain된 뒤에만 수락하므로 실제로는 겹치지 않음 |
| 2-target 응답 집계 | — | ✅ | 동일 clean data 하나 선택, single dirty owner; data 불일치/multi-dirty는 fault |
| snoop filter | — | ⚠️ | 2-target direct-mapped authoritative directory. 모든 allocation/eviction update 필수 |

## 5. Cache 상태와 dirty 데이터 경로 (ACE 전용)

| 항목 | 지원 | 비고 |
|---|:---:|---|
| 상태 I / SC / UC / SD / UD | ✅ | `ace_cache_snoop_endpoint`, direct-mapped, 기본 LINES=8, 64B line |
| 8 opcode × 5 상태 = 40개 전이 | ✅ | `tb_ace_snoop_service`의 독립 oracle로 전수 검사 |
| local probe / install / unique store / clean eviction | ✅ | shared line에 store → 오류. dirty victim 교체(같은 tag 재설치 포함) → 오류 |
| PassDirty 데이터의 AXI writeback | ✅ | CD로 받은 64B를 WB 포트로 INCR write. **실제 B를 받은 뒤에** 완료 응답(변이 `early_b`, `skip_dirty_wb` 검출) |
| writeback 결과가 실제 메모리에 반영 | ✅ | 통합 TB에서 S_*와 WB_*를 하나의 byte memory에 연결해 byte 단위로 비교 |
| dirty line의 자동 eviction writeback | ❌ | local evict는 clean만 가능. dirty line은 먼저 CleanInvalid 등으로 회수해야 함 |
| CPU refill / 권한 획득(ownership) 프로토콜 | ❌ | install 상태는 상위 제어기가 정함 |
| snoop filter / directory | ⚠️ | 명시적 `SF_UPDATE_*` 계약의 2-target direct-mapped filter. 같은 target을 포함한 tag collision은 conservative broadcast, 같은 cycle의 update와 AC는 update 우선 |

## 6. 유지보수 요청과 일반 트래픽의 순서 (ACE 전용)

| 항목 | 지원 | 비고 |
|---|:---:|---|
| v9 core가 drain된 뒤에만 유지보수/ACE manager 요청 수락 | ✅ | 외부 `quiescent` + AXI pending 0 + ingress 0 + range 비활성. 대기 요청이 신규 admission을 먼저 막고 drain을 유도. 변이 `skip_drain` 검출 |
| 유지보수 처리 중 신규 M0/M1 AW/AR와 setup 차단 | ✅ | 완료 응답(`rsp_ready`)까지 유지 |
| 유지보수 처리 중 `quiescent` 유지 | 🧪 | `ACE_QUIESCENCE_LOST` |
| 유지보수/ACE 요청 대기 중 신규 트래픽을 막아 drain 유도 | ✅ | `req_valid` 또는 ACE AR/AWVALID부터 M0/M1 AW/AR/setup ready를 내림 |
| 다중 master/cache 간 coherence ordering | ❌ | `quiescent` grant만으로 구현되지 않음 |

## 7. 제안 방식(P) range 트랜잭션

v9 체크리스트 내용과 같다. ACE top에서도 core가 같으므로 동작은 동일하지만, range MakeInvalid가 직렬화된 snoop 경로를 지난다.

| 항목 | v9 P | ACE P | 비고 |
|---|:---:|:---:|---|
| 연속 range(count 1~64) / sparse mask / full page | ✅ | ⚠️ | ACE 통합 TB는 count=1, line 1개만 검사 |
| 잘못된 setup → `setup_error`, busy → `setup_ready=0` | ✅ | ⚠️ | ACE top에서 따로 회귀하지 않음 |
| 대상 line의 첫 write는 RANGE(tracker 우회), 이후 write는 conventional | ✅ | ⚠️ | 〃 |
| M0 정밀 hazard(대상 line만, 실제 B까지 차단) | ✅ | ⚠️ | 〃 |
| range MakeInvalid가 dirty 사본을 버림 | ✅ (clean 전제) | ✅ | 통합 TB에서 UD line이 데이터 반환 없이 무효화되는 것 확인(`LEGACY_MI_LEFT_CACHED_DATA`) |
| 다중 context, page를 넘는 range, setup abort | ❌ | ❌ | |

## 8. 오류·예외 처리

| 상황 | v9 | ACE | 비고 |
|---|:---:|:---:|---|
| core S_BRESP ≠ OKAY | 🧪 | 🧪 | `CCI_B_ERROR` (core assertion 그대로) |
| legacy CR 오류, 예상 밖 DataTransfer/PassDirty | 🧪 | 🛑 | ACE: CR retire 보류, fault 유지, 신규 admission 차단 |
| 미지원 opcode, 비정렬 cache-line snoop 주소 | — | ✅ | endpoint가 line을 바꾸지 않고 CR Error 반환. DVM 주소는 별도 encoding |
| manager가 거부한 요청(DOMAIN/opcode/shape/AxCACHE 오류, AxBAR=2 포함) | — | ✅ | snoop·memory 접근 없이 SLVERR. read는 dataless면 1 beat, 아니면 ARLEN+1 beat. write는 Evict 외에는 W를 모두 소비한 뒤 B |
| CDLAST 위치 오류, PassDirty without DataTransfer, DataTransfer=0인데 CD 수신 | — | 🛑 | controller fault |
| manager framing/association 오류(WLAST·memory RLAST 불일치, DVM part-2 불일치, 비정상 state) | — | 🛑 | `ACE_PROTOCOL_ERROR`가 sticky `fault`에 포함됨. 진행 중 응답/ACK 배출 후 M0/M1/setup·명시적 snoop·새 ACE AR/AW 차단 |
| ACE AR/AW 동시 요청 | — | ✅ | IDLE 1-bit round-robin, barrier 두 번째 leg는 중재 제외 |
| writeback B 오류 | — | 🛑 | 완료에 Error 표시, 수집한 line 보존, 이후 요청 차단. reset 전에 상위에서 데이터를 회수해야 함 |
| 자동 retry / abort 복구 | ❌ | ❌ | |
| reset | ✅ | ✅ | cold reset(트랜잭션·cache 상태 폐기). dirty를 보존하는 warm reset 아님 |
| RRESP ≠ OKAY | ⚠️ | ⚠️ | 그대로 전달만 하고 검사하지 않음 |

## 9. 검증 범위 요약 (ACE)

| 시험 | 내용 |
|---|---|
| `tb_ace_snoop_service` (Verilator·XSim) | 40개 상태×opcode, CR/CD 순서 2종, CR·CD·AW·W·B·완료 backpressure, 실제 memory byte, unique store, dirty eviction 거부, 미지원 opcode, drain grant, reset, legacy/CR/CD/WB 오류 |
| `tb_ace_manager_outstanding` | manager peak 2, 같은 ID 재수락 차단, 서로 다른 ID의 R/B 역전 완료, W FIFO push/pop 동시 cycle, RACK/WACK 및 전체 drain |
| `tb_ace_snoop_outstanding` / `tb_ace_snoop_pipeline` / `tb_ace_snoop_service_outstanding` | endpoint·2-target fabric·service 각각 peak 4, target별 AC association, ordered CR/response와 drain |
| `tb_ace_manager_transactions` (Verilator·XSim) | 기존 여섯 요청 + DVM 2종(payload 보존, 2-part 거부), barrier pair 양방향과 spec 타이밍 RACK, exclusive pass/fail/kill, AxBAR=2 정상·오류 read/write |
| `tb_ace_snoop_fabric` (Verilator·XSim) | 2-target broadcast, CR/CD 집계, filter hit/miss, 같은/다른 target collision fallback, update/AC ordering, DVM broadcast, data conflict |
| `tb_cci_ace_integration` B1·P (Verilator·XSim) | legacy/explicit 경로, ACE manager 자동 발행·shared-memory 순서, 같은 cycle M0/M1 AW의 pending 계수와 dual reservation kill, fatal admission class별 차단 |
| `tb_cci_ace_integration` 장기 B1·P (Verilator·XSim) | dirty line 2개의 독립 CD/writeback, core write 6개, B1 tracker 4개 포화·복구, P range 선행 invalidation·tracker 우회, B backpressure·최종 memory bytes |
| 변이 34종 | 기존 28종 + 같은-ID gate, endpoint/fabric 직렬화, snoop owner, W FIFO count, top auto/explicit owner 결함 6종 |
| synthesis-only (xczu7ev, OOC) | 다중-context 결과: endpoint 4392/7188, fabric 9364/7530, controller bank 4433/2467, manager bank 10871/6421, B1 18590/11519, P 19403/11981, 2-target+filter 28566/19054 (LUT/FF) |
| ACE post-route (xczu7ev, 5 ns, direct OOC) | 다중-context 결과: B1 18627/11519, WNS/WHS +0.554/+0.008 ns; P 19459/11981, +0.556/+0.010 ns; 2-target+filter 28546/19053, +0.274/+0.003 ns. timing·완전 배선·허용 DRC 통과 |

**ACE top에서 아직 회귀하지 않은 것:** 선택된 6-line conventional/range와 tracker 포화는 추가했지만 v9의 기능 84건 전체 suite(모든 작은 depth, seed, 제약 트래픽 조합)는 여전히 `axi_cci_top` + clean responder 기준이다. ACE top의 다중 line runtime은 기능 통과만 확인했으며 성능 비교 지표로 측정하지 않았다.

## 10. 요약

**ACE 확장으로 새로 지원하는 것**
- ACE cache snoop 8종과 DVM 2종, 5 상태 cache 전이, 5b CRRESP
- CD 채널(128b × 4 beat)과 PassDirty 데이터의 AXI writeback(실제 B 이후 완료)
- 유지보수 snoop 요청 인터페이스와, 일반 트래픽 drain 후 기본 4-context snoop 실행
- 하드웨어 fault 검출과 dirty 데이터 보존(🛑)
- ACE manager ARSNOOP/AWSNOOP/DOMAIN/BAR/CACHE/LOCK/AWUNIQUE, RACK/WACK와 여섯 핵심 transaction의 자동 snoop/memory sequence
- DVM 전달, barrier pair, shareable exclusive EXOKAY, 2-target snoop 집계와 제한적 filter

**여전히 지원하지 않는 것**
- 3개 이상 cached master, 같은 ID의 다중 outstanding, ID-less WB memory 자체의 out-of-order
- DVM Sync Complete lifecycle, 일반 hierarchy directory, 다중 range context, 자동 오류 복구, dirty 자동 eviction

**해석 주의**
- 기존 M0/M1 AXI 포트 자체는 v9 의미를 유지한다. 자동 변환은 별도의 `ACE_AR*`/`ACE_AW*` manager 포트에서 수행하고, 기존 M1 coherent write는 계속 MakeInvalid 경로다.
- ACE top의 snoop context depth는 4지만 dirty writeback과 ID-less WB memory transaction은 방향별로 직렬화된다. v9 clean responder의 runtime 수치를 ACE top에 그대로 적용하면 안 된다.
- v9 면적 비교(+782 LUT / +462 FF)는 clean responder 기준이다. ACE 확장은 별도 synthesis 및 direct-OOC post-route 값으로 보고하며 측정 경계를 혼합하지 않는다.
- 이 구현을 full ACE compliance나 시스템 전체 coherence 증명으로 표현하지 않는다(ACE_EXTENSION.md와 같은 입장).
