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

## GTKWave 파형

일반 회귀는 파형 기록 비용을 피하기 위해 trace를 끈다. 다음 전용 명령은 현재
`tb_cci_ace_integration`을 `--trace-fst`로 다시 빌드하고 전체 계층 FST와 신호 그룹이
배치된 GTKWave save file을 `waves/ace_cci/` 아래에 만든다.

```sh
make waves-ace                         # P 통합 + RS/RNS/WLU 집중 시나리오
make waves-ace-all                     # 위 시나리오 + B1, 2-target
python3 scripts/run_ace_waves.py --case ace-multi --open
python3 scripts/run_ace_waves.py --case ace-opcodes --open
gtkwave waves/ace_cci/ace-p/ace-p.fst waves/ace_cci/ace-p/ace-p.gtkw
```

`--case`는 `ace-p`, `ace-b1`, `ace-multi`, `ace-opcodes`, `all` 중 하나이다. 각 실행은 임시
wave wrapper 아래에 기존 통합 TB를 인스턴스화하고, 정상 PASS marker와 비어 있지
않은 FST를 확인하며 compile/run log도 같은 디렉터리에 남긴다. 기존 TB/RTL에는
dump 코드를 넣지 않으므로 일반 Verilator/XSim 회귀와 합성 및 기존 manifest의
source hash에는 영향을 주지 않는다.

### 파형 시나리오 목록

| 구분 | transaction | 관측되는 snoop/후속 동작 | 파형 |
|---|---|---|---|
| 기존 | legacy M1 coherent/range write | MakeInvalid, CR, range tracker와 실제 B retire | `ace-p.fst`, `ace-b1.fst` |
| 기존 | initiating ReadShared | `ARSNOOP=1` → `AC=ReadShared(1)` → CR/CD → R/RACK; dirty이면 WB | `ace-p.fst` |
| 기존 | initiating WriteUnique | `AWSNOOP=0` → `AC=CleanInvalid(9)` → memory write → B/WACK | `ace-p.fst` |
| 기존 | CleanUnique/exclusive | monitor 등록·검사, CleanInvalid, EXOKAY/OKAY | `ace-p.fst` |
| 기존 | WriteBack/Evict, DVM, dirty CD | no-snoop memory write 또는 DVM AC, CD와 dirty WB | `ace-p.fst` |
| 기존 | 2 cached target | AC broadcast, target별 CR/CD 집계 | `ace-multi.fst` |
| 신규 기준 | ReadShared clean hit | `AC=1`, 4-beat CD, `SharedClean` 전이 | `ace-opcodes.fst` |
| **신규** | **ReadNotSharedDirty (RNS)** dirty hit | `ARSNOOP=3` → `AC=3`, CR `DataTransfer+PassDirty`, 4-beat CD, dirty WB, `SharedClean` | `ace-opcodes.fst` |
| **신규** | **WriteLineUnique (WLU)** | `AWSNOOP=1` → `AC=MakeInvalid(13)`, CD 없음, 4-beat memory write, B/WACK, cache Invalid | `ace-opcodes.fst` |

### RS/RNS/WLU 집중 파형의 cycle별 동작

아래 cycle은 `ace-opcodes.fst`에서 해당 ACE AR 또는 AW가 handshake한 cycle을
각 transaction의 **C0**로 다시 번호 매긴 값이다. clock은 10 ns이다. 절대 시각의
C0는 RS 105 ns, RNS 315 ns, WLU 585 ns이다. cached endpoint의 AC/CR/CD READY와
service/manager memory의 AW/W READY는 계속 1이며, 시험용 memory responder는 마지막
W를 받은 다음 cycle에 B를 보낸다. RREADY/BREADY도 응답 구간에는 1이다. 따라서 아래
숫자는 이 파형 시나리오의 실측 latency이며 ACE가 요구하는 고정 latency가 아니다.
backpressure를 넣으면 간격은 늘어나지만 handshake 순서와 payload 유지 조건은 같다.

공통 transaction 설정은 다음과 같다. `local_*` install/probe는 실제 ACE channel이
아니라 snoop 대상 cache의 사전/사후 상태를 만드는 TB 전용 인터페이스이다.

