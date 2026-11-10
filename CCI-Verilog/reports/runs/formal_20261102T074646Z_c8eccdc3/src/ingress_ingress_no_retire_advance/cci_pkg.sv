// =============================================================================
// cci_pkg.sv  —  공용 파라미터 · 타입 정의 (clean 재작성)
// 하드웨어 오버헤드 SV 설계 계획서 4.4 / 3.2 절 기준
// =============================================================================
`ifndef CCI_PKG_SV
`define CCI_PKG_SV

package cci_pkg;

  // ---- 4.4 파라미터 -----------------------------------------------------------
  localparam int unsigned LINES_PER_PAGE = 64;  // 4KB / 64B
  localparam int unsigned ADDR_W         = 64;  // 주소 폭
  localparam int unsigned SRC_ID_W       = 4;   // source id 폭
  localparam int unsigned LINE_CNT_W     = 7;   // line_count 폭 (1~64)
  localparam int unsigned REQ_TYPE_W     = 2;   // NORMAL/MEMCPY
  localparam int unsigned PAGE_OFF_W     = 12;  // 4KB page offset
  localparam int unsigned LINE_OFF_W     = 6;   // 64B line offset
  localparam int unsigned LINE_IDX_W     = 6;   // log2(64) → page 내 line index
  localparam int unsigned BASE_PAGE_W    = ADDR_W - PAGE_OFF_W; // 52

  // ---- req_type 인코딩 (4.1) --------------------------------------------------
  typedef enum logic [REQ_TYPE_W-1:0] {
    REQ_NORMAL = 2'b00,
    REQ_RANGE  = 2'b01   // range 기반 memcpy 경로 (제안 방식). 구 명칭 REQ_MEMCPY
  } req_type_e;

  // Range context operation.  2'b10/11 are reserved and rejected at setup.
  typedef enum logic [1:0] {
    RANGE_OP_WRITE = 2'b00,
    RANGE_OP_READ  = 2'b01
  } range_op_e;

  // ---- FSM 상태 (3.3) ---------------------------------------------------------
  typedef enum logic [1:0] {
    ST_IDLE         = 2'b00,
    ST_INVALIDATING = 2'b01,
    ST_TRACKING     = 2'b10,
    ST_DONE         = 2'b11
  } ctx_state_e;

  // ---- ACE 스눕 인코딩 (4.2) --------------------------------------------------
  /* verilator lint_off UNUSEDPARAM */
  localparam logic [3:0] ACSNOOP_MAKEINVALID = 4'b1101;
  /* verilator lint_on UNUSEDPARAM */

  // ---- Shared READ/WRITE Range Context (253 bits) ----------------------------
  // VALID(1) STATE(2) OP(2) BASE_PAGE_ADDR(52) LINE_MASK(64)
  // ISSUED_MASK(64) DONE_MASK(64) SOURCE_ID(4).  wr_issued_mask keeps its
  // historical field name as a compatibility alias; it is operation-neutral.
  typedef struct packed {
    logic                      valid;      // 1
    ctx_state_e                state;      // 2
    range_op_e                 op;         // 2
    logic [BASE_PAGE_W-1:0]    base_page;  // 52  (addr[63:12])
    logic [LINES_PER_PAGE-1:0] line_mask;  // 64  대상 line 비트맵
    logic [LINES_PER_PAGE-1:0] wr_issued_mask; // ingress reservation
    logic [LINES_PER_PAGE-1:0] done_mask;  // 64  완료 line 비트맵
    logic [SRC_ID_W-1:0]       source_id;  // 4
  } range_ctx_t;

  // 합계 폭 확인용 상수 (컴파일 타임 self-check 는 top 에서 $bits 로 검증)
  /* verilator lint_off UNUSEDPARAM */
  localparam int unsigned CTX_BITS = 1 + 2 + 2 + BASE_PAGE_W + LINES_PER_PAGE
                                       + 2*LINES_PER_PAGE + SRC_ID_W; // = 253
  /* verilator lint_on UNUSEDPARAM */

endpackage : cci_pkg

`endif
