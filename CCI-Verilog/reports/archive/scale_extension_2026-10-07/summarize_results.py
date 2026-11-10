#!/usr/bin/env python3
"""Only verified current-source manifests can produce a PASS or numeric claim."""
import csv,json,sys
from pathlib import Path
from results_common import ROOT,verify_manifest
report=ROOT/'reports'
verified={};problems={}
for kind in ['simulation','implementation'] + [kind for kind in ['xsim','ace','ace_synthesis','ace_implementation'] if (report/f'latest_{kind}.json').exists()]:
    try:
        pointer=json.loads((report/f'latest_{kind}.json').read_text())
        if pointer['status']!='PASS': raise RuntimeError('Latest run '+pointer['status'])
        manifest=verify_manifest(ROOT/pointer['manifest'])
        if manifest['run_id']!=pointer['run_id']: raise RuntimeError('Run ID mismatch')
        verified[kind]=(manifest,(ROOT/pointer['manifest']).parent)
    except Exception as e:problems[kind]=str(e)
lines=['# REVIEW 보완 후 검증·구현 결과','',
       '현재 source hash, 실행 완료 manifest, 산출물 hash가 일치하는 결과만 아래에 표시한다. 기존 수치는 `archive/v9_pre_review_fixes`에 보존되어 있다.','']
