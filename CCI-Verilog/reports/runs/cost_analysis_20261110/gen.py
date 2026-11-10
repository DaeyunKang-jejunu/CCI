import re,sys
from pathlib import Path
R=Path(sys.argv[1]);rd=Path('rtl/common/coh_read_ingress.sv').read_text(encoding='utf-8');wr=Path('rtl/common/coh_write_range_adapter.sv').read_text(encoding='utf-8')
def sub1(s,a,b):
    assert s.count(a)==1,a
    return s.replace(a,b)
def narrow_read(s):
    s=sub1(s,'logic [58:0] lo_line,hi_line;','logic [6:0] lo_line,hi_line;')
    s=sub1(s,"entries[tail].lo_line<={1'b0,in_addr[63:6]};","entries[tail].lo_line<=7'(in_addr[11:6]);")
    s=sub1(s,"entries[tail].hi_line<={1'b0,in_addr[63:6]}+59'(!in_range);","entries[tail].hi_line<=7'(in_addr[11:6])+7'(!in_range);")
    s=sub1(s,"entries[issue_head].hi_line<=entries[issue_head].hi_line+59'd1;","entries[issue_head].hi_line<=entries[issue_head].hi_line+7'd1;")
    s=sub1(s,"entries[retire_head].lo_line<=entries[retire_head].lo_line+59'd1;","entries[retire_head].lo_line<=entries[retire_head].lo_line+7'd1;")
    a=s.index('always_comb begin\n        int_m0_ar=0');b=s.index('end\n    end',a)
    blk=s[a:b]
    blk,n=re.subn(r"if\((\w+)_probe_valid&&(\w+)<entries\[e\]\.hi_line&&(\w+)>=entries\[e\]\.lo_line\)",
      lambda m:f"if({m[1]}_probe_valid&&{m[2]}[57:6]==entries[e].addr[63:12]&&{{1'b0,{m[2]}[5:0]}}<entries[e].hi_line&&{{1'b0,{m[3]}[5:0]}}>=entries[e].lo_line)",blk)
    assert n==5,n
    blk=sub1(blk,"wr_issue_line>=entries[e].lo_line&&wr_issue_line<entries[e].hi_line","wr_issue_line[57:6]==entries[e].addr[63:12]&&{1'b0,wr_issue_line[5:0]}>=entries[e].lo_line&&{1'b0,wr_issue_line[5:0]}<entries[e].hi_line")
    return s[:a]+blk+s[b:]
def interval_only(s):
    s,n=re.subn(r"assign (\w+)_hazard=ref_(\w+)\|\|\(INTERVAL_CAM&&int_\w+\);",lambda m:f"assign {m[1]}_hazard=int_{m[2]};",s);assert n==6,n
    return s
def no_adder(s):
    a="entries[trackers[t].entry].addr+64'(trackers[t].line_idx*64)";assert s.count(a)==6,s.count(a)
    return s.replace(a,"entries[trackers[t].entry].addr")
def narrow_write(s):
    s=sub1(s,'logic [58:0] lo_line, hi_line;','logic [6:0] lo_line, hi_line;')
    s=sub1(s,"lo_line:{1'b0,in_aw_addr[63:6]},hi_line:{1'b0,in_aw_addr[63:6]}","lo_line:7'(in_aw_addr[11:6]),hi_line:7'(in_aw_addr[11:6])")
    s=sub1(s,"contexts[issue_head].hi_line<=contexts[issue_head].hi_line+59'd1;","contexts[issue_head].hi_line<=contexts[issue_head].hi_line+7'd1;")
    s=sub1(s,"contexts[complete_head].lo_line<=contexts[complete_head].lo_line+59'd1;","contexts[complete_head].lo_line<=contexts[complete_head].lo_line+7'd1;")
    s=sub1(s,"logic [58:0] lo,hi;","logic [6:0] lo,hi;")
    s=sub1(s,"hi=contexts[e].hi_line+59'(hold_valid&&CW'(e)==issue_head);","hi=contexts[e].hi_line+7'(hold_valid&&CW'(e)==issue_head);")
    s,n=re.subn(r"if\((\w+)_probe_valid&&(\w+)<hi&&(\w+)>=lo\)",lambda m:f"if({m[1]}_probe_valid&&{m[2]}[57:6]==contexts[e].addr[63:12]&&{{1'b0,{m[2]}[5:0]}}<hi&&{{1'b0,{m[3]}[5:0]}}>=lo)",s);assert n==5,n
    s=sub1(s,"rd_issue_probe_valid&&rd_issue_line>=lo&&rd_issue_line<hi","rd_issue_probe_valid&&rd_issue_line[57:6]==contexts[e].addr[63:12]&&{1'b0,rd_issue_line[5:0]}>=lo&&{1'b0,rd_issue_line[5:0]}<hi")
    return s
