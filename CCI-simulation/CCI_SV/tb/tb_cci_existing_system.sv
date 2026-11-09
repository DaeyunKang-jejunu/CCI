// System-level testbench for cci_existing_system.
//
// Verifies the realistic baseline: baseline_line_tracker driven by the
// class-aware cci_write_completion_tracker with cci_wr_track_e routing.
//
// Key invariants under test:
//   - CCI_WR_NORMAL B responses route to the tracker (wr_done fires).
//   - CCI_WR_NONE   B responses are ordering-only; wr_done does not fire.
//   - probe_hazard fires for undone entries with a different source_id.
//   - probe_hazard is 0 after all lines are done (before entries freed).
//   - req_ready goes 0 while busy; recovers after tracker_done.
//
// NORMAL_ENTRIES=4 (TB param) keeps cycle count low; synthesis uses 16.
//
// Timing:
//   do_aw / do_b drive signals at negedge, return at posedge+#1.
//   After do_b returns, done bits have been updated via NBA.

`timescale 1ns/1ps

module tb_cci_existing_system;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W       = 4;
  localparam int FIFO_DEPTH     = 4;
  localparam int NORMAL_ENTRIES = 4;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_existing_system.fst");
    $dumpvars(0, tb_cci_existing_system);
  end
`endif

  localparam int WATCHDOG_CYCLES = 10_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: simulation exceeded %0d cycles", WATCHDOG_CYCLES);
  end

  logic            req_valid;
  logic            req_ready;
  cci_addr_t       req_base_addr;
  cci_line_mask_t  req_line_mask;
  cci_master_id_t  req_source_id;

  logic [AXI_ID_W-1:0] awid;
  logic            aw_valid;
  logic            aw_ready;
  cci_wr_track_e   aw_track_type;
  cci_addr_t       awaddr;

  logic [AXI_ID_W-1:0] bid;
  logic            b_valid;
  logic            b_ready;

  logic            probe_valid;
  cci_master_id_t  probe_source_id;
  cci_addr_t       probe_addr;
  logic            probe_hazard;

  logic            normal_req_error;
  logic            tracker_busy;
  logic            tracker_done;
  logic            overflow_sticky;
  logic            underflow_sticky;
  logic [2**AXI_ID_W-1:0] aw_full_mask;

  cci_existing_system #(
    .AXI_ID_W      (AXI_ID_W),
    .FIFO_DEPTH    (FIFO_DEPTH),
    .NORMAL_ENTRIES(NORMAL_ENTRIES)
  ) dut (
    .clk             (clk),
    .rst_n           (rst_n),
    .req_valid       (req_valid),
    .req_ready       (req_ready),
    .req_base_addr   (req_base_addr),
    .req_line_mask   (req_line_mask),
    .req_source_id   (req_source_id),
    .awid            (awid),
    .aw_valid        (aw_valid),
    .aw_ready        (aw_ready),
    .aw_track_type   (aw_track_type),
    .awaddr          (awaddr),
    .bid             (bid),
    .b_valid         (b_valid),
    .b_ready         (b_ready),
    .probe_valid     (probe_valid),
    .probe_source_id (probe_source_id),
    .probe_addr      (probe_addr),
    .probe_hazard      (probe_hazard),
    .normal_req_error  (normal_req_error),
    .tracker_busy      (tracker_busy),
    .tracker_done      (tracker_done),
    .overflow_sticky   (overflow_sticky),
    .underflow_sticky  (underflow_sticky),
    .aw_full_mask      (aw_full_mask)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A = 52'h0000_0000_0001;
  localparam cci_page_addr_t PG_B = 52'h0000_0000_0002;

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

  task automatic do_reset();
    rst_n          = 1'b0;
    req_valid      = 1'b0;
    req_base_addr  = '0;
    req_line_mask  = '0;
    req_source_id  = '0;
    aw_valid       = 1'b0;
    aw_ready       = 1'b1;
    aw_track_type  = CCI_WR_NONE;
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

  // Submit req at negedge; returns at posedge+#1 of accept cycle.
  task automatic submit_req(
    input cci_addr_t      base,
    input cci_line_mask_t mask,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid     = 1'b1;
    req_base_addr = base;
    req_line_mask = mask;
    req_source_id = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // AW at negedge; returns at posedge+#1.
  task automatic do_aw(
    input logic [AXI_ID_W-1:0] id,
    input cci_addr_t            addr,
    input cci_wr_track_e        trk
  );
    @(negedge clk);
    aw_valid = 1'b1; awid = id; awaddr = addr; aw_track_type = trk;
    @(posedge clk); #1;
    aw_valid = 1'b0; aw_track_type = CCI_WR_NONE;
  endtask

  // B at negedge; returns at posedge+#1 (done bits updated via NBA on return).
  task automatic do_b(input logic [AXI_ID_W-1:0] id);
    @(negedge clk);
    b_valid = 1'b1; bid = id;
    @(posedge clk); #1;
    b_valid = 1'b0;
  endtask

  // AW+B sequence for one normal write completion.
  task automatic do_normal_completion(
    input logic [AXI_ID_W-1:0] id,
    input cci_page_addr_t       pg,
    input int                   li
  );
    do_aw(id, line_addr(pg, li), CCI_WR_NORMAL);
    do_b(id);
  endtask

  // T01: full 4-line request → tracker_done pulse, then req_ready recovers
  task test_T01();
    $display("--- T01: 4-line normal request → tracker_done ---");
    check_bit("T01 req_ready=1 idle",          req_ready,       1'b1);
    submit_req(line_addr(PG_A, 0), 64'hF, 4'd1);
    check_bit("T01 tracker_busy after accept",  tracker_busy,    1'b1);
    check_bit("T01 req_ready=0 while busy",     req_ready,       1'b0);
    check_bit("T01 overflow_sticky=0",          overflow_sticky, 1'b0);

    for (int i = 0; i < NORMAL_ENTRIES - 1; i++) begin
      do_normal_completion(4'd0, PG_A, i);
      check_bit($sformatf("T01 tracker_done=0 after %0d done", i+1), tracker_done, 1'b0);
    end
    do_normal_completion(4'd0, PG_A, NORMAL_ENTRIES - 1);
    check_bit("T01 tracker_done=1 last done",  tracker_done,    1'b1);

    @(posedge clk); #1;
    check_bit("T01 req_ready=1 after release", req_ready,       1'b1);
    check_bit("T01 tracker_busy=0",            tracker_busy,    1'b0);
    check_bit("T01 overflow_sticky=0 final",   overflow_sticky, 1'b0);
    check_bit("T01 underflow_sticky=0 final",  underflow_sticky,1'b0);
  endtask

  // T02: probe_hazard fires for different source, clears when entries done
  task test_T02();
    $display("--- T02: probe hazard during active request ---");
    submit_req(line_addr(PG_A, 0), 64'h3, 4'd1); // lines 0,1 source=1

    probe_valid      = 1'b1;
    probe_source_id  = 4'd2; // different source → hazard
    probe_addr       = line_addr(PG_A, 0);
    #1;
    check_bit("T02 hazard=1 before any done",    probe_hazard, 1'b1);

    do_normal_completion(4'd0, PG_A, 0);
    // line 0 done: entries[0].done=1 via NBA → probe at line 0 clears
    check_bit("T02 hazard=0 for done line 0",    probe_hazard, 1'b0);

    // re-point probe to line 1 (still undone); need #1 for comb re-evaluation
    probe_addr = line_addr(PG_A, 1);
    #1;
    check_bit("T02 hazard=1 for pending line 1", probe_hazard, 1'b1);

    do_normal_completion(4'd0, PG_A, 1);
    check_bit("T02 tracker_done=1",              tracker_done, 1'b1);
    check_bit("T02 hazard=0 after all done",     probe_hazard, 1'b0);
    probe_valid = 1'b0;
    @(posedge clk); #1;
  endtask

  // T03: same-source probe — no hazard even while entry active
  task test_T03();
    $display("--- T03: same-source probe — no hazard ---");
    submit_req(line_addr(PG_A, 0), 64'h1, 4'd1); // line 0 source=1

    probe_valid      = 1'b1;
    probe_source_id  = 4'd1; // same source
    probe_addr       = line_addr(PG_A, 0);
    #1;
    check_bit("T03 hazard=0 same source", probe_hazard, 1'b0);
    probe_valid = 1'b0;

    do_normal_completion(4'd0, PG_A, 0);
    check_bit("T03 tracker_done=1",       tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // T04: CCI_WR_NONE AW/B is ordering-only; does not mark line done
  task test_T04();
    $display("--- T04: CCI_WR_NONE AW/B ordering only, no completion ---");
    submit_req(line_addr(PG_A, 0), 64'h1, 4'd1); // line 0

    // unrelated AW+B: should not complete line 0
    do_aw(4'd0, line_addr(PG_A, 0), CCI_WR_NONE);
    do_b(4'd0);
    check_bit("T04 tracker_done=0 after NONE",    tracker_done, 1'b0);
    check_bit("T04 tracker_busy=1 still",         tracker_busy, 1'b1);

    // real NORMAL AW+B: completes line 0
    do_normal_completion(4'd0, PG_A, 0);
    check_bit("T04 tracker_done=1 after NORMAL",  tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // T05: back-to-back requests without reset
  task test_T05();
    $display("--- T05: back-to-back requests ---");
    // request 1
    submit_req(line_addr(PG_A, 0), 64'h1, 4'd1);
    do_normal_completion(4'd0, PG_A, 0);
    check_bit("T05 done1=1",           tracker_done, 1'b1);
    @(posedge clk); #1;
    check_bit("T05 req_ready for req2",req_ready,    1'b1);

    // request 2
    submit_req(line_addr(PG_B, 0), 64'h3, 4'd2);
    check_bit("T05 busy for req2",     tracker_busy, 1'b1);
    do_normal_completion(4'd0, PG_B, 0);
    do_normal_completion(4'd0, PG_B, 1);
    check_bit("T05 done2=1",           tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // T07: arbitrary line positions — request for lines 20-23 (> NORMAL_ENTRIES=4)
  // Validates that the CAM-based allocator handles non-zero-based line indices.
  task test_T07();
    $display("--- T07: arbitrary line positions (lines 20-23) ---");
    // mask = bits 20..23 set; base_addr page = PG_A
    submit_req(line_addr(PG_A, 0), 64'hF << 20, 4'd1);
    check_bit("T07 tracker_busy after alloc", tracker_busy, 1'b1);
    check_bit("T07 req_ready=0 while busy",   req_ready,    1'b0);

    probe_valid     = 1'b1;
    probe_source_id = 4'd2;
    probe_addr      = line_addr(PG_A, 20);  // allocated → hazard
    #1;
    check_bit("T07 hazard=1 for line 20",           probe_hazard, 1'b1);
    probe_addr = line_addr(PG_A, 4);                // not allocated
    #1;
    check_bit("T07 hazard=0 for unallocated line 4", probe_hazard, 1'b0);
    probe_valid = 1'b0;

    for (int li = 20; li <= 22; li++) begin
      do_normal_completion(4'd0, PG_A, li);
      check_bit($sformatf("T07 tracker_done=0 after line %0d", li),
                tracker_done, 1'b0);
    end
    do_normal_completion(4'd0, PG_A, 23);
    check_bit("T07 tracker_done=1 after line 23", tracker_done, 1'b1);

    @(posedge clk); #1;
    check_bit("T07 req_ready=1 after done", req_ready,    1'b1);
    check_bit("T07 tracker_busy=0",         tracker_busy, 1'b0);
  endtask

  // T06: aw_full overflow detection; underflow_sticky on over-drain
  task test_T06();
    $display("--- T06: aw_full / overflow / underflow sticky ---");
    check_bit("T06 overflow=0 init",   overflow_sticky, 1'b0);

    // Fill FIFO for ID=0 to FIFO_DEPTH without draining
    for (int i = 0; i < FIFO_DEPTH; i++) begin
      @(negedge clk);
      aw_valid = 1'b1; awid = 4'd0;
      awaddr   = line_addr(PG_A, i); aw_track_type = CCI_WR_NONE;
      @(posedge clk); #1;
      aw_valid = 1'b0; aw_track_type = CCI_WR_NONE;
    end
    check_bit("T06 aw_full[0]=1",      aw_full_mask[0], 1'b1);

    // One more AW to a full FIFO → push suppressed → overflow_sticky
    @(negedge clk);
    aw_valid = 1'b1; awid = 4'd0;
    awaddr   = line_addr(PG_A, 0); aw_track_type = CCI_WR_NONE;
    @(posedge clk); #1;
    aw_valid = 1'b0; aw_track_type = CCI_WR_NONE;
    check_bit("T06 overflow=1 after overfull", overflow_sticky, 1'b1);

    // Drain all entries (suppress FIFO emptied the suppressed push, FIFO has FIFO_DEPTH)
    for (int i = 0; i < FIFO_DEPTH; i++) do_b(4'd0);
    check_bit("T06 aw_full[0]=0 after drain", aw_full_mask[0],  1'b0);
    check_bit("T06 underflow=0 during drain", underflow_sticky, 1'b0);

    // One extra B to empty FIFO → underflow_sticky
    do_b(4'd0);
    check_bit("T06 underflow=1 after over-drain", underflow_sticky, 1'b1);
  endtask

  // T08: normal_req_error on zero mask
  task test_T08();
    $display("--- T08: normal_req_error on zero mask ---");
    @(negedge clk);
    req_valid     = 1'b1;
    req_base_addr = line_addr(PG_A, 0);
    req_line_mask = '0;   // zero mask — illegal
    req_source_id = 4'd1;
    @(posedge clk); #1;
    check_bit("T08 normal_req_error=1 zero mask", normal_req_error, 1'b1);
    check_bit("T08 req_ready=1 (idle)",           req_ready,        1'b1);
    check_bit("T08 tracker_busy=0",               tracker_busy,     1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T08 tracker_busy=0 next cycle",    tracker_busy,     1'b0);
    check_bit("T08 normal_req_error=0 idle",      normal_req_error, 1'b0);
  endtask

  // T09: normal_req_error on overflow (5 lines > NORMAL_ENTRIES=4)
  task test_T09();
    $display("--- T09: normal_req_error on overflow (popcount=5 > NORMAL_ENTRIES=4) ---");
    @(negedge clk);
    req_valid     = 1'b1;
    req_base_addr = line_addr(PG_A, 0);
    req_line_mask = 64'h1F;  // 5 bits set → overflow for NORMAL_ENTRIES=4
    req_source_id = 4'd1;
    @(posedge clk); #1;
    check_bit("T09 normal_req_error=1 overflow",  normal_req_error, 1'b1);
    check_bit("T09 req_ready=1 (idle)",           req_ready,        1'b1);
    check_bit("T09 tracker_busy=0 (no alloc)",    tracker_busy,     1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T09 tracker_busy=0 next cycle",    tracker_busy,     1'b0);
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
      $display("All cci_existing_system tests PASSED.");
      $finish;
    end else begin
      $display("FAILURES detected.");
      $fatal(1, "%0d test(s) failed", fail_count);
    end
  end

endmodule
