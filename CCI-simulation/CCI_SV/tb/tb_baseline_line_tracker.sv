// Testbench for baseline_line_tracker.
//
// Verifies the per-line entry design used as the synthesis comparison reference.
// Tests mirror those of tb_cci_memcpy_range_unit (minus the AC-generator flow)
// so that the same stimulus patterns exercise both designs.
//
// Test coverage:
//   T01  Single-line alloc/complete : 1 entry, hazard visible, cleared on done
//   T02  4-line batch alloc         : 4 entries allocated simultaneously
//   T03  Hazard CAM                 : 64 parallel comparators fire correctly
//   T04  Same-source no self-hazard : probe_source_id == entry.source_id
//   T05  Per-line hazard release    : done flag clears hazard for that line only
//   T06  tracker_done one-cycle     : pulses when last entry completes
//   T07  Back-to-back requests      : new alloc after previous tracker_done+1
//   T08  Sparse mask                : non-contiguous lines allocated correctly

`timescale 1ns/1ps

module tb_baseline_line_tracker;
  import cci_memcpy_pkg::*;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_baseline_line_tracker.fst");
    $dumpvars(0, tb_baseline_line_tracker);
  end
`endif

  logic            req_valid;
  logic            req_ready;
  cci_addr_t       req_base_addr;
  cci_line_mask_t  req_line_mask;
  cci_master_id_t  req_source_id;

  logic            wr_done_valid;
  cci_line_idx_t   wr_done_line_idx;

  logic            probe_valid;
  cci_master_id_t  probe_source_id;
  cci_addr_t       probe_addr;
  logic            probe_hazard;

  logic            req_error;
  logic            tracker_busy;
  logic            tracker_done;

  baseline_line_tracker dut (
    .clk            (clk),
    .rst_n          (rst_n),
    .req_valid      (req_valid),
    .req_ready      (req_ready),
    .req_base_addr  (req_base_addr),
    .req_line_mask  (req_line_mask),
    .req_source_id  (req_source_id),
    .wr_done_valid  (wr_done_valid),
    .wr_done_line_idx(wr_done_line_idx),
    .probe_valid    (probe_valid),
    .probe_source_id(probe_source_id),
    .probe_addr     (probe_addr),
    .probe_hazard   (probe_hazard),
    .req_error      (req_error),
    .tracker_busy   (tracker_busy),
    .tracker_done   (tracker_done)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A = 52'h0000_0000_0001;
  localparam cci_page_addr_t PG_B = 52'h0000_0000_0002;
  localparam cci_addr_t ADDR_A    = {PG_A, {PAGE_OFFSET_BITS{1'b0}}};

  task automatic check_bit(input string label, input logic got, input logic exp);
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0b got=%0b", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic do_reset();
    rst_n            = 1'b0;
    req_valid        = 1'b0;
    req_base_addr    = '0;
    req_line_mask    = '0;
    req_source_id    = '0;
    wr_done_valid    = 1'b0;
    wr_done_line_idx = '0;
    probe_valid      = 1'b0;
    probe_source_id  = '0;
    probe_addr       = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  task automatic submit_req(
    input cci_addr_t      base,
    input cci_line_mask_t msk,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid     = 1'b1;
    req_base_addr = base;
    req_line_mask = msk;
    req_source_id = src;
    @(posedge clk); #1;   // entries allocated
    req_valid = 1'b0;
  endtask

  task automatic complete_writes(input cci_line_mask_t msk);
    for (int i = 0; i < LINE_MASK_WIDTH; i++) begin
      if (msk[i]) begin
        @(negedge clk);
        wr_done_valid    = 1'b1;
        wr_done_line_idx = cci_line_idx_t'(i);
        @(posedge clk); #1;
        wr_done_valid = 1'b0;
      end
    end
  endtask

  task test_T01();
    $display("--- T01: single-line alloc/complete ---");
    submit_req(ADDR_A, 64'h1, 4'd1);   // line 0 only
    check_bit("T01 tracker_busy after alloc", tracker_busy, 1'b1);
    check_bit("T01 req_ready=0 while busy",   req_ready,    1'b0);
    check_bit("T01 tracker_done=0 before done", tracker_done, 1'b0);

    @(negedge clk);
    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = {PG_A, 6'd0, 6'h00};
    @(posedge clk); #1;
    check_bit("T01 hazard=1 before write done",   probe_hazard, 1'b1);

    @(negedge clk);
    wr_done_valid = 1'b1; wr_done_line_idx = 6'd0;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T01 hazard=0 after write done",     probe_hazard, 1'b0);
    check_bit("T01 tracker_done=1 on last write",  tracker_done, 1'b1);
    probe_valid = 1'b0;

    @(posedge clk); #1;   // entries freed
    check_bit("T01 req_ready=1 after done",        req_ready,    1'b1);
    check_bit("T01 tracker_busy=0 after done",     tracker_busy, 1'b0);
    check_bit("T01 tracker_done=0 next cycle",     tracker_done, 1'b0);
  endtask

  task test_T02();
    $display("--- T02: 4-line batch alloc (mask 0xF) ---");
    submit_req(ADDR_A, 64'hF, 4'd1);
    check_bit("T02 tracker_busy=1 after 4-line alloc", tracker_busy, 1'b1);
    check_bit("T02 req_ready=0 while 4 entries active", req_ready,   1'b0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    for (int i = 0; i < 4; i++) begin
      @(negedge clk);
      probe_addr = {PG_A, cci_line_idx_t'(i), 6'h00};
      @(posedge clk); #1;
      check_bit($sformatf("T02 hazard=1 for line %0d", i), probe_hazard, 1'b1);
    end
    probe_valid = 1'b0;

    complete_writes(64'hF);
    @(posedge clk); #1;
    check_bit("T02 req_ready=1 after all writes", req_ready, 1'b1);
  endtask

  task test_T03();
    $display("--- T03: hazard CAM correctness ---");
    submit_req(ADDR_A,
      (64'h1<<5)|(64'h1<<10)|(64'h1<<20)|(64'h1<<40), 4'd1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd3;

    @(negedge clk); probe_addr = {PG_A, 6'd10, 6'h00};
    @(posedge clk); #1;
    check_bit("T03 hazard=1 for allocated line 10",    probe_hazard, 1'b1);

    @(negedge clk); probe_addr = {PG_A, 6'd40, 6'h00};
    @(posedge clk); #1;
    check_bit("T03 hazard=1 for allocated line 40",    probe_hazard, 1'b1);

    @(negedge clk); probe_addr = {PG_A, 6'd6, 6'h00};
    @(posedge clk); #1;
    check_bit("T03 hazard=0 for unallocated line 6",   probe_hazard, 1'b0);

    @(negedge clk); probe_addr = {PG_B, 6'd10, 6'h00};
    @(posedge clk); #1;
    check_bit("T03 hazard=0 for same line, diff page", probe_hazard, 1'b0);
    probe_valid = 1'b0;

    complete_writes((64'h1<<5)|(64'h1<<10)|(64'h1<<20)|(64'h1<<40));
    @(posedge clk); #1;
    check_bit("T03 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  task test_T04();
    $display("--- T04: same source, no self-hazard ---");
    submit_req(ADDR_A, 64'hF, 4'd1);

    @(negedge clk);
    probe_valid     = 1'b1;
    probe_source_id = 4'd1;         // SAME source
    probe_addr      = {PG_A, 6'd2, 6'h00};
    @(posedge clk); #1;
    check_bit("T04 no self-hazard (same source_id)", probe_hazard, 1'b0);
    probe_valid = 1'b0;

    complete_writes(64'hF);
    @(posedge clk); #1;
    check_bit("T04 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  task test_T05();
    $display("--- T05: per-line hazard release ---");
    submit_req(ADDR_A, 64'hF, 4'd1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    @(negedge clk); probe_addr = {PG_A, 6'd1, 6'h00};
    @(posedge clk); #1;
    check_bit("T05 hazard=1 before done for line 1",  probe_hazard, 1'b1);

    @(negedge clk); wr_done_valid = 1'b1; wr_done_line_idx = 6'd1;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T05 hazard=0 after done for line 1",   probe_hazard, 1'b0);

    @(negedge clk); probe_addr = {PG_A, 6'd0, 6'h00};
    @(posedge clk); #1;
    check_bit("T05 hazard=1 still pending for line 0", probe_hazard, 1'b1);
    probe_valid = 1'b0;

    complete_writes(64'hD);   // lines 0,2,3 (line 1 already done)
    @(posedge clk); #1;
    check_bit("T05 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  task test_T06();
    $display("--- T06: tracker_done one-cycle pulse ---");
    submit_req(ADDR_A, 64'h3, 4'd1);   // 2 lines
    @(negedge clk); wr_done_valid = 1'b1; wr_done_line_idx = 6'd0;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T06 tracker_done=0 after partial completion", tracker_done, 1'b0);
    check_bit("T06 tracker_busy=1 still active",             tracker_busy, 1'b1);

    @(negedge clk); wr_done_valid = 1'b1; wr_done_line_idx = 6'd1;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T06 tracker_done=1 on last write",            tracker_done, 1'b1);

    @(posedge clk); #1;   // entries freed
    check_bit("T06 tracker_done=0 next cycle",               tracker_done, 1'b0);
    check_bit("T06 req_ready=1 after done",                  req_ready,    1'b1);
  endtask

  task test_T07();
    $display("--- T07: back-to-back requests ---");
    submit_req(ADDR_A, 64'h1, 4'd1);
    complete_writes(64'h1);
    @(posedge clk); #1;   // first request done, idle
    check_bit("T07 req_ready=1 after first done", req_ready, 1'b1);

    submit_req({PG_B, {PAGE_OFFSET_BITS{1'b0}}}, 64'h3, 4'd2);
    check_bit("T07 new entry accepted (tracker_busy=1)", tracker_busy, 1'b1);
    check_bit("T07 req_ready=0 for new entry",           req_ready,   1'b0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd3;
    @(negedge clk); probe_addr = {PG_B, 6'd0, 6'h00};
    @(posedge clk); #1;
    check_bit("T07 hazard=1 for new entry",  probe_hazard, 1'b1);
    probe_valid = 1'b0;

    complete_writes(64'h3);
    @(posedge clk); #1;
    check_bit("T07 req_ready=1 after second done", req_ready, 1'b1);
  endtask

  task test_T08();
    cci_line_mask_t sparse;
    $display("--- T08: sparse mask allocation ---");
    sparse = (64'h1<<3) | (64'h1<<17) | (64'h1<<63);
    submit_req(ADDR_A, sparse, 4'd1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd5;

    @(negedge clk); probe_addr = {PG_A, 6'd3,  6'h00};
    @(posedge clk); #1;
    check_bit("T08 hazard=1 line 3  (allocated)",  probe_hazard, 1'b1);

    @(negedge clk); probe_addr = {PG_A, 6'd17, 6'h00};
    @(posedge clk); #1;
    check_bit("T08 hazard=1 line 17 (allocated)",  probe_hazard, 1'b1);

    @(negedge clk); probe_addr = {PG_A, 6'd63, 6'h00};
    @(posedge clk); #1;
    check_bit("T08 hazard=1 line 63 (allocated)",  probe_hazard, 1'b1);

    @(negedge clk); probe_addr = {PG_A, 6'd4,  6'h00};
    @(posedge clk); #1;
    check_bit("T08 hazard=0 line 4  (not alloc)",  probe_hazard, 1'b0);

    @(negedge clk); probe_addr = {PG_A, 6'd62, 6'h00};
    @(posedge clk); #1;
    check_bit("T08 hazard=0 line 62 (not alloc)",  probe_hazard, 1'b0);
    probe_valid = 1'b0;

    complete_writes(sparse);
    @(posedge clk); #1;
    check_bit("T08 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  // T09: req_error on zero mask (N_ENTRIES=64, overflow path unreachable with 64-bit mask)
  task test_T09();
    $display("--- T09: req_error on zero mask ---");
    @(negedge clk);
    req_valid     = 1'b1;
    req_base_addr = ADDR_A;
    req_line_mask = '0;   // zero mask — illegal
    req_source_id = 4'd1;
    @(posedge clk); #1;
    check_bit("T09 req_error=1 zero mask",    req_error,    1'b1);
    check_bit("T09 req_ready=1 (idle)",       req_ready,    1'b1);
    check_bit("T09 tracker_busy=0 no alloc",  tracker_busy, 1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T09 tracker_busy=0 next cycle", tracker_busy, 1'b0);
    check_bit("T09 req_error=0 idle",          req_error,   1'b0);
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset(); test_T01(); @(posedge clk); #1;
    do_reset(); test_T02(); @(posedge clk); #1;
    do_reset(); test_T03(); @(posedge clk); #1;
    do_reset(); test_T04(); @(posedge clk); #1;
    do_reset(); test_T05(); @(posedge clk); #1;
    do_reset(); test_T06(); @(posedge clk); #1;
    do_reset(); test_T07(); @(posedge clk); #1;
    do_reset(); test_T08(); @(posedge clk); #1;
    do_reset(); test_T09();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
