# Vivado synthesis script for cci_augmented_system — realistic cost target.
#
# cci_augmented_system = cci_existing_system
#                      + cci_memcpy_range_unit (proposed addition)
#
# Synthesise this and subtract cci_existing_system results to get the
# incremental hardware overhead of the proposed memcpy acceleration:
#
#   overhead_LUT = augmented_LUT − existing_LUT
#   overhead_FF  = augmented_FF  − existing_FF
#
# Run from the CCI_SV/synth directory:
#   vivado -mode batch -source synth_augmented_vivado.tcl
#
# Reports are written to CCI_SV/synth/reports/augmented_*.rpt

set DESIGN augmented
set TOP    cci_augmented_system
set PART   xczu7ev-ffvc1156-2-e

set SCRIPT_DIR [file dirname [file normalize [info script]]]
set RTL_DIR    [file normalize "$SCRIPT_DIR/../rtl"]
set RPT_DIR    "$SCRIPT_DIR/reports"
file mkdir $RPT_DIR

# -----------------------------------------------------------------------
# Read design sources
# -----------------------------------------------------------------------
read_verilog -sv [list \
  $RTL_DIR/cci_memcpy_pkg.sv                \
  $RTL_DIR/cci_range_hazard_checker.sv      \
  $RTL_DIR/cci_memcpy_req_decoder.sv        \
  $RTL_DIR/cci_ac_range_gen.sv              \
  $RTL_DIR/cci_range_rim_tracker.sv         \
  $RTL_DIR/cci_snoop_response_tracker.sv    \
  $RTL_DIR/cci_memcpy_range_unit.sv         \
  $RTL_DIR/cci_write_completion_tracker.sv  \
  $RTL_DIR/baseline_line_tracker.sv         \
  $RTL_DIR/cci_augmented_system.sv          \
]

# -----------------------------------------------------------------------
# Timing constraints
# -----------------------------------------------------------------------
read_xdc [file normalize "$SCRIPT_DIR/constraints.xdc"]

# -----------------------------------------------------------------------
# Synthesis — same directive as algorithm comparison scripts.
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
  -hierarchical_depth 2                   \
  -file $RPT_DIR/${DESIGN}_utilization.rpt

# Flat (non-hierarchical) report: used by compare_realistic for LUT/FF extraction.
report_utilization \
  -file $RPT_DIR/${DESIGN}_utilization_flat.rpt

report_timing_summary \
  -datasheet                              \
  -file $RPT_DIR/${DESIGN}_timing.rpt

report_power \
  -file $RPT_DIR/${DESIGN}_power.rpt

puts "\n=========================================="
puts " $DESIGN synthesis complete (top: $TOP)"
puts " See $RPT_DIR/${DESIGN}_utilization.rpt"
puts "==========================================\n"
