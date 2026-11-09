// System-level testbench for cci_memcpy_system.
//
// Verifies the complete data path:
//   req accept → AC snoops → CR responses → write_release
//   → AW handshakes (captured by cci_write_completion_tracker)
//   → B handshakes (pop FIFO → wr_done_valid/line_idx → done_mask++)
//   → tracker_done + hazard release
//
// AW/B channel timing:
//   do_aw() / do_b() drive the AXI channel at negedge and return at posedge+#1.
//   After do_b() returns, done_mask has been updated via NBA so probe_hazard
//   and tracker_done reflect the new state.
//
// collect_acs(n) peeks first (no clock advance) then uses a while loop.
// After the loop, one extra @(posedge clk); #1; is REQUIRED so the last
// AC handshake registers in the generator and ac_gen_done fires.
//
// Test coverage:
//   T01  Single-line system path  : 1 AC→CR→wr_done→tracker_done
//   T02  4-line system path       : 4 ACs→CRs→4 AW/Bs→tracker_done
//   T03  Hazard probe integration : INVALIDATING hazard + line-by-line release
//   T04  Status signals clean     : snoop_error=0, overflow_sticky=0 after T02
//   T05  snoop_error sticky       : last CR with CRRESP[1]=1 locks FSM; reset recovers
//   T06  aw_full_mask + stickies  : aw_full_mask transitions + sticky=0 and =1 paths

