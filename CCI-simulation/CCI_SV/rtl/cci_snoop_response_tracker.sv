// Snoop response tracker: counts outgoing ACs and incoming CRs, pulses
// snoop_done when every issued MakeInvalid snoop has been answered.
//
// CR error (CRRESP[1]=1): snoop_error_r is set sticky and snoop_done is
// permanently suppressed, keeping the FSM in INVALIDATING.  Only reset clears it.
//
// error_next includes the current-cycle CR error in snoop_done's guard so that
// snoop_done cannot fire on the same posedge as the first (and last) CR error —
// using snoop_error_r alone would allow snoop_done=1 and snoop_error_r<=1 in
// the same NBA region.

`timescale 1ns/1ps

module cci_snoop_response_tracker
  import cci_memcpy_pkg::*;
(
  input  logic  clk,
  input  logic  rst_n,

  input  logic  seq_start,     // one-cycle pulse when tracker accepts a new request

  input  logic  ac_valid,
  input  logic  ac_ready,
  input  logic  ac_gen_done,

  input  logic        cr_valid,
  output logic        cr_ready,
  input  logic [4:0]  cr_resp,  // CRRESP[4:0]; bit 1 = Error

  output logic  snoop_done,    // all ACs answered; suppressed on error
  output logic  snoop_error    // sticky CRRESP[1]=1; cleared by reset only
);

  localparam int CNT_W = LINE_INDEX_WIDTH + 1;  // 7 bits, covers 0..64

  logic [CNT_W-1:0] sent_count_r;
  logic [CNT_W-1:0] recv_count_r;
  logic             all_sent_r;
  logic             active_r;
  logic             snoop_error_r;

  assign cr_ready    = 1'b1;
  assign snoop_error = snoop_error_r;

  logic ac_accepted;
  logic cr_accepted;
  assign ac_accepted = ac_valid && ac_ready;
  assign cr_accepted = cr_valid && cr_ready;

  logic [CNT_W-1:0] sent_next;
  logic [CNT_W-1:0] recv_next;
  logic             all_sent_next;
  logic             error_next;

  assign sent_next     = sent_count_r + CNT_W'(ac_accepted && active_r);
  assign recv_next     = recv_count_r + CNT_W'(cr_accepted && active_r);
  assign all_sent_next = all_sent_r   || (ac_gen_done && active_r);
  assign error_next    = snoop_error_r || (active_r && cr_accepted && cr_resp[1]);

  assign snoop_done = active_r
                   && all_sent_next
                   && (recv_next == sent_next)
                   && (sent_next != '0)
                   && !error_next;

`ifndef SYNTHESIS
  // Simulation assertion: CR before its corresponding AC is an ACE protocol
  // violation.  When recv_next > sent_next, a CR arrived for an AC that has
  // not yet been accepted.  This causes recv == sent prematurely: the early CR
  // increments recv; when subsequent real CRs arrive, recv catches up to the
  // final sent count before the actual last response is received, triggering
  // snoop_done early and releasing write_release before all caches are invalidated.
  // ACE guarantees slaves never send CR without a prior AC — $fatal enforces this
  // contract in simulation.  Run `make sim_snoop_order` to verify the assertion.
  always_ff @(posedge clk) begin
    if (active_r && cr_accepted && recv_next > sent_next)
      $fatal(1, "%m: CR before AC (recv_next=%0d > sent_next=%0d) — ACE protocol violation; snoop_done will fire prematurely",
             recv_next, sent_next);
  end
`endif

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      sent_count_r  <= '0;
      recv_count_r  <= '0;
      all_sent_r    <= 1'b0;
      active_r      <= 1'b0;
      snoop_error_r <= 1'b0;
    end else begin
      if (active_r && cr_accepted && cr_resp[1])
        snoop_error_r <= 1'b1;

      if (seq_start) begin
        sent_count_r <= '0;
        recv_count_r <= '0;
        all_sent_r   <= 1'b0;
        active_r     <= 1'b1;
      end else if (active_r) begin
        if (snoop_done) begin
          active_r     <= 1'b0;
          sent_count_r <= '0;
          recv_count_r <= '0;
          all_sent_r   <= 1'b0;
        end else begin
          if (ac_accepted) sent_count_r <= sent_count_r + CNT_W'(1);
          if (cr_accepted) recv_count_r <= recv_count_r + CNT_W'(1);
          if (ac_gen_done) all_sent_r   <= 1'b1;
        end
      end
    end
  end

endmodule
