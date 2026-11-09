# ACE top out-of-context implementation. External pin paths are excluded;
# internal register-to-register paths are timed at the requested period.
set variant [expr {$argc>0 ? [lindex $argv 0] : "P"}]
set period [expr {$argc>1 ? [lindex $argv 1] : 5.0}]
set part [expr {$argc>2 ? [lindex $argv 2] : "xczu7ev-ffvc1156-2-e"}]
if {$variant ni {B1 P MULTI_FILTER}} {error "variant must be B1, P or MULTI_FILTER"}
set root [file normalize [file join [file dirname [info script]] ..]]
set out [expr {$argc>3 ? [file normalize [lindex $argv 3]] : [file join $root reports standalone [clock format [clock seconds] -format %Y%m%d_%H%M%S] ACE_$variant]}]
file mkdir $out
foreach listfile {scripts/rtl.f scripts/ace.f} {
    set fd [open [file join $root $listfile] r]
    foreach line [split [read $fd] \n] {
        set line [string trim $line]
        if {$line ne "" && ![string match "+*" $line]} {read_verilog -sv [file join $root $line]}
    }
    close $fd
}
set generics [list USE_RANGE=0 CACHED_MASTERS=1 USE_SNOOP_FILTER=0]
if {$variant eq "P"} {set generics [list USE_RANGE=1 CACHED_MASTERS=1 USE_SNOOP_FILTER=0]}
if {$variant eq "MULTI_FILTER"} {set generics [list USE_RANGE=0 CACHED_MASTERS=2 USE_SNOOP_FILTER=1]}
synth_design -top axi_cci_ace_top -part $part -mode out_of_context \
    -include_dirs [list [file join $root rtl common]] -generic $generics
create_clock -name ACLK -period $period [get_ports ACLK]
set clock_site [lindex [lsort -dictionary [get_sites -filter {SITE_TYPE == BUFGCE}]] 0]
if {$clock_site eq ""} {error "No BUFGCE clock source site found"}
set_property HD.CLK_SRC $clock_site [get_ports ACLK]
set_false_path -from [get_ports ARESETn]
# The direct OOC top has no registered package boundary. Exclude external pin
# paths and retain all internal register paths for this implementation check.
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
puts $fd "variant=$variant part=$part period_ns=$period generics=$generics"
puts $fd "boundary=direct OOC top; external input/output paths excluded; internal register paths timed"
puts $fd "ooc_clock_source=$clock_site"
puts $fd "Vivado=[version -short]"
close $fd
puts "ACE_IMPL_COMPLETE: $variant post-route reports in $out"
