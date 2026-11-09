// Testbench for cci_range_rim_tracker.
//
// Verifies the RIM tracker FSM in isolation: ac_gen_done is driven by the
// testbench directly (no real AC generator instantiated here).
//
// Test coverage:
//   T01  Request accept : req_valid accepted when tracker is idle
//   T02  req_ready gating : req_ready=0 while entry is active
//   T03  ac_start pulse : combinational strobe captured via testbench FF
//   T04  ac_page_addr/ac_line_mask mux : correct values exposed at accept cycle
//   T05  INVALIDATING state : entry.state=INVALIDATING after accept
//   T06  write_release=0 during INVALIDATING
//   T07  invalidation_done pulse : captured via testbench FF at ac_gen_done
//   T08  TRACKING state : state transitions when ac_gen_done fires
//   T09  write_release=1 during TRACKING
//   T10  done_mask update : wr_done_valid sets individual bits
//   T11  tracker_done : one-cycle pulse when all target lines complete
//   T12  DONE → idle : entry freed, req_ready restored
//   T13  Back-to-back : new request accepted immediately after previous DONE

`timescale 1ns/1ps

module tb_cci_range_rim_tracker;
  import cci_memcpy_pkg::*;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_range_rim_tracker.fst");
    $dumpvars(0, tb_cci_range_rim_tracker);
  end
`endif

  logic            req_valid;
  logic            req_ready;
  cci_page_addr_t  req_base_page_addr;
  cci_line_mask_t  req_line_mask;
  cci_master_id_t  req_source_id;

  logic            ac_start;
  cci_page_addr_t  ac_page_addr;
  cci_line_mask_t  ac_line_mask;
  logic            ac_gen_done;

  logic            wr_done_valid;
  cci_line_idx_t   wr_done_line_idx;

  cci_range_entry_t entry;
  logic             tracker_busy;
  logic             tracker_done;
  logic             write_release;
  logic             invalidation_done;

  cci_range_rim_tracker dut (
    .clk               (clk),
    .rst_n             (rst_n),
    .req_valid         (req_valid),
    .req_ready         (req_ready),
    .req_base_page_addr(req_base_page_addr),
    .req_line_mask     (req_line_mask),
    .req_source_id     (req_source_id),
    .ac_start          (ac_start),
    .ac_page_addr      (ac_page_addr),
    .ac_line_mask      (ac_line_mask),
    .ac_gen_done       (ac_gen_done),
    .wr_done_valid     (wr_done_valid),
    .wr_done_line_idx  (wr_done_line_idx),
    .entry             (entry),
    .tracker_busy      (tracker_busy),
    .tracker_done      (tracker_done),
    .write_release     (write_release),
    .invalidation_done (invalidation_done)
  );

  // Capture one-cycle combinational pulses for assertion at posedge+#1.
  logic ac_start_seen;
  logic inv_done_seen;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      ac_start_seen <= 1'b0;
      inv_done_seen <= 1'b0;
    end else begin
      if (ac_start)          ac_start_seen <= 1'b1;
      if (invalidation_done) inv_done_seen  <= 1'b1;
    end
  end

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A    = 52'h0000_0000_0001;
  localparam cci_page_addr_t PG_B    = 52'h0000_0000_0002;
  localparam cci_line_mask_t MASK_4  = 64'h0000_0000_0000_000F;  // lines 0..3
  localparam cci_master_id_t SRC1    = 4'd1;

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
    rst_n              = 1'b0;
    req_valid          = 1'b0;
    req_base_page_addr = '0;
    req_line_mask      = '0;
    req_source_id      = '0;
    ac_gen_done        = 1'b0;
    wr_done_valid      = 1'b0;
    wr_done_line_idx   = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // After issue_req returns (posedge+#1): entry is registered, state=INVALIDATING.
  task automatic issue_req(
    input cci_page_addr_t pg,
    input cci_line_mask_t msk,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid          = 1'b1;
    req_base_page_addr = pg;
    req_line_mask      = msk;
    req_source_id      = src;
    @(posedge clk); #1;   // entry captured
    req_valid = 1'b0;
  endtask

  task automatic pulse_ac_gen_done();
    @(negedge clk);
    ac_gen_done = 1'b1;
    @(posedge clk); #1;   // state → TRACKING captured
    ac_gen_done = 1'b0;
  endtask

  task automatic send_wr_done(input cci_line_idx_t idx);
    @(negedge clk);
    wr_done_valid    = 1'b1;
    wr_done_line_idx = idx;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
  endtask

  task test_T01_T06();
    $display("--- T01-T06: request accept and INVALIDATING state ---");

    check_bit("T01 req_ready=1 when idle",      req_ready,    1'b1);
    check_bit("T01 tracker_busy=0 when idle",   tracker_busy, 1'b0);
    check_bit("T01 write_release=0 when idle",  write_release, 1'b0);

    issue_req(PG_A, MASK_4, SRC1);

    check_bit("T02 entry.valid=1 after accept",  entry.valid, 1'b1);
    check_bit("T02 tracker_busy=1 after accept", tracker_busy, 1'b1);

    // ac_start was combinationally true at the accept posedge; captured by FF.
    check_bit("T03 ac_start fired at accept cycle", ac_start_seen, 1'b1);

    check_bit("T04 ac_page_addr == PG_A",
              logic'(ac_page_addr === PG_A), 1'b1);
    check_bit("T04 ac_line_mask == MASK_4",
              logic'(ac_line_mask === MASK_4), 1'b1);

    check_bit("T05 entry.state=INVALIDATING",
              logic'(entry.state === CCI_RANGE_INVALIDATING), 1'b1);

    check_bit("T02 req_ready=0 while busy", req_ready, 1'b0);

    check_bit("T06 write_release=0 during INVALIDATING", write_release, 1'b0);
  endtask

  task test_T07_T09();
    $display("--- T07-T09: ac_gen_done drives TRACKING transition ---");

    pulse_ac_gen_done();

    check_bit("T07 invalidation_done pulsed at ac_gen_done", inv_done_seen, 1'b1);

    check_bit("T08 entry.state=TRACKING after ac_gen_done",
              logic'(entry.state === CCI_RANGE_TRACKING), 1'b1);

    check_bit("T09 write_release=1 during TRACKING", write_release, 1'b1);
  endtask

  task test_T10_T12();
    $display("--- T10-T12: done_mask update, tracker_done, release ---");

    for (int i = 0; i < 3; i++) begin
      send_wr_done(cci_line_idx_t'(i));
      check_bit($sformatf("T10 done_mask[%0d] after wr_done", i),
                entry.done_mask[i], 1'b1);
      check_bit("T10 tracker_done=0 not yet complete", tracker_done, 1'b0);
    end

    // next_done_mask lookahead: tracker_done fires same cycle as the final wr_done.
    send_wr_done(6'd3);
    check_bit("T11 tracker_done=1 when all lines complete", tracker_done, 1'b1);
    check_bit("T11 entry.state=DONE", logic'(entry.state === CCI_RANGE_DONE), 1'b1);

    @(posedge clk); #1;
    check_bit("T12 entry.valid=0 after DONE",  entry.valid,  1'b0);
    check_bit("T12 tracker_done=0 after DONE", tracker_done, 1'b0);
    check_bit("T12 req_ready=1 after free",    req_ready,    1'b1);
  endtask

  task test_T13();
    $display("--- T13: back-to-back request ---");
    issue_req(PG_B, 64'h3, 4'd2);  // ac_start_seen/inv_done_seen stay set; that's OK   // different page, mask bits 0&1, source 2
    check_bit("T13 new entry.valid=1",     entry.valid, 1'b1);
    check_bit("T13 new entry page correct",
              logic'(entry.base_page_addr === PG_B), 1'b1);
    check_bit("T13 new source_id correct",
              logic'(entry.source_id === 4'd2), 1'b1);
    check_bit("T13 req_ready=0 for new entry", req_ready, 1'b0);
    pulse_ac_gen_done();
    send_wr_done(6'd0);
    send_wr_done(6'd1);
    @(posedge clk); #1;   // DONE → idle
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset();

    test_T01_T06();
    test_T07_T09();
    test_T10_T12();
    test_T13();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