for kind,error in problems.items():lines.append(f'- **{kind}: 검증된 최신 결과 없음** — {error}')
if problems:lines.append('')
if 'simulation' in verified:
    m,out=verified['simulation'];rel=out.relative_to(report)
    positive=[c for c in m['cases'] if c['status']=='PASS'];negative=[c for c in m['cases'] if c['status']=='EXPECTED_FAILURE_PASS']
    scale_cases=[c for c in positive if c.get('scope')=='scale_sweep']
    functional=len(positive)-len(scale_cases)
    scale_note=f" 별도로 규모 측정(scale_sweep) {len(scale_cases)}건이 통과했다." if scale_cases else ''
    lines += ['## 기능 검증','',f"실행 `{m['run_id']}`: 정상/검증 완료 {functional}건, 의도된 실패 검출 {len(negative)}건.{scale_note} [실행 manifest]({rel}/manifest.json).",'',
        '| Test | 검증 범위 | 결과 | 근거 |','|---|---|---|---|']
    for c in m['cases']:lines.append(f"| {c['name']} | {c.get('scope','legacy_unspecified')} | {c['status']} | [log]({rel}/{c['log']}) |")
    smoke=sum(c.get('scope')=='boundary_smoke' for c in positive)
    boundary=sum(c.get('scope')=='parameter_directed' for c in positive)
    lines += ['',f'작은 depth는 parameter_directed {boundary}건이다. conventional 수명/hazard와 중간 W reset, P range-only hazard·duplicate·setup drain을 추가 검사한다. 여러 entry가 필요한 HOL은 depth≥3에서만 실행한다. 과거 boundary_smoke case가 있다면 {smoke}건으로 별도 구분한다.',
              'seeded_ready_stalls는 seed 1/7/123의 downstream AW/AR/W READY stall만 변경한다. 주소·setup 정책·요청 task 조합은 directed이며 응답 latency는 고정이다. 매 case reset이 난수 상태를 초기화한다. benchmark_isolation은 full suite/독립 실행/137-cycle prelude의 모든 METRIC 값 일치를 확인한다. 일반적인 constrained-random traffic 검증은 아니다.',
              '전체 P directed suite는 active range를 유지하며 비대상 line·다른 page의 같은 index·duplicate 없는 done target에 M0 AR/AW가 각각 8 cycle 이내 수락되는지 검사한다. 세 hazard mutation은 해당 수락 제한 오류로 검출해야 한다.',
              'range-only 차단 시험은 conventional entry 없이 INVALIDATING/TRACKING(write 수락 전)/B pending에서 AR·AW를 각각 확인한다. 반대 채널에는 비대상 주소를 동시에 보내며, pending 차단과 actual B 이후 8 cycle 내 수락을 검사한다. 출력 상수 0·AR/AW 개별 hazard 무시·AR/AW 주소 오연결 변이를 전용 오류로 검출한다.']
    lines += ['',f'[Scenario 실행 coverage]({rel}/scenario_coverage.json)는 PASS feature별 실행 case 목록이다. 분기/toggle coverage 또는 모든 동시성 조합의 coverage 비율은 아니다.',
              'decoder는 Verilator/Icarus에서 49,152개 경계 조합을 교차검증하고, Yosys SAT로 전체 입력의 조합 명세를 증명한다. 이 증명은 CCI FIFO/lifetime 전체 formal proof가 아니다.',
              '메모리 충돌 시험은 read-first, 다른 주소, held R, 후속 read를 검사한다. endpoint는 depth 1/3/16과 latency 0/1/12 조합을 검사한다. 실행 tool version·command·warning 허용 목록·latency 조건은 manifest에 보존한다.']
    expanded=[c for c in m['cases'] if c.get('scope') in ['axi_outstanding_parameters','memory_cache_parameters','cache_collision','axi_fifo_overlap']]
    if expanded:
        lines += ['', '## AXI/cache 경계 확장', '',
            'AXI outstanding depth 1/3/5에서 두 master의 각 16개 read/write를 실행하고 외부 handshake 기준 outstanding 상한·drain을 검사한다. 일반 workload의 overlap과 별도로 전용 FIFO 시험이 depth 3/5에서 AW/B·AR/RLAST 동시 handshake를 각각 40회 요구한다. depth 1은 full 상태의 다음-cycle 수락 계약을 확인한다. 모든 조합을 포괄한다는 뜻은 아니다.',
            'B1/P memory/cache는 (LINES, AXI depth, memory latency)=(1,1,0),(2,3,5),(16,5,12)를 추가한다. cache 전용 시험은 LINES 1/2/8/16에서 matching final-beat AC, load/AC, stalled AR/AC와 같은 index의 다른 tag를 검증한다.', '',
            '| Case | 실행 bin |', '|---|---|']
        for c in expanded:
            for row in c.get('coverage_bins',[]):lines.append(f"| {c['name']} | {row.removeprefix('COVERAGE ')} |")
    if m.get('instrumented_coverage'):
        lines += ['', '## RTL 계측 coverage', '',
            'Verilator --coverage-line/--coverage-toggle의 native 계측 point 수이다. 물리적인 소스 행 수나 요구사항 검증률이 아니다. positive 실행만 합산하며 구성별로 분모를 분리한다. 시뮬레이션 assertion/error 경로도 RTL 계측에 포함될 수 있다. 100% 통과 gate로 사용하지 않는다.', '',
            '| 구성 | 종류 | Hit / 전체 point | 비율 | 미실행 지점 |', '|---|---|---:|---:|---|']
        for name,entry in m['instrumented_coverage'].items():
            for kind,counts in entry['points'].items():
                lines.append(f"| {name} | {kind} | {counts['hit']} / {counts['total']} | {100*counts['hit']/counts['total']:.2f}% | [JSON]({rel}/{entry['uncovered']}) |")
        lines += ['',f"[구성별 계측 metadata]({rel}/instrumented_coverage.json). RTL file list 밖의 TB·slave counter는 집계에서 제외한다. native 데이터와 미실행 point의 파일/행/종류/instance를 보존한다."]
    traffic=[c for c in m['cases'] if c.get('scope')=='constrained_traffic']
    if traffic:
        lines += ['', '## 제약 기반 트래픽 coverage', '',
            'Seed 11/29/101/997 × B1/P에서 각각 24개 시나리오를 실행했다. page·start·mask·대상 write 순서·간격·M0/M1 요청 혼합을 변경하며, P는 일부 setup을 기존 B가 보류된 시점에 발행한다. response latency는 고정이고 전체 입력 공간의 무작위 검증은 아니다.', '',
            '| Case | 실행 bin |', '|---|---|']
        for c in traffic:
            for row in c.get('coverage_bins',[]):lines.append(f"| {c['name']} | {row.removeprefix('COVERAGE traffic ')} |")
    lines += ['', '## Runtime: 8-line 동일 workload','',
              '초기 setup부터 drain 확인 여유까지 포함한 cycle이다. Seed 실행은 별도 case 이름으로 식별하며, 점유 감소를 처리량 개선으로 해석하지 않는다.','',
              '| Case | Peak tracker | Tracker stall | Ingress stall | Cycles | Accepted/cycle |',
              '|---|---:|---:|---:|---:|---:|']
    positive_names={c['name'] for c in positive}
    for r in [r for r in m['metrics'] if r['case'] in positive_names]:lines.append(f"| {r['case']} | {r['peak_tracker']} | {r['tracker_stall']} | {r['ingress_stall']} | {r['copy_cycles']} | {r['accepted_per_cycle']} |")
    if m.get('scale_metrics'):
        lines += ['', '## 규모 측정: tracker 점유 · 할당 대기 · range context','',
                  'B1/P × tracker(=AC FIFO) 1/2/4/8/16 × 8/64/256 line × range 밖 write 없음/4개마다 1개. ingress 16, periodic READY stall, snoop latency 12. P는 4KB page마다 setup한다. '
                  'cycle은 첫 setup/AW부터 drain까지이며, setup wait는 이전 context 완료를 기다린 cycle, context%는 range_active cycle 비율이다. '
                  f'range 밖 write가 없을 때 P의 tracker 점유 0과 완료 건수는 TB가 assertion으로 확인한다. [CSV]({rel}/scale_sweep.csv)','',
                  '| Case | Lines | Outside | Peak tracker | Avg tracker | Alloc stall | Ingress stall | Setup wait | Freeze | Context % | Cycles |',
                  '|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|']
        for r in m['scale_metrics']:
            ctx=100*int(r['range_active'])/int(r['cycles'])
            lines.append(f"| {r['case']} | {r['lines']} | {r['outside']} | {r['peak_tracker']} | {r['avg_tracker']} | {r['tracker_full_stall']} | {r['ingress_stall']} | {r['setup_wait']} | {r['freeze']} | {ctx:.1f} | {r['cycles']} |")
