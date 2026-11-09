# Makefile for running Vivado synthesis and printing utilization comparisons.
#
# Two comparison modes:
#
#   ALGORITHM COMPARISON (proposed vs baseline — same write-tracker):
#     Proposed: cci_memcpy_system   = range_unit + write_tracker
#     Baseline: cci_baseline_system = line_tracker(N=64) + write_tracker
#
#   REALISTIC COST COMPARISON (augmented vs existing — same write-tracker):
#     Existing:  cci_existing_system  = line_tracker(N=16) + write_tracker
#     Augmented: cci_augmented_system = existing + range_unit + snoop_tracker
#     Overhead   = augmented − existing (incremental cost of memcpy addition)
#
# Prerequisites:
#   - Vivado 2022.1+ on PATH  (for vivado targets)
#   - sv2v + yosys on PATH    (for yosys targets; optional open-source flow)
#
# Usage:
#   make vivado_all          # synthesize all four designs with Vivado
#   make vivado_proposed     # synthesize proposed design only
#   make vivado_baseline     # synthesize baseline design only
#   make vivado_existing     # synthesize realistic baseline (existing CCI path)
#   make vivado_augmented    # synthesize realistic target (existing + memcpy)
#   make compare             # print algorithm comparison summary
#   make compare_realistic   # print realistic incremental overhead summary
#   make yosys_all           # open-source synthesis via sv2v + yosys
#   make clean               # remove generated files

SHELL      := bash
# Exit on any command failure, propagate pipe failures (e.g., sv2v | yosys).
.SHELLFLAGS := -eo pipefail -c

SYNTH_DIR   := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
RTL_DIR     := $(SYNTH_DIR)../rtl
RPT_DIR     := $(SYNTH_DIR)reports
YOSYS_DIR   := $(SYNTH_DIR)yosys_work
CONSTRAINTS := $(SYNTH_DIR)constraints.xdc

.PHONY: all vivado_all vivado_proposed vivado_baseline \
        vivado_existing vivado_augmented \
        compare compare_realistic yosys_all clean

all: vivado_all compare compare_realistic

# ---------------------------------------------------------------------------
# Vivado targets
# ---------------------------------------------------------------------------
vivado_proposed:  $(RPT_DIR)/proposed_utilization.rpt
vivado_baseline:  $(RPT_DIR)/baseline_utilization.rpt
vivado_existing:  $(RPT_DIR)/existing_utilization.rpt
vivado_augmented: $(RPT_DIR)/augmented_utilization.rpt
vivado_all: vivado_proposed vivado_baseline vivado_existing vivado_augmented

# ---------------------------------------------------------------------------
# RTL file lists
# ---------------------------------------------------------------------------
PROPOSED_SV := $(RTL_DIR)/cci_memcpy_pkg.sv \
               $(RTL_DIR)/cci_range_hazard_checker.sv \
               $(RTL_DIR)/cci_memcpy_req_decoder.sv \
               $(RTL_DIR)/cci_ac_range_gen.sv \
               $(RTL_DIR)/cci_range_rim_tracker.sv \
               $(RTL_DIR)/cci_snoop_response_tracker.sv \
               $(RTL_DIR)/cci_write_completion_tracker.sv \
               $(RTL_DIR)/cci_memcpy_range_unit.sv \
               $(RTL_DIR)/cci_memcpy_system.sv

BASELINE_SV := $(RTL_DIR)/cci_memcpy_pkg.sv \
               $(RTL_DIR)/cci_write_completion_tracker.sv \
               $(RTL_DIR)/baseline_line_tracker.sv \
               $(RTL_DIR)/cci_baseline_system.sv

EXISTING_SV := $(RTL_DIR)/cci_memcpy_pkg.sv \
               $(RTL_DIR)/cci_write_completion_tracker.sv \
               $(RTL_DIR)/baseline_line_tracker.sv \
               $(RTL_DIR)/cci_existing_system.sv

AUGMENTED_SV := $(RTL_DIR)/cci_memcpy_pkg.sv \
                $(RTL_DIR)/cci_range_hazard_checker.sv \
                $(RTL_DIR)/cci_memcpy_req_decoder.sv \
                $(RTL_DIR)/cci_ac_range_gen.sv \
                $(RTL_DIR)/cci_range_rim_tracker.sv \
                $(RTL_DIR)/cci_snoop_response_tracker.sv \
                $(RTL_DIR)/cci_memcpy_range_unit.sv \
                $(RTL_DIR)/cci_write_completion_tracker.sv \
                $(RTL_DIR)/baseline_line_tracker.sv \
                $(RTL_DIR)/cci_augmented_system.sv

