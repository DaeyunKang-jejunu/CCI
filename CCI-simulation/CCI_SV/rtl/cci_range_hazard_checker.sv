// Combinational hazard checker: asserts probe_hazard when a probe address
// falls within an unfinished target line of the active range entry.
// done_mask naturally encodes completion state — no explicit state check needed.
// Output is purely combinational (no clock port).

module cci_range_hazard_checker
  import cci_memcpy_pkg::*;
(
  input  cci_range_entry_t entry,

  input  logic           probe_valid,
  input  cci_master_id_t probe_source_id,
  input  cci_addr_t      probe_addr,

  output logic probe_hazard
);

  cci_page_addr_t probe_page;
  cci_line_idx_t  probe_line_idx;

  assign probe_page     = cci_page_addr(probe_addr);
  assign probe_line_idx = cci_line_idx(probe_addr);

  logic same_page;
  logic different_source;
  logic line_targeted;
  logic write_pending;

  assign same_page       = (probe_page == entry.base_page_addr);
  assign different_source = (probe_source_id != entry.source_id);
  assign line_targeted   = entry.line_mask[probe_line_idx];
  assign write_pending   = ~entry.done_mask[probe_line_idx];

  assign probe_hazard = probe_valid && entry.valid
                     && different_source && same_page
                     && line_targeted   && write_pending;

endmodule