| scenario | 사전 cache 상태 | ACE 요청 | 공통 shape/data |
|---|---|---|---|
| RS | `0x1000`, UniqueClean | `ARID=1`, `ARSNOOP=1`, Inner Shareable | `ARLEN=3`, `ARSIZE=4`, INCR, `ARCACHE=0010`, 64B 정렬 |
| RNS | `0x1040`, UniqueDirty | `ARID=2`, `ARSNOOP=3`, Inner Shareable | `ARLEN=3`, `ARSIZE=4`, INCR, `ARCACHE=0010`, 64B 정렬 |
| WLU | `0x1080`, UniqueClean | `AWID=3`, `AWSNOOP=1`, Inner Shareable | `AWLEN=3`, `AWSIZE=4`, INCR, `AWCACHE=0010`, 128-bit W 4개, `WSTRB=ffff` |

#### ReadShared

| 상대 cycle | 전달 신호와 판정 |
|---:|---|
| C-3 | `local_valid && local_ready`: 주소 `0x1000`에 UniqueClean line과 512-bit 시험 데이터를 설치한다. |
| C0 | `ar_valid && ar_ready`: manager가 `ARID=1`, `ARSNOOP=ReadShared(1)` 요청을 수락한다. |
| C1 | `snoop_req_valid && service_req_ready`: manager가 자동 snoop request `snoop=1`을 service에 전달한다. |
| C2 | `service_ac_valid && service_ac_ready`: cached endpoint로 `ACADDR=0x1000`, `ACSNOOP=1`이 전달된다. |
| C3 | `CRVALID && CRREADY`, 첫 `CDVALID && CDREADY`: `CRRESP=11001`과 CD beat 0을 같은 cycle에 수락한다. 이는 `WasUnique=1`, `IsShared=1`, `DataTransfer=1`이다. |
| C4~C6 | CD beat 1~3을 연속 전달하며 C6에서 `CDLAST=1`이다. clean line이므로 writeback은 없다. |
| C8 | `service_rsp_valid && service_rsp_ready`: 원본 `CRRESP=11001`과 수집한 512-bit line을 manager로 반환한다. |
| C9~C12 | `RVALID && RREADY`: 128-bit R beat 0~3을 연속 전달한다. `RID=1`, `RRESP=1000`, C12에서 `RLAST=1`이다. |
| C13 | `RACK=1`: initiating transaction context를 해제한다. |
| C15~C16 | `local_op=probe` 결과가 hit이고 `SharedClean`인지 확인한다. |

#### ReadNotSharedDirty

| 상대 cycle | 전달 신호와 판정 |
|---:|---|
| C-3 | `local_valid && local_ready`: 주소 `0x1040`에 UniqueDirty line과 512-bit 시험 데이터를 설치한다. |
| C0 | `ar_valid && ar_ready`: `ARID=2`, `ARSNOOP=ReadNotSharedDirty(3)`을 수락한다. |
| C1 | manager가 `snoop_req_snoop=3`을 service에 전달한다. |
| C2 | `ACADDR=0x1040`, `ACSNOOP=3`이 cached endpoint에 전달된다. |
| C3 | CR과 CD beat 0을 수락한다. `CRRESP=11101`은 `WasUnique=1`, `IsShared=1`, `PassDirty=1`, `DataTransfer=1`이다. |
| C4~C6 | CD beat 1~3을 전달하고 C6에서 `CDLAST=1`이다. endpoint 상태는 SharedClean으로 전이한다. |
| C8 | service가 dirty 보존을 위해 `svc_aw_valid && svc_aw_ready`로 주소 `0x1040`, `AWLEN=3`, `AWSIZE=4`, INCR writeback을 시작한다. |
| C9~C12 | CD snapshot을 `svc_w_valid && svc_w_ready`로 128-bit씩 기록한다. C12에서 `svc_w_last=1`이다. |
| C13 | 실제 writeback `svc_b_valid && svc_b_ready`를 받는다. 이 B 전에는 snoop response를 완료하지 않는다. |
| C14 | `service_rsp_valid && service_rsp_ready`: `CRRESP=11101`과 line data를 manager에 반환한다. |
| C15~C18 | `RID=2`의 R beat 0~3을 전달한다. `RRESP=1000`, C18에서 `RLAST=1`이다. PassDirty 책임은 service가 이미 writeback했으므로 최종 AXI RRESP에는 복사하지 않는다. |
| C19 | `RACK=1`로 context를 해제한다. |
| C21~C22 | cache probe가 hit 및 `SharedClean`을 반환하고, writeback AW가 정확히 1회였음을 확인한다. |

#### WriteLineUnique

