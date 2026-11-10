set out [file normalize [lindex $argv 0]]
set part xczu7ev-ffvc1156-2-e
foreach v {{R0 coh_read_ingress {USE_RANGE=0 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R1 coh_read_ingress {USE_RANGE=1 INTERVAL_CAM=0 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R1a coh_read_ingress {USE_RANGE=1 INTERVAL_CAM=0 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R2 coh_read_ingress {USE_RANGE=1 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R3 coh_read_ingress {USE_RANGE=1 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R4 coh_read_ingress {USE_RANGE=1 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {R5 coh_read_ingress {USE_RANGE=1 DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4}} {W0 coh_write_range_adapter {USE_RANGE=0 DEPTH=16 WINDOW=16 ID_WIDTH=4 DATA_WIDTH=128}} {W1 coh_write_range_adapter {USE_RANGE=1 DEPTH=16 WINDOW=16 ID_WIDTH=4 DATA_WIDTH=128}} {W2 coh_write_range_adapter {USE_RANGE=1 DEPTH=16 WINDOW=16 ID_WIDTH=4 DATA_WIDTH=128}} {W3 coh_write_range_adapter {USE_RANGE=1 DEPTH=16 WINDOW=16 ID_WIDTH=4 DATA_WIDTH=128}}} {
  set k [lindex $v 0];set top [lindex $v 1];set gen [lindex $v 2]
  create_project -in_memory -part $part
  set_property include_dirs [list rtl/common] [current_fileset]
  read_verilog -sv $out/src/$k.sv
  synth_design -top $top -part $part -mode out_of_context -generic $gen
  report_utilization -file $out/$k.rpt
  puts "DONE $k"
  close_project
}
foreach {name swap} {TOP_NARROW 1} {
  create_project -in_memory -part $part
  set_property include_dirs [list rtl/common] [current_fileset]
  foreach listfile {scripts/rtl.f scripts/ace.f} {
    set fd [open $listfile r]
    foreach src [split [read $fd] "\n"] {
      set src [string trim $src]
      if {$src eq "" || [string match "+*" $src]} continue
      if {$src eq "rtl/common/coh_read_ingress.sv"} {set src $out/src/top_read.sv}
      if {$src eq "rtl/common/coh_write_range_adapter.sv"} {set src $out/src/top_write.sv}
      read_verilog -sv $src
    }
    close $fd
  }
  synth_design -top axi_cci_ace_top -part $part -mode out_of_context -generic {USE_RANGE=1}
  report_utilization -file $out/$name.rpt
  puts "DONE $name"
  close_project
}
puts ANALYSIS_COMPLETE