if 'xsim' in verified:
    m,out=verified['xsim'];rel=out.relative_to(report)
    lines += ['', '## 전체 CCI directed suite 교차 simulator', '',
        f"실행 `{m['run_id']}`. Vivado XSim에서 원본 RTL과 동일 tb_cci_integration의 B1/P 기본·ingress depth 1/3 구성 및 AXI FIFO depth 1/3/5를 실행했다. [manifest]({rel}/manifest.json). 다른 parameter·seed·mutation의 전체 matrix를 XSim에서 반복한 것은 아니다.", '']
    for c in m['cases']:lines.append(f"- {c['name']}: {c['status']} — [log]({rel}/{c['log']})")
if 'ace' in verified:
    m,out=verified['ace'];rel=out.relative_to(report)
    lines += ['', '## ACE snoop / CD 확장', '',
        f"실행 `{m['run_id']}`. [manifest]({rel}/manifest.json), [범위·연결 계약](../ACE_EXTENSION.md). 기존 v9 비용 측정과 별도 확장이다.",
        '8종 cache snoop × 5종 상태, 5-bit CRRESP, 독립 CR/CD backpressure, dirty writeback, ACE initiating-manager의 ARSNOOP/AWSNOOP/DOMAIN 자동 변환과 기존 v9 B1/P 통합을 검사한다. 장기 B1/P 사례는 dirty line 2개와 core write 6개를 처리하고 conventional tracker 포화·복구 및 range tracker 우회를 확인한다. ReadShared·ReadUnique·CleanUnique·WriteUnique·WriteBack·Evict, DVM Message/Complete, barrier pair, shareable exclusive 및 RACK/WACK가 directed 범위이다. 2-part DVM과 일반적인 다중-outstanding ACE는 미지원이다.', '',
        '| 실행 | 결과 | log |', '|---|---|---|']
    for c in m['cases']:lines.append(f"| {c['name']} | {c['status']} | [log]({rel}/{c['log']}) |")
if 'ace_synthesis' in verified:
    m,out=verified['ace_synthesis'];rel=out.relative_to(report)
    lines += ['', '## ACE 확장 synthesis-only 확인', '',
        f"실행 `{m['run_id']}`. [manifest]({rel}/manifest.json). endpoint/snoop-controller/manager-controller 및 B1/P 확장 top의 합성 확인이며 배치·배선·timing sign-off는 아니다. 기존 v9의 면적 증분에 이 확장 비용이 포함되어 있지 않다.", '']
    for top in ['ace_cache_snoop_endpoint','ace_snoop_fabric','ace_snoop_controller','ace_manager_request_controller','axi_cci_ace_top_B1','axi_cci_ace_top_P','axi_cci_ace_top_multi_filter']:
        lines.append(f'- {top}: [utilization]({rel}/{top}_utilization.rpt)')
if 'ace_implementation' in verified:
    m,out=verified['ace_implementation'];rel=out.relative_to(report);v=m['variants']
    lines += ['', '## ACE 확장 post-route 내부 timing 확인', '',
        f"실행 `{m['run_id']}`. Device `{m['config']['part']}`, period {m['config']['period_ns']} ns. [구현 manifest]({rel}/manifest.json). 직접 OOC top의 외부 pin 경로는 제외하고 내부 register-to-register 경로를 배치·배선했다.", '',
        '| 구성 | LUT | FF | CARRY8 | BRAM | WNS | WHS |',
        '|---|---:|---:|---:|---:|---:|---:|']
    for name,r in v.items():
        lines.append(f"| {name} | {r['LUT']} | {r['FF']} | {r['CARRY8']} | {r['BRAM']} | {r['WNS']} | {r['WHS']} |")
    lines += ['', '세 구성 모두 setup/hold/pulse-width failing endpoint 0, 내부 no-clock/unconstrained endpoint 0, 완전 배선 및 허용된 OOC DRC warning 조건을 통과했다. 외부 인터페이스 timing과 board clock/reset sign-off는 이 결과에 포함되지 않는다.']
