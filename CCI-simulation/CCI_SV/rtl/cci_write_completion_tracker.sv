// Per-AXI-ID circular FIFO tracking AW→B completion.
//
// ALL AWs are pushed to preserve AXI4 same-ID B ordering, regardless of class.
// Each entry stores aw_track_type; wr_done_valid fires only for non-NONE entries.
// Without this, a CCI_WR_NONE AW's B response would pop the wrong FIFO entry →
// wrong line index → done_mask never fills → tracker_done deadlock.
//
// aw_full[awid] MUST be respected by ALL traffic (tracked and untracked):
// an AW to a full FIFO causes push_block, breaking B ordering for that ID.
// Use a dedicated AXI ID for memcpy traffic to avoid shared-capacity issues.
//
// FIFO storage: only the 6-bit line index (awaddr[11:6]) is stored, NOT the
// page address.  Callers that use wr_done_line_idx for CAM completion
// (e.g., baseline_line_tracker) must ensure no two concurrent AXI-ID streams
// target different pages with the same line index, or they will experience
// false completions.  The safe contract: each tracking context owns its AXI
// IDs exclusively for the duration of the batch (per-ID page isolation).
//
// $warning diagnostics use always_ff (not always_comb) to avoid false firings
// when depth updates via NBA before the TB deasserts aw_valid/b_valid at posedge+#1.
//
// FIFO_DEPTH must be a power of 2 and >= 2 (PTR_W=0 at FIFO_DEPTH=1 breaks wrap).

