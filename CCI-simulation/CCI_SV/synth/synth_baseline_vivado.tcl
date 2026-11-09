# Vivado synthesis script for the BASELINE per-line design.
# System top: cci_baseline_system
#   Includes baseline_line_tracker + cci_write_completion_tracker so the
#   baseline result includes the same write-completion infrastructure cost
#   as the proposed design for a fair comparison.
#
# Run from the CCI_SV/synth directory:
#   vivado -mode batch -source synth_baseline_vivado.tcl
#
# Reports are written to CCI_SV/synth/reports/baseline_*.rpt

set DESIGN baseline
set TOP    cci_baseline_system
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
  $RTL_DIR/cci_write_completion_tracker.sv  \
  $RTL_DIR/baseline_line_tracker.sv         \
  $RTL_DIR/cci_baseline_system.sv           \
]

# -----------------------------------------------------------------------
# Timing constraints — see constraints.xdc. read_xdc defers evaluation
# until synth_design opens the design (same fix as proposed script).
# -----------------------------------------------------------------------
read_xdc [file normalize "$SCRIPT_DIR/constraints.xdc"]

# -----------------------------------------------------------------------
# Synthesis — same directive as the proposed design.
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

# Flat report: used by compare for LUT/FF extraction (stable row names).
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
