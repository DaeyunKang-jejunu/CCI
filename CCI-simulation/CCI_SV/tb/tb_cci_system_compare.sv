// System comparison testbench: proposed (cci_memcpy_system) vs
// baseline (cci_baseline_system).
//
// Drives identical AW/B/probe stimulus to both DUTs and verifies that their
// checked outputs agree — tracker_done fires on the same B response, and
// probe_hazard agrees for every checked point during writes.
//
// NOTE on equivalence scope: this TB covers two directed scenarios (T01, T02)
// that exercise the main data path and hazard logic.  It does NOT claim
// exhaustive or formal functional equivalence.  The message printed on success
// reflects the actual coverage: "checked outputs agree for T01-T02 scenarios."
// Hardware cost (LUT/FF) is compared separately via synth_compare.mk.
//
// The proposed system has an extra invalidation phase (AC/CR) before writes.
// AWs are deferred until proposed's write_release so both DUTs see the same
// write sequence.  The baseline skips directly to TRACKING, so it waits for
// the AWs to arrive just like the proposed does after write_release.
//
// Test coverage:
//   T01  4-line complete path : both reach tracker_done on the same 4th B
//   T02  Probe hazard parity  : both agree on hazard at every checked state
//
// AW/B timing: do_aw/do_b are driven at negedge, accepted at posedge.
// Both DUTs share the same AW/B/probe signals.

