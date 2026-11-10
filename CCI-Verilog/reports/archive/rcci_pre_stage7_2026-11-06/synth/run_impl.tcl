# Same registered shell, geometry, endpoint and constraints for all configurations.
# vivado -mode batch -source synth/run_impl.tcl -tclargs B0|B1|P [period_ns] [part]
set variant [expr {$argc>0 ? [lindex $argv 0] : "P"}]
set period [expr {$argc>1 ? [lindex $argv 1] : 5.0}]
set part [expr {$argc>2 ? [lindex $argv 2] : "xczu7ev-ffvc1156-2-e"}]
if {$variant ni {B0 B1 P}} {error "variant must be B0, B1 or P"}
set mode [dict get {B0 0 B1 1 P 2} $variant]
set root [file normalize [file join [file dirname [info script]] ..]]
set out [expr {$argc>3 ? [file normalize [lindex $argv 3]] : [file join $root reports standalone [clock format [clock seconds] -format %Y%m%d_%H%M%S] $variant]}]
file mkdir $out
set fd [open [file join $root scripts rtl.f] r]
foreach line [split [read $fd] \n] {
    set line [string trim $line]
    if {$line eq "" || [string match "+incdir+*" $line]} {continue}
    read_verilog -sv [file join $root $line]
}
close $fd
synth_design -top synth_register_shell -part $part -mode out_of_context \
    -include_dirs [list [file join $root rtl common]] \
    -generic [list MODE=$mode ID_WIDTH=4 ADDR_WIDTH=64 DATA_WIDTH=128 \
        MAX_OUTSTANDING_TRANSACTIONS=16 M1_INGRESS_DEPTH=16 LINE_TRACKER_ENTRIES=16 CONV_AC_FIFO_DEPTH=16 OBSERVE_DEBUG=0]
create_clock -name ACLK -period $period [get_ports ACLK]
# OOC assumes an external clock buffer; annotate the same source site for final
# timing in every variant. This is a measurement assumption, not a board pinout.
set clock_site [lindex [lsort -dictionary [get_sites -filter {SITE_TYPE == BUFGCE}]] 0]
if {$clock_site eq ""} {error "No BUFGCE clock source site found"}
set_property HD.CLK_SRC $clock_site [get_ports ACLK]
set_false_path -from [get_ports ARESETn]
# Exclude unconstrained external pin-to-boundary-register paths. DUT register-to-
# register paths through the common shell and endpoint remain timed at 200 MHz.
set_false_path -from [get_ports -filter {DIRECTION == IN && NAME != ACLK && NAME != ARESETn}]
set_false_path -to [get_ports -filter {DIRECTION == OUT}]
write_checkpoint -force [file join $out post_synth.dcp]
report_utilization -file [file join $out post_synth_utilization.rpt]
report_utilization -hierarchical -file [file join $out post_synth_hier.rpt]
opt_design
place_design
phys_opt_design
route_design
phys_opt_design -hold_fix
route_design
write_checkpoint -force [file join $out post_route.dcp]
report_utilization -file [file join $out post_route_utilization.rpt]
report_utilization -hierarchical -file [file join $out post_route_hier.rpt]
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose \
    -file [file join $out post_route_timing_summary.rpt]
report_timing -max_paths 10 -file [file join $out critical_paths.rpt]
report_route_status -file [file join $out route_status.rpt]
report_drc -file [file join $out drc.rpt]
set fd [open [file join $out configuration.txt] w]
puts $fd "variant=$variant mode=$mode part=$part period_ns=$period"
puts $fd "ingress=16 trackers=16 ac_fifo=16 axi_outstanding=16 endpoint_depth=16 endpoint_latency=8"
puts $fd "ooc_clock_source=$clock_site (explicit OOC clock source; post-route hold fix)"
puts $fd "observe_debug=0; representative area=hierarchical dut; shell/endpoint reported separately"
puts $fd "Vivado=[version -short]"
close $fd
puts "COMPLETE: $variant post-route reports in $out"
