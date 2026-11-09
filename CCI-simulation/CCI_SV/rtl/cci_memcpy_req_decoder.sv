// Combinational request decoder: converts (base_addr, line_count, line_mask)
// into a page-relative dec_line_mask for the range tracker.
// req_error fires when dec_line_mask would be zero (zero count, >64 lines,
// page-boundary crossing, or explicit zero mask).  All outputs are combinational.

module cci_memcpy_req_decoder
  import cci_memcpy_pkg::*;
(
  input  logic            req_valid,
  input  cci_addr_t       req_base_addr,
  input  cci_line_count_t req_line_count,
  input  cci_line_mask_t  req_line_mask,   // nonzero = explicit sparse mask

  output cci_page_addr_t  dec_base_page_addr,
  output cci_line_mask_t  dec_line_mask,
  output logic            dec_valid,
  output logic            req_error
);

  assign dec_base_page_addr = cci_page_addr(req_base_addr);

  // cci_page_relative_mask handles both explicit (nonzero mask) and contiguous
  // (zero mask → derive from base_addr + line_count) modes, including the
  // page-boundary guard.  Returns '0 for malformed inputs.
  assign dec_line_mask = cci_page_relative_mask(req_base_addr, req_line_count, req_line_mask);

  assign req_error = req_valid && (dec_line_mask == '0);
  assign dec_valid = req_valid && !req_error;

endmodule
