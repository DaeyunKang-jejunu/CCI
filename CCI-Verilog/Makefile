.PHONY: test lint synth-ace
VIVADO ?= vivado

test:
	python3 scripts/run_regression.py

lint:
	verilator --lint-only --timing --assert -Wno-fatal -f scripts/rtl.f -f scripts/ace.f --top-module axi_cci_ace_top
	verilator --lint-only --timing --assert -Wno-fatal -f scripts/rtl.f rtl/top/axi_b0_top.sv --top-module axi_b0_top

.PHONY: report test-results
report:
	python3 -m json.tool reports/rcci_stage8/active_regression.json
test-results:
	python3 scripts/test_results_common.py

.PHONY: test-xsim
test-xsim:
	python3 scripts/run_xsim.py

.PHONY: test-ace synth-ace implement-ace waves-ace waves-ace-all waves-rcci
test-ace:
	python3 scripts/run_ace.py --xsim
synth-ace:
	python3 scripts/run_ace_synthesis.py
implement-ace:
	python3 scripts/run_ace_implementation.py --jobs 2
waves-ace:
	python3 scripts/run_ace_waves.py --case ace-p
	python3 scripts/run_ace_waves.py --case ace-opcodes
waves-ace-all:
	python3 scripts/run_ace_waves.py --case all
waves-rcci:
	python3 scripts/run_ace_waves.py --case rcci

.PHONY: test-formal
# Needs sv2v (v0.0.11 tested) and yowasp-yosys (pip install yowasp-yosys) on PATH.
test-formal:
	python3 scripts/run_formal.py
