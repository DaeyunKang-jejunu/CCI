// Dedicated testbench for cci_write_completion_tracker (regression suite).
//
// do_b() captures wr_done_valid, wr_done_line_idx, and wr_done_type at
// @(posedge clk) BEFORE the NBA region updates rd_ptr, then deasserts b_valid.
// This is the only correct sampling point: wr_done_* are combinational on rd_ptr,
// which is a registered value updated at the same posedge via NBA.
//
// T01  Single push/pop            : one AW (MEMCPY) → one B; correct idx and type
// T02  Different-ID ordering      : interleaved AWs then Bs on separate IDs
// T03  Same-ID FIFO ordering      : two AWs then two Bs → FIFO order preserved
// T04  Simultaneous AW+B          : same ID depth net-zero; pre-existing entry popped
// T05  overflow_sticky clean       : stays 0 during normal (non-overflow) fills
// T06  Randomized AW/B IDs        : random (id, line) pairs; reference-model check
// T07  Write class routing         : CCI_WR_NONE→no completion, CCI_WR_NORMAL and
//                                    CCI_WR_MEMCPY→correct wr_done_type per class;
//                                    mixed sequence verifies class tag is preserved
// T08  aw_full flag and CCI_WR_NONE: direct flag transitions; CCI_WR_NONE entries
//                                    consume FIFO capacity but emit no completion

