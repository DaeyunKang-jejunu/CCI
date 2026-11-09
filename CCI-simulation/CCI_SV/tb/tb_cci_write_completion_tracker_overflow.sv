// Expected-failure test for cci_write_completion_tracker overflow and underflow.
//
// This testbench deliberately triggers:
//   1. An AW overflow (push when FIFO full) — the RTL emits $warning and sets
//      overflow_sticky=1 but does NOT corrupt existing FIFO contents.
//   2. A B response to an empty FIFO (underflow) — the RTL emits $warning and
//      sets underflow_sticky=1; the B cannot be matched and wr_done_valid=0.
//
// The $warning messages in the sim log are expected.  The testbench exits 0 if
// the hardware protection (overflow_sticky and underflow_sticky) worked correctly.
//
// Checks:
//   OVF-00  overflow_sticky=0 at start
//   OVF-01  overflow_sticky=0 before intentional overflow
//   OVF-02  overflow_sticky=1 after blocked push
//   OVF-03  FIFO contents intact (correct line indices drain correctly)
//   OVF-04  wr_done_valid=0 when B arrives for empty FIFO
//   OVF-05  underflow_sticky=1 after B to empty FIFO
//
// NOT included in sim_all — run separately:
//   make sim_overflow

`timescale 1ns/1ps

module tb_cci_write_completion_tracker_overflow;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W   = 4;
  localparam int FIFO_DEPTH = 4;

  logic clk;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_write_completion_tracker_overflow.fst");
    $dumpvars(0, tb_cci_write_completion_tracker_overflow);
  end
`endif

  initial begin
    #20_000;
    $fatal(1, "WATCHDOG: overflow test exceeded 2000 cycles");
  end

  // -------------------------------------------------------------------------
  // DUT
  // -------------------------------------------------------------------------
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
  logic [2**AXI_ID_W-1:0]    aw_full;
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

  // -------------------------------------------------------------------------
  // Helpers
  // -------------------------------------------------------------------------
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

  function automatic cci_addr_t make_addr(input int line_idx);
    return {52'h4, cci_line_idx_t'(line_idx), {LINE_OFFSET_BITS{1'b0}}};
  endfunction

  task automatic do_reset();
    rst_n         = 1'b0;
    aw_valid      = 1'b0;
    aw_ready      = 1'b1;
    aw_track_type = CCI_WR_NONE;
    awid          = '0;
    awaddr        = '0;
    b_valid       = 1'b0;
    bid           = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  task automatic do_aw(input logic [AXI_ID_W-1:0] id, input cci_addr_t addr);
    @(negedge clk);
    aw_valid = 1'b1; aw_track_type = CCI_WR_MEMCPY; awid = id; awaddr = addr;
    @(posedge clk); #1;
    aw_valid = 1'b0; aw_track_type = CCI_WR_NONE;
  endtask

  // Sample at posedge BEFORE rd_ptr advances.
  task automatic do_b(
    input  logic [AXI_ID_W-1:0] id,
    output logic                 got_valid,
    output cci_line_idx_t        got_idx
  );
    @(negedge clk);
    b_valid = 1'b1; bid = id;
    @(posedge clk);
    got_valid = wr_done_valid;
    got_idx   = wr_done_line_idx;
    #1;
    b_valid = 1'b0; bid = '0;
  endtask

  // -------------------------------------------------------------------------
  // Test: fill FIFO, overflow, verify protection, then underflow check
  // -------------------------------------------------------------------------
  initial begin
    logic got_v;
    cci_line_idx_t got_i;
    pass_count = 0;
    fail_count = 0;

    do_reset();
    check_bit("OVF-00 overflow_sticky=0 at start",  overflow_sticky,  1'b0);
    check_bit("OVF-00 underflow_sticky=0 at start", underflow_sticky, 1'b0);

    // Fill FIFO to capacity (indices 0..FIFO_DEPTH-1 for ID=0).
    for (int i = 0; i < FIFO_DEPTH; i++)
      do_aw(4'd0, make_addr(i));

    check_bit("OVF-01 overflow_sticky=0 before overflow", overflow_sticky, 1'b0);

    // This push is blocked: FIFO full, no simultaneous pop.
    // The RTL emits $warning (expected) and sets overflow_sticky.
    $display("NOTE: intentional overflow follows — $warning below is expected:");
    do_aw(4'd0, make_addr(63));    // idx=63 must NOT appear in drain

    check_bit("OVF-02 overflow_sticky=1 after blocked push", overflow_sticky, 1'b1);

    // Drain all FIFO_DEPTH legitimate entries; verify data integrity.
    for (int i = 0; i < FIFO_DEPTH; i++) begin
      do_b(4'd0, got_v, got_i);
      check_bit($sformatf("OVF-03.%0d valid=1", i), got_v,       1'b1);
      check_int($sformatf("OVF-03.%0d idx=%0d",  i, i), int'(got_i), i);
    end

    // FIFO now empty.  A B response cannot be matched; wr_done_valid=0.
    // The RTL emits $warning (expected underflow) and sets underflow_sticky.
    $display("NOTE: intentional underflow follows — $warning below is expected:");
    @(negedge clk);
    b_valid = 1'b1; bid = 4'd0;
    @(posedge clk);
    check_bit("OVF-04 wr_done_valid=0 (empty FIFO)", wr_done_valid, 1'b0);
    #1; b_valid = 1'b0;
    check_bit("OVF-05 underflow_sticky=1 after B to empty", underflow_sticky, 1'b1);

    $display("-------------------------------");
    $display("Overflow/underflow test: %0d passed, %0d failed", pass_count, fail_count);
    $display("NOTE: the $warning messages above (from RTL) are the expected behavior.");
    if (fail_count == 0) begin
      $display("Overflow and underflow protection VERIFIED.");
      $finish;
    end else begin
      $display("FAILURES detected.");
      $fatal(1, "%0d test(s) failed", fail_count);
    end
  end

endmodule
