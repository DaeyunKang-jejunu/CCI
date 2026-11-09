// Top-level wrapper connecting five submodules for the CCI memcpy range tracker.
//
// Pipeline: req_decoder → rim_tracker → ac_range_gen → snoop_response_tracker
//                                                     → hazard_checker
//
// write_release asserts after all CR responses are received (not merely after
// the last AC is accepted), preventing DMA dirty data from landing before the
// CPU completes invalidation.
//
// cci_write_completion_tracker is instantiated externally at the system level
// (it needs the full AXI AW/B channels) and drives wr_done_valid/line_idx here.

`timescale 1ns/1ps

module cci_memcpy_range_unit
  import cci_memcpy_pkg::*;
(
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

  input  logic             wr_done_valid,
  input  cci_line_idx_t    wr_done_line_idx,

  input  logic             probe_valid,
  input  cci_master_id_t   probe_source_id,
  input  cci_addr_t        probe_addr,
  output logic             probe_hazard,

  output logic             tracker_busy,
  output logic             tracker_done,
  output logic             write_release,
  output logic             invalidation_done,
  output logic             snoop_error
);

  cci_page_addr_t   dec_base_page_addr;
  cci_line_mask_t   dec_line_mask;
  logic             dec_valid;

  logic             ac_start;
  cci_page_addr_t   ac_page_addr_w;
  cci_line_mask_t   ac_line_mask_w;
  logic             ac_gen_done_raw;
  cci_acsnoop_e     ac_snoop_e;

  logic             snoop_done;
  logic             snoop_error_w;
  logic             write_release_tracker;
  cci_range_entry_t entry;
  logic             tracker_req_ready;

  // On req_error, consume the request immediately (req_ready=1) without
  // allocating a tracker entry (dec_valid=0 prevents forwarding).
  // Matches baseline_line_tracker behavior and prevents producer deadlock.
  assign req_ready     = req_error || tracker_req_ready;
  assign ac_snoop      = ac_snoop_e;
  // Belt-and-suspenders: snoop_done already suppresses write_release on error,
  // but this additional gate is visible at the synthesis boundary.
  assign write_release = write_release_tracker && !snoop_error_w;
  assign snoop_error   = snoop_error_w;

  cci_memcpy_req_decoder i_decoder (
    .req_valid          (req_valid),
    .req_base_addr      (req_base_addr),
    .req_line_count     (req_line_count),
    .req_line_mask      (req_line_mask),
    .dec_base_page_addr (dec_base_page_addr),
    .dec_line_mask      (dec_line_mask),
    .dec_valid          (dec_valid),
    .req_error          (req_error)
  );

  // ac_gen_done is fed by snoop_done (CR-gated), not the raw AC-acceptance
  // signal, so INVALIDATING→TRACKING only happens after all CRs are received.
  cci_range_rim_tracker i_tracker (
    .clk                (clk),
    .rst_n              (rst_n),
    .req_valid          (dec_valid),
    .req_ready          (tracker_req_ready),
    .req_base_page_addr (dec_base_page_addr),
    .req_line_mask      (dec_line_mask),
    .req_source_id      (req_source_id),
    .ac_start           (ac_start),
    .ac_page_addr       (ac_page_addr_w),
    .ac_line_mask       (ac_line_mask_w),
    .ac_gen_done        (snoop_done),
    .wr_done_valid      (wr_done_valid),
    .wr_done_line_idx   (wr_done_line_idx),
    .entry              (entry),
    .tracker_busy       (tracker_busy),
    .tracker_done       (tracker_done),
    .write_release      (write_release_tracker),
    .invalidation_done  (invalidation_done)
  );

  cci_ac_range_gen i_ac_gen (
    .clk             (clk),
    .rst_n           (rst_n),
    .start           (ac_start),
    .start_page_addr (ac_page_addr_w),
    .start_line_mask (ac_line_mask_w),
    .ac_valid        (ac_valid),
    .ac_ready        (ac_ready),
    .ac_addr         (ac_addr),
    .ac_snoop        (ac_snoop_e),
    .ac_gen_done     (ac_gen_done_raw)
  );

  // seq_start fires when the rim tracker registers a new entry, one cycle
  // before the first AC appears on ac_valid.
  cci_snoop_response_tracker i_snoop_tracker (
    .clk         (clk),
    .rst_n       (rst_n),
    .seq_start   (ac_start),
    .ac_valid    (ac_valid),
    .ac_ready    (ac_ready),
    .ac_gen_done (ac_gen_done_raw),
    .cr_valid    (cr_valid),
    .cr_ready    (cr_ready),
    .cr_resp     (cr_resp),
    .snoop_done  (snoop_done),
    .snoop_error (snoop_error_w)
  );

  cci_range_hazard_checker i_hazard (
    .entry           (entry),
    .probe_valid     (probe_valid),
    .probe_source_id (probe_source_id),
    .probe_addr      (probe_addr),
    .probe_hazard    (probe_hazard)
  );

endmodule