| 상대 cycle | 전달 신호와 판정 |
|---:|---|
| C-3 | 주소 `0x1080`에 기존 UniqueClean line을 설치한다. |
| C0 | `aw_valid && aw_ready`: `AWID=3`, `AWSNOOP=WriteLineUnique(1)`을 수락한다. W source는 AW 뒤에 첫 W payload를 제시하지만 snoop 완료 전까지 `WREADY=0`이므로 payload를 유지한다. |
| C1 | manager decoder가 WLU를 `snoop_req_snoop=MakeInvalid(13)`으로 변환해 service에 전달한다. |
| C2 | cached endpoint가 `ACADDR=0x1080`, `ACSNOOP=13`을 수락한다. |
| C3 | `CRRESP=10000`을 수락한다. 기존 line이 unique였음을 나타내는 `WasUnique=1`만 설정되고 `DataTransfer=0`이므로 CD는 한 beat도 발생하지 않는다. cache line은 Invalid가 된다. |
| C5 | `service_rsp_valid && service_rsp_ready`로 MakeInvalid 완료를 manager에 반환한다. |
| C6 | manager가 `mem_aw_valid && mem_aw_ready`로 주소 `0x1080`의 4-beat memory write를 시작한다. |
| C7~C10 | 이제 `w_ready=1`이 되어 보류하던 ACE W를 받으며 동시에 `mem_w_valid && mem_w_ready`로 전달한다. C10에서 입력 `WLAST=1`이고 출력 `mem_w_last=1`이다. |
| C11 | 실제 memory `mem_b_valid && mem_b_ready`를 받는다. |
| C12 | initiating interface에 `BVALID && BREADY`, `BID=3`, `BRESP=OKAY`를 반환한다. |
| C13 | `WACK=1`로 context를 해제한다. |
| C15~C16 | cache probe가 miss/Invalid를 반환하고 manager memory AW가 정확히 1회였음을 확인한다. |

세 transaction 전체에서 관측한 AC 순서는 `1 → 3 → 13`, CRRESP 순서는
`11001 → 11101 → 10000`이다. CD는 RS 4 beat와 RNS 4 beat를 합친 8 beat이며
WLU 구간에는 없다. 이 수치와 RNS writeback 1회, WLU memory write 1회는 TB가
종료 전에 assertion으로 검사한다.

`axi_cci_ace_top`의 기존 S_* 포트와 WB_* 포트는 **동일한 메모리/주소 공간**에 연결해야 한다. WB_*를 다시 snooping ingress에 연결하지 않는다. WB 포트는 snoop dirty writeback과 initiating-manager의 실제 memory access가 공유하는 ID-less 단일-outstanding 포트이다. snoop writeback은 128-bit, AWLEN=3, AWSIZE=4, AWBURST=INCR, WSTRB=all-ones이다. manager access는 요청의 LEN/SIZE/BURST와 WSTRB를 전달하고 WB_AR/R도 사용한다. 일반 AXI 버스에 접속할 때 고정 ID와 응답 routing을 외부 어댑터에서 제공한다.

주소 공간은 하나의 security domain으로 한정한다. ACPROT/DOMAIN에 따른 secure/non-secure cache tagging은 추가하지 않았다.

새 AC/CR/CD 포트를 `ace_cache_snoop_endpoint` 또는 같은 계약의 외부 cached master에 연결한다. `CACHED_MASTERS=1`은 기존 AC/CR/CD만 사용하고 fabric을 우회하며, 2이면 AC1/CR1/CD1을 함께 사용한다. `ace_snoop_fabric`은 두 target의 CR/CD를 독립 수집하고 동일한 clean data 중 하나를 선택한다. 서로 다른 data, 둘 이상의 PassDirty, 잘못된 CD framing은 오류다. `USE_SNOOP_FILTER=1`이면 `SF_UPDATE_*`가 authoritative directory이므로 모든 allocation/eviction을 빠짐없이 알려야 한다. direct-mapped directory에서 유효한 line과 다른 tag가 같은 index에 충돌하면 target이 같아도 그 index는 reset까지 conservative broadcast로 전환되어 false negative를 피한다. 새 tag로 정확히 교체하려면 기존 line의 absent update로 entry를 비운 뒤 present update를 보내야 한다. `SF_UPDATE_VALID`는 같은 cycle의 AC보다 우선한다. update cycle에는 `ACREADY`를 내리고, 유지된 AC는 다음 cycle 이후 갱신된 directory로 target을 고른다. 따라서 update와 AC가 겹치는 것은 오류가 아니며 외부가 별도로 피할 필요가 없다. DVM은 directory와 무관하게 모든 active target으로 전파한다.

