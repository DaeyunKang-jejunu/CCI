# Resume saved routed checkpoints with the common OOC clock source, then repair
# hold and reroute. RTL is unchanged. Preserve all utilization and timing reports.
set root [file normalize [file join [file dirname [info script]] ..]]
foreach variant {B0 B1 P} {
    set out [file join $root reports $variant]
    open_checkpoint [file join $out post_route.dcp]
    set clock_site [lindex [lsort -dictionary [get_sites -filter {SITE_TYPE == BUFGCE}]] 0]
    if {$clock_site eq ""} {error "No BUFGCE clock source site found"}
    puts "COMMON_CLOCK_SOURCE: $clock_site"
    set_property HD.CLK_SRC $clock_site [get_ports ACLK]
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
    set fd [open [file join $out configuration.txt] a]
    puts $fd "ooc_clock_source=$clock_site (explicit OOC clock source; post-route hold fix)"
    close $fd
    close_design
    puts "CLOCK_REPORT_COMPLETE: $variant"
}
