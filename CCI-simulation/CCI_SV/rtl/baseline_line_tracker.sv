// Baseline line-level RIM tracker — synthesis comparison reference.
//
// Represents the prior-art approach where each cache line under a DMA memcpy
// operation gets its own independent tracking entry. For an N-line transfer,
// this allocates N entries, each storing the full cache-line address (58 bits),
// source master ID (4 bits), and two state bits (valid, done).
//
// Entries are allocated in mask-bit order: entry 0 = first set bit of
// req_line_mask, entry 1 = second set bit, etc.  This correctly handles
// arbitrary cache-line positions within the page.  Requests with zero mask
// or popcount > N_ENTRIES are rejected via req_error; no entries are allocated.
//
// Write completion uses a CAM search on {current_page, wr_done_line_idx}
// to mark the matching entry done regardless of its physical entry index.
//
// Synthesis cost at N_ENTRIES = 64 (one full 4KB page):
//   Per-entry: 1(valid) + 58(cl_addr) + 4(source_id) + 1(done) = 64 bits
//   Total FFs:  64 × 64 + 52 (page reg) = 4148 flip-flops
//   Hazard CAM:     64 parallel 58-bit comparators
//   Completion CAM: 64 parallel 58-bit comparators
//
// Compare with proposed cci_memcpy_range_unit (see README):
//   Range entry:  187 FF bits
//   AC gen state: 117 FF bits
//   Total FFs:   ~304 flip-flops
//   Hazard check: 1 × 52-bit page compare + 1 mask-bit lookup
//
// Interface is intentionally parallel to cci_memcpy_range_unit so that the
// same testbench stimulus can drive both modules during comparison.
// req_line_count (contiguous mode) is not supported; use req_line_mask only.

module baseline_line_tracker
  import cci_memcpy_pkg::*;
