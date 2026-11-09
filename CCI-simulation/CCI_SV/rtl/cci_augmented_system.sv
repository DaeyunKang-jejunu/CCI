// Realistic CCI cost measurement: existing normal path + proposed memcpy range unit.
//
// Incremental overhead = cci_augmented_system − cci_existing_system.
//
// Request routing (via req_type):
//   CCI_REQ_NORMAL → baseline_line_tracker (normal path, unchanged from existing)
//   CCI_REQ_MEMCPY → cci_memcpy_range_unit (proposed range-based path)
// Both trackers may be active simultaneously.
//
// Write completion demux (via wr_done_type from shared cci_write_completion_tracker):
//   CCI_WR_NORMAL → baseline_line_tracker
//   CCI_WR_MEMCPY → cci_memcpy_range_unit
//   CCI_WR_NONE   → neither (ordering-only entry; no completion pulse)
//
// Probe hazard: OR of both tracker hazard outputs.

`timescale 1ns/1ps

module cci_augmented_system
  import cci_memcpy_pkg::*;
#(
  parameter int AXI_ID_W       = 4,
  parameter int FIFO_DEPTH     = 4,
  parameter int NORMAL_ENTRIES = 16
)(
  input  logic clk,
  input  logic rst_n,

  // Unified request interface
  input  logic             req_valid,
  output logic             req_ready,
  input  cci_req_type_e    req_type,

  // Normal request fields (used for CCI_REQ_NORMAL)
  input  cci_addr_t        req_base_addr,
  input  cci_line_mask_t   req_line_mask,
  input  cci_master_id_t   req_source_id,

  // Memcpy-only fields (used for CCI_REQ_MEMCPY)
  input  cci_line_count_t  req_line_count,
  output logic             req_error,

  // AC snoop channel (memcpy path)
  output logic             ac_valid,
  input  logic             ac_ready,
  output cci_addr_t        ac_addr,
  output logic [3:0]       ac_snoop,

  // CR snoop response (memcpy path)
  input  logic             cr_valid,
  output logic             cr_ready,
  input  logic [4:0]       cr_resp,

  // AW channel: observe only
  input  logic [AXI_ID_W-1:0] awid,
  input  logic             aw_valid,
  input  logic             aw_ready,
  input  cci_wr_track_e    aw_track_type,
  input  cci_addr_t        awaddr,

  // B channel
  input  logic [AXI_ID_W-1:0] bid,
  input  logic             b_valid,
  output logic             b_ready,

  // Hazard probe
  input  logic             probe_valid,
  input  cci_master_id_t   probe_source_id,
  input  cci_addr_t        probe_addr,
  output logic             normal_probe_hazard,
  output logic             memcpy_probe_hazard,
  output logic             probe_hazard,  // OR of the two above

  // Normal tracker status
  output logic             normal_req_error,
  output logic             normal_tracker_busy,
  output logic             normal_tracker_done,

  // Memcpy tracker status
  output logic             memcpy_tracker_busy,
  output logic             memcpy_tracker_done,
  output logic             write_release,
  output logic             invalidation_done,
  output logic             snoop_error,

  output logic             overflow_sticky,
  output logic             underflow_sticky,
  output logic [2**AXI_ID_W-1:0] aw_full_mask
);

  // -------------------------------------------------------------------------
  // Request classifier
  // -------------------------------------------------------------------------
  logic normal_req_valid;
  logic normal_req_ready;
  logic memcpy_req_valid;
  logic memcpy_req_ready;

  assign normal_req_valid = req_valid && (req_type == CCI_REQ_NORMAL);
  assign memcpy_req_valid = req_valid && (req_type == CCI_REQ_MEMCPY);
  // Reserved req_type encodings (2'b10, 2'b11) return req_ready=0 so the
  // producer stalls rather than seeing a silent drop (no tracker processes them).
  assign req_ready = (req_type == CCI_REQ_MEMCPY) ? memcpy_req_ready :
                     (req_type == CCI_REQ_NORMAL)  ? normal_req_ready : 1'b0;

`ifndef SYNTHESIS
  always_ff @(posedge clk) begin
    if (req_valid && req_type != CCI_REQ_NORMAL && req_type != CCI_REQ_MEMCPY)
      $fatal(1, "%m: req_type=2'b%02b is reserved; no tracker will accept this request",
             req_type);
  end
