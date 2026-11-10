# Synthesis-only elaboration/resource sanity. Not a routed timing sign-off.
set out [file normalize [lindex $argv 0]]
file mkdir $out
foreach variant {ace_cache_snoop_endpoint ace_snoop_fabric ace_snoop_controller ace_snoop_controller_bank cci_ace_snoop_service ace_manager_request_controller ace_manager_request_bank axi_cci_ace_top_B1 axi_cci_ace_top_P axi_cci_ace_top_multi_filter} {
    set top $variant
    if {[string match "axi_cci_ace_top_*" $variant]} {set top axi_cci_ace_top}
    create_project -in_memory -part xczu7ev-ffvc1156-2-e
    set_property include_dirs [list rtl/common] [current_fileset]
    foreach listfile {scripts/rtl.f scripts/ace.f} {
        set fd [open $listfile r]
        foreach src [split [read $fd] "\n"] {
            set src [string trim $src]
            if {$src ne "" && ![string match "+*" $src]} {read_verilog -sv $src}
        }
        close $fd
    }
    if {$variant eq "axi_cci_ace_top_P"} {
        synth_design -top $top -part xczu7ev-ffvc1156-2-e -mode out_of_context -generic USE_RANGE=1
    } elseif {$variant eq "axi_cci_ace_top_multi_filter"} {
        synth_design -top $top -part xczu7ev-ffvc1156-2-e -mode out_of_context -generic {CACHED_MASTERS=2 USE_SNOOP_FILTER=1}
    } else {
        synth_design -top $top -part xczu7ev-ffvc1156-2-e -mode out_of_context
    }
    report_utilization -file $out/${variant}_utilization.rpt
    puts "ACE_SYNTH_PASS: $variant"
    close_project
}
puts "ACE_SYNTH_COMPLETE"
