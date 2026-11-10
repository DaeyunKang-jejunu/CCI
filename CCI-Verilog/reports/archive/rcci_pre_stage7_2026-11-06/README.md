# Stage 7 이전 legacy setup/P-WR snapshot

2026-11-06 단계 6 완료 RTL, 테스트벤치, runner의 읽기 전용 보존본이다. 이 디렉터리를 작업 디렉터리로 두고 아래 명령으로 기존 setup/P-WR 회귀를 재현할 수 있다.

```sh
python3 scripts/run_regression.py
python3 scripts/run_ace.py
python3 scripts/run_formal.py
```

실행 결과는 이 snapshot 내부 `reports/`에 생성된다. 상위 active RTL을 참조하지 않는다.
