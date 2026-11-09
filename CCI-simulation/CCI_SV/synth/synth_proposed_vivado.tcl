# Vivado synthesis script for the PROPOSED range-based design.
# System top: cci_memcpy_system
#   Includes cci_memcpy_range_unit + cci_write_completion_tracker so the
#   synthesis result reflects the full system cost for a fair comparison.
#
# Run from the CCI_SV/synth directory:
#   vivado -mode batch -source synth_proposed_vivado.tcl
#
# Reports are written to CCI_SV/synth/reports/proposed_*.rpt

set DESIGN proposed
set TOP    cci_memcpy_system
set PART   xczu7ev-ffvc1156-2-e

set SCRIPT_DIR [file dirname [file normalize [info script]]]
set RTL_DIR    [file normalize "$SCRIPT_DIR/../rtl"]
set RPT_DIR    "$SCRIPT_DIR/reports"
file mkdir $RPT_DIR

# -----------------------------------------------------------------------
# Read design sources (package first, submodules, then system top)
# -----------------------------------------------------------------------
read_verilog -sv [list \
  $RTL_DIR/cci_memcpy_pkg.sv                \
  $RTL_DIR/cci_range_hazard_checker.sv      \
  $RTL_DIR/cci_memcpy_req_decoder.sv        \
  $RTL_DIR/cci_ac_range_gen.sv              \
  $RTL_DIR/cci_range_rim_tracker.sv         \
  $RTL_DIR/cci_snoop_response_tracker.sv    \
  $RTL_DIR/cci_write_completion_tracker.sv  \
  $RTL_DIR/cci_memcpy_range_unit.sv         \
  $RTL_DIR/cci_memcpy_system.sv             \
]

# -----------------------------------------------------------------------
# Timing constraints — loaded via read_xdc so evaluation is deferred
# until synth_design opens the design (create_clock/set_*_delay require
# an open design and cannot be called directly before synth_design).
# -----------------------------------------------------------------------
read_xdc [file normalize "$SCRIPT_DIR/constraints.xdc"]

# -----------------------------------------------------------------------
# Synthesis — AreaOptimized_high for hardware-cost comparison.
# -----------------------------------------------------------------------
synth_design \
  -top              $TOP                  \
  -part             $PART                 \
  -flatten_hierarchy rebuilt              \
  -directive        AreaOptimized_high

# -----------------------------------------------------------------------
# Reports
# -----------------------------------------------------------------------
report_utilization \
  -hierarchical                           \
  -hierarchical_depth 3                   \
  -file $RPT_DIR/${DESIGN}_utilization.rpt

# Flat report: used by compare for LUT/FF extraction (stable row names).
report_utilization \
  -file $RPT_DIR/${DESIGN}_utilization_flat.rpt

report_timing_summary \
  -datasheet                              \
  -file $RPT_DIR/${DESIGN}_timing.rpt

report_power \
  -file $RPT_DIR/${DESIGN}_power.rpt

report_clock_interaction \
  -file $RPT_DIR/${DESIGN}_clk_interaction.rpt

puts "\n=========================================="
puts " $DESIGN synthesis complete (top: $TOP)"
puts " See $RPT_DIR/${DESIGN}_utilization.rpt"
puts "==========================================\n"