if 'implementation' in verified:
    m,out=verified['implementation'];rel=out.relative_to(report);v=m['variants']
    rows=[dict(variant=name,**{k:value for k,value in r.items() if k!='hierarchy'}) for name,r in v.items()]
    with (report/'hardware_cost.csv').open('w',newline='') as f:
        w=csv.DictWriter(f,fieldnames=rows[0].keys());w.writeheader();w.writerows(rows)
    lines += ['', '## Post-route: 관찰 출력 제거, DUT 내부와 경계 분리','',
        f"실행 `{m['run_id']}`. Device `{m['config']['part']}`, period {m['config']['period_ns']} ns, OBSERVE_DEBUG=0. [구현 manifest]({rel}/manifest.json).",'',
        '| 구성 | DUT LUT | DUT FF | Shell 포함 LUT | Shell 포함 FF | CARRY8 전체 | BRAM 전체 | WNS | WHS |',
        '|---|---:|---:|---:|---:|---:|---:|---:|---:|']
    for name,r in v.items():
        core=r['hierarchy']['dut'];lines.append(f"| {name} | {core['LUT']} | {core['FF']} | {r['LUT']} | {r['FF']} | {r['CARRY8']} | {r['BRAM']} | {r['WNS']} | {r['WHS']} |")
    if 'P' in v and 'B1' in v:
        p,b=v['P'],v['B1']
        delta_core={k:p['hierarchy']['dut'][k]-b['hierarchy']['dut'][k] for k in ['LUT','FF']}
        delta_all={k:p[k]-b[k] for k in ['LUT','FF','CARRY8','BRAM']}
        lines += ['',f"대표 **DUT 내부 P−B1: LUT {delta_core['LUT']:+}, FF {delta_core['FF']:+}**.",
            f"보조 shell/endpoint 포함 P−B1: LUT {delta_all['LUT']:+}, FF {delta_all['FF']:+}, CARRY8 {delta_all['CARRY8']:+}, BRAM {delta_all['BRAM']:+g}.",'',
            'DUT의 setup pending 저장은 기능 비용이다. 측정 경계의 setup 입력 레지스터는 DUT 내부 비용과 별도로 보고한다. 관찰 출력은 이번 shell에서 제거했다. 계층 LUT는 cross-hierarchy combining 때문에 단순 합산하지 않는다.']
    lines += ['', '모든 표시된 구성은 setup/hold/pulse-width failing endpoint 0, 내부 no-clock/unconstrained endpoint 0 및 일관된 fully-routed count, 허용된 OOC DRC warning만 존재 조건을 통과했다. 외부 pin 경로와 비동기 reset 경로는 측정에서 제외했다. OOC clock source와 board clock/reset sign-off를 구분해야 한다.']
else:
    # Never leave a stale numeric CSV looking like the current validated result.
    (report/'hardware_cost.csv').write_text('status\nNO_VERIFIED_CURRENT_IMPLEMENTATION\n')
lines += ['', '## 지원 범위와 남은 확장','',
    '단일 range context, 정상 응답, full-line M1 write, line-contained M0 burst, in-order AXI 응답이 지원 범위이다. CR/B 오류는 simulation fail-fast이며 하드웨어 recovery가 아니다.',
    'Memory/cache 검증은 simulation용 sparse byte memory와 단일 outstanding refill의 clean-cache 모델을 사용한다. Late fill은 cached-master 모델이 poison하여 재설치를 막는다. 합성 비용에는 이 test-only cache/memory를 포함하지 않으며 공통 ordered snoop responder를 사용한다.',
    'v9 기본 경로는 dirty cache/CD를 포함하지 않는다. 별도 ACE 확장은 위 범위에서 지원하며, 다중 cached master/context, 일반적인 cache hierarchy, CCI 전체 formal proof 및 보드-level sign-off는 완료 주장에 포함하지 않는다. 참고용 `hw_overhead_sv_참고용`은 신규 file list 밖의 보존 코드이다.','']
(report/'INTEGRATION_RESULTS.md').write_text('\n'.join(lines))
print(report/'INTEGRATION_RESULTS.md')
if problems:sys.exit(1)
