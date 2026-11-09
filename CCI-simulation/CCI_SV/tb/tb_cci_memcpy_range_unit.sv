// End-to-end integration testbench for cci_memcpy_range_unit.
//
// Tests the full pipeline: decoder → tracker → AC generator →
// snoop response tracker → hazard checker.
//
// CR channel:
//   drive_cr_responses(n) sends n one-cycle cr_valid pulses and checks
//   that cr_ready is asserted before each pulse (protocol compliance).
//   cr_resp is driven to 5'h00 (no error, no data transfer).
//
// Timeout:
//   collect_acs and collect_acs_with_release use a separate cycle_cnt
//   counter so the timeout fires even when ac_valid stays low.
//   A global watchdog terminates the simulation after WATCHDOG_CYCLES.
//
// Test coverage:
//   T01  Single-line end-to-end     : 1 AC → CR → write_release → wr_done
//   T02  4-line contiguous          : 4 ACs before write_release; 4 CRs
//   T03  Hazard during INVALIDATING : combinational probe, diff. source
//   T04  Per-line hazard release    : done_mask clears hazard line by line
//   T05  Same-source no self-hazard : DMA probes own range → hazard=0
//   T06  req_error (page crossing)  : line_count overflows page; req_ready=1 (consumed)
//   T07  Explicit sparse mask       : req_line_mask overrides line_count
//   T08  AC backpressure            : ac_ready=0 delays write_release
//   T09  req_error (unaligned addr) : base_addr[5:0]!=0 → rejected; req_ready=1

