# Simulation Makefile for CCI_SV testbench suite.
#
# Default simulator: Verilator 5.004+ (--timing required)
#   Alternatively:  make SIM=xsim sim_unit
#                   make SIM=iverilog sim_unit  (packed-struct indexing may fail)
#
# Usage:
#   make sim_all                    # run full regression suite (no waveform output)
#   make TRACE=1 sim_all            # run full regression; write waves/tb_name.fst per TB
#   make TRACE=1 sim_system         # single TB with waveform output
#   make sim_unit                   # integration testbench (cci_memcpy_range_unit)
#   make sim_tracker                # rim tracker FSM testbench
#   make sim_ac_gen                 # AC generator testbench
#   make sim_baseline               # baseline line tracker testbench
#   make sim_decoder                # request decoder testbench
#   make sim_write_tracker          # write-completion tracker regression tests
#   make sim_system                 # system-level TB: AW/B→CR→write_completion→hazard path
#   make sim_compare                # proposed vs baseline directed behavior comparison
#   make sim_existing               # realistic cost baseline (existing CCI path only)
#   make sim_augmented              # realistic cost measurement (existing + memcpy)
#   make sim_overflow               # expected-$warning overflow test (NOT in sim_all)
#   make sim_snoop_order            # negative test: CR before AC → $fatal (NOT in sim_all)
#   make clean                      # remove build artifacts and waves/

SHELL   := bash
SIM     ?= verilator
TRACE   ?= 0

RTL_DIR := $(abspath rtl)
TB_DIR  := $(abspath tb)
BUILD   := $(abspath build)
WAVES   := $(abspath waves)

ifeq ($(TRACE),1)
TRACE_FLAGS := --trace-fst -DTRACE
else
TRACE_FLAGS :=
endif

PKG     := $(RTL_DIR)/cci_memcpy_pkg.sv

PROPOSED_RTL := \
  $(RTL_DIR)/cci_range_hazard_checker.sv     \
  $(RTL_DIR)/cci_memcpy_req_decoder.sv       \
  $(RTL_DIR)/cci_ac_range_gen.sv             \
  $(RTL_DIR)/cci_range_rim_tracker.sv        \
  $(RTL_DIR)/cci_snoop_response_tracker.sv   \
  $(RTL_DIR)/cci_memcpy_range_unit.sv

WRITE_TRACKER_RTL := $(RTL_DIR)/cci_write_completion_tracker.sv

HAZARD_RTL := $(RTL_DIR)/cci_range_hazard_checker.sv

SYSTEM_RTL := \
  $(PROPOSED_RTL) \
  $(WRITE_TRACKER_RTL) \
  $(RTL_DIR)/cci_memcpy_system.sv

# RTL for comparison TB: both proposed and baseline system wrappers.
COMPARE_RTL := \
  $(PROPOSED_RTL) \
  $(WRITE_TRACKER_RTL) \
  $(RTL_DIR)/cci_memcpy_system.sv \
  $(RTL_DIR)/baseline_line_tracker.sv \
  $(RTL_DIR)/cci_baseline_system.sv

# RTL for realistic cost model TBs.
EXISTING_SYS_RTL := \
  $(RTL_DIR)/baseline_line_tracker.sv \
  $(WRITE_TRACKER_RTL) \
  $(RTL_DIR)/cci_existing_system.sv

AUGMENTED_SYS_RTL := \
  $(PROPOSED_RTL) \
  $(WRITE_TRACKER_RTL) \
  $(RTL_DIR)/baseline_line_tracker.sv \
  $(RTL_DIR)/cci_augmented_system.sv

.PHONY: all sim_all sim_unit sim_tracker sim_ac_gen sim_baseline sim_decoder \
        sim_write_tracker sim_system sim_compare sim_hazard \
        sim_existing sim_augmented sim_overflow sim_snoop_order clean

all: sim_all

sim_all: sim_unit sim_tracker sim_ac_gen sim_baseline sim_decoder \
         sim_write_tracker sim_system sim_compare sim_hazard \
         sim_existing sim_augmented

$(BUILD):
	@mkdir -p $(BUILD)

# ---------------------------------------------------------------------------
# Verilator flow (default)
# Requires Verilator 5.004+ with --timing support.
# ---------------------------------------------------------------------------
ifeq ($(SIM),verilator)

define run_vltor
	@echo "=== $1 (verilator) ==="
	@mkdir -p $(BUILD)/$1
	$(if $(filter 1,$(TRACE)),@mkdir -p $(WAVES))
	verilator --binary --timing \
	  $(TRACE_FLAGS) \
	  --top-module $4 \
	  --Wno-TIMESCALEMOD \
	  --Wno-WIDTHEXPAND \
	  -Mdir $(BUILD)/$1 -o $1_sim \
	  $(PKG) $2 $3
	$(BUILD)/$1/$1_sim