CDVALID는 CRREADY/CDREADY를 기다리지 않는다. endpoint는 AC handshake 때 context별 line snapshot과 CR metadata를 보관하며 CR 또는 CD가 보류되어도 payload를 유지한다. endpoint와 fabric은 기본 깊이 4까지 새 AC를 먼저 수락하고, 무ID CR/CD는 AC 수락 순서로 반환한다. fabric은 target마다 CR을 가장 오래된 CR 미수신 context에 연결한다. CD는 CR이 DataTransfer=1을 알린(같은 cycle에 수락되는 CR 포함) 가장 오래된 미완료 context에 연결하고, 그보다 앞선 context의 CR이 아직 오지 않았으면 CDREADY를 보류한다(REVIEW 10.4). 따라서 데이터 없는 CR(k)과 CD(k+1)가 같은 cycle에 오거나 CD가 자기 CR보다 먼저 와도 데이터가 다른 context에 기록되지 않는다. 이 보류는 target이 CR 발행을 CD handshake에 의존시키지 않는다는 조건에서 교착이 없다. upstream에는 원래 AC 순서를 유지한다.

top은 manager가 자동 생성한 snoop과 외부 `req_*` snoop을 같은 service에 넣되, 기본 깊이 4의 owner FIFO로 수락 순서를 기록한다. service의 ordered response는 FIFO head에 따라 manager 또는 외부 `rsp_*`로 전달된다. service dirty writeback과 manager memory write가 공유하는 ID-less WB write 포트는 별도 valid/owner를 AW부터 실제 B까지 유지하며 한 번에 하나만 진행한다. 새 grant는 service가 우선이지만, AWVALID를 READY 없이 내보낸 source는 handshake까지 grant를 유지해 payload가 바뀌지 않는다. auto/explicit service 요청 mux도 같은 방식으로 고정한다(REVIEW 10.2). snoop controller bank는 AC를 요청 수락 순서대로 발행하고, dirty writeback AW도 handshake 전 grant를 고정한다(REVIEW 10.2·10.3).

`req_valid/req_ready`, `req_addr`, `req_snoop`가 명시적 snoop 요청 인터페이스이다. `rsp_valid/rsp_ready`는 CD와 필요한 writeback B까지 완료된 결과를 전달한다. `rsp_resp`는 **원본 CR 메타데이터**이며 최종 AXI RRESP가 아니다. PassDirty가 1인 원본 CR을 반환하더라도 이 service는 이미 writeback을 완료한 뒤 응답한다. 이를 initiating master의 dirty 책임 이전 비트로 복사하면 안 된다. `rsp_data`는 DataTransfer=1일 때 유효한 512-bit snapshot이다.

### ACE initiating-manager 요청

`ACE_AR*`와 `ACE_AW*`는 기본 4개 context에서 처리한다. ID 하위 비트를 고정 context에 매핑하므로 같은 ID와 같은 context로 충돌하는 ID는 앞 transaction의 RACK/WACK까지 직렬화되고, 다른 context의 ID는 동시에 진행한다. R/B owner는 첫 response부터 RACK/WACK까지 고정하며 서로 다른 context는 완료 준비 순서에 따라 out-of-order로 응답할 수 있다. AXI4 W는 WID가 없으므로 AW 수락 순서를 유지한다. Barrier와 DVM은 모든 일반 context가 빈 때 수락하는 전역 ordering operation이며, 수락한 실제 context(barrier는 전역 slot, DVM은 ID slot)가 끝날 때까지 다른 일반 요청을 수락하지 않는다(REVIEW 10.5). memory AR과 snoop request 포트는 VALID를 READY 없이 내보낸 context의 grant를 handshake까지 유지한다(REVIEW 10.2). manager가 하나라도 active인 동안 기존 M0/M1/setup 신규 admission은 정지하지만, drain 후 여러 ACE 요청은 context 여유 범위에서 추가 수락한다. 구현한 권장 매핑은 다음과 같다.

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

Shareable exclusive는 IHI 0022H D9에 따라 ARLOCK ReadShared/ReadClean과 ARLOCK CleanUnique를 사용한다. AWLOCK WriteUnique를 exclusive store로 해석하지 않는다. ID별 line monitor는 manager bank에 하나만 두고 모든 context가 공유한다(REVIEW 10.1). 어느 context에서든 exclusive store가 성공하면 같은 line의 다른 ID 예약을 지운다(D9.3.1). exclusive store(ARLOCK CleanUnique)는 한 번에 하나만 수락하고, snoop 완료 시점에 자기 예약이 아직 유효한지 다시 확인해 그 사이 다른 thread의 성공이나 kill이 있으면 실패(OKAY)로 응답한다. M0/M1 write admission과 manager의 non-shareable·memory-update write는 matching 예약을 지우는 보수적인 local-monitor 정책이며, 이 정책을 모든 context에 같게 적용한다(D9.3.4는 다른 agent의 non-exclusive store 뒤 false pass를 허용하므로 필수 의무는 아니다). shareable WriteUnique/WriteLineUnique는 이 경로를 타지 않는다. 이 monitor는 현재 top의 한 initiating interface와 그 ID thread를 위한 PoS subset이다.

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