def no_interval_w(s):return sub1(s,'if(lo<hi)begin // an empty interval owns nothing',"if(1'b0)begin")
V={'R0':(rd,'USE_RANGE=0'),'R1':(rd,'USE_RANGE=1 INTERVAL_CAM=0'),'R1a':(no_adder(rd),'USE_RANGE=1 INTERVAL_CAM=0'),'R2':(rd,'USE_RANGE=1'),
   'R3':(narrow_read(rd),'USE_RANGE=1'),'R4':(interval_only(rd),'USE_RANGE=1'),'R5':(interval_only(narrow_read(rd)),'USE_RANGE=1'),
   'W0':(wr,'USE_RANGE=0'),'W1':(no_interval_w(wr),'USE_RANGE=1'),'W2':(wr,'USE_RANGE=1'),'W3':(narrow_write(wr),'USE_RANGE=1')}
(R/'src').mkdir(exist_ok=True)
lines=[]
for k,(s,g) in V.items():
    (R/'src'/f'{k}.sv').write_text(s,encoding='utf-8')
    top='coh_read_ingress' if k[0]=='R' else 'coh_write_range_adapter'
    gen=g+(' DEPTH=16 TRACKERS=16 RANGE_WINDOW=16 ID_WIDTH=4' if k[0]=='R' else ' DEPTH=16 WINDOW=16 ID_WIDTH=4 DATA_WIDTH=128')
    lines.append(f'{{{k} {top} {{{gen}}}}}')
# top with narrow intervals, range design otherwise unchanged
(R/'src'/'top_read.sv').write_text(narrow_read(rd),encoding='utf-8');(R/'src'/'top_write.sv').write_text(narrow_write(wr),encoding='utf-8')
tcl=f'''set out [file normalize [lindex $argv 0]]
set part xczu7ev-ffvc1156-2-e
foreach v {{{" ".join(lines)}}} {{
  set k [lindex $v 0];set top [lindex $v 1];set gen [lindex $v 2]
  create_project -in_memory -part $part
  set_property include_dirs [list rtl/common] [current_fileset]
  read_verilog -sv $out/src/$k.sv
  synth_design -top $top -part $part -mode out_of_context -generic $gen
  report_utilization -file $out/$k.rpt
  puts "DONE $k"
  close_project
}}
foreach {{name swap}} {{TOP_NARROW 1}} {{
  create_project -in_memory -part $part
  set_property include_dirs [list rtl/common] [current_fileset]
  foreach listfile {{scripts/rtl.f scripts/ace.f}} {{
    set fd [open $listfile r]
    foreach src [split [read $fd] "\\n"] {{
      set src [string trim $src]
      if {{$src eq "" || [string match "+*" $src]}} continue
      if {{$src eq "rtl/common/coh_read_ingress.sv"}} {{set src $out/src/top_read.sv}}
      if {{$src eq "rtl/common/coh_write_range_adapter.sv"}} {{set src $out/src/top_write.sv}}
      read_verilog -sv $src
    }}
    close $fd
  }}
  synth_design -top axi_cci_ace_top -part $part -mode out_of_context -generic {{USE_RANGE=1}}
  report_utilization -file $out/$name.rpt
  puts "DONE $name"
  close_project
}}
puts ANALYSIS_COMPLETE
'''
(R/'run.tcl').write_text(tcl,encoding='utf-8')