$(RPT_DIR)/proposed_utilization.rpt: $(SYNTH_DIR)synth_proposed_vivado.tcl $(PROPOSED_SV) $(CONSTRAINTS)
	@mkdir -p $(RPT_DIR)
	vivado -mode batch -source $(SYNTH_DIR)synth_proposed_vivado.tcl \
	       -log $(RPT_DIR)/proposed_vivado.log \
	       -nojournal

$(RPT_DIR)/baseline_utilization.rpt: $(SYNTH_DIR)synth_baseline_vivado.tcl $(BASELINE_SV) $(CONSTRAINTS)
	@mkdir -p $(RPT_DIR)
	vivado -mode batch -source $(SYNTH_DIR)synth_baseline_vivado.tcl \
	       -log $(RPT_DIR)/baseline_vivado.log \
	       -nojournal

$(RPT_DIR)/existing_utilization.rpt: $(SYNTH_DIR)synth_existing_vivado.tcl $(EXISTING_SV) $(CONSTRAINTS)
	@mkdir -p $(RPT_DIR)
	vivado -mode batch -source $(SYNTH_DIR)synth_existing_vivado.tcl \
	       -log $(RPT_DIR)/existing_vivado.log \
	       -nojournal

$(RPT_DIR)/augmented_utilization.rpt: $(SYNTH_DIR)synth_augmented_vivado.tcl $(AUGMENTED_SV) $(CONSTRAINTS)
	@mkdir -p $(RPT_DIR)
	vivado -mode batch -source $(SYNTH_DIR)synth_augmented_vivado.tcl \
	       -log $(RPT_DIR)/augmented_vivado.log \
	       -nojournal

# ---------------------------------------------------------------------------
# Flat report sentinel rules
#
# Both the hierarchical and flat reports are written by the same Vivado run.
# These rules make the flat reports explicit Make prerequisites so that
# compare_realistic fails loudly if the flat report is missing (e.g. after
# manual deletion) rather than silently extracting empty values.
# If a flat report is absent after synthesis, delete the corresponding
# hierarchical report and re-run vivado_existing / vivado_augmented.
# ---------------------------------------------------------------------------
$(RPT_DIR)/proposed_utilization_flat.rpt: $(RPT_DIR)/proposed_utilization.rpt
	@test -f $@ || { \
	  echo "ERROR: $@ was not generated — delete $(RPT_DIR)/proposed_utilization.rpt to force re-synthesis"; \
	  exit 1; \
	}

$(RPT_DIR)/baseline_utilization_flat.rpt: $(RPT_DIR)/baseline_utilization.rpt
	@test -f $@ || { \
	  echo "ERROR: $@ was not generated — delete $(RPT_DIR)/baseline_utilization.rpt to force re-synthesis"; \
	  exit 1; \
	}

$(RPT_DIR)/existing_utilization_flat.rpt: $(RPT_DIR)/existing_utilization.rpt
	@test -f $@ || { \
	  echo "ERROR: $@ was not generated — delete $(RPT_DIR)/existing_utilization.rpt to force re-synthesis"; \
	  exit 1; \
	}

$(RPT_DIR)/augmented_utilization_flat.rpt: $(RPT_DIR)/augmented_utilization.rpt
	@test -f $@ || { \
	  echo "ERROR: $@ was not generated — delete $(RPT_DIR)/augmented_utilization.rpt to force re-synthesis"; \
	  exit 1; \
	}

# Grep pattern for human-readable display of hierarchical report rows.
# "Total LUTs"/"Flip-Flops" appear as column headers in hierarchical reports,
# not as row names — so this grep is informational only (for the compare target).
# Automated LUT/FF extraction uses the flat report (*_utilization_flat.rpt).
UTIL_GREP := grep -E "CLB LUTs|Slice LUTs|CLB Registers|Slice Registers|LUT as Memory|F7 Muxes|F8 Muxes"

# Extract the first numeric "Used" value from a row matching PATTERN in FILE.
# Vivado table format: | Site Type | Used | Fixed | ... |
# Strips whitespace and returns the first non-zero integer after the type column.
define extract_used
$(shell awk '/\|[ ]*($(1))\*?[ ]*\|/{n=split($$0,a,"|"); \
  for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' $(2))
endef

