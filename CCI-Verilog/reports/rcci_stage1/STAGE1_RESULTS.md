# rCCI 구현 1단계 결과

## 범위와 재현 방법

현재 B1 RTL의 실제 handshake를 전용 테스트벤치에서 측정하고, 그 값을 상위
`CCI-simulation/rcci_model`의 독립 C++ 모델에 입력했다. 기존 `CBUS`/`CTracker`는
setup/page-mask 방식의 과거 제안을 모델링하므로 수정하지 않았다. 새 모델은 현재
계획의 down-count range request, 내부 line window, 공통 snoop/memory/data 자원을
cycle 단위로 표현한다.

```sh
python3 scripts/run_rcci_stage1.py
```

이 명령은 RTL 파형과 `rtl_latency.json`을 다시 만들고, C++ 단위 검사를 통과한 뒤
88개 sweep 결과, 요약 JSON, SVG 그래프를 생성한다.

## RTL 측정값

10 ns clock, memory slave `RESP_LATENCY=0`, READY 상시 허용 조건의 수락 handshake 간
cycle 차이다.

| 항목 | 정의 | 측정값 |
|---|---|---:|
| `Ls_nodata` | AC 수락 → no-data CR 수락 | 1 cycle |
| `Ls_data` | AC 수락 → dirty hit의 마지막 CD 수락 | 4 cycles |
| `Lm` | memory AR 수락 → 첫 R 수락 | 2 cycles |
| `Lw` | 마지막 memory W 수락 → B 수락 | 2 cycles |
| `Lc` | 마지막 CR/CD 수락 → owner status 관측 | 2 cycles (3단계 RTL 실측) |

`Ls_nodata`를 2절의 all-miss 식에 사용했다. hit/dirty sweep은 CD까지 포함하는
`Ls_data`를 사용한다. 측정 파형은 `stage1_latency.fst`와
`stage1_latency.gtkw`로 저장된다.

## 모델 조건

- B1: line 하나마다 admission token 하나와 DMA request 하나를 완료 때까지 점유한다.
- rCCI: range마다 token/DMA request 하나를 점유하고 내부에서 최대 `W` line을 진행한다.
- 두 방식 모두 snoop context `S`, memory outstanding `Q`, 128-bit data channel을 공유한다.
- line은 512 bit이므로 data channel 한계는 4 cycle당 한 line이다.
- read hit의 service context는 순서가 된 R 출력 완료까지 유지한다.
- read miss는 `Ls + Lc` 뒤 service context를 해제한다.
- M1 line data 순서는 유지하되 write B 대기와 다음 line W 전송은 겹칠 수 있다.

## 핵심 결과

| 조건 | B1 | rCCI | 해석 |
|---|---:|---:|---|
| read, `T=W=1` | 0.11111 line/cycle | 0.11111 | 실측 `Lc=2`에서 line 지연이 직렬화됨 |
| read, `T=W=2` | 0.22210 | 0.22210 | 두 line만으로는 아직 bus 한계에 도달하지 않음 |
| write, `T=W=2` | 0.22210 | 0.22210 | snoop control 지연이 W/B 중첩 뒤에도 남음 |
| read, `T=W=8`, 최대 token | 8 | 1 | 처리량 0.24982로 같고 rCCI가 range token 하나만 사용 |
| read, DMA outstanding=1, 내부 `W=16` | 0.11110 | 0.24963 | rCCI는 외부 request 하나로 내부 line 병렬성 유지 |
| 연속 miss 합치기, 1024 line | 1024 AR | 256 AR | 처리량은 이미 bus 제한이라 동일 |

All-miss read capacity sweep에서 측정 처리량과 2절 분석식의 최대 상대 오차는
0.073%였다. 작은 차이는 시작/종료 drain 비용이다. `Lc`를 0/1/2/4 cycle로 바꾸고
`T=W=1`로 병목을 드러내면 처리량은 0.14284/0.12498/0.11110/0.09090
line/cycle로 감소했다.

현재 무정지 slave의 `Ls_nodata=1`, `Lm=2`는 짧아서 all-miss에서 `S=1`, `Q=4`만으로도
data bus를 채운다. 따라서 이번 `S=1/2/4/8`, `Q=4/8/16` sweep이 평평한 것은 모델 누락이
아니라 측정 환경의 결과다. hit/dirty 비율은 service context 최대 점유를 1에서 최대 4로
높였지만 기본 `S=4`, `W=8` 조건의 처리량은 bus 제한으로 같았다.

연속 miss 합치기는 memory request 수는 75% 줄였지만 현재 지연 조건에서는 처리량 이득이
없다. 단계 10 RTL을 즉시 추가할 근거로 사용하지 않고, 긴 memory latency 또는 AR 병목을
평가할 때 다시 판단한다.

## 산출물

- `rtl_latency.json`: RTL 측정값과 정의
- `stage1_latency.fst`, `stage1_latency.gtkw`: 측정 파형
- `stage1_results.csv`: 전체 88개 실행의 조건과 결과
- `summary.json`: 재현 정보와 분석식 오차
- `throughput_capacity.svg`: B1 `T`와 rCCI `W` 비교
- `lc_sensitivity.svg`: `Lc` 민감도
- `resource_sweeps.svg`: `S`, `Q`, DMA outstanding 영향
- `hit_dirty.svg`: hit/dirty 비율 영향

3단계 태그 status/release 경로의 실측 `Lc=2`를 기본 조건에 반영했다. 측정 근거와
태그 서비스 검증은 `reports/rcci_stage3/STAGE3_RESULTS.md`에 기록했다.