`timescale 1ns/1ps

module tb_cci_memcpy_system;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W   = 4;
  localparam int FIFO_DEPTH = 4;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_memcpy_system.fst");
    $dumpvars(0, tb_cci_memcpy_system);
  end
`endif

  localparam int WATCHDOG_CYCLES = 10_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: simulation exceeded %0d cycles", WATCHDOG_CYCLES);
  end

  logic             req_valid;
  logic             req_ready;
  cci_addr_t        req_base_addr;
  cci_line_count_t  req_line_count;
  cci_line_mask_t   req_line_mask;
  cci_master_id_t   req_source_id;
  logic             req_error;

  logic             ac_valid;
  logic             ac_ready;
  cci_addr_t        ac_addr;
  logic [3:0]       ac_snoop;

  logic             cr_valid;
  logic             cr_ready;
  logic [4:0]       cr_resp;

  logic [AXI_ID_W-1:0] awid;
  logic             aw_valid;
  logic             aw_ready;
  logic             aw_track_valid;
  cci_addr_t        awaddr;

  logic [AXI_ID_W-1:0] bid;
  logic             b_valid;
  logic             b_ready;

  logic             probe_valid;
  cci_master_id_t   probe_source_id;
  cci_addr_t        probe_addr;
  logic             probe_hazard;

  logic             tracker_busy;
  logic             tracker_done;
  logic             write_release;
  logic             invalidation_done;
  logic             snoop_error;
  logic             overflow_sticky;
  logic             underflow_sticky;
  logic [2**AXI_ID_W-1:0] aw_full_mask;

  cci_memcpy_system #(
    .AXI_ID_W   (AXI_ID_W),
    .FIFO_DEPTH (FIFO_DEPTH)
  ) dut (
    .clk              (clk),
    .rst_n            (rst_n),
    .req_valid        (req_valid),
    .req_ready        (req_ready),
    .req_base_addr    (req_base_addr),
    .req_line_count   (req_line_count),
    .req_line_mask    (req_line_mask),
    .req_source_id    (req_source_id),
    .req_error        (req_error),
    .ac_valid         (ac_valid),
    .ac_ready         (ac_ready),
    .ac_addr          (ac_addr),
    .ac_snoop         (ac_snoop),
    .cr_valid         (cr_valid),
    .cr_ready         (cr_ready),
    .cr_resp          (cr_resp),
    .awid             (awid),
    .aw_valid         (aw_valid),
    .aw_ready         (aw_ready),
    .aw_track_valid   (aw_track_valid),
    .awaddr           (awaddr),
    .bid              (bid),
    .b_valid          (b_valid),
    .b_ready          (b_ready),
    .probe_valid      (probe_valid),
    .probe_source_id  (probe_source_id),
    .probe_addr       (probe_addr),
    .probe_hazard     (probe_hazard),
    .tracker_busy     (tracker_busy),
    .tracker_done     (tracker_done),
    .write_release    (write_release),
    .invalidation_done(invalidation_done),
    .snoop_error      (snoop_error),
    .overflow_sticky  (overflow_sticky),
    .underflow_sticky (underflow_sticky),
    .aw_full_mask     (aw_full_mask)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A = 52'h0000_0000_0001;
  localparam cci_addr_t      ADDR_A = {PG_A, {PAGE_OFFSET_BITS{1'b0}}};

  function automatic cci_addr_t line_addr(
    input cci_page_addr_t pg,
    input int             li
  );
    return {pg, cci_line_idx_t'(li), {LINE_OFFSET_BITS{1'b0}}};
  endfunction

  task automatic check_bit(input string label, input logic got, input logic exp);
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0b got=%0b", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic check_int(input string label, input int got, input int exp);
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0d got=%0d", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic do_reset();
    rst_n         = 1'b0;
    req_valid     = 1'b0;
    req_base_addr = '0;
    req_line_count = '0;
    req_line_mask  = '0;
    req_source_id  = '0;
    ac_ready      = 1'b1;
    cr_valid      = 1'b0;
    cr_resp       = 5'h00;
    aw_valid       = 1'b0;
    aw_ready       = 1'b1;   // AXI slave always accepts AW
    aw_track_valid = 1'b0;
    awid           = '0;
    awaddr         = '0;
    b_valid       = 1'b0;
    bid           = '0;
    probe_valid   = 1'b0;
    probe_source_id = '0;
    probe_addr    = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // Submit req: returns at posedge+#1 of accept cycle; first AC visible.
  task automatic submit_req(
    input cci_addr_t       base,
    input cci_line_count_t count,
    input cci_master_id_t  src
  );
    @(negedge clk);
    req_valid      = 1'b1;
    req_base_addr  = base;
    req_line_count = count;
    req_line_mask  = '0;
    req_source_id  = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // Collect n ACs (peek-first; the LAST ac_valid is still pending a posedge
  // on exit — caller must do @(posedge clk); #1; to complete it).
  task automatic collect_acs(input int n, output int cnt);
    int cycle_cnt;
    cnt       = 0;
    cycle_cnt = 0;
    ac_ready  = 1'b1;
    if (ac_valid && ac_ready) cnt++;
    while (cnt < n) begin
      @(posedge clk); #1;
      cycle_cnt++;
      if (ac_valid && ac_ready) cnt++;
      if (cycle_cnt > n + 16)
        $fatal(1, "collect_acs timeout: got %0d/%0d", cnt, n);
    end
  endtask

  // Drive n CR responses (cr_resp=5'h00 = no error, no data).
  // Checks cr_ready before each pulse (ACE protocol compliance).
  task automatic drive_cr_responses(input int n);
    for (int i = 0; i < n; i++) begin
      @(negedge clk);
      if (!cr_ready)
        $fatal(1, "drive_cr_responses[%0d]: cr_ready=0", i);
      cr_valid = 1'b1;
      @(posedge clk); #1;
      cr_valid = 1'b0;
    end
  endtask

  task automatic do_aw(
    input logic [AXI_ID_W-1:0] id,
    input cci_addr_t            addr
  );
    @(negedge clk);
    aw_valid = 1'b1; aw_track_valid = 1'b1; awid = id; awaddr = addr;
    @(posedge clk); #1;
    aw_valid = 1'b0; aw_track_valid = 1'b0;
  endtask

  // After do_b returns (posedge+#1), done_mask has been updated via NBA.
  task automatic do_b(input logic [AXI_ID_W-1:0] id);
    @(negedge clk);
    b_valid = 1'b1; bid = id;
    @(posedge clk); #1;
    b_valid = 1'b0;
  endtask

  task test_T01();
    int cnt;
    $display("--- T01: single-line system path ---");

    submit_req(ADDR_A, 7'd1, 4'd1);
    check_bit("T01 tracker_busy after accept", tracker_busy,   1'b1);
    check_bit("T01 write_release=0 in INVAL",  write_release,  1'b0);
    check_bit("T01 first AC visible",           ac_valid,       1'b1);
    check_bit("T01 snoop_error=0",              snoop_error,    1'b0);
    check_bit("T01 overflow_sticky=0",          overflow_sticky,1'b0);

    collect_acs(1, cnt);
    check_int("T01 one AC counted",             cnt,            1);
    @(posedge clk); #1;   // complete last AC handshake; ac_gen_done fires
    check_bit("T01 ac_valid=0 after AC seq",    ac_valid,       1'b0);
    check_bit("T01 write_release=0 before CR",  write_release,  1'b0);

    drive_cr_responses(1);
    check_bit("T01 write_release=1 after CR",   write_release,  1'b1);
    check_bit("T01 snoop_error=0 after CR",     snoop_error,    1'b0);

    do_aw(4'd0, line_addr(PG_A, 0));
    do_b(4'd0);
    check_bit("T01 tracker_done after last B",  tracker_done,   1'b1);
    check_bit("T01 overflow_sticky=0 end",      overflow_sticky,1'b0);

    @(posedge clk); #1;
    check_bit("T01 req_ready=1 after DONE",     req_ready,      1'b1);
    check_bit("T01 tracker_busy=0 after DONE",  tracker_busy,   1'b0);
  endtask

  task test_T02();
    int cnt;
    $display("--- T02: 4-line system path ---");

    submit_req(ADDR_A, 7'd4, 4'd1);
    check_bit("T02 write_release=0 before ACs",  write_release, 1'b0);

    collect_acs(4, cnt);
    check_int("T02 4 ACs issued",                cnt,           4);
    @(posedge clk); #1;    // complete last AC handshake
    check_bit("T02 ac_valid=0 after AC seq",      ac_valid,      1'b0);
    check_bit("T02 write_release=0 before CRs",   write_release, 1'b0);

    drive_cr_responses(4);
    check_bit("T02 write_release=1 after 4 CRs",  write_release, 1'b1);

    for (int i = 0; i < 4; i++)
      do_aw(4'd0, line_addr(PG_A, i));

    for (int i = 0; i < 3; i++) begin
      do_b(4'd0);
      check_bit($sformatf("T02 tracker_done=0 after B %0d", i),
                tracker_done, 1'b0);
    end
    do_b(4'd0);
    check_bit("T02 tracker_done=1 on last B",    tracker_done,  1'b1);
    check_bit("T02 snoop_error=0",               snoop_error,   1'b0);
    check_bit("T02 overflow_sticky=0",           overflow_sticky,1'b0);

    @(posedge clk); #1;
    check_bit("T02 req_ready=1 after DONE",      req_ready,     1'b1);
  endtask

  task test_T03();
    int cnt;
    $display("--- T03: hazard probe across INVALIDATING and TRACKING ---");

    submit_req(ADDR_A, 7'd2, 4'd1);
    check_bit("T03 tracker_busy=1",         tracker_busy, 1'b1);

    probe_valid      = 1'b1;
    probe_source_id  = 4'd2;
    probe_addr       = line_addr(PG_A, 0);
    #1;
    check_bit("T03 hazard=1 line0 INVAL",    probe_hazard, 1'b1);

    probe_source_id = 4'd1;
    #1;
    check_bit("T03 no self-hazard",          probe_hazard, 1'b0);
    probe_valid = 1'b0;

    collect_acs(2, cnt);
    @(posedge clk); #1;
    drive_cr_responses(2);
    check_bit("T03 write_release=1",         write_release, 1'b1);

    do_aw(4'd0, line_addr(PG_A, 0));
    do_b(4'd0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 0);
    #1;
    check_bit("T03 hazard=0 line0 after wr_done", probe_hazard, 1'b0);

    probe_addr = line_addr(PG_A, 1);
    #1;
    check_bit("T03 hazard=1 line1 still pending", probe_hazard, 1'b1);
    probe_valid = 1'b0;

    check_bit("T03 tracker_done=0 still",    tracker_done,  1'b0);

    do_aw(4'd0, line_addr(PG_A, 1));
    do_b(4'd0);
    check_bit("T03 tracker_done=1 final",    tracker_done,  1'b1);

    @(posedge clk); #1;
    check_bit("T03 req_ready=1 after DONE",  req_ready,     1'b1);
  endtask

  task test_T04();
    int cnt;
    $display("--- T04: status signals clean across two requests ---");

    submit_req(ADDR_A, 7'd1, 4'd1);
    collect_acs(1, cnt);
    @(posedge clk); #1;
    drive_cr_responses(1);
    do_aw(4'd0, line_addr(PG_A, 0));
    do_b(4'd0);
    @(posedge clk); #1;

    submit_req(ADDR_A, 7'd2, 4'd1);
    collect_acs(2, cnt);
    @(posedge clk); #1;
    drive_cr_responses(2);
    do_aw(4'd0, line_addr(PG_A, 0));
    do_aw(4'd0, line_addr(PG_A, 1));
    do_b(4'd0);
    do_b(4'd0);
    @(posedge clk); #1;

    check_bit("T04 snoop_error=0 after two requests",  snoop_error,    1'b0);
    check_bit("T04 overflow_sticky=0 after two writes",overflow_sticky, 1'b0);
    check_bit("T04 req_ready=1 idle",                  req_ready,      1'b1);
    check_bit("T04 tracker_busy=0 idle",               tracker_busy,   1'b0);
  endtask

  task automatic test_T05();
    int cnt;
    $display("--- T05: snoop_error on last CR with CRRESP[1]=1 ---");

    submit_req(ADDR_A, 7'd1, 4'd1);
    check_bit("T05 tracker_busy=1 after req",  tracker_busy,  1'b1);
    check_bit("T05 snoop_error=0 before CR",   snoop_error,   1'b0);
    check_bit("T05 write_release=0 in INVAL",  write_release, 1'b0);

    collect_acs(1, cnt);
    check_int("T05 1 AC issued",               cnt, 1);
    @(posedge clk); #1;   // complete last AC handshake; ac_gen_done fires

    // Drive the single (last) CR with CRRESP[1]=1 — cache error flag.
    // error_next = snoop_error_r || (active && cr_accepted && cr_resp[1])
    // At this posedge: snoop_error_r=0, active=1, cr_accepted=1, cr_resp[1]=1
    // → error_next=1 → snoop_done is suppressed → FSM stays INVALIDATING.
    @(negedge clk);
    if (!cr_ready) $fatal(1, "T05: cr_ready=0 unexpectedly");
    cr_valid = 1'b1;
    cr_resp  = 5'b00010;   // CRRESP[1]=1 = Error
    @(posedge clk); #1;   // snoop_error_r set via NBA; snoop_done=0
    cr_valid = 1'b0;
    cr_resp  = 5'h00;

    check_bit("T05 snoop_error=1 after error CR",  snoop_error,       1'b1);
    check_bit("T05 write_release=0 on error",      write_release,     1'b0);
    check_bit("T05 tracker_done=0 suppressed",     tracker_done,      1'b0);
    check_bit("T05 invalidation_done=0",           invalidation_done, 1'b0);
    check_bit("T05 tracker_busy=1 stuck INVAL",    tracker_busy,      1'b1);

    // Wait several more cycles — FSM must not recover without reset.
    repeat (4) @(posedge clk);
    #1;
    check_bit("T05 write_release still 0",         write_release,     1'b0);
    check_bit("T05 snoop_error still 1",           snoop_error,       1'b1);
    check_bit("T05 req_ready=0 (still busy)",      req_ready,         1'b0);

    do_reset();
    check_bit("T05 snoop_error=0 after reset",     snoop_error,       1'b0);
    check_bit("T05 req_ready=1 after reset",       req_ready,         1'b1);
    check_bit("T05 tracker_busy=0 after reset",    tracker_busy,      1'b0);
  endtask

  task automatic test_T06();
    int cnt;
    $display("--- T06: aw_full_mask and sticky wrapper regression ---");

    check_bit("T06 underflow_sticky=0 after reset",  underflow_sticky, 1'b0);
    check_bit("T06 overflow_sticky=0 after reset",   overflow_sticky,  1'b0);
    check_bit("T06 aw_full_mask=0 after reset",      |aw_full_mask,    1'b0);

    submit_req(ADDR_A, 7'd4, 4'd1);
    collect_acs(4, cnt);
    @(posedge clk); #1;   // complete last AC handshake
    drive_cr_responses(4);
    for (int i = 0; i < FIFO_DEPTH; i++)
      do_aw(4'd0, line_addr(PG_A, i));
    check_bit("T06 aw_full_mask[0]=1 when FIFO full", aw_full_mask[0],  1'b1);
    check_bit("T06 underflow_sticky=0 before B",      underflow_sticky, 1'b0);

    do_b(4'd0);
    check_bit("T06 aw_full_mask[0]=0 after pop",     aw_full_mask[0],  1'b0);

    for (int i = 0; i < FIFO_DEPTH - 1; i++)
      do_b(4'd0);
    check_bit("T06 tracker_done=1 after drain",       tracker_done,     1'b1);
    check_bit("T06 underflow_sticky=0 after drain",   underflow_sticky, 1'b0);
    check_bit("T06 overflow_sticky=0 after drain",    overflow_sticky,  1'b0);

    do_reset();
    check_bit("T06 underflow_sticky=0 after reset2",  underflow_sticky, 1'b0);
    check_bit("T06 overflow_sticky=0 after reset2",   overflow_sticky,  1'b0);
    check_bit("T06 aw_full_mask=0 after reset2",      |aw_full_mask,    1'b0);

    // Intentional protocol violation — $warning from tracker is expected.
    @(negedge clk);
    b_valid = 1'b1; bid = 4'd0;
    @(posedge clk); #1;
    b_valid = 1'b0;
    check_bit("T06 underflow_sticky=1 after B to empty", underflow_sticky, 1'b1);
    check_bit("T06 overflow_sticky=0 (underflow only)",  overflow_sticky,  1'b0);

    for (int i = 0; i < FIFO_DEPTH; i++)
      do_aw(4'd1, line_addr(PG_A, i));
    check_bit("T06 aw_full_mask[1]=1 before overflow",  aw_full_mask[1],  1'b1);
    do_aw(4'd1, line_addr(PG_A, FIFO_DEPTH));   // suppressed push → overflow
    check_bit("T06 overflow_sticky=1 after AW to full", overflow_sticky,  1'b1);

    do_reset();
    check_bit("T06 underflow_sticky=0 after reset3",    underflow_sticky, 1'b0);
    check_bit("T06 overflow_sticky=0 after reset3",     overflow_sticky,  1'b0);
    check_bit("T06 aw_full_mask=0 after reset3",        |aw_full_mask,    1'b0);
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset(); test_T01(); @(posedge clk); #1;
    do_reset(); test_T02(); @(posedge clk); #1;
    do_reset(); test_T03(); @(posedge clk); #1;
    do_reset(); test_T04(); @(posedge clk); #1;
    do_reset(); test_T05(); @(posedge clk); #1;
    do_reset(); test_T06();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All system tests PASSED.");
      $finish;
    end else begin
      $display("FAILURES detected.");
      $fatal(1, "%0d test(s) failed", fail_count);
    end
  end

endmodule