endef

sim_unit: $(BUILD)
	$(call run_vltor,tb_cci_memcpy_range_unit,\
	  $(PROPOSED_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_range_unit.sv,\
	  tb_cci_memcpy_range_unit)

sim_tracker: $(BUILD)
	$(call run_vltor,tb_cci_range_rim_tracker,\
	  $(RTL_DIR)/cci_ac_range_gen.sv $(RTL_DIR)/cci_range_rim_tracker.sv,\
	  $(TB_DIR)/tb_cci_range_rim_tracker.sv,\
	  tb_cci_range_rim_tracker)

sim_ac_gen: $(BUILD)
	$(call run_vltor,tb_cci_ac_range_gen,\
	  $(RTL_DIR)/cci_ac_range_gen.sv,\
	  $(TB_DIR)/tb_cci_ac_range_gen.sv,\
	  tb_cci_ac_range_gen)

sim_baseline: $(BUILD)
	$(call run_vltor,tb_baseline_line_tracker,\
	  $(RTL_DIR)/baseline_line_tracker.sv,\
	  $(TB_DIR)/tb_baseline_line_tracker.sv,\
	  tb_baseline_line_tracker)

sim_decoder: $(BUILD)
	$(call run_vltor,tb_cci_memcpy_req_decoder,\
	  $(RTL_DIR)/cci_memcpy_req_decoder.sv,\
	  $(TB_DIR)/tb_cci_memcpy_req_decoder.sv,\
	  tb_cci_memcpy_req_decoder)

sim_write_tracker: $(BUILD)
	$(call run_vltor,tb_cci_write_completion_tracker,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker.sv,\
	  tb_cci_write_completion_tracker)

sim_system: $(BUILD)
	$(call run_vltor,tb_cci_memcpy_system,\
	  $(SYSTEM_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_system.sv,\
	  tb_cci_memcpy_system)

sim_compare: $(BUILD)
	$(call run_vltor,tb_cci_system_compare,\
	  $(COMPARE_RTL),\
	  $(TB_DIR)/tb_cci_system_compare.sv,\
	  tb_cci_system_compare)

# Hazard checker: purely combinational; no clock required.
sim_hazard: $(BUILD)
	$(call run_vltor,tb_cci_range_hazard_checker,\
	  $(HAZARD_RTL),\
	  $(TB_DIR)/tb_cci_range_hazard_checker.sv,\
	  tb_cci_range_hazard_checker)

sim_existing: $(BUILD)
	$(call run_vltor,tb_cci_existing_system,\
	  $(EXISTING_SYS_RTL),\
	  $(TB_DIR)/tb_cci_existing_system.sv,\
	  tb_cci_existing_system)

sim_augmented: $(BUILD)
	$(call run_vltor,tb_cci_augmented_system,\
	  $(AUGMENTED_SYS_RTL),\
	  $(TB_DIR)/tb_cci_augmented_system.sv,\
	  tb_cci_augmented_system)

# Overflow test: expected $warning in sim log; TB exits 0 if protection worked.
sim_overflow: $(BUILD)
	$(call run_vltor,tb_cci_write_completion_tracker_overflow,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker_overflow.sv,\
	  tb_cci_write_completion_tracker_overflow)

# Negative test: CR before AC must trigger $fatal (exit code != 0 = PASS).
# Verifies the ACE-ordering assertion in cci_snoop_response_tracker is active.
# NOT in sim_all — run separately: make sim_snoop_order
sim_snoop_order: $(BUILD)
	@echo "=== Negative test: CR before AC → \$$fatal (exit!=0 = PASS) (verilator) ==="
	@mkdir -p $(BUILD)/tb_cci_snoop_order_violation
	verilator --binary --timing \
	  --top-module tb_cci_snoop_order_violation \
	  --Wno-TIMESCALEMOD --Wno-WIDTHEXPAND \
	  -Mdir $(BUILD)/tb_cci_snoop_order_violation \
	  -o tb_cci_snoop_order_violation_sim \
	  $(PKG) \
	  $(RTL_DIR)/cci_snoop_response_tracker.sv \
	  $(TB_DIR)/tb_cci_snoop_order_violation.sv
	@set +e; \
	 $(BUILD)/tb_cci_snoop_order_violation/tb_cci_snoop_order_violation_sim; \
	 STATUS=$$?; set -e; \
	 [ $$STATUS -ne 0 ] \
	   && echo "PASS  CR-before-AC \$$fatal fired (exit $$STATUS)" \
	   || { echo "FAIL  \$$fatal did not fire — assertion missing or disabled"; exit 1; }

# ---------------------------------------------------------------------------
# Xilinx xsim flow
# ---------------------------------------------------------------------------
else ifeq ($(SIM),xsim)

define run_xsim
	@echo "=== $1 (xsim) ==="
	@mkdir -p $(BUILD)/$1
	cd $(BUILD)/$1 && xvlog --sv -d SIMV $(PKG) $2 $3
	cd $(BUILD)/$1 && xelab $4 -s $1_snap
	cd $(BUILD)/$1 && xsim $1_snap --runall
endef

sim_unit: $(BUILD)
	$(call run_xsim,tb_cci_memcpy_range_unit,\
	  $(PROPOSED_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_range_unit.sv,\
	  tb_cci_memcpy_range_unit)

sim_tracker: $(BUILD)
	$(call run_xsim,tb_cci_range_rim_tracker,\
	  $(RTL_DIR)/cci_ac_range_gen.sv $(RTL_DIR)/cci_range_rim_tracker.sv,\
	  $(TB_DIR)/tb_cci_range_rim_tracker.sv,\
	  tb_cci_range_rim_tracker)

sim_ac_gen: $(BUILD)
	$(call run_xsim,tb_cci_ac_range_gen,\
	  $(RTL_DIR)/cci_ac_range_gen.sv,\
	  $(TB_DIR)/tb_cci_ac_range_gen.sv,\
	  tb_cci_ac_range_gen)

sim_baseline: $(BUILD)
	$(call run_xsim,tb_baseline_line_tracker,\
	  $(RTL_DIR)/baseline_line_tracker.sv,\
	  $(TB_DIR)/tb_baseline_line_tracker.sv,\
	  tb_baseline_line_tracker)

sim_decoder: $(BUILD)
	$(call run_xsim,tb_cci_memcpy_req_decoder,\
	  $(RTL_DIR)/cci_memcpy_req_decoder.sv,\
	  $(TB_DIR)/tb_cci_memcpy_req_decoder.sv,\
	  tb_cci_memcpy_req_decoder)

sim_write_tracker: $(BUILD)
	$(call run_xsim,tb_cci_write_completion_tracker,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker.sv,\
	  tb_cci_write_completion_tracker)

sim_system: $(BUILD)
	$(call run_xsim,tb_cci_memcpy_system,\
	  $(SYSTEM_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_system.sv,\
	  tb_cci_memcpy_system)

sim_compare: $(BUILD)
	$(call run_xsim,tb_cci_system_compare,\
	  $(COMPARE_RTL),\
	  $(TB_DIR)/tb_cci_system_compare.sv,\
	  tb_cci_system_compare)

sim_hazard: $(BUILD)
	$(call run_xsim,tb_cci_range_hazard_checker,\
	  $(HAZARD_RTL),\
	  $(TB_DIR)/tb_cci_range_hazard_checker.sv,\
	  tb_cci_range_hazard_checker)

sim_existing: $(BUILD)
	$(call run_xsim,tb_cci_existing_system,\
	  $(EXISTING_SYS_RTL),\
	  $(TB_DIR)/tb_cci_existing_system.sv,\
	  tb_cci_existing_system)

sim_augmented: $(BUILD)
	$(call run_xsim,tb_cci_augmented_system,\
	  $(AUGMENTED_SYS_RTL),\
	  $(TB_DIR)/tb_cci_augmented_system.sv,\
	  tb_cci_augmented_system)

sim_overflow: $(BUILD)
	$(call run_xsim,tb_cci_write_completion_tracker_overflow,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker_overflow.sv,\
	  tb_cci_write_completion_tracker_overflow)

sim_snoop_order: $(BUILD)
	@echo "=== Negative test: CR before AC → \$$fatal (exit!=0 = PASS) (xsim) ==="
	@mkdir -p $(BUILD)/tb_cci_snoop_order_violation
	cd $(BUILD)/tb_cci_snoop_order_violation && \
	  xvlog --sv -d SIMV $(PKG) \
	    $(RTL_DIR)/cci_snoop_response_tracker.sv \
	    $(TB_DIR)/tb_cci_snoop_order_violation.sv
	cd $(BUILD)/tb_cci_snoop_order_violation && \
	  xelab tb_cci_snoop_order_violation -s tb_cci_snoop_order_violation_snap
	@set +e; \
	 cd $(BUILD)/tb_cci_snoop_order_violation && xsim tb_cci_snoop_order_violation_snap --runall; \
	 STATUS=$$?; set -e; \
	 [ $$STATUS -ne 0 ] \
	   && echo "PASS  CR-before-AC \$$fatal fired (exit $$STATUS)" \
	   || { echo "FAIL  \$$fatal did not fire — assertion missing or disabled"; exit 1; }

# ---------------------------------------------------------------------------
# Icarus iverilog flow
# Note: packed-struct variable indexing in this RTL is not supported by Icarus.
# ---------------------------------------------------------------------------
else ifeq ($(SIM),iverilog)

define run_iv
	@echo "=== $1 ==="
	iverilog -g2012 -Wall -o $(BUILD)/$1.vvp $(PKG) $2 $3
	vvp $(BUILD)/$1.vvp
	@echo "=== $1 exit $$? ==="
endef

sim_unit: $(BUILD)
	$(call run_iv,tb_cci_memcpy_range_unit,\
	  $(PROPOSED_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_range_unit.sv)

sim_tracker: $(BUILD)
	$(call run_iv,tb_cci_range_rim_tracker,\
	  $(RTL_DIR)/cci_ac_range_gen.sv $(RTL_DIR)/cci_range_rim_tracker.sv,\
	  $(TB_DIR)/tb_cci_range_rim_tracker.sv)

sim_ac_gen: $(BUILD)
	$(call run_iv,tb_cci_ac_range_gen,\
	  $(RTL_DIR)/cci_ac_range_gen.sv,\
	  $(TB_DIR)/tb_cci_ac_range_gen.sv)

sim_baseline: $(BUILD)
	$(call run_iv,tb_baseline_line_tracker,\
	  $(RTL_DIR)/baseline_line_tracker.sv,\
	  $(TB_DIR)/tb_baseline_line_tracker.sv)

sim_decoder: $(BUILD)
	$(call run_iv,tb_cci_memcpy_req_decoder,\
	  $(RTL_DIR)/cci_memcpy_req_decoder.sv,\
	  $(TB_DIR)/tb_cci_memcpy_req_decoder.sv)

sim_write_tracker: $(BUILD)
	$(call run_iv,tb_cci_write_completion_tracker,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker.sv)

sim_system: $(BUILD)
	$(call run_iv,tb_cci_memcpy_system,\
	  $(SYSTEM_RTL),\
	  $(TB_DIR)/tb_cci_memcpy_system.sv)

sim_compare: $(BUILD)
	$(call run_iv,tb_cci_system_compare,\
	  $(COMPARE_RTL),\
	  $(TB_DIR)/tb_cci_system_compare.sv)

sim_hazard: $(BUILD)
	$(call run_iv,tb_cci_range_hazard_checker,\
	  $(HAZARD_RTL),\
	  $(TB_DIR)/tb_cci_range_hazard_checker.sv)

sim_existing: $(BUILD)
	$(call run_iv,tb_cci_existing_system,\
	  $(EXISTING_SYS_RTL),\
	  $(TB_DIR)/tb_cci_existing_system.sv)

sim_augmented: $(BUILD)
	$(call run_iv,tb_cci_augmented_system,\
	  $(AUGMENTED_SYS_RTL),\
	  $(TB_DIR)/tb_cci_augmented_system.sv)

sim_overflow: $(BUILD)
	$(call run_iv,tb_cci_write_completion_tracker_overflow,\
	  $(WRITE_TRACKER_RTL),\
	  $(TB_DIR)/tb_cci_write_completion_tracker_overflow.sv)

sim_snoop_order: $(BUILD)
	@echo "=== Negative test: CR before AC → \$$fatal (exit!=0 = PASS) (iverilog) ==="
	iverilog -g2012 -Wall \
	  -o $(BUILD)/tb_cci_snoop_order_violation.vvp \
	  $(PKG) \
	  $(RTL_DIR)/cci_snoop_response_tracker.sv \
	  $(TB_DIR)/tb_cci_snoop_order_violation.sv
	@set +e; \
	 vvp $(BUILD)/tb_cci_snoop_order_violation.vvp; \
	 STATUS=$$?; set -e; \
	 [ $$STATUS -ne 0 ] \
	   && echo "PASS  CR-before-AC \$$fatal fired (exit $$STATUS)" \
	   || { echo "FAIL  \$$fatal did not fire — assertion missing or disabled"; exit 1; }

else
$(error Unknown SIM=$(SIM). Use SIM=verilator, SIM=xsim, or SIM=iverilog)
endif

# ---------------------------------------------------------------------------
# Clean
# ---------------------------------------------------------------------------
clean:
	rm -rf $(BUILD) $(WAVES)
	rm -f xvlog.* xelab.* xsim.* *.jou *.log