REVIEW 10 보완 시험: `tb_ace_manager_review10`은 서로 다른 slot ID의 순차 exclusive 성공 후 실패, 두 exclusive store의 중첩 수락 차단, snoop 도중 kill에 의한 commit 재검사 실패, 다른 slot의 manager write에 의한 예약 해제, 늦게 온 낮은 index 요청에 대한 memory AR·snoop request payload 유지, slot 0/2 DVM의 수락 후 실행 중 격리를 검사한다. `tb_ace_snoop_bank_review10`은 재사용된 controller가 있어도 AC가 요청 순서로 나가는지와 dirty writeback AW 유지, `tb_ace_fabric_review10`은 CR(k, 데이터 없음)+CD(k+1) 동시 도착과 자기 CR보다 먼저 온 CD의 연결, `tb_cci_ace_integration`의 `WB_CONTENTION=1`은 manager WB AW가 막힌 동안 service writeback AW가 뒤늦게 올라오는 B1/P top 경합을 검사한다. 각 수정은 이전 동작을 되살리는 변이로 고정한다. DVM/barrier를 시작하는 edge의 반대 채널 일반 요청 동시 admission은 아직 차단하지 않는다(REVIEW 10.8).

`tb_cci_ace_integration`은 B1/P에서 legacy MakeInvalid, drain, dirty CD/writeback과 top의 자동 ReadShared/WriteUnique 경로, 같은 cycle의 M0/M1 AW 이후 pending 카운터 복귀·두 exclusive reservation 무효화·유지보수 요청 수락을 검사한다. 2026-11-02에는 conventional coherent M1 read와 단일-context Range READ를 추가했다. Range READ는 dirty/clean/miss 1-line과 sparse 3-line에서 CleanInvalid preparation, dirty WB B 이후 AR, RLAST done, context 재사용과 M0 AR/M1 AW hazard를 검사한다. expected-failure 변이는 Range 분류·hazard 2종을 포함해 50종이다.

실행 근거는 `reports/latest_ace.json`, `reports/latest_ace_synthesis.json`, `reports/latest_ace_implementation.json`의 manifest이다. 현재 Range READ source의 Verilator 실행은 `ace_20261102T074008Z_965b5c1b`이며 정상 18건과 의도된 실패 50건을 통과했다. XSim·synthesis·implementation은 이 source로 아직 재실행하지 않았다. 아래 비용은 이전 2026-10-08 source의 역사적 기준값이다. synthesis-only `ace_synthesis_20261008T011847Z_bbcc3d07`에서 B1/P top은 각각 17092/8723, 17918/9189 LUT/FF이고, `ace_implementation_20261008T012531Z_43d6eb18`는 B1 17080/8723(WNS/WHS +0.444/+0.010 ns), P 17964/9189(+0.105/+0.020 ns), 2-target+filter 26389/16263(+0.037/+0.012 ns)를 기록했다. 이 수치를 현재 253-bit context 구현의 결과로 사용하지 않는다.

직접 OOC top의 외부 pin 경로는 제외하고 내부 register-to-register 경로만 timing 판정했으므로 외부 인터페이스와 board clock/reset sign-off는 아니다. 기존 v9의 LUT +782 / FF +462는 이 ACE 확장을 포함하지 않는다.

## 아직 지원하지 않는 ACE 전체 기능

3개 이상 cached target, requester 자기 자신을 제외하는 multi-interface routing, 같은 ID의 다중 outstanding, ID-less WB memory 자체의 out-of-order, 2-part DVM 메시지(현재 오류 응답), DVM Sync의 참여자별 Complete lifecycle/최대 256 outstanding, ACPROT security-domain tagging, 실제 CPU cache의 자동 refill/permission 상태 갱신, dirty 자동 eviction과 자동 오류 복구는 별도 기능이다. filter는 명시적 update 계약을 지키는 2-target direct-mapped directory이며 일반 cache hierarchy directory가 아니다. RACK/WACK와 barrier ordering은 전역 직렬화 subset이다. 이 구현을 full ACE compliance 또는 전체 시스템 coherence proof로 표현하지 않는다.
