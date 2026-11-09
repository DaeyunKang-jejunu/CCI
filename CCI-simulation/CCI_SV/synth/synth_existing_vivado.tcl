# Vivado synthesis script for cci_existing_system — realistic cost baseline.
#
# cci_existing_system = baseline_line_tracker(NORMAL_ENTRIES=16)
#                     + cci_write_completion_tracker
#
# This represents the hardware ALREADY present in the existing CCI for
# tracking normal (non-memcpy) outstanding writes.  It is the reference
# for computing the incremental overhead of adding the proposed memcpy unit.
#
# Incremental overhead = cci_augmented_system − cci_existing_system
#
# Run from the CCI_SV/synth directory:
#   vivado -mode batch -source synth_existing_vivado.tcl
#
# Reports are written to CCI_SV/synth/reports/existing_*.rpt

set DESIGN existing
set TOP    cci_existing_system
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
  $RTL_DIR/cci_existing_system.sv           \
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
# The hierarchical report above is for human review; the flat report has stable
# "CLB LUTs" / "CLB Registers" row names that awk can reliably parse.
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