# ---------------------------------------------------------------------------
# Algorithm comparison summary (proposed vs baseline, N_ENTRIES=64)
#
# LUT/FF extraction uses flat reports (*_utilization_flat.rpt).
# Reason: hierarchical reports list instance names as rows (not resource types);
# "CLB LUTs"/"CLB Registers" appear only as column headers there, not row names.
# The flat report has stable row names the awk pattern can reliably match.
# ---------------------------------------------------------------------------
compare: $(RPT_DIR)/proposed_utilization_flat.rpt $(RPT_DIR)/baseline_utilization_flat.rpt
	@echo ""
	@echo "==========================================================="
	@echo " ALGORITHM COMPARISON (proposed vs baseline, N_ENTRIES=64)"
	@echo " Extraction from flat (*_utilization_flat.rpt) reports"
	@echo "==========================================================="
	@PROP_LUT=$$(awk '/\|[ ]*(CLB LUTs|Slice LUTs)\*?[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/proposed_utilization_flat.rpt); \
	BASE_LUT=$$(awk '/\|[ ]*(CLB LUTs|Slice LUTs)\*?[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/baseline_utilization_flat.rpt); \
	PROP_FF=$$(awk '/\|[ ]*(CLB Registers|Slice Registers)[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/proposed_utilization_flat.rpt); \
	BASE_FF=$$(awk '/\|[ ]*(CLB Registers|Slice Registers)[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/baseline_utilization_flat.rpt); \
	if [ -z "$$PROP_LUT" ] || [ -z "$$BASE_LUT" ] || [ -z "$$PROP_FF" ] || [ -z "$$BASE_FF" ]; then \
	  echo "ERROR: utilization extraction failed — check that flat reports exist and contain CLB LUTs/Registers rows"; \
	  echo "  PROP_LUT='$$PROP_LUT' BASE_LUT='$$BASE_LUT' PROP_FF='$$PROP_FF' BASE_FF='$$BASE_FF'"; \
	  echo "  Expected flat reports:"; \
	  echo "    $(RPT_DIR)/proposed_utilization_flat.rpt"; \
	  echo "    $(RPT_DIR)/baseline_utilization_flat.rpt"; \
	  exit 1; \
	fi; \
	LUT_SAVE=$$(( $$BASE_LUT - $$PROP_LUT )); \
	FF_SAVE=$$(( $$BASE_FF  - $$PROP_FF  )); \
	LUT_PCT=0; [ $$BASE_LUT -gt 0 ] && LUT_PCT=$$(( $$LUT_SAVE * 100 / $$BASE_LUT )); \
	FF_PCT=0;  [ $$BASE_FF  -gt 0 ] && FF_PCT=$$(( $$FF_SAVE  * 100 / $$BASE_FF  )); \
	echo " PROPOSED : LUT=$$PROP_LUT  FF=$$PROP_FF"; \
	echo " BASELINE : LUT=$$BASE_LUT  FF=$$BASE_FF"; \
	echo " SAVINGS  : LUT=$$LUT_SAVE (-$$LUT_PCT% vs baseline)  FF=$$FF_SAVE (-$$FF_PCT% vs baseline)"; \
	echo "==========================================================="

# ---------------------------------------------------------------------------
# Realistic incremental overhead (augmented vs existing, NORMAL_ENTRIES=16)
#
# LUT/FF extraction uses the FLAT (*_utilization_flat.rpt) reports, not the
# hierarchical ones.  Reason: hierarchical reports use "Total LUTs"/"FFs" as
# column headers (not row names), so the same awk pattern cannot match them.
# The flat report has stable row names: "CLB LUTs"/"CLB Registers" (UltraScale+)
# or "Slice LUTs"/"Slice Registers" (7-series).
# ---------------------------------------------------------------------------
compare_realistic: $(RPT_DIR)/existing_utilization_flat.rpt $(RPT_DIR)/augmented_utilization_flat.rpt
	@echo ""
	@echo "==========================================================="
	@echo " INCREMENTAL OVERHEAD (augmented - existing, from flat reports)"
	@echo " EXISTING  = cci_existing_system  (line_tracker N=16 + write_tracker)"
	@echo " AUGMENTED = cci_augmented_system (existing + range_unit)"
	@echo "==========================================================="
	@EXIST_LUT=$$(awk '/\|[ ]*(CLB LUTs|Slice LUTs)\*?[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/existing_utilization_flat.rpt); \
	AUGM_LUT=$$(awk '/\|[ ]*(CLB LUTs|Slice LUTs)\*?[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/augmented_utilization_flat.rpt); \
	EXIST_FF=$$(awk '/\|[ ]*(CLB Registers|Slice Registers)[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/existing_utilization_flat.rpt); \
	AUGM_FF=$$(awk '/\|[ ]*(CLB Registers|Slice Registers)[ ]*\|/ \
	  {n=split($$0,a,"|"); for(i=2;i<=n;i++){gsub(/[ ]+/,"",a[i]); \
	   if(a[i]+0==a[i] && a[i]!=""){print a[i]+0; exit}}}' \
	  $(RPT_DIR)/augmented_utilization_flat.rpt); \
	if [ -z "$$EXIST_LUT" ] || [ -z "$$AUGM_LUT" ] || [ -z "$$EXIST_FF" ] || [ -z "$$AUGM_FF" ]; then \
	  echo "ERROR: utilization extraction failed — check that flat reports exist and contain CLB LUTs/Registers rows"; \
	  echo "  EXIST_LUT='$$EXIST_LUT' AUGM_LUT='$$AUGM_LUT' EXIST_FF='$$EXIST_FF' AUGM_FF='$$AUGM_FF'"; \
	  echo "  Expected flat reports:"; \
	  echo "    $(RPT_DIR)/existing_utilization_flat.rpt"; \
	  echo "    $(RPT_DIR)/augmented_utilization_flat.rpt"; \
	  exit 1; \
	fi; \
	LUT_OH=$$(( $$AUGM_LUT - $$EXIST_LUT )); \
	FF_OH=$$(( $$AUGM_FF - $$EXIST_FF )); \
	LUT_PCT=0; [ $$EXIST_LUT -gt 0 ] && LUT_PCT=$$(( $$LUT_OH * 100 / $$EXIST_LUT )); \
	FF_PCT=0;  [ $$EXIST_FF  -gt 0 ] && FF_PCT=$$(( $$FF_OH  * 100 / $$EXIST_FF  )); \
	echo " LUT: existing=$$EXIST_LUT  augmented=$$AUGM_LUT  overhead=$$LUT_OH (+$$LUT_PCT% of existing)"; \
	echo "  FF: existing=$$EXIST_FF   augmented=$$AUGM_FF   overhead=$$FF_OH  (+$$FF_PCT% of existing)"; \
	echo "==========================================================="

# ---------------------------------------------------------------------------
# Yosys open-source synthesis flow (requires sv2v and yosys)
# ---------------------------------------------------------------------------
yosys_all: yosys_proposed yosys_baseline

$(YOSYS_DIR):
	@mkdir -p $(YOSYS_DIR)

yosys_proposed: $(YOSYS_DIR) $(PROPOSED_SV)
	@echo "Converting proposed design (sv2v + -D SYNTHESIS)..."
	sv2v $(PROPOSED_SV) -D SYNTHESIS -w $(YOSYS_DIR)/proposed.v
	@echo "Synthesising proposed design (yosys)..."
	yosys -p " \
	  read_verilog $(YOSYS_DIR)/proposed.v; \
	  hierarchy -top cci_memcpy_system; \
	  proc; opt; fsm; opt; memory; opt; \
	  synth -flatten -top cci_memcpy_system; \
	  stat -width; \
	" 2>&1 | tee $(YOSYS_DIR)/proposed_yosys.log
	@echo "See $(YOSYS_DIR)/proposed_yosys.log"

yosys_baseline: $(YOSYS_DIR) $(BASELINE_SV)
	@echo "Converting baseline design (sv2v + -D SYNTHESIS)..."
	sv2v $(BASELINE_SV) -D SYNTHESIS -w $(YOSYS_DIR)/baseline.v
	@echo "Synthesising baseline design (yosys)..."
	yosys -p " \
	  read_verilog $(YOSYS_DIR)/baseline.v; \
	  hierarchy -top cci_baseline_system; \
	  proc; opt; fsm; opt; memory; opt; \
	  synth -flatten -top cci_baseline_system; \
	  stat -width; \
	" 2>&1 | tee $(YOSYS_DIR)/baseline_yosys.log
	@echo "See $(YOSYS_DIR)/baseline_yosys.log"

# ---------------------------------------------------------------------------
# Clean
# ---------------------------------------------------------------------------
clean:
	rm -rf $(RPT_DIR) $(YOSYS_DIR)
	rm -f vivado.jou vivado.log
