// =============================================================================
// (5) cci_range_hazard_checker  —  미완료 대상 line 접근 차단·해제
//     계획서 3.1 #5 / 3.3.
//     hazard = valid & page_match & line_mask[idx] & ~done_mask[idx]
//              & (probe_src != owner_src)
//     조합 + 비교기.  NUM_CONTEXTS 개 context 에 대해 OR.
// =============================================================================
`include "cci_pkg.sv"

module cci_range_hazard_checker
  import cci_pkg::*;
#(
  parameter int unsigned NUM_CONTEXTS = 1
)(
  input  range_ctx_t [NUM_CONTEXTS-1:0] ctx,

  input  logic                 probe_valid,
  input  logic [ADDR_W-1:0]    probe_addr,
  input  logic [SRC_ID_W-1:0]  probe_source_id,

  output logic                 probe_stall
);

  logic [BASE_PAGE_W-1:0] probe_page;
  logic [LINE_IDX_W-1:0]  probe_line;
  assign probe_page = probe_addr[ADDR_W-1:PAGE_OFF_W];
  assign probe_line = probe_addr[PAGE_OFF_W-1:LINE_OFF_W]; // page 내 line idx

  logic [NUM_CONTEXTS-1:0] hit;
  // Continuous per-context logic also reacts to address-only line-index changes.
  // Keep dynamic packed-struct selection out of procedural sensitivity inference.
  for (genvar c = 0; c < NUM_CONTEXTS; c++) begin : context_hit
      assign hit[c] = ctx[c].valid
             /* mutant */
             & ctx[c].line_mask[probe_line]
             & ~ctx[c].done_mask[probe_line]
             & (ctx[c].source_id != probe_source_id);
  end

  assign probe_stall = probe_valid & (|hit);

  // probe_addr 하위 6b(line 내 byte offset)는 line 단위 검사라 미사용 — tie-off
  logic _unused;
  assign _unused = ^probe_addr[LINE_OFF_W-1:0];

endmodule
