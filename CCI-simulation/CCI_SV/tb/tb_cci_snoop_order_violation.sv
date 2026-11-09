// Negative test: verifies that $fatal fires when a CR arrives before its AC.
//
// ACE protocol requires: a snooped master only sends CR after receiving AC.
// cci_snoop_response_tracker enforces this in simulation via `$fatal`.
//
// Expected outcome: simulation terminates with $fatal (non-zero exit code).
// Make treats non-zero exit as PASS for this target.
//
//   make sim_snoop_order      # PASS: $fatal fired
//   (run directly)            # exit code != 0

`timescale 1ns/1ps

module tb_cci_snoop_order_violation;
  import cci_memcpy_pkg::*;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // Watchdog: if DUT $fatal doesn't fire within budget, exit 0 so Makefile
  // reports FAIL (assertion missing or disabled).  Must NOT use $fatal here —
  // that would also produce exit!=0, indistinguishable from the DUT assertion.
  localparam int WATCHDOG_CYCLES = 50;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $display("FAIL  CR-before-AC $fatal did not fire within %0d cycles — assertion missing or disabled",
             WATCHDOG_CYCLES);
    $finish;  // exit 0 → Makefile reports FAIL
  end

  logic       seq_start;
  logic       ac_valid, ac_ready, ac_gen_done;
  logic       cr_valid, cr_ready;
  logic [4:0] cr_resp;
  logic       snoop_done, snoop_error;

  cci_snoop_response_tracker dut (
    .clk        (clk),
    .rst_n      (rst_n),
    .seq_start  (seq_start),
    .ac_valid   (ac_valid),
    .ac_ready   (ac_ready),
    .ac_gen_done(ac_gen_done),
    .cr_valid   (cr_valid),
    .cr_ready   (cr_ready),
    .cr_resp    (cr_resp),
    .snoop_done (snoop_done),
    .snoop_error(snoop_error)
  );

  initial begin
    rst_n       = 1'b0;
    seq_start   = 1'b0;
    ac_valid    = 1'b0;
    ac_ready    = 1'b1;
    ac_gen_done = 1'b0;
    cr_valid    = 1'b0;
    cr_resp     = 5'h00;

    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;

    // Activate the tracker (seq_start pulse → active_r=1 next cycle)
    @(negedge clk);
    seq_start = 1'b1;
    @(posedge clk); #1;
    seq_start = 1'b0;

    // Send CR before any AC: recv_next(1) > sent_next(0) → $fatal must fire
    @(negedge clk);
    cr_valid = 1'b1;
    @(posedge clk); #1;   // $fatal fires here
    cr_valid = 1'b0;

    // DUT $fatal did not fire — exit 0 so Makefile reports FAIL.
    // Must NOT use $fatal here; that would also produce exit!=0.
    $display("FAIL  CR-before-AC $fatal did not fire after CR stimulus");
    $finish;  // exit 0 → Makefile reports FAIL
  end

endmodule