`timescale 1ns/1ps

module cci_write_completion_tracker
  import cci_memcpy_pkg::*;
#(
  parameter int AXI_ID_W   = 4,
  parameter int FIFO_DEPTH = 4
)(
  input  logic clk,
  input  logic rst_n,

  // AW channel: observe only (do not stall aw_ready).
  // aw_full[awid] MUST be checked for ALL AWs regardless of aw_track_type.
  input  logic                  aw_valid,
  input  logic                  aw_ready,
  input  logic [AXI_ID_W-1:0]  awid,
  input  cci_addr_t             awaddr,
  input  cci_wr_track_e         aw_track_type,  // CCI_WR_NONE: ordering only; else: generates completion

  input  logic                  b_valid,
  output logic                  b_ready,        // permanently 1
  input  logic [AXI_ID_W-1:0]  bid,

  output logic                  wr_done_valid,      // fires only when popped entry != CCI_WR_NONE
  output cci_line_idx_t         wr_done_line_idx,
  output cci_wr_track_e         wr_done_type,       // valid when wr_done_valid=1

  output logic [2**AXI_ID_W-1:0] aw_full,       // bit[i]=1: FIFO[i] full; ALL traffic must gate
  output logic                  overflow_sticky, // sticky push_block indicator; reset clears
  output logic                  underflow_sticky // sticky B-to-empty indicator; reset clears
);

  localparam int N_IDS = 2 ** AXI_ID_W;
  localparam int PTR_W = $clog2(FIFO_DEPTH);

  initial begin
    if (FIFO_DEPTH < 2)
      $fatal(1, "%m: FIFO_DEPTH=%0d must be >= 2 (PTR_W=0 at FIFO_DEPTH=1 breaks pointer wrap)",
             FIFO_DEPTH);
    if ((FIFO_DEPTH & (FIFO_DEPTH - 1)) != 0)
      $fatal(1, "%m: FIFO_DEPTH=%0d must be a power of 2 (pointer wrap arithmetic requires this)",
             FIFO_DEPTH);
  end

  cci_line_idx_t  fifo            [N_IDS][FIFO_DEPTH];
  cci_wr_track_e  fifo_track_type [N_IDS][FIFO_DEPTH];
  logic [PTR_W-1:0] rd_ptr [N_IDS];
  logic [PTR_W-1:0] wr_ptr [N_IDS];
  logic [PTR_W:0]   depth  [N_IDS];

  assign b_ready = 1'b1;

  logic push [N_IDS];
  logic pop  [N_IDS];
  always_comb begin
    for (int i = 0; i < N_IDS; i++) begin
      push[i] = aw_valid && aw_ready && (awid == AXI_ID_W'(i));
      pop[i]  = b_valid  && b_ready  && (bid  == AXI_ID_W'(i)) && (depth[i] != '0);
    end
  end

  logic push_ok   [N_IDS];
  logic push_block[N_IDS];
  always_comb begin
    for (int i = 0; i < N_IDS; i++) begin
      push_ok[i]    = push[i] && (depth[i] < (PTR_W+1)'(FIFO_DEPTH) || pop[i]);
      push_block[i] = push[i] && !push_ok[i];
      aw_full[i]    = (depth[i] == (PTR_W+1)'(FIFO_DEPTH));
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      overflow_sticky  <= 1'b0;
      underflow_sticky <= 1'b0;
      for (int i = 0; i < N_IDS; i++) begin
        rd_ptr[i] <= '0;
        wr_ptr[i] <= '0;
        depth[i]  <= '0;
        // fifo[] and fifo_track_type[] are don't-care until a push writes them;
        // omitting their reset removes N_IDS*FIFO_DEPTH unnecessary reset muxes.
      end
    end else begin
      // Underflow: outside the per-ID loop — depth[bid] avoids N_IDS comparators.
      if (b_valid && b_ready && depth[bid] == '0)
        underflow_sticky <= 1'b1;

      for (int i = 0; i < N_IDS; i++) begin
        if (push_block[i]) overflow_sticky <= 1'b1;

        if (push_ok[i]) begin
          fifo[i][wr_ptr[i]]             <= awaddr[PAGE_OFFSET_BITS-1:LINE_OFFSET_BITS];
          fifo_track_type[i][wr_ptr[i]]  <= aw_track_type;
          wr_ptr[i]                      <= wr_ptr[i] + PTR_W'(1);
        end
        if (pop[i])
          rd_ptr[i] <= rd_ptr[i] + PTR_W'(1);

        if      ( push_ok[i] && !pop[i]) depth[i] <= depth[i] + 1;
        else if (!push_ok[i] &&  pop[i]) depth[i] <= depth[i] - 1;
      end
    end
  end

  // wr_done_* reads rd_ptr at posedge BEFORE NBA advances it (rd_ptr is the
  // registered value; pop updates it one NBA delta later).
  assign wr_done_valid    = b_valid && b_ready && (depth[bid] != '0)
                         && (fifo_track_type[bid][rd_ptr[bid]] != CCI_WR_NONE);
  assign wr_done_line_idx = fifo[bid][rd_ptr[bid]];
  assign wr_done_type     = fifo_track_type[bid][rd_ptr[bid]];

`ifndef SYNTHESIS
  assert property (@(posedge clk) disable iff (!rst_n) overflow_sticky  |=> overflow_sticky);
  assert property (@(posedge clk) disable iff (!rst_n) underflow_sticky |=> underflow_sticky);

  for (genvar g = 0; g < N_IDS; g++) begin : gen_sva_depth
    assert property (@(posedge clk) disable iff (!rst_n)
      depth[g] <= (PTR_W+1)'(FIFO_DEPTH));
  end

  // Diagnostics in always_ff to avoid false warnings from NBA depth updates.
  always_ff @(posedge clk) begin
    for (int i = 0; i < N_IDS; i++) begin
      if (push_block[i])
        $warning("%m: AW push suppressed for AWID=%0d (depth=%0d, FIFO_DEPTH=%0d) — aw_full contract violated; ordering broken for this ID",
                 i, depth[i], FIFO_DEPTH);
    end
    if (b_valid && b_ready && depth[bid] == '0)
      $warning("%m: B response for AWID=%0d arrived with empty FIFO — underflow; B cannot be matched to any AW",
               bid);
  end
`endif

endmodule
