// =============================================================================
// (3) cci_ac_range_gen  —  line_mask 순회 → MakeInvalid(AC) 발행
//     계획서 3.1 #3.  FSM=INVALIDATING 동안 pending line 을 하나씩 AC 로 발행.
//     sent_mask 상태 저장, scan_idx는 조합 priority encoder 출력.
// =============================================================================
`include "cci_pkg.sv"

module cci_ac_range_gen
  import cci_pkg::*;
(
  input  logic                       clk,
  input  logic                       rst_n,

  input  logic                       gen_en,     // FSM==INVALIDATING
  input  logic [BASE_PAGE_W-1:0]     base_page,
  input  logic [LINES_PER_PAGE-1:0]  line_mask,

  // AC 채널 (스눕 발행)
  output logic                       ac_valid,
  input  logic                       ac_ready,
  output logic [ADDR_W-1:0]          ac_addr,
  output logic [3:0]                 ac_snoop,

  output logic                       ac_all_sent // 모든 대상 line AC 발행 완료
);

  logic [LINES_PER_PAGE-1:0] sent_mask, sent_mask_n;
  logic [LINE_IDX_W-1:0]     scan_idx;

  // 아직 AC 를 안 보낸 대상 line 집합
  logic [LINES_PER_PAGE-1:0] pending;
  assign pending = line_mask & ~sent_mask;

  // 최하위 pending 비트 index 선택 (priority encoder)
  logic                  have_pending;
  logic [LINE_IDX_W-1:0] next_idx;
  always_comb begin
    have_pending = 1'b0;
    next_idx     = '0;
    for (int i = LINES_PER_PAGE-1; i >= 0; i--) begin
      if (pending[i]) begin
        have_pending = 1'b1;
        next_idx     = LINE_IDX_W'(i);
      end
    end
  end

  assign scan_idx  = next_idx;
  assign ac_valid  = gen_en & have_pending;
  assign ac_snoop  = ACSNOOP_MAKEINVALID;
  // page 기준 line 주소 : base_page << 12 | idx << 6
  assign ac_addr   = { base_page, {PAGE_OFF_W{1'b0}} }
                     | ( {{(ADDR_W-LINE_IDX_W){1'b0}}, scan_idx} << LINE_OFF_W );
  assign ac_all_sent = gen_en & ~have_pending;

  always_comb begin
    sent_mask_n = sent_mask;
    if (ac_valid && ac_ready)
      sent_mask_n = sent_mask | (LINES_PER_PAGE'(1) << scan_idx);
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)          sent_mask <= '0;
    else if (!gen_en)    sent_mask <= '0;   // 새 range 시작 시 클리어
    else                 sent_mask <= sent_mask_n;
  end

endmodule