`timescale 1ns/1ps

module tb_cci_memcpy_range_unit;
  import cci_memcpy_pkg::*;

  // -------------------------------------------------------------------------
  // Clock and reset
  // -------------------------------------------------------------------------
  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_memcpy_range_unit.fst");
    $dumpvars(0, tb_cci_memcpy_range_unit);
  end
`endif

  // Global watchdog
  localparam int WATCHDOG_CYCLES = 10_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: simulation exceeded %0d clock cycles", WATCHDOG_CYCLES);
  end

  // -------------------------------------------------------------------------
  // DUT ports
  // -------------------------------------------------------------------------
  logic            req_valid;
  logic            req_ready;
  cci_addr_t       req_base_addr;
  cci_line_count_t req_line_count;
  cci_line_mask_t  req_line_mask;
  cci_master_id_t  req_source_id;
  logic            req_error;

  logic            ac_valid;
  logic            ac_ready;
  cci_addr_t       ac_addr;
  logic [3:0]      ac_snoop;

  logic            cr_valid;
  logic            cr_ready;
  logic [4:0]      cr_resp;

  logic            wr_done_valid;
  cci_line_idx_t   wr_done_line_idx;

  logic            probe_valid;
  cci_master_id_t  probe_source_id;
  cci_addr_t       probe_addr;
  logic            probe_hazard;

  logic            tracker_busy;
  logic            tracker_done;
  logic            write_release;
  logic            invalidation_done;
  logic            snoop_error;

  cci_memcpy_range_unit dut (
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
    .wr_done_valid    (wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .probe_valid      (probe_valid),
    .probe_source_id  (probe_source_id),
    .probe_addr       (probe_addr),
    .probe_hazard     (probe_hazard),
    .tracker_busy     (tracker_busy),
    .tracker_done     (tracker_done),
    .write_release    (write_release),
    .invalidation_done(invalidation_done),
    .snoop_error      (snoop_error)
  );

  // -------------------------------------------------------------------------
  // Test infrastructure
  // -------------------------------------------------------------------------
  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A  = 52'h0000_0000_0001;
  localparam cci_page_addr_t PG_B  = 52'h0000_0000_0002;
  localparam cci_addr_t ADDR_A     = {PG_A, {PAGE_OFFSET_BITS{1'b0}}};

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
    rst_n            = 1'b0;
    req_valid        = 1'b0;
    req_base_addr    = '0;
    req_line_count   = '0;
    req_line_mask    = '0;
    req_source_id    = '0;
    ac_ready         = 1'b1;
    cr_valid         = 1'b0;
    cr_resp          = 5'h00;
    wr_done_valid    = 1'b0;
    wr_done_line_idx = '0;
    probe_valid      = 1'b0;
    probe_source_id  = '0;
    probe_addr       = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // Returns at posedge+#1 of the accept cycle; first AC already visible.
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

  task automatic submit_mask_req(
    input cci_addr_t      base,
    input cci_line_mask_t msk,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid      = 1'b1;
    req_base_addr  = base;
    req_line_count = '0;
    req_line_mask  = msk;
    req_source_id  = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // Collect exactly n ACs (peek-first pattern).
  // Uses a separate cycle_cnt so the timeout fires even when ac_valid stays low.
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
        $fatal(1, "FAIL  collect_acs timeout: got %0d/%0d ACs after %0d cycles",
               cnt, n, cycle_cnt);
    end
  endtask

  // Collect n ACs and count those arriving before write_release asserts.
  // Separate cycle_cnt ensures the timeout is reachable even when ac_valid=0.
  task automatic collect_acs_with_release(
    input  int n,
    output int total_cnt,
    output int before_release
  );
    int cycle_cnt;
    total_cnt     = 0;
    before_release = 0;
    cycle_cnt     = 0;
    ac_ready = 1'b1;
    if (ac_valid && ac_ready) begin
      total_cnt++;
      if (!write_release) before_release++;
    end
    while (total_cnt < n) begin
      @(posedge clk); #1;
      cycle_cnt++;
      if (ac_valid && ac_ready) begin
        total_cnt++;
        if (!write_release) before_release++;
      end
      if (cycle_cnt > n + 16)
        $fatal(1, "FAIL  collect_acs_with_release timeout: got %0d/%0d ACs",
               total_cnt, n);
    end
  endtask

  // Send write-done pulses for every set bit in msk (LSB first).
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

  // Drive n CR responses using proper CRVALID/CRREADY handshake.
  // Verifies cr_ready=1 before asserting cr_valid.
  // Returns at posedge+#1 after the last CR; write_release is 1 at that point.
  task automatic drive_cr_responses(input int n);
    for (int i = 0; i < n; i++) begin
      @(negedge clk);
      if (!cr_ready)
        $fatal(1, "drive_cr_responses: cr_ready=0, cannot accept CR (i=%0d)", i);
      cr_valid = 1'b1;
      @(posedge clk); #1;
      cr_valid = 1'b0;
    end
  endtask

  // -------------------------------------------------------------------------
  // T01: single-line end-to-end
  // -------------------------------------------------------------------------
  task test_T01();
    $display("--- T01: single-line end-to-end ---");
    submit_req(ADDR_A, 7'd1, 4'd1);
    check_bit("T01 tracker_busy after accept",    tracker_busy,   1'b1);
    check_bit("T01 write_release=0 in INVAL",     write_release,  1'b0);
    check_bit("T01 ac_valid=1 (first cycle)",      ac_valid,       1'b1);
    check_bit("T01 ac_snoop=MAKE_INVALID",
              logic'(ac_snoop === 4'b1101),         1'b1);
    check_bit("T01 req_ready=0 while busy",        req_ready,      1'b0);

    // Accept AC; ac_gen_done fires but write_release waits for CR.
    @(posedge clk); #1;
    check_bit("T01 write_release=0 pending CR",    write_release,  1'b0);
    check_bit("T01 ac_valid=0 after sequence",      ac_valid,       1'b0);

    drive_cr_responses(1);
    check_bit("T01 write_release=1 after CR",      write_release,  1'b1);

    @(negedge clk);
    wr_done_valid = 1'b1; wr_done_line_idx = 6'd0;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T01 tracker_done on last wr_done",  tracker_done,   1'b1);

    @(posedge clk); #1;
    check_bit("T01 req_ready=1 after DONE",        req_ready,      1'b1);
    check_bit("T01 tracker_busy=0 after DONE",     tracker_busy,   1'b0);
  endtask

  // -------------------------------------------------------------------------
  // T02: 4-line contiguous — all 4 ACs precede write_release
  // -------------------------------------------------------------------------
  task test_T02();
    int total, before_wr;
    $display("--- T02: 4-line contiguous, ACs before write_release ---");
    submit_req(ADDR_A, 7'd4, 4'd1);
    check_bit("T02 write_release=0 before any AC", write_release, 1'b0);

    collect_acs_with_release(4, total, before_wr);
    check_int("T02 exactly 4 ACs issued",           total,     4);
    check_int("T02 all 4 ACs before write_release", before_wr, 4);

    @(posedge clk); #1;    // accept last AC; ac_gen_done fires
    check_bit("T02 ac_valid=0 after sequence",       ac_valid,      1'b0);
    check_bit("T02 write_release=0 pending CRs",     write_release, 1'b0);

    drive_cr_responses(4);
    check_bit("T02 write_release=1 after CRs",       write_release, 1'b1);

    complete_writes(64'hF);
    @(posedge clk); #1;
    check_bit("T02 req_ready=1 after writes",         req_ready,     1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T03: hazard probe from different source during INVALIDATING
  // -------------------------------------------------------------------------
  task test_T03();
    int cnt;
    $display("--- T03: hazard probe during INVALIDATING ---");
    ac_ready = 1'b0;
    submit_req(ADDR_A, 7'd4, 4'd1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = {PG_A, 6'd1, 6'h00};
    #1;
    check_bit("T03 hazard=1 for pending line in INVAL",   probe_hazard, 1'b1);

    probe_addr = {PG_A, 6'd10, 6'h00};
    #1;
    check_bit("T03 hazard=0 for line outside mask",        probe_hazard, 1'b0);

    probe_addr = {PG_B, 6'd1, 6'h00};
    #1;
    check_bit("T03 hazard=0 for different page",           probe_hazard, 1'b0);
    probe_valid = 1'b0;

    collect_acs(4, cnt);
    @(posedge clk); #1;
    drive_cr_responses(4);
    complete_writes(64'hF);
    @(posedge clk); #1;
    check_bit("T03 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T04: per-line hazard release via done_mask
  // -------------------------------------------------------------------------
  task test_T04();
    int cnt;
    $display("--- T04: per-line hazard release ---");
    submit_req(ADDR_A, 7'd4, 4'd1);
    collect_acs(4, cnt);
    @(posedge clk); #1;
    drive_cr_responses(4);   // → TRACKING, write_release=1

    @(negedge clk);
    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = {PG_A, 6'd2, 6'h00};
    @(posedge clk); #1;
    check_bit("T04 hazard=1 for pending line 2",    probe_hazard, 1'b1);

    @(negedge clk);
    wr_done_valid = 1'b1; wr_done_line_idx = 6'd2;
    @(posedge clk); #1;
    wr_done_valid = 1'b0;
    check_bit("T04 hazard=0 after wr_done for line 2", probe_hazard, 1'b0);

    @(negedge clk); probe_addr = {PG_A, 6'd0, 6'h00};
    @(posedge clk); #1;
    check_bit("T04 hazard=1 for still-pending line 0",  probe_hazard, 1'b1);
    probe_valid = 1'b0;

    complete_writes(64'hB);
    @(posedge clk); #1;
    check_bit("T04 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T05: same-source probe — no self-hazard
  // -------------------------------------------------------------------------
  task test_T05();
    int cnt;
    $display("--- T05: same source, no self-hazard ---");
    submit_req(ADDR_A, 7'd4, 4'd1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd1;
    probe_addr      = {PG_A, 6'd1, 6'h00};
    #1;
    check_bit("T05 no self-hazard (same source_id)", probe_hazard, 1'b0);
    probe_valid = 1'b0;

    collect_acs(4, cnt);
    @(posedge clk); #1;
    drive_cr_responses(4);
    complete_writes(64'hF);
    @(posedge clk); #1;
    check_bit("T05 cleanup: req_ready=1", req_ready, 1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T06: req_error on page boundary crossing
  // -------------------------------------------------------------------------
  task test_T06();
    $display("--- T06: req_error on page boundary crossing ---");
    @(negedge clk);
    req_valid      = 1'b1;
    req_base_addr  = {PG_A, 6'd60, 6'h00};
    req_line_count = 7'd8;
    req_line_mask  = '0;
    req_source_id  = 4'd1;
    @(posedge clk); #1;
    check_bit("T06 req_error=1 for crossing",                  req_error,    1'b1);
    check_bit("T06 req_ready=1 (error consumed, no alloc)",    req_ready,    1'b1);
    check_bit("T06 tracker_busy=0 (rejected)",                 tracker_busy, 1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T06 req_ready=1 after deassert",                req_ready,    1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T07: explicit sparse mask overrides line_count
  // -------------------------------------------------------------------------
  task test_T07();
    int cnt;
    $display("--- T07: explicit mask (0xA5 = lines 0,2,5,7) ---");
    submit_mask_req(ADDR_A, 64'hA5, 4'd1);
    check_bit("T07 tracker_busy=1 after explicit accept", tracker_busy,   1'b1);
    check_bit("T07 write_release=0 before ACs",           write_release,  1'b0);

    collect_acs(4, cnt);
    check_int("T07 exactly 4 ACs (popcount 0xA5)", cnt, 4);

    @(posedge clk); #1;
    check_bit("T07 ac_valid=0 after sequence",     ac_valid,      1'b0);
    check_bit("T07 write_release=0 pending CRs",   write_release, 1'b0);

    drive_cr_responses(4);
    check_bit("T07 write_release=1 after CRs",     write_release, 1'b1);

    complete_writes(64'hA5);
    @(posedge clk); #1;
    check_bit("T07 req_ready=1 after explicit-mask completion", req_ready, 1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T08: AC backpressure delays TRACKING entry (write_release held low)
  // -------------------------------------------------------------------------
  task test_T08();
    int ac_cnt;
    int cycle_cnt;
    $display("--- T08: AC backpressure delays write_release ---");
    submit_req(ADDR_A, 7'd2, 4'd1);
    check_bit("T08 write_release=0 before any AC", write_release, 1'b0);

    @(negedge clk); ac_ready = 1'b0;
    @(posedge clk); #1;
    check_bit("T08 ac_valid held during stall",    ac_valid,      1'b1);
    check_bit("T08 write_release=0 during stall",  write_release, 1'b0);
    @(posedge clk); #1;
    @(posedge clk); #1;

    @(negedge clk); ac_ready = 1'b1;
    ac_cnt    = 0;
    cycle_cnt = 0;
    if (ac_valid && ac_ready) ac_cnt++;
    while (ac_cnt < 2) begin
      @(posedge clk); #1;
      cycle_cnt++;
      if (ac_valid && ac_ready) ac_cnt++;
      if (cycle_cnt > 10)
        $fatal(1, "FAIL  T08 AC collection timeout: got %0d/2", ac_cnt);
    end
    check_int("T08 exactly 2 ACs issued", ac_cnt, 2);

    @(posedge clk); #1;    // accept last AC; ac_gen_done fires
    check_bit("T08 write_release=0 pending CRs", write_release, 1'b0);
    drive_cr_responses(2);
    check_bit("T08 write_release=1 after CRs",   write_release, 1'b1);

    complete_writes(64'h3);
    @(posedge clk); #1;
    check_bit("T08 req_ready=1 after completion", req_ready, 1'b1);
  endtask

  // -------------------------------------------------------------------------
  // T09: req_error on unaligned base address (byte offset within cache line)
  // -------------------------------------------------------------------------
  task test_T09();
    $display("--- T09: req_error on unaligned base address ---");
    @(negedge clk);
    req_valid      = 1'b1;
    req_base_addr  = {PG_A, 6'd0, 6'h01};  // addr[5:0]=1 → unaligned
    req_line_count = 7'd1;
    req_line_mask  = '0;
    req_source_id  = 4'd1;
    @(posedge clk); #1;
    check_bit("T09 req_error=1 for unaligned addr",  req_error,    1'b1);
    check_bit("T09 req_ready=1 (consumed)",           req_ready,    1'b1);
    check_bit("T09 tracker_busy=0 (rejected)",        tracker_busy, 1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T09 req_error=0 after deassert",       req_error,    1'b0);
  endtask

  // -------------------------------------------------------------------------
  // Stimulus top
  // -------------------------------------------------------------------------
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
    end else begin
      $display("FAILURES detected.");
      $fatal(1, "%0d test(s) failed", fail_count);
    end
  end

endmodule
