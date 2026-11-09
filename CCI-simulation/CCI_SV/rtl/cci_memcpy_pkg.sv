// Common parameters and types for the CCI memcpy range-tracker prototype.
package cci_memcpy_pkg;

  parameter int ADDR_WIDTH       = 64;
  parameter int PAGE_SIZE        = 4096;  // bytes
  parameter int CACHELINE_SIZE   = 64;    // bytes

  // Derived offset widths: computed from PAGE_SIZE and CACHELINE_SIZE so that
  // changing either base parameter keeps the rest self-consistent.
  parameter int PAGE_OFFSET_BITS = $clog2(PAGE_SIZE);           // 12
  parameter int LINE_OFFSET_BITS = $clog2(CACHELINE_SIZE);      // 6

  parameter int LINES_PER_PAGE   = PAGE_SIZE / CACHELINE_SIZE;  // 64
  parameter int LINE_MASK_WIDTH  = LINES_PER_PAGE;              // 64

  // 7 bits to represent line counts 1..64 (6 bits would top out at 63).
  parameter int LINE_COUNT_WIDTH = $clog2(LINES_PER_PAGE) + 1;  // 7
  parameter int LINE_INDEX_WIDTH = $clog2(LINES_PER_PAGE);      // 6

  parameter int PAGE_ADDR_WIDTH  = ADDR_WIDTH - PAGE_OFFSET_BITS;  // 52

  parameter int MASTER_ID_WIDTH  = 4;

  typedef logic [ADDR_WIDTH-1:0]       cci_addr_t;
  typedef logic [PAGE_ADDR_WIDTH-1:0]  cci_page_addr_t;
  typedef logic [LINE_MASK_WIDTH-1:0]  cci_line_mask_t;
  typedef logic [LINE_COUNT_WIDTH-1:0] cci_line_count_t;
  typedef logic [LINE_COUNT_WIDTH:0]   cci_line_count_ext_t;
  typedef logic [LINE_INDEX_WIDTH-1:0] cci_line_idx_t;
  typedef logic [MASTER_ID_WIDTH-1:0]  cci_master_id_t;

  localparam cci_line_count_t     LINES_PER_PAGE_COUNT = cci_line_count_t'(LINES_PER_PAGE);
  localparam cci_line_count_ext_t LINES_PER_PAGE_EXT   = cci_line_count_ext_t'(LINES_PER_PAGE);

  // ARM ACE AWSNOOP encodings (consistent with simulator Top.h EAWSNOOP_TYPE).
  typedef enum logic [2:0] {
    AWSNOOP_WRITE_UNIQUE      = 3'b000,
    AWSNOOP_WRITE_LINE_UNIQUE = 3'b001,
    AWSNOOP_WRITE_CLEAN       = 3'b010,
    AWSNOOP_WRITE_BACK        = 3'b011,
    AWSNOOP_EVICT             = 3'b100,
    AWSNOOP_WRITE_EVICT       = 3'b101
  } cci_awsnoop_e;

  // ARM ACE ACSNOOP encodings (consistent with simulator Top.h EACSNOOP_TYPE).
  // CleanUnique (0b1011) and MakeUnique (0b1100) are omitted because they are
  // also absent from the simulator's EACSNOOP_TYPE definition.
  typedef enum logic [3:0] {
    ACSNOOP_READ_ONCE             = 4'b0000,
    ACSNOOP_READ_SHARED           = 4'b0001,
    ACSNOOP_READ_CLEAN            = 4'b0010,
    ACSNOOP_READ_NOT_SHARED_DIRTY = 4'b0011,
    ACSNOOP_READ_UNIQUE           = 4'b0111,
    ACSNOOP_CLEAN_SHARED          = 4'b1000,
    ACSNOOP_CLEAN_INVALID         = 4'b1001,
    ACSNOOP_MAKE_INVALID          = 4'b1101
  } cci_acsnoop_e;

  // Range entry state machine.
  // valid=0 means the entry is idle regardless of state.
  // state is only meaningful when valid=1.
  // The 2'b11 encoding is unused/illegal.
  typedef enum logic [1:0] {
    CCI_RANGE_INVALIDATING = 2'b00,  // Issuing AC MakeInvalid requests
    CCI_RANGE_TRACKING     = 2'b01,  // All ACs issued; waiting for B responses
    CCI_RANGE_DONE         = 2'b10   // All target lines complete; entry releasing
  } cci_range_state_e;

  // Range entry structure.
  // valid gates the entire entry: when valid=0 the entry is idle and all other
  // fields are don't-care. state only applies when valid=1, so there is no
  // redundant IDLE encoding between valid and state.
  typedef struct packed {
    logic             valid;          // 1 = active entry
    cci_range_state_e state;          // active sub-state (valid=1 only)
    cci_page_addr_t   base_page_addr; // addr[ADDR_WIDTH-1:PAGE_OFFSET_BITS]
    cci_line_mask_t   line_mask;      // target lines within the page
    cci_line_mask_t   done_mask;      // lines that have received B response
    cci_master_id_t   source_id;      // master that issued the memcpy request
  } cci_range_entry_t;               // total: 1+2+52+64+64+4 = 187 bits

  // Request type: determines which tracker processes an incoming request.
  typedef enum logic [1:0] {
    CCI_REQ_NORMAL = 2'b00,  // Ordinary CCI-tracked request → normal tracker
    CCI_REQ_MEMCPY = 2'b01   // Memcpy range request         → memcpy tracker
  } cci_req_type_e;

  // Write completion class: stored with each AW entry so the B response is
  // routed back to the tracker that owns that transaction.
  // CCI_WR_NONE entries consume FIFO capacity to preserve AXI same-ID B
  // ordering but do not generate a tracker completion pulse.
  typedef enum logic [1:0] {
    CCI_WR_NONE   = 2'b00,  // Unrelated AW; ordering only, no completion
    CCI_WR_NORMAL = 2'b01,  // B response → normal tracker
    CCI_WR_MEMCPY = 2'b10   // B response → memcpy range tracker
  } cci_wr_track_e;

  // ---------------------------------------------------------------------------
  // Helper functions
  // ---------------------------------------------------------------------------

  // Count set bits in a line mask.  Substitutes $countones, which sv2v+Yosys
  // cannot resolve; Vivado synthesizes both identically.
  function automatic int cci_popcount(input cci_line_mask_t m);
    int cnt;
    cnt = 0;
    for (int i = 0; i < LINE_MASK_WIDTH; i++)
      if (m[i]) cnt++;
    return cnt;
  endfunction

  // Extract page address from a full address (upper PAGE_ADDR_WIDTH bits).
  function automatic cci_page_addr_t cci_page_addr(input cci_addr_t addr);
    return addr[ADDR_WIDTH-1:PAGE_OFFSET_BITS];
  endfunction

  // Extract cache-line index within a page from a full address.
  function automatic cci_line_idx_t cci_line_idx(input cci_addr_t addr);
    return addr[PAGE_OFFSET_BITS-1:LINE_OFFSET_BITS];
  endfunction


  // Return 1 when line_count is in the valid range 1..LINES_PER_PAGE.
  function automatic logic cci_valid_line_count(input cci_line_count_t line_count);
    return (line_count != '0) && (line_count <= LINES_PER_PAGE_COUNT);
  endfunction

  // Return 1 when the contiguous range [base_line_idx, base_line_idx+line_count)
  // fits entirely within one page (i.e. does not cross the 4KB boundary).
  function automatic logic cci_range_fits_page(
      input cci_addr_t       base_addr,
      input cci_line_count_t line_count
  );
    cci_line_count_ext_t end_line;
    end_line = cci_line_count_ext_t'(cci_line_idx(base_addr)) +
               cci_line_count_ext_t'(line_count);
    return cci_valid_line_count(line_count) && (end_line <= LINES_PER_PAGE_EXT);
  endfunction

  // Return a line_mask with the lowest line_count bits set (starting from bit 0).
  // Returns '0 for invalid counts (0 or > LINES_PER_PAGE).
  // The full-page case (line_count == LINES_PER_PAGE) is handled explicitly to
  // avoid the undefined left-shift (1 << 64) on a 64-bit operand.
  function automatic cci_line_mask_t cci_contiguous_mask(
      input cci_line_count_t line_count
  );
    if (line_count == '0) return '0;
    if (line_count > LINES_PER_PAGE_COUNT) return '0;
    if (line_count == LINES_PER_PAGE_COUNT) return {LINE_MASK_WIDTH{1'b1}};
    return (cci_line_mask_t'(1) << line_count) - cci_line_mask_t'(1);
  endfunction

  // Compute the page-relative line_mask for a request:
  //   - If explicit_mask is nonzero, return it as-is (sparse/scatter-gather).
  //   - Otherwise generate a contiguous mask of line_count lines shifted to
  //     the starting line index extracted from base_addr.
  //   - Returns '0 when the contiguous range does not fit within the page.
  function automatic cci_line_mask_t cci_page_relative_mask(
      input cci_addr_t       base_addr,
      input cci_line_count_t line_count,
      input cci_line_mask_t  explicit_mask
  );
    if (explicit_mask != '0) return explicit_mask;
    // Contiguous mode requires cache-line alignment; unaligned base is invalid.
    if (base_addr[LINE_OFFSET_BITS-1:0] != '0) return '0;
    if (!cci_range_fits_page(base_addr, line_count)) return '0;
    return cci_contiguous_mask(line_count) << cci_line_idx(base_addr);
  endfunction

  // Return 1 when all lines specified by line_mask have their done_mask bit set.
  // Guards against a zero line_mask triggering a spurious done.
  function automatic logic cci_all_lines_done(
      input cci_line_mask_t line_mask,
      input cci_line_mask_t done_mask
  );
    return (line_mask != '0) && ((done_mask & line_mask) == line_mask);
  endfunction

endpackage