`timescale 1ns/1ps

module tb_cci_system_compare;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W   = 4;
  localparam int FIFO_DEPTH = 4;

  logic clk, rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_system_compare.fst");
    $dumpvars(0, tb_cci_system_compare);
  end
`endif

  localparam int WATCHDOG_CYCLES = 20_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: compare TB exceeded %0d cycles", WATCHDOG_CYCLES);
  end

  logic             req_valid;
  cci_addr_t        req_base_addr;
  cci_line_count_t  req_line_count;
  cci_line_mask_t   req_line_mask;
  cci_master_id_t   req_source_id;

  logic prop_req_ready, prop_req_error;
  logic base_req_ready, base_req_error;

  logic        ac_valid, ac_ready;
  cci_addr_t   ac_addr;
  logic [3:0]  ac_snoop;
  logic        cr_valid, cr_ready;
  logic [4:0]  cr_resp;

  logic [AXI_ID_W-1:0] awid;
  logic                 aw_valid, aw_ready, aw_track_valid;
  cci_addr_t            awaddr;
  logic [AXI_ID_W-1:0] bid;
  logic                 b_valid;
  logic                 prop_b_ready, base_b_ready;   // both hardwired 1

  logic             probe_valid;
  cci_master_id_t   probe_source_id;
  cci_addr_t        probe_addr;
  logic             prop_probe_hazard, base_probe_hazard;

  logic prop_tracker_busy, prop_tracker_done;
  logic prop_write_release, prop_invalidation_done;
  logic prop_snoop_error, prop_overflow_sticky, prop_underflow_sticky;
  logic [2**AXI_ID_W-1:0] prop_aw_full_mask;

  logic base_tracker_busy, base_tracker_done;
  logic base_overflow_sticky, base_underflow_sticky;
  logic [2**AXI_ID_W-1:0] base_aw_full_mask;

  cci_memcpy_system #(
    .AXI_ID_W   (AXI_ID_W),
    .FIFO_DEPTH (FIFO_DEPTH)
  ) proposed_dut (
    .clk               (clk),
    .rst_n             (rst_n),
    .req_valid         (req_valid),
    .req_ready         (prop_req_ready),
    .req_base_addr     (req_base_addr),
    .req_line_count    (req_line_count),
    .req_line_mask     (req_line_mask),
    .req_source_id     (req_source_id),
    .req_error         (prop_req_error),
    .ac_valid          (ac_valid),
    .ac_ready          (ac_ready),
    .ac_addr           (ac_addr),
    .ac_snoop          (ac_snoop),
    .cr_valid          (cr_valid),
    .cr_ready          (cr_ready),
    .cr_resp           (cr_resp),
    .awid              (awid),
    .aw_valid          (aw_valid),
    .aw_ready          (aw_ready),
    .aw_track_valid    (aw_track_valid),
    .awaddr            (awaddr),
    .bid               (bid),
    .b_valid           (b_valid),
    .b_ready           (prop_b_ready),
    .probe_valid       (probe_valid),
    .probe_source_id   (probe_source_id),
    .probe_addr        (probe_addr),
    .probe_hazard      (prop_probe_hazard),
    .tracker_busy      (prop_tracker_busy),
    .tracker_done      (prop_tracker_done),
    .write_release     (prop_write_release),
    .invalidation_done (prop_invalidation_done),
    .snoop_error       (prop_snoop_error),
    .overflow_sticky   (prop_overflow_sticky),
    .underflow_sticky  (prop_underflow_sticky),
    .aw_full_mask      (prop_aw_full_mask)
  );

  cci_baseline_system #(
    .AXI_ID_W   (AXI_ID_W),
    .FIFO_DEPTH (FIFO_DEPTH)
  ) baseline_dut (
    .clk             (clk),
    .rst_n           (rst_n),
    .req_valid       (req_valid),
    .req_ready       (base_req_ready),
    .req_base_addr   (req_base_addr),
    .req_line_mask   (req_line_mask),
    .req_source_id   (req_source_id),
    .awid            (awid),
    .aw_valid        (aw_valid),
    .aw_ready        (aw_ready),
    .aw_track_valid  (aw_track_valid),
    .awaddr          (awaddr),
    .bid             (bid),
    .b_valid         (b_valid),
    .b_ready         (base_b_ready),
    .probe_valid     (probe_valid),
    .probe_source_id (probe_source_id),
    .probe_addr      (probe_addr),
    .probe_hazard    (base_probe_hazard),
    .req_error        (base_req_error),
    .tracker_busy     (base_tracker_busy),
    .tracker_done     (base_tracker_done),
    .overflow_sticky  (base_overflow_sticky),
    .underflow_sticky (base_underflow_sticky),
    .aw_full_mask     (base_aw_full_mask)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A   = 52'h0000_0000_0001;
  localparam cci_addr_t      ADDR_A = {PG_A, {PAGE_OFFSET_BITS{1'b0}}};

  function automatic cci_addr_t line_addr(input cci_page_addr_t pg, input int li);
    return {pg, cci_line_idx_t'(li), {LINE_OFFSET_BITS{1'b0}}};
  endfunction

  // Mask for n contiguous lines starting at line 0.
  function automatic cci_line_mask_t lines_to_mask(input int n);
    return (n >= 64) ? '1 : ((cci_line_mask_t'(1) << n) - 1);
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
    rst_n          = 1'b0;
    req_valid      = 1'b0;
    req_base_addr  = '0;
    req_line_count = '0;
    req_line_mask  = '0;
    req_source_id  = '0;
    ac_ready       = 1'b1;
    cr_valid       = 1'b0;
    cr_resp        = 5'h00;
    aw_valid       = 1'b0;
    aw_ready       = 1'b1;
    aw_track_valid = 1'b0;
    awid           = '0;
    awaddr         = '0;
    b_valid        = 1'b0;
    bid            = '0;
    probe_valid    = 1'b0;
    probe_source_id = '0;
    probe_addr     = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // Issue same req (mask mode) to both DUTs simultaneously.
  // Returns at posedge+#1 of accept cycle.
  task automatic submit_req_mask(
    input cci_addr_t      base,
    input cci_line_mask_t mask,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid      = 1'b1;
    req_base_addr  = base;
    req_line_count = '0;        // mask mode: count unused
    req_line_mask  = mask;
    req_source_id  = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // Collect n ACs from the proposed DUT (peek-first).
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

  // Drive n good CR responses (no error) to the proposed DUT.
  task automatic drive_cr_responses(input int n);
    for (int i = 0; i < n; i++) begin
      @(negedge clk);
      cr_valid = 1'b1;
      @(posedge clk); #1;
      cr_valid = 1'b0;
    end
  endtask

  // AW handshake to both DUTs (shared channel; aw_track_valid=1).
  task automatic do_aw(input logic [AXI_ID_W-1:0] id, input cci_addr_t addr);
    @(negedge clk);
    aw_valid       = 1'b1;
    aw_track_valid = 1'b1;
    awid           = id;
    awaddr         = addr;
    @(posedge clk); #1;
    aw_valid       = 1'b0;
    aw_track_valid = 1'b0;
  endtask

  // B handshake to both DUTs (shared channel).
  task automatic do_b(input logic [AXI_ID_W-1:0] id);
    @(negedge clk);
    b_valid = 1'b1;
    bid     = id;
    @(posedge clk); #1;
    b_valid = 1'b0;
  endtask

  task automatic test_T01();
    int cnt;
    $display("--- T01_CMP: 4-line complete path ---");

    submit_req_mask(ADDR_A, lines_to_mask(4), 4'd1);
    check_bit("T01 prop busy after req",       prop_tracker_busy, 1'b1);
    check_bit("T01 base busy after req",       base_tracker_busy, 1'b1);
    check_bit("T01 prop write_release=0",      prop_write_release,1'b0);

    collect_acs(4, cnt);
    check_int("T01 4 ACs from proposed",       cnt, 4);
    @(posedge clk); #1;   // complete last AC handshake
    drive_cr_responses(4);
    check_bit("T01 prop write_release=1",      prop_write_release,1'b1);
    check_bit("T01 base not done before AWs",  base_tracker_done, 1'b0);

    for (int i = 0; i < 4; i++)
      do_aw(4'd0, line_addr(PG_A, i));

    for (int i = 0; i < 3; i++) begin
      do_b(4'd0);
      check_bit($sformatf("T01 prop done=0 after B%0d", i),
                prop_tracker_done, 1'b0);
      check_bit($sformatf("T01 base done=0 after B%0d", i),
                base_tracker_done, 1'b0);
    end

    do_b(4'd0);
    check_bit("T01 PROP done=1 on 4th B",      prop_tracker_done, 1'b1);
    check_bit("T01 BASE done=1 on 4th B",      base_tracker_done, 1'b1);

    check_bit("T01 prop snoop_error=0",        prop_snoop_error,      1'b0);
    check_bit("T01 prop overflow_sticky=0",    prop_overflow_sticky,  1'b0);
    check_bit("T01 base overflow_sticky=0",    base_overflow_sticky,  1'b0);

    @(posedge clk); #1;
    check_bit("T01 prop req_ready=1 idle",     prop_req_ready,    1'b1);
    check_bit("T01 base req_ready=1 idle",     base_req_ready,    1'b1);
  endtask

  task automatic test_T02();
    int cnt;
    $display("--- T02_CMP: probe hazard parity across writes ---");

    submit_req_mask(ADDR_A, lines_to_mask(3), 4'd1);

    collect_acs(3, cnt);
    @(posedge clk); #1;
    drive_cr_responses(3);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 0);
    #1;
    check_bit("T02 PROP hazard=1 before writes",  prop_probe_hazard, 1'b1);
    check_bit("T02 BASE hazard=1 before writes",  base_probe_hazard, 1'b1);
    probe_valid = 1'b0;

    do_aw(4'd0, line_addr(PG_A, 0));
    do_b(4'd0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 0);
    #1;
    check_bit("T02 PROP hazard=0 line0 done",     prop_probe_hazard, 1'b0);
    check_bit("T02 BASE hazard=0 line0 done",     base_probe_hazard, 1'b0);

    probe_addr = line_addr(PG_A, 2);
    #1;
    check_bit("T02 PROP hazard=1 line2 pend",     prop_probe_hazard, 1'b1);
    check_bit("T02 BASE hazard=1 line2 pend",     base_probe_hazard, 1'b1);
    probe_valid = 1'b0;

    check_bit("T02 prop done=0 (2 of 3)",         prop_tracker_done, 1'b0);
    check_bit("T02 base done=0 (2 of 3)",         base_tracker_done, 1'b0);

    do_aw(4'd0, line_addr(PG_A, 1));
    do_b(4'd0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 2);
    #1;
    check_bit("T02 PROP hazard=1 line2 pend2",    prop_probe_hazard, 1'b1);
    check_bit("T02 BASE hazard=1 line2 pend2",    base_probe_hazard, 1'b1);
    probe_valid = 1'b0;

    do_aw(4'd0, line_addr(PG_A, 2));
    do_b(4'd0);
    check_bit("T02 PROP done=1 final",            prop_tracker_done, 1'b1);
    check_bit("T02 BASE done=1 final",            base_tracker_done, 1'b1);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 2);
    #1;
    check_bit("T02 PROP hazard=0 all done",       prop_probe_hazard, 1'b0);
    check_bit("T02 BASE hazard=0 all done",       base_probe_hazard, 1'b0);
    probe_valid = 1'b0;

    @(posedge clk); #1;
    check_bit("T02 prop req_ready=1",             prop_req_ready,    1'b1);
    check_bit("T02 base req_ready=1",             base_req_ready,    1'b1);
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset(); test_T01(); @(posedge clk); #1;
    do_reset(); test_T02();

    $display("-------------------------------");
    $display("Compare: %0d checks passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("Proposed and baseline checked outputs agree for directed scenarios T01-T02.");
      $finish;
    end else begin
      $display("FAILURES: proposed/baseline diverged on %0d check(s).", fail_count);
      $fatal(1, "%0d check(s) failed", fail_count);
    end
  end

endmodule