#(
  parameter int N_ENTRIES = LINES_PER_PAGE  // 64
)(
  input  logic clk,
  input  logic rst_n,

  // Batch request.  Accepted when req_valid && req_ready (all entries idle).
  // req_line_mask[i]=1 schedules cache line i for tracking.  Entries are
  // filled in mask-bit order; if popcount > N_ENTRIES, excess lines are dropped.
  input  logic            req_valid,
  output logic            req_ready,
  input  cci_addr_t       req_base_addr,
  input  cci_line_mask_t  req_line_mask,
  input  cci_master_id_t  req_source_id,

  // Write completion: CAM search by {current_page, wr_done_line_idx} marks done.
  input  logic            wr_done_valid,
  input  cci_line_idx_t   wr_done_line_idx,

  // Hazard probe (fully combinational, 64-way CAM).
  // probe_hazard is high when any active, undone entry matches probe_addr
  // and belongs to a different master than probe_source_id.
  input  logic            probe_valid,
  input  cci_master_id_t  probe_source_id,
  input  cci_addr_t       probe_addr,
  output logic            probe_hazard,

  // Error flag (combinational, same cycle as req_valid): 1 if the presented
  // mask is illegal while idle — zero bits set, or popcount > N_ENTRIES.
  // On error, the request is consumed (req_ready=1) but no entries are allocated.
  output logic            req_error,

  // Status
  output logic            tracker_busy,  // at least one entry is active
  output logic            tracker_done   // one-cycle pulse: all done
);

  // Entry layout: valid(1) + cl_addr(58) + source_id(4) + done(1) = 64 bits
  localparam int CL_ADDR_W = ADDR_WIDTH - LINE_OFFSET_BITS;  // 58

  typedef struct packed {
    logic                     valid;
    logic [CL_ADDR_W-1:0]     cl_addr;    // addr[63:6]
    cci_master_id_t            source_id;
    logic                     done;
  } entry_t;

  entry_t entries [N_ENTRIES];

  // Registered page address — set when a request is accepted.
  cci_page_addr_t current_page;

  logic any_valid;
  logic any_undone;

  always_comb begin
    any_valid  = 1'b0;
    any_undone = 1'b0;
    for (int i = 0; i < N_ENTRIES; i++) begin
      if (entries[i].valid) begin
        any_valid = 1'b1;
        if (!entries[i].done) any_undone = 1'b1;
      end
    end
  end

  assign req_ready    = ~any_valid;
  // Uses cci_popcount (not $countones) for sv2v+Yosys portability.
  assign req_error    = req_valid && ~any_valid &&
                        (req_line_mask == '0 ||
                         cci_popcount(req_line_mask) > N_ENTRIES);
  assign tracker_busy = any_valid;
  assign tracker_done = any_valid && ~any_undone;

  entry_t alloc_e [N_ENTRIES];

  always_comb begin : alloc_comb
    int ei;
    for (int i = 0; i < N_ENTRIES; i++) alloc_e[i] = '0;
    ei = 0;
    for (int line = 0; line < LINES_PER_PAGE; line++) begin
      if (req_line_mask[line] && ei < N_ENTRIES) begin
        alloc_e[ei].valid     = 1'b1;
        alloc_e[ei].cl_addr   = {cci_page_addr(req_base_addr), cci_line_idx_t'(line)};
        alloc_e[ei].source_id = req_source_id;
        alloc_e[ei].done      = 1'b0;
        ei = ei + 1;
      end
    end
  end : alloc_comb

  // -----------------------------------------------------------------------
  // Completion CAM key: {registered page, incoming line index}.
  //
  // ASSUMPTION: wr_done_line_idx arrives only from AXI IDs exclusively
  // owned by this batch.  If a concurrent NORMAL write to a different page
  // with the same line index completes on the same AXI ID, current_page
  // would produce the wrong CAM key, falsely completing an entry.
  // Enforce per-ID page isolation at the system level (see AW/B contract).
  // -----------------------------------------------------------------------
  logic [CL_ADDR_W-1:0] wr_done_cl_addr;
  assign wr_done_cl_addr = {current_page, wr_done_line_idx};

`ifndef SYNTHESIS
  // Simulation assertion: detect wr_done that matches no active entry.
  // Catches wrong-line completions and double completions.  Does NOT catch
  // page-aliasing false positives (wrong-page same line_idx on shared AXI ID)
  // since those coincidentally match current_page — per-ID isolation prevents this.
  logic cam_any_match;
  always_comb begin
    cam_any_match = 1'b0;
    for (int i = 0; i < N_ENTRIES; i++)
      if (entries[i].valid && !entries[i].done && entries[i].cl_addr == wr_done_cl_addr)
        cam_any_match = 1'b1;
  end
`endif

  // -----------------------------------------------------------------------
  // Hazard CAM: N_ENTRIES parallel 58-bit comparators — the key synthesis
  // comparison point vs the proposed design's single page compare.
  // -----------------------------------------------------------------------
  logic [CL_ADDR_W-1:0] probe_cl_addr;
  assign probe_cl_addr = probe_addr[ADDR_WIDTH-1:LINE_OFFSET_BITS];

  logic [N_ENTRIES-1:0] hazard_vec;

  always_comb begin
    for (int i = 0; i < N_ENTRIES; i++) begin
      hazard_vec[i] = probe_valid
                    && entries[i].valid
                    && ~entries[i].done
                    && (entries[i].cl_addr  == probe_cl_addr)
                    && (entries[i].source_id != probe_source_id);
    end
  end

  assign probe_hazard = |hazard_vec;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      for (int i = 0; i < N_ENTRIES; i++) entries[i] <= '0;
      current_page <= '0;

    end else begin

      if (~any_valid) begin
        if (req_valid && !req_error) begin
          for (int i = 0; i < N_ENTRIES; i++) entries[i] <= alloc_e[i];
          current_page <= cci_page_addr(req_base_addr);
        end

      end else begin
        if (tracker_done) begin
          for (int i = 0; i < N_ENTRIES; i++) entries[i].valid <= 1'b0;
        end else if (wr_done_valid) begin
`ifndef SYNTHESIS
          if (!cam_any_match)
            $warning("%m: wr_done line_idx=%0d (cl_addr=%h) matched no active entry — possible spurious completion or AXI-ID page aliasing",
                     wr_done_line_idx, wr_done_cl_addr);
`endif
          for (int i = 0; i < N_ENTRIES; i++) begin
            if (entries[i].valid && !entries[i].done &&
                entries[i].cl_addr == wr_done_cl_addr)
              entries[i].done <= 1'b1;
          end
        end
      end

    end
  end

endmodule
