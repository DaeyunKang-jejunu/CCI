# RCCI_PLAN 14.8 (보완 7): LUT/FF cost, unconstrained OOC synthesis-only
# (no clock constraint, no placement/routing/timing sign-off).
# Every configuration uses the same part, flow and directives.
set out [file normalize [lindex $argv 0]]
file mkdir $out
set part xczu7ev-ffvc1156-2-e
proc read_rtl {} {
    set_property include_dirs [list rtl/common] [current_fileset]
    foreach listfile {scripts/rtl.f scripts/ace.f} {
        set fd [open $listfile r]
        foreach src [split [read $fd] "\n"] {
            set src [string trim $src]
            if {$src ne "" && ![string match "+*" $src]} {read_verilog -sv $src}
        }
        close $fd
    }
}
# name  generics
set tops {
    {B1-T16                {USE_RANGE=0}}
    {R-E16-RW16-WE16-WW16  {USE_RANGE=1}}
    {B1-T8                 {USE_RANGE=0 M1_INGRESS_DEPTH=8 LINE_TRACKER_ENTRIES=8}}
    {R-E8-RW8-WE8-WW8      {USE_RANGE=1 M1_INGRESS_DEPTH=8 LINE_TRACKER_ENTRIES=8}}
}
foreach t $tops {
    set name [lindex $t 0];set gen [lindex $t 1]
    create_project -in_memory -part $part
    read_rtl
    synth_design -top axi_cci_ace_top -part $part -mode out_of_context -generic $gen
    report_utilization -file $out/top_${name}_utilization.rpt
    report_utilization -hierarchical -hierarchical_depth 3 -file $out/top_${name}_hier.rpt
    puts "RCCI_COST_PASS: top $name"
    close_project
}
set cams {
    {line_cam_cost     16 LINE-T16}
    {line_cam_cost      8 LINE-T8}
    {interval_cam_cost 16 INTERVAL-E16}
    {interval_cam_cost  8 INTERVAL-E8}
}
foreach c $cams {
    set top [lindex $c 0];set n [lindex $c 1];set name [lindex $c 2]
    create_project -in_memory -part $part
    read_verilog -sv synth/cost_cam_wrappers.sv
    synth_design -top $top -part $part -mode out_of_context -generic ENTRIES=$n
    report_utilization -file $out/cam_${name}_utilization.rpt
    puts "RCCI_COST_PASS: cam $name"
    close_project
}
puts "RCCI_COST_COMPLETE"
