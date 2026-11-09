// Testbench for cci_ac_range_gen.
//
// Verifies the sequential AC MakeInvalid generator:
//   T01  Single-bit mask          : 1 AC issued, ac_gen_done=1 at acceptance
//   T02  8-line contiguous mask   : 8 ACs issued LSB-first (lines 0..7)
//   T03  Sparse mask              : ACs issued in LSB-first order
//   T04  Backpressure             : ac_ready=0 stalls without dropping AC
//   T05  Start while busy ignored : second start does not disturb first sequence
//   T06  Full 64-bit mask         : exactly 64 ACs, ac_gen_done fires once
//   T07  ac_gen_done one-cycle    : deasserts the cycle after last AC accepted
//
// Timing convention: drive inputs at negedge clk; sample outputs at posedge+#1.

`timescale 1ns/1ps

module tb_cci_ac_range_gen;
  import cci_memcpy_pkg::*;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;   // 100 MHz

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_ac_range_gen.fst");
    $dumpvars(0, tb_cci_ac_range_gen);
  end
`endif

  logic           start;
  cci_page_addr_t start_page_addr;
  cci_line_mask_t start_line_mask;

  logic           ac_valid;
  logic           ac_ready;
  cci_addr_t      ac_addr;
  cci_acsnoop_e   ac_snoop;
  logic           ac_gen_done;

  cci_ac_range_gen dut (
    .clk             (clk),
    .rst_n           (rst_n),
    .start           (start),
    .start_page_addr (start_page_addr),
    .start_line_mask (start_line_mask),
    .ac_valid        (ac_valid),
    .ac_ready        (ac_ready),
    .ac_addr         (ac_addr),
    .ac_snoop        (ac_snoop),
    .ac_gen_done     (ac_gen_done)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG = 52'h0000_0000_0001;

  // Extract line index from an AC address
  function automatic cci_line_idx_t ac_line(input cci_addr_t a);
    return a[PAGE_OFFSET_BITS-1:LINE_OFFSET_BITS];
  endfunction

  // Extract page address from an AC address
  function automatic cci_page_addr_t ac_page(input cci_addr_t a);
    return a[ADDR_WIDTH-1:PAGE_OFFSET_BITS];
  endfunction

  task automatic check_bit(
    input string label,
    input logic  got,
    input logic  exp
  );
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0b got=%0b", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic check_int(
    input string label,
    input int    got,
    input int    exp
  );
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0d got=%0d", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic do_reset();
    rst_n           = 1'b0;
    start           = 1'b0;
    start_page_addr = '0;
    start_line_mask = '0;
    ac_ready        = 1'b1;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // After fire_start returns (posedge+#1), generator is busy and ac_valid=1.
  task automatic fire_start(input cci_page_addr_t pg, input cci_line_mask_t msk);
    @(negedge clk);
    start           = 1'b1;
    start_page_addr = pg;
    start_line_mask = msk;
    @(posedge clk); #1;   // FFs capture: busy=1, remaining_mask=msk
    start = 1'b0;          // deassert before next posedge
  endtask

  // Collect n ACs with ac_ready=1.  Returns the line indices in issue order
  // and flags whether ac_gen_done was asserted on the final accepted AC.
  //
  // Peek-first: the AC generator becomes busy at the SAME posedge as start is
  // captured, so the first AC is already visible at the fire_start return
  // point.  collect_acs samples the current check point before advancing so
  // that first AC is not missed.  Times out after n+8 cycles.
  task automatic collect_acs(
    input  int             n,
    input  cci_page_addr_t exp_page,
    output cci_line_idx_t  q      [$],
    output logic           done_on_last
  );
    int cnt = 0;
    int timeout = n + 8;
    done_on_last = 1'b0;
    ac_ready     = 1'b1;
    // Peek at current check point (first AC may already be visible)
    if (ac_valid && ac_ready) begin
      if (ac_page(ac_addr) !== exp_page)
        $display("FAIL  collect_acs peek page mismatch");
      q.push_back(ac_line(ac_addr));
      cnt++;
      if (cnt == n && ac_gen_done) done_on_last = 1'b1;
    end
    while (cnt < n) begin
      @(posedge clk); #1;
      timeout--;
      if (ac_valid && ac_ready) begin
        if (ac_page(ac_addr) !== exp_page)
          $display("FAIL  collect_acs page mismatch: exp=%013h got=%013h",
                   exp_page, ac_page(ac_addr));
        if (ac_snoop !== ACSNOOP_MAKE_INVALID)
          $display("FAIL  collect_acs ac_snoop wrong: got=%04b", ac_snoop);
        q.push_back(ac_line(ac_addr));
        cnt++;
        if (cnt == n && ac_gen_done) done_on_last = 1'b1;
      end
      if (timeout <= 0) begin
        $display("FAIL  collect_acs timeout after %0d cycles", n+8);
        break;
      end
    end
  endtask

  task automatic test_T01();
    cci_line_idx_t q[$];
    logic done_on_last;
    $display("--- T01: single bit mask (line 3) ---");
    fire_start(PG, cci_line_mask_t'(1) << 3);
    check_bit("T01 ac_valid immediately after start", ac_valid, 1'b1);
    check_int("T01 ac_addr line index", int'(ac_line(ac_addr)), 3);
    check_bit("T01 ac_gen_done on single-line (is_last=1)", ac_gen_done, 1'b1);
    @(posedge clk); #1;  // AC accepted; busy cleared
    check_bit("T01 ac_valid=0 after acceptance", ac_valid, 1'b0);
    check_bit("T01 ac_gen_done=0 next cycle",    ac_gen_done, 1'b0);
  endtask

  task automatic test_T02();
    cci_line_idx_t q[$];
    logic done_on_last;
    $display("--- T02: 8-line contiguous mask (lines 0-7) ---");
    fire_start(PG, 64'hFF);
    check_bit("T02 ac_valid on cycle 0", ac_valid, 1'b1);
    check_int("T02 first AC = line 0", int'(ac_line(ac_addr)), 0);
    check_bit("T02 ac_gen_done=0 (not last)", ac_gen_done, 1'b0);
    q.push_back(ac_line(ac_addr));
    for (int cycle = 1; cycle < 8; cycle++) begin
      @(posedge clk); #1;
      q.push_back(ac_line(ac_addr));
      if (cycle == 7) done_on_last = ac_gen_done;
    end
    check_int("T02 total ACs collected", int'(q.size()), 8);
    for (int i = 0; i < 8; i++) begin
      if (i < int'(q.size()))
        check_int($sformatf("T02 AC[%0d] line", i), int'(q[i]), i);
    end
    check_bit("T02 ac_gen_done on last AC (line 7)", done_on_last, 1'b1);
    @(posedge clk); #1;
    check_bit("T02 ac_valid=0 after sequence",     ac_valid,    1'b0);
    check_bit("T02 ac_gen_done=0 cycle after done", ac_gen_done, 1'b0);
  endtask

  task automatic test_T03();
    cci_line_idx_t q[$];
    logic done_on_last;
    cci_line_mask_t msk;
    $display("--- T03: sparse mask (lines 2, 5, 10) ---");
    msk = (cci_line_mask_t'(1)<<2) | (cci_line_mask_t'(1)<<5) | (cci_line_mask_t'(1)<<10);
    fire_start(PG, msk);
    collect_acs(3, PG, q, done_on_last);
    check_int("T03 AC count",      int'(q.size()), 3);
    if (q.size() >= 3) begin
      check_int("T03 AC[0] = line 2",  int'(q[0]), 2);
      check_int("T03 AC[1] = line 5",  int'(q[1]), 5);
      check_int("T03 AC[2] = line 10", int'(q[2]), 10);
    end
    check_bit("T03 ac_gen_done on last AC", done_on_last, 1'b1);
    @(posedge clk); #1;
    check_bit("T03 ac_valid=0 after sequence", ac_valid, 1'b0);
  endtask

  task automatic test_T04();
    cci_line_idx_t q[$];
    cci_line_idx_t prev_line;
    $display("--- T04: backpressure (stall 3 cycles after 1st AC) ---");
    fire_start(PG, 64'hF);  // lines 0,1,2,3
    prev_line = ac_line(ac_addr);   // capture line 0 before asserting backpressure
    @(negedge clk); ac_ready = 1'b0;
    @(posedge clk); #1;  // cycle 1: stalled; line 0 still visible
    check_bit("T04 ac_valid held during stall", ac_valid,               1'b1);
    check_int("T04 same AC during stall",       int'(ac_line(ac_addr)), int'(prev_line));
    @(posedge clk); #1;  // cycle 2: still stalled
    @(posedge clk); #1;  // cycle 3: still stalled
    q.push_back(prev_line);
    @(negedge clk); ac_ready = 1'b1;
    @(posedge clk); #1; q.push_back(ac_line(ac_addr));  // line 1
    @(posedge clk); #1; q.push_back(ac_line(ac_addr));  // line 2
    @(posedge clk); #1;                                   // line 3, ac_gen_done=1
    q.push_back(ac_line(ac_addr));
    check_bit("T04 ac_gen_done on last AC",               ac_gen_done,    1'b1);
    check_int("T04 all 4 ACs accepted despite backpressure", int'(q.size()), 4);
    for (int i = 0; i < 4; i++) begin
      if (i < int'(q.size()))
        check_int($sformatf("T04 AC[%0d]=line %0d",i,i), int'(q[i]), i);
    end
    @(posedge clk); #1;
    check_bit("T04 ac_valid=0 after sequence", ac_valid, 1'b0);
  endtask

  task automatic test_T05();
    int cnt = 0;
    $display("--- T05: start while busy is ignored ---");
    ac_ready = 1'b0;
    fire_start(PG, 64'hF);  // 4 lines (0..3)
    @(negedge clk);
    start           = 1'b1;
    start_page_addr = 52'h2;         // different page
    start_line_mask = 64'hFF0;       // 8 lines at offset 4
    @(posedge clk); #1;              // busy=1 → second start branch not taken
    start = 1'b0;
    @(negedge clk); ac_ready = 1'b1;
    if (ac_valid) cnt++;  // peek: line 0 visible before next posedge
    for (int cycle = 0; cycle < 12; cycle++) begin
      @(posedge clk); #1;
      if (ac_valid && ac_ready) cnt++;
      if (ac_gen_done) break;
    end
    check_int("T05 only original 4 ACs issued (start-while-busy ignored)", cnt, 4);
    @(posedge clk); #1;
    check_bit("T05 ac_valid=0 after sequence", ac_valid, 1'b0);
  endtask

  task automatic test_T06();
    int ac_cnt   = 0;
    int done_cnt = 0;
    $display("--- T06: full 64-bit mask ---");
    ac_ready = 1'b1;
    fire_start(PG, {LINE_MASK_WIDTH{1'b1}});
    for (int i = 0; i < 66; i++) begin
      if (ac_valid && ac_ready) ac_cnt++;
      if (ac_gen_done) done_cnt++;
      if (!ac_valid) break;
      @(posedge clk); #1;
    end
    check_int("T06 exactly 64 ACs issued", ac_cnt, 64);
    check_int("T06 ac_gen_done fires once", done_cnt, 1);
    @(posedge clk); #1;
    check_bit("T06 ac_valid=0 after sequence", ac_valid, 1'b0);
  endtask

  task automatic test_T07();
    $display("--- T07: ac_gen_done one-cycle pulse ---");
    ac_ready = 1'b1;
    fire_start(PG, cci_line_mask_t'(1));  // single line (bit 0)
    // After fire_start: ac_valid=1, ac_gen_done=1 (single line is both first and last)
    check_bit("T07 ac_gen_done asserted on last AC",    ac_gen_done, 1'b1);
    @(posedge clk); #1;  // acceptance clears busy
    check_bit("T07 ac_gen_done=0 one cycle later",      ac_gen_done, 1'b0);
    check_bit("T07 ac_valid=0 one cycle later",         ac_valid,    1'b0);
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset();

    test_T01(); @(posedge clk); #1;
    test_T02(); @(posedge clk); #1;
    test_T03(); @(posedge clk); #1;
    test_T04(); @(posedge clk); #1;
    test_T05(); @(posedge clk); #1;
    test_T06(); @(posedge clk); #1;
    test_T07();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
