# Timing constraints shared by all four synthesis runs.
# Target: 500 MHz (2 ns) on UltraScale+ xczu7ev-ffvc1156-2-e.
#
# read_xdc defers evaluation until synth_design opens the design,
# so these commands are safe before synth_design in non-project mode.

create_clock -name clk -period 2.000 [get_ports clk]

# Synchronous I/O: all inputs except clk and rst_n; all outputs.
set_input_delay  -clock clk -max 0.500 \
  [get_ports -filter {DIRECTION == IN && NAME != clk && NAME != rst_n}]
set_output_delay -clock clk -max 0.500 \
  [get_ports -filter {DIRECTION == OUT}]

# rst_n is an asynchronous active-low reset; it has no setup/hold requirement
# relative to clk.  Declare it as a false path so the timing engine does not
# apply clock-relative constraints to the reset net.
set_false_path -from [get_ports rst_n]
