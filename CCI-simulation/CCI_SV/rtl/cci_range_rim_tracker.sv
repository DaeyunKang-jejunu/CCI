// Range RIM tracker for the CCI memcpy optimization.
//
// Holds a single cci_range_entry_t and drives a four-state sequence:
//   IDLE (valid=0) → INVALIDATING → TRACKING → DONE → IDLE
//
// INVALIDATING: AC generator issues MakeInvalid requests; write_release=0.
//   DMA MUST hold off all AW writes to target lines until write_release asserts.
// TRACKING: All ACs issued (write_release=1); DMA may issue AW writes.
//   Each wr_done_valid sets one done_mask bit.  DONE is entered on the same
//   cycle as the last completion (next_done_mask lookahead; avoids one-cycle lag).
// DONE: tracker_done pulses combinationally; entry clears next cycle.
//
// write_release gates the DMA write path to ensure the CPU processes
// MakeInvalid before DMA dirty data lands.

module cci_range_rim_tracker
  import cci_memcpy_pkg::*;
(
  input  logic           clk,
  input  logic           rst_n,

  input  logic           req_valid,
  output logic           req_ready,
  input  cci_page_addr_t req_base_page_addr,
  input  cci_line_mask_t req_line_mask,
  input  cci_master_id_t req_source_id,

  // ac_start is a combinational strobe (= req_valid && req_ready), high for
  // exactly one cycle; ac_page_addr/ac_line_mask are muxed to the incoming
  // request while ac_start is high so the AC generator captures them at the
  // same edge as entry_r is written.
  output logic           ac_start,
  output cci_page_addr_t ac_page_addr,
  output cci_line_mask_t ac_line_mask,

  input  logic           ac_gen_done,

  input  logic           wr_done_valid,
  input  cci_line_idx_t  wr_done_line_idx,

  output cci_range_entry_t entry,

  output logic           tracker_busy,
  output logic           tracker_done,
  output logic           write_release,
  output logic           invalidation_done
);

  cci_range_entry_t entry_r;
  assign entry = entry_r;

  logic accept_req;
  assign accept_req = req_valid && req_ready;
  assign ac_start   = accept_req;

  // Lookahead done_mask: applied this cycle so DONE is entered on the same
  // clock as the final write completion rather than one cycle later.
  cci_line_mask_t next_done_mask;
  assign next_done_mask = (wr_done_valid && entry_r.valid &&
                           entry_r.state == CCI_RANGE_TRACKING)
                         ? (entry_r.done_mask | (cci_line_mask_t'(1) << wr_done_line_idx))
                         : entry_r.done_mask;

  assign req_ready        = ~entry_r.valid;
  assign tracker_busy     = entry_r.valid;
  assign tracker_done     = entry_r.valid && (entry_r.state == CCI_RANGE_DONE);
  assign write_release    = entry_r.valid && (entry_r.state == CCI_RANGE_TRACKING);
  assign invalidation_done = entry_r.valid
                          && (entry_r.state == CCI_RANGE_INVALIDATING)
                          && ac_gen_done;

  assign ac_page_addr = accept_req ? req_base_page_addr : entry_r.base_page_addr;
  assign ac_line_mask = accept_req ? req_line_mask      : entry_r.line_mask;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      entry_r.valid <= 1'b0;  // other fields written before read on accept_req
    end else begin
      if (!entry_r.valid) begin
        if (accept_req) begin
          entry_r.valid          <= 1'b1;
          entry_r.state          <= CCI_RANGE_INVALIDATING;
          entry_r.base_page_addr <= req_base_page_addr;
          entry_r.line_mask      <= req_line_mask;
          entry_r.done_mask      <= '0;
          entry_r.source_id      <= req_source_id;
        end
      end else begin
        case (entry_r.state)
          CCI_RANGE_INVALIDATING: begin
            if (ac_gen_done) entry_r.state <= CCI_RANGE_TRACKING;
          end
          CCI_RANGE_TRACKING: begin
            if (wr_done_valid)
              entry_r.done_mask[wr_done_line_idx] <= 1'b1;
            if (cci_all_lines_done(entry_r.line_mask, next_done_mask))
              entry_r.state <= CCI_RANGE_DONE;
          end
          CCI_RANGE_DONE: begin
            entry_r.valid <= 1'b0;
          end
          default: begin
            entry_r.valid <= 1'b0;
          end
        endcase
      end
    end
  end

endmodule
