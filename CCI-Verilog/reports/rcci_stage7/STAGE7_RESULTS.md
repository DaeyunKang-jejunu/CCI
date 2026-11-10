# rCCI 단계 7 결과 — legacy setup/P-WR 분리

실행일: 2026-11-06  
판정: **PASS**

## 변경 결과

- 활성 `coh_write_ingress`를 64 B line write 전용 ingress로 정리했다. setup, `range_ctx_t`, old range RIM/hazard/read-prep/release 포트와 상태는 없다.
- `coh_read_ingress`는 B1 ReadOnce와 ReadRange만 소유하며 setup reserve/done/release 경로를 제거했다.
- `axi_cci_ace_top`의 service owner는 AUTO, EXPLICIT, NQ_READ, NQ_WRITE 4종이다. `NQ_RANGE`, old range prep, setup admission freeze를 제거했다.
- `axi_cci_top`은 line-only coherent write 또는 순수 AXI core로 정리했고, `axi_b0_top`도 새 인터페이스로 갱신했다.
- old P-WR 모듈 4개, `cci_pkg.sv`, standalone B1/P wrapper·synthesis shell, setup 전용 TB와 runner를 활성 tree에서 삭제했다.
- `scripts/rtl.f`와 `scripts/ace.f`에는 현재 line-only core와 ReadRange/WriteRange·ACE 모듈만 남는다.
- 루트 `run_regression.py`는 단계 2·5·6, 전체 ACE, formal을 실행하는 활성 rCCI 회귀 진입점으로 교체했다.

## 제거 전 archive

`reports/archive/rcci_pre_stage7_2026-11-06`에 단계 6 완료 시점의 RTL, TB, runner, 합성 Tcl을 보존했다.

- manifest 파일 수: 117
- SHA-256 전수 비교: PASS
- archive 내부 file list와 소스만 사용한 legacy `USE_RANGE=1` ACE 통합 build/run: PASS
- 관측 marker: `PASS v9 ACE integration mode=1 ...`

따라서 과거 setup/P-WR 결과는 활성 rCCI 결과와 섞이지 않으면서 별도로 재현할 수 있다.

## 최종 검증

| 검증 | 결과 | 범위 |
|---|---:|---|
| 활성 lint | PASS | `axi_cci_ace_top`, standalone `axi_b0_top` |
| 단계 2 | PASS | 정상 3, 형식 거부 18, expected-failure 2 |
| 단계 5 | PASS | ReadRange W=1/4/8, 1/8/64라인, 통합·거부·mutation 포함 21건 |
| 단계 6 | PASS | WriteRange W=1/4/8, 1/8/64라인, 통합·거부·mutation 포함 24건 |
| 전체 ACE | PASS | 정상/경합/outstanding/오류 정책/mutation 68건 |
| formal | PASS | 정상 증명 4, 도달성 witness 6, mutation 검출 5 = 15건 |
| Vivado OOC synthesis-only | PASS | endpoint, fabric, controller, service, manager, ACE B1/rCCI/2-target 등 10개 구성 |
| GTKWave FST 재생성 | PASS | 활성 rCCI `ace-p.fst`, 59,350 bytes |

활성 회귀 묶음은 `active_regression.json`에 기록했다. 개별 source/artifact hash manifest는 다음 latest pointer가 가리킨다.

- `reports/latest_ace.json`: `ace_20261106T065811Z_7e2d3bf9`
- `reports/latest_formal.json`: `formal_20261106T070630Z_38ec0464`
- `reports/latest_ace_synthesis.json`: `ace_synthesis_20261106T064628Z_67990bf9`

세 manifest는 최종 파일 상태를 기준으로 source와 artifact hash 재검증을 통과했다.

## 판정 범위

이번 합성 결과는 OOC synthesis-only 자원·elaboration 확인이며 place/route timing sign-off가 아니다. `coh_write_ingress` formal은 깊이 20의 BMC이고 endpoint FIFO만 k-induction을 사용한다. M0/ACE/M1 전체 해저드 창, 오류 drain/reset 및 bounded progress formal 확장은 계획의 단계 8 범위로 남는다.
