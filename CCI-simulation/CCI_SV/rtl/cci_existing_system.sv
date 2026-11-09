// Realistic CCI cost baseline — existing tracking path without the proposed
// memcpy range unit.
//
// This module is the reference for incremental-overhead measurement:
//   overhead = cci_augmented_system − cci_existing_system
//
// All AWs must be presented regardless of aw_track_type to preserve AXI same-ID
// B ordering.  aw_full_mask[awid] applies to ALL AW traffic.
// aw_track_type = CCI_WR_NORMAL: AW belongs to this tracker; generates completion.
// aw_track_type = CCI_WR_NONE:   AW is unrelated; pushed for ordering only.

`timescale 1ns/1ps

module cci_existing_system
  import cci_memcpy_pkg::*;
#(
  parameter int AXI_ID_W       = 4,
  parameter int FIFO_DEPTH     = 4,
  parameter int NORMAL_ENTRIES = 16  // realistic MO bound; 64 only for algorithm comparison
)(
  input  logic clk,
  input  logic rst_n,

  input  logic            req_valid,
  output logic            req_ready,
  input  cci_addr_t       req_base_addr,
  input  cci_line_mask_t  req_line_mask,
  input  cci_master_id_t  req_source_id,

  // AW channel: observe only (do not stall aw_ready).
  input  logic [AXI_ID_W-1:0] awid,
  input  logic             aw_valid,
  input  logic             aw_ready,
  input  cci_wr_track_e    aw_track_type,  // CCI_WR_NORMAL or CCI_WR_NONE
  input  cci_addr_t        awaddr,

  input  logic [AXI_ID_W-1:0] bid,
  input  logic             b_valid,
  output logic             b_ready,

  input  logic             probe_valid,
  input  cci_master_id_t   probe_source_id,
  input  cci_addr_t        probe_addr,
  output logic             probe_hazard,

  output logic             normal_req_error,
  output logic             tracker_busy,
  output logic             tracker_done,
  output logic             overflow_sticky,
  output logic             underflow_sticky,
  output logic [2**AXI_ID_W-1:0] aw_full_mask
);

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

  // Forward completion to normal tracker only; CCI_WR_NONE and any unexpected
  // CCI_WR_MEMCPY (ordering-only AW) are suppressed.
  logic normal_wr_done_valid;
  assign normal_wr_done_valid = wr_done_valid && (wr_done_type == CCI_WR_NORMAL);

  baseline_line_tracker #(
    .N_ENTRIES (NORMAL_ENTRIES)
  ) i_tracker (
    .clk             (clk),
    .rst_n           (rst_n),
    .req_valid       (req_valid),
    .req_ready       (req_ready),
    .req_base_addr   (req_base_addr),
    .req_line_mask   (req_line_mask),
    .req_source_id   (req_source_id),
    .wr_done_valid   (normal_wr_done_valid),
    .wr_done_line_idx(wr_done_line_idx),
    .probe_valid     (probe_valid),
    .probe_source_id (probe_source_id),
    .probe_addr      (probe_addr),
    .probe_hazard    (probe_hazard),
    .req_error       (normal_req_error),
    .tracker_busy    (tracker_busy),
    .tracker_done    (tracker_done)
  );

endmodule
