// System top for the PROPOSED CCI memcpy range-based design.
//
// Connects cci_memcpy_range_unit and cci_write_completion_tracker.
// Both are included so synthesis sees the full hardware cost of the proposed
// approach (apples-to-apples vs cci_baseline_system).
//
// AW/B channel contract — see cci_write_completion_tracker.sv for full details:
//   ALL AWs (tracked and untracked) must be presented to the tracker to preserve
//   AXI4 B ordering.  aw_full_mask[awid] applies to ALL channel traffic.
//   Using a dedicated AXI ID for memcpy avoids the shared-capacity problem.

`timescale 1ns/1ps

module cci_memcpy_system
  import cci_memcpy_pkg::*;
#(
  parameter int AXI_ID_W   = 4,
  parameter int FIFO_DEPTH = 4
)(
  input  logic clk,
  input  logic rst_n,

  input  logic             req_valid,
  output logic             req_ready,
  input  cci_addr_t        req_base_addr,
  input  cci_line_count_t  req_line_count,
  input  cci_line_mask_t   req_line_mask,
  input  cci_master_id_t   req_source_id,
  output logic             req_error,

  output logic             ac_valid,
  input  logic             ac_ready,
  output cci_addr_t        ac_addr,
  output logic [3:0]       ac_snoop,

  input  logic             cr_valid,
  output logic             cr_ready,
  input  logic [4:0]       cr_resp,

  // AW channel: observe only (do not stall aw_ready).
  // aw_track_valid: 1=memcpy AW, 0=unrelated AW on shared channel.
  input  logic [AXI_ID_W-1:0] awid,
  input  logic             aw_valid,
  input  logic             aw_ready,
  input  logic             aw_track_valid,
  input  cci_addr_t        awaddr,

  input  logic [AXI_ID_W-1:0] bid,
  input  logic             b_valid,
  output logic             b_ready,

  input  logic             probe_valid,
  input  cci_master_id_t   probe_source_id,
  input  cci_addr_t        probe_addr,
  output logic             probe_hazard,

  output logic             tracker_busy,
  output logic             tracker_done,
  output logic             write_release,
  output logic             invalidation_done,
  output logic             snoop_error,
  output logic             overflow_sticky,
  output logic             underflow_sticky,
  output logic [2**AXI_ID_W-1:0] aw_full_mask
);

  logic          wr_done_valid;
  cci_line_idx_t wr_done_line_idx;

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
    .aw_track_type    (aw_track_valid ? CCI_WR_MEMCPY : CCI_WR_NONE),
    .b_valid          (b_valid),
    .b_ready          (b_ready),
    .bid              (bid),
    .wr_done_valid    (wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .wr_done_type     (),
    .aw_full          (aw_full_mask),
    .overflow_sticky  (overflow_sticky),
    .underflow_sticky (underflow_sticky)
  );

  cci_memcpy_range_unit i_range_unit (
    .clk              (clk),
    .rst_n            (rst_n),
    .req_valid        (req_valid),
    .req_ready        (req_ready),
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
    .wr_done_valid    (wr_done_valid),
    .wr_done_line_idx (wr_done_line_idx),
    .probe_valid      (probe_valid),
    .probe_source_id  (probe_source_id),
    .probe_addr       (probe_addr),
    .probe_hazard     (probe_hazard),
    .tracker_busy     (tracker_busy),
    .tracker_done     (tracker_done),
    .write_release    (write_release),
    .invalidation_done(invalidation_done),
    .snoop_error      (snoop_error)
  );

endmodule