`endif

  // -------------------------------------------------------------------------
  // Shared write completion tracker
  // -------------------------------------------------------------------------
  logic          wr_done_valid;
  cci_line_idx_t wr_done_line_idx;
  cci_wr_track_e wr_done_type;

  cci_write_completion_tracker #(
    .AXI_ID_W   (AXI_ID_W),
    .FIFO_DEPTH (FIFO_DEPTH)
  ) i_wr_tracker (
    .clk              (clk),
    .rst_n            (rst_n),
    .aw_valid         (aw_valid),
    .aw_ready         (aw_ready),
    .awid             (awid),
    .awaddr           (awaddr),
    .aw_track_type    (aw_track_type),
    .b_valid          (b_valid),
    .b_ready          (b_ready),
    .bid              (bid),
    .wr_done_valid    (wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .wr_done_type     (wr_done_type),
    .aw_full          (aw_full_mask),
    .overflow_sticky  (overflow_sticky),
    .underflow_sticky (underflow_sticky)
  );

  logic normal_wr_done_valid;
  logic memcpy_wr_done_valid;
  assign normal_wr_done_valid = wr_done_valid && (wr_done_type == CCI_WR_NORMAL);
  assign memcpy_wr_done_valid = wr_done_valid && (wr_done_type == CCI_WR_MEMCPY);

  // -------------------------------------------------------------------------
  // Normal tracker (existing path)
  // -------------------------------------------------------------------------
  baseline_line_tracker #(
    .N_ENTRIES (NORMAL_ENTRIES)
  ) i_normal_tracker (
    .clk             (clk),
    .rst_n           (rst_n),
    .req_valid       (normal_req_valid),
    .req_ready       (normal_req_ready),
    .req_base_addr   (req_base_addr),
    .req_line_mask   (req_line_mask),
    .req_source_id   (req_source_id),
    .wr_done_valid   (normal_wr_done_valid),
    .wr_done_line_idx(wr_done_line_idx),
    .probe_valid     (probe_valid),
    .probe_source_id (probe_source_id),
    .probe_addr      (probe_addr),
    .probe_hazard    (normal_probe_hazard),
    .req_error       (normal_req_error),
    .tracker_busy    (normal_tracker_busy),
    .tracker_done    (normal_tracker_done)
  );

  // -------------------------------------------------------------------------
  // Memcpy range tracker (proposed path)
  // -------------------------------------------------------------------------
  cci_memcpy_range_unit i_memcpy_tracker (
    .clk              (clk),
    .rst_n            (rst_n),
    .req_valid        (memcpy_req_valid),
    .req_ready        (memcpy_req_ready),
    .req_base_addr    (req_base_addr),
    .req_line_count   (req_line_count),
    .req_line_mask    (req_line_mask),
    .req_source_id    (req_source_id),
    .req_error        (req_error),
    .ac_valid         (ac_valid),
    .ac_ready         (ac_ready),
    .ac_addr          (ac_addr),
    .ac_snoop         (ac_snoop),
    .cr_valid         (cr_valid),
    .cr_ready         (cr_ready),
    .cr_resp          (cr_resp),
    .wr_done_valid    (memcpy_wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .probe_valid      (probe_valid),
    .probe_source_id  (probe_source_id),
    .probe_addr       (probe_addr),
    .probe_hazard     (memcpy_probe_hazard),
    .tracker_busy     (memcpy_tracker_busy),
    .tracker_done     (memcpy_tracker_done),
    .write_release    (write_release),
    .invalidation_done(invalidation_done),
    .snoop_error      (snoop_error)
  );

  assign probe_hazard = normal_probe_hazard | memcpy_probe_hazard;

endmodule
