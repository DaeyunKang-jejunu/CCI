// Sequential AC MakeInvalid generator for the CCI memcpy range tracker.
//
// On start, captures start_page_addr and start_line_mask, then issues one
// AC MakeInvalid per clock for each set bit (LSB-first).  ac_ready=0 stalls
// without losing the current request.  ac_gen_done pulses when the final AC
// is accepted.  A zero start_line_mask with start asserted hangs the generator
// (caught in simulation below).

module cci_ac_range_gen
  import cci_memcpy_pkg::*;
(
  input  logic           clk,
  input  logic           rst_n,

  input  logic           start,
  input  cci_page_addr_t start_page_addr,
  input  cci_line_mask_t start_line_mask,

  output logic           ac_valid,
  input  logic           ac_ready,
  output cci_addr_t      ac_addr,
  output cci_acsnoop_e   ac_snoop,

  output logic           ac_gen_done
);

  logic           busy;
  cci_page_addr_t page_addr_r;
  cci_line_mask_t remaining_mask;

  // Priority encoder: lowest set bit wins (descending loop → smallest index last).
  cci_line_idx_t current_idx;
  always_comb begin
    current_idx = '0;
    for (int i = LINE_MASK_WIDTH-1; i >= 0; i--)
      if (remaining_mask[i]) current_idx = cci_line_idx_t'(i);
  end

  // is_last: exactly one bit remains. Uses isolate-lowest-bit identity
  // (mask & (mask-1))==0, avoiding a barrel shift on current_idx.
  logic is_last;
  assign is_last = busy && ((remaining_mask & (remaining_mask - 1)) == '0);

  assign ac_valid    = busy && (remaining_mask != '0);
  assign ac_addr     = {page_addr_r, current_idx, {LINE_OFFSET_BITS{1'b0}}};
  assign ac_snoop    = ACSNOOP_MAKE_INVALID;
  assign ac_gen_done = busy && ac_valid && ac_ready && is_last;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      busy           <= 1'b0;
      page_addr_r    <= '0;
      remaining_mask <= '0;
    end else if (start && !busy) begin
`ifndef SYNTHESIS
      if (start_line_mask == '0)
        $error("%m: start asserted with start_line_mask='0");
`endif
      busy           <= (start_line_mask != '0);
      page_addr_r    <= start_page_addr;
      remaining_mask <= start_line_mask;
    end else if (busy && ac_valid && ac_ready) begin
      remaining_mask[current_idx] <= 1'b0;
      if (is_last) busy <= 1'b0;
    end
  end

endmodule