`timescale 1ns/1ps

module tb_cci_write_completion_tracker;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W   = 4;
  localparam int FIFO_DEPTH = 4;
  localparam int N_IDS      = 2 ** AXI_ID_W;

  logic clk;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_write_completion_tracker.fst");
    $dumpvars(0, tb_cci_write_completion_tracker);
  end
`endif

  localparam int WATCHDOG_CYCLES = 5_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: simulation exceeded %0d cycles", WATCHDOG_CYCLES);
  end

  logic                       rst_n;
  logic                       aw_valid;
  logic                       aw_ready;
  logic [AXI_ID_W-1:0]       awid;
  cci_addr_t                  awaddr;
  cci_wr_track_e              aw_track_type;

  logic                       b_valid;
  logic                       b_ready;
  logic [AXI_ID_W-1:0]       bid;

  logic                       wr_done_valid;
  cci_line_idx_t              wr_done_line_idx;
  cci_wr_track_e              wr_done_type;
  logic [N_IDS-1:0]           aw_full;
  logic                       overflow_sticky;
  logic                       underflow_sticky;

  cci_write_completion_tracker #(
    .AXI_ID_W   (AXI_ID_W),
    .FIFO_DEPTH (FIFO_DEPTH)
  ) dut (
    .clk              (clk),
    .rst_n            (rst_n),
    .aw_valid         (aw_valid),
    .aw_ready         (aw_ready),
    .awid             (awid),
    .awaddr           (awaddr),
    .aw_track_type    (aw_track_type),
    .b_valid          (b_valid),
    .b_ready          (b_ready),
    .bid              (bid),
    .wr_done_valid    (wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .wr_done_type     (wr_done_type),
    .aw_full          (aw_full),
    .overflow_sticky  (overflow_sticky),
    .underflow_sticky (underflow_sticky)
  );

  int pass_count;
  int fail_count;

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

  task automatic check_type(input string label, input cci_wr_track_e got, input cci_wr_track_e exp);
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0s got=%0s", label, exp.name(), got.name());
      fail_count++;
    end
  endtask

  function automatic cci_addr_t make_addr(input cci_page_addr_t page, input int line_idx);
    return {page, cci_line_idx_t'(line_idx), {LINE_OFFSET_BITS{1'b0}}};
  endfunction

  task automatic do_reset();
    rst_n          = 1'b0;
    aw_valid       = 1'b0;
    aw_ready       = 1'b1;
    aw_track_type  = CCI_WR_NONE;
    awid           = '0;
    awaddr         = '0;
    b_valid        = 1'b0;
    bid            = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // Push a MEMCPY-class AW (the default tracked case for ordering/FIFO tests).
  task automatic do_aw(input logic [AXI_ID_W-1:0] id, input cci_addr_t addr);
    @(negedge clk);
    aw_valid      = 1'b1;
    aw_track_type = CCI_WR_MEMCPY;
    awid          = id;
    awaddr        = addr;
    @(posedge clk); #1;
    aw_valid      = 1'b0;
    aw_track_type = CCI_WR_NONE;
  endtask

  // Push an AW with an explicit write class.
  task automatic do_aw_typed(
    input logic [AXI_ID_W-1:0] id,
    input cci_addr_t            addr,
    input cci_wr_track_e        track_type
  );
    @(negedge clk);
    aw_valid      = 1'b1;
    aw_track_type = track_type;
    awid          = id;
    awaddr        = addr;
    @(posedge clk); #1;
    aw_valid      = 1'b0;
    aw_track_type = CCI_WR_NONE;
  endtask

  // B handshake: sample at posedge BEFORE #1 (rd_ptr not yet updated via NBA).
  task automatic do_b(
    input  logic [AXI_ID_W-1:0] id,
    output logic                 got_valid,
    output cci_line_idx_t        got_idx,
    output cci_wr_track_e        got_type
  );
    @(negedge clk);
    b_valid = 1'b1;
    bid     = id;
    @(posedge clk);
    got_valid = wr_done_valid;
    got_idx   = wr_done_line_idx;
    got_type  = wr_done_type;
    #1;
    b_valid = 1'b0;
    bid     = '0;
  endtask

  task test_T01();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T01: single push/pop ---");
    check_bit("T01 b_ready=1 always",           b_ready,      1'b1);
    do_aw(4'd0, make_addr(52'h1, 7));
    check_bit("T01 no wr_done before B",         wr_done_valid, 1'b0);

    do_b(4'd0, got_v, got_i, got_t);
    check_bit("T01 wr_done_valid=1 on B",        got_v,        1'b1);
    check_int("T01 wr_done_line_idx=7",          int'(got_i),  7);
    check_type("T01 wr_done_type=MEMCPY",        got_t,        CCI_WR_MEMCPY);
    @(posedge clk); #1;
    check_bit("T01 wr_done_valid=0 after",       wr_done_valid, 1'b0);
  endtask

  task test_T02();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T02: different IDs, out-of-order B ---");
    do_aw(4'd0, make_addr(52'h1, 3));
    do_aw(4'd1, make_addr(52'h1, 9));

    do_b(4'd1, got_v, got_i, got_t);
    check_bit("T02 ID1 wr_done_valid=1", got_v,      1'b1);
    check_int("T02 ID1 idx=9",           int'(got_i), 9);

    do_b(4'd0, got_v, got_i, got_t);
    check_bit("T02 ID0 wr_done_valid=1", got_v,      1'b1);
    check_int("T02 ID0 idx=3",           int'(got_i), 3);

    @(posedge clk); #1;
    check_bit("T02 idle after",           wr_done_valid, 1'b0);
  endtask

  task test_T03();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T03: same ID FIFO ordering ---");
    do_aw(4'd2, make_addr(52'h1, 11));
    do_aw(4'd2, make_addr(52'h1, 22));

    do_b(4'd2, got_v, got_i, got_t);
    check_bit("T03 first B: valid=1",  got_v,       1'b1);
    check_int("T03 first B: idx=11",   int'(got_i), 11);

    do_b(4'd2, got_v, got_i, got_t);
    check_bit("T03 second B: valid=1", got_v,       1'b1);
    check_int("T03 second B: idx=22",  int'(got_i), 22);

    @(posedge clk); #1;
    check_bit("T03 idle after",         wr_done_valid, 1'b0);
  endtask

  task test_T04();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T04: simultaneous AW+B same ID ---");
    do_aw(4'd3, make_addr(52'h1, 5));

    @(negedge clk);
    aw_valid = 1'b1;  awid = 4'd3;  awaddr = make_addr(52'h1, 42);
    aw_track_type = CCI_WR_MEMCPY;
    b_valid  = 1'b1;  bid  = 4'd3;
    @(posedge clk);
    got_v = wr_done_valid;
    got_i = wr_done_line_idx;
    got_t = wr_done_type;
    #1;
    aw_valid = 1'b0;  aw_track_type = CCI_WR_NONE;
    b_valid  = 1'b0;
    check_bit("T04 simultaneous: valid=1",        got_v,       1'b1);
    check_int("T04 simultaneous: idx=5 (popped)", int'(got_i), 5);
    check_type("T04 simultaneous: type=MEMCPY",   got_t,       CCI_WR_MEMCPY);
    @(posedge clk); #1;

    do_b(4'd3, got_v, got_i, got_t);
    check_bit("T04 second pop: valid=1", got_v,       1'b1);
    check_int("T04 second pop: idx=42",  int'(got_i), 42);
    @(posedge clk); #1;
    check_bit("T04 idle after",           wr_done_valid, 1'b0);
  endtask

  task test_T05();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T05: overflow_sticky=0 during normal operation ---");
    check_bit("T05 overflow_sticky=0 at start",         overflow_sticky,  1'b0);
    check_bit("T05 underflow_sticky=0 at start",        underflow_sticky, 1'b0);

    for (int i = 0; i < FIFO_DEPTH - 1; i++)
      do_aw(4'd0, make_addr(52'h3, i));
    for (int i = 0; i < FIFO_DEPTH - 1; i++)
      do_b(4'd0, got_v, got_i, got_t);

    check_bit("T05 overflow_sticky=0 after fill/drain",  overflow_sticky,  1'b0);
    check_bit("T05 underflow_sticky=0 after fill/drain", underflow_sticky, 1'b0);
  endtask

  task test_T06();
    localparam int N_BURST   = 32;
    localparam int MAX_DEPTH = FIFO_DEPTH - 1;

    int ref_q[N_IDS][$];
    int depth_cnt[N_IDS];
    int rand_id, rand_line;
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;

    $display("--- T06: randomized AW/B ID pairs ---");

    for (int i = 0; i < N_IDS; i++) begin
      ref_q[i]     = {};
      depth_cnt[i] = 0;
    end

    for (int n = 0; n < N_BURST; n++) begin
      rand_id   = int'($urandom_range(0, N_IDS - 1));
      rand_line = int'($urandom_range(0, 63));
      if (depth_cnt[rand_id] >= MAX_DEPTH) continue;
      do_aw(AXI_ID_W'(rand_id), make_addr(52'h9, rand_line));
      ref_q[rand_id].push_back(rand_line);
      depth_cnt[rand_id]++;
    end

    for (int id = 0; id < N_IDS; id++) begin
      while (ref_q[id].size() > 0) begin
        automatic int exp_line = ref_q[id].pop_front();
        do_b(AXI_ID_W'(id), got_v, got_i, got_t);
        check_bit($sformatf("T06 ID%0d valid=1", id),           got_v,      1'b1);
        check_int($sformatf("T06 ID%0d idx=%0d", id, exp_line), int'(got_i), exp_line);
      end
    end

    @(posedge clk); #1;
    check_bit("T06 overflow_sticky=0 after random",  overflow_sticky,  1'b0);
    check_bit("T06 underflow_sticky=0 after random", underflow_sticky, 1'b0);
  endtask

  task test_T07();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T07: write class routing ---");

    // Push three AWs of different classes on the same ID.
    do_aw_typed(4'd5, make_addr(52'hA, 42), CCI_WR_NONE);
    do_aw_typed(4'd5, make_addr(52'hA,  7), CCI_WR_NORMAL);
    do_aw_typed(4'd5, make_addr(52'hA, 15), CCI_WR_MEMCPY);

    // B1: CCI_WR_NONE → no completion pulse
    do_b(4'd5, got_v, got_i, got_t);
    check_bit("T07 B1 (NONE): wr_done_valid=0", got_v, 1'b0);

    // B2: CCI_WR_NORMAL → valid=1, correct type and idx
    do_b(4'd5, got_v, got_i, got_t);
    check_bit("T07 B2 (NORMAL): wr_done_valid=1",  got_v,       1'b1);
    check_int("T07 B2 (NORMAL): idx=7",            int'(got_i), 7);
    check_type("T07 B2 (NORMAL): type=NORMAL",     got_t,       CCI_WR_NORMAL);

    // B3: CCI_WR_MEMCPY → valid=1, correct type and idx
    do_b(4'd5, got_v, got_i, got_t);
    check_bit("T07 B3 (MEMCPY): wr_done_valid=1",  got_v,       1'b1);
    check_int("T07 B3 (MEMCPY): idx=15",           int'(got_i), 15);
    check_type("T07 B3 (MEMCPY): type=MEMCPY",     got_t,       CCI_WR_MEMCPY);

    @(posedge clk); #1;
    check_bit("T07 idle after", wr_done_valid, 1'b0);
  endtask

  task test_T08();
    logic got_v;
    cci_line_idx_t got_i;
    cci_wr_track_e got_t;
    $display("--- T08: aw_full flag behavior ---");

    $display("  T08a: fill/pop transitions");
    check_bit("T08a aw_full[6]=0 at start",      aw_full[6], 1'b0);

    for (int i = 0; i < FIFO_DEPTH; i++)
      do_aw(4'd6, make_addr(52'hB, i));
    check_bit("T08a aw_full[6]=1 when full",      aw_full[6], 1'b1);
    check_bit("T08a aw_full[0] unaffected",        aw_full[0], 1'b0);

    do_b(4'd6, got_v, got_i, got_t);
    check_bit("T08a aw_full[6]=0 after pop",       aw_full[6], 1'b0);

    for (int i = 0; i < FIFO_DEPTH - 1; i++)
      do_b(4'd6, got_v, got_i, got_t);

    $display("  T08b: simultaneous push+pop on full FIFO");
    for (int i = 0; i < FIFO_DEPTH; i++)
      do_aw(4'd7, make_addr(52'hC, i));
    check_bit("T08b aw_full[7]=1 before siml",      aw_full[7], 1'b1);

    // Simultaneous push(idx=42)+pop: push_ok fires because pop creates room;
    // depth stays at FIFO_DEPTH so aw_full[7] remains 1 after the cycle.
    @(negedge clk);
    aw_valid = 1'b1;  awid = 4'd7;  awaddr = make_addr(52'hC, 42);
    aw_track_type = CCI_WR_MEMCPY;
    b_valid  = 1'b1;  bid  = 4'd7;
    @(posedge clk);
    got_v = wr_done_valid;  got_i = wr_done_line_idx;  got_t = wr_done_type;
    #1;
    aw_valid = 1'b0;  aw_track_type = CCI_WR_NONE;
    b_valid  = 1'b0;
    check_bit("T08b siml pop valid=1",              got_v,       1'b1);
    check_int("T08b siml pop idx=0 (oldest)",       int'(got_i), 0);
    check_bit("T08b aw_full[7]=1 after siml",       aw_full[7],  1'b1);

    // Drain the remaining 4 entries: [1, 2, 3, 42].
    // Verify each popped index to confirm FIFO ordering was preserved.
    for (int i = 1; i < FIFO_DEPTH; i++) begin
      do_b(4'd7, got_v, got_i, got_t);
      check_bit($sformatf("T08b pop%0d valid=1", i),    got_v,       1'b1);
      check_int($sformatf("T08b pop%0d idx=%0d", i, i), int'(got_i), i);
    end
    do_b(4'd7, got_v, got_i, got_t);   // final entry: the newly pushed idx=42
    check_bit("T08b final pop valid=1",             got_v,       1'b1);
    check_int("T08b final pop idx=42",              int'(got_i), 42);
    check_bit("T08b aw_full[7]=0 after drain",      aw_full[7],  1'b0);

    // --- T08c: CCI_WR_NONE AWs consume FIFO capacity but emit no completion ---
    $display("  T08c: CCI_WR_NONE AWs consume capacity");
    check_bit("T08c aw_full[8]=0 at start",        aw_full[8], 1'b0);

    for (int i = 0; i < FIFO_DEPTH - 1; i++)
      do_aw_typed(4'd8, make_addr(52'hD, i), CCI_WR_NONE);
    check_bit("T08c aw_full[8]=0 before last push", aw_full[8], 1'b0);

    do_aw_typed(4'd8, make_addr(52'hD, 63), CCI_WR_NONE);   // fills FIFO
    check_bit("T08c aw_full[8]=1 after fill",       aw_full[8], 1'b1);

    // Drain: all CCI_WR_NONE → wr_done_valid=0 each B
    for (int i = 0; i < FIFO_DEPTH; i++) begin
      do_b(4'd8, got_v, got_i, got_t);
      check_bit($sformatf("T08c B%0d (NONE): wr_done_valid=0", i), got_v, 1'b0);
    end
    check_bit("T08c aw_full[8]=0 after drain",      aw_full[8], 1'b0);

    @(posedge clk); #1;
    check_bit("T08 overflow_sticky=0 throughout",  overflow_sticky,  1'b0);
    check_bit("T08 underflow_sticky=0 throughout", underflow_sticky, 1'b0);
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
    do_reset(); test_T08();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
