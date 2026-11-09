// Testbench for cci_memcpy_req_decoder.
// Purely combinational DUT — no clock required.
//
// Test coverage:
//   T01  nCACHELINE=1  : 1  line  contiguous, page-aligned base
//   T02  nCACHELINE=8  : 8  lines contiguous, page-aligned base
//   T03  nCACHELINE=16 : 16 lines contiguous, page-aligned base
//   T04  nCACHELINE=64 : 64 lines contiguous, page-aligned base (full page)
//   T05  Page boundary crossing  : base at line 60, count 8 → req_error
//   T06  Explicit sparse mask    : req_line_mask nonzero, count ignored
//   T07  Error — count=0, mask=0 : no lines specified → req_error
//   T08  req_valid=0             : dec_valid=0, req_error=0 regardless of inputs
//   T09  Non-aligned base        : start_line_idx=4, count=8 → mask shifted to [11:4]

`timescale 1ns/1ps

module tb_cci_memcpy_req_decoder;
  import cci_memcpy_pkg::*;

  logic            req_valid;
  cci_addr_t       req_base_addr;
  cci_line_count_t req_line_count;
  cci_line_mask_t  req_line_mask;

  cci_page_addr_t  dec_base_page_addr;
  cci_line_mask_t  dec_line_mask;
  logic            dec_valid;
  logic            req_error;

  cci_memcpy_req_decoder dut (
    .req_valid         (req_valid),
    .req_base_addr     (req_base_addr),
    .req_line_count    (req_line_count),
    .req_line_mask     (req_line_mask),
    .dec_base_page_addr(dec_base_page_addr),
    .dec_line_mask     (dec_line_mask),
    .dec_valid         (dec_valid),
    .req_error         (req_error)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PAGE_A      = 52'h0000_0000_0001;
  localparam cci_addr_t      BASE_PAGE_A = {PAGE_A, {PAGE_OFFSET_BITS{1'b0}}};

  task automatic check(
    input string          label,
    input logic           exp_dec_valid,
    input logic           exp_req_error,
    input cci_line_mask_t exp_mask,
    input cci_page_addr_t exp_page
  );
    #1;
    if (dec_valid          === exp_dec_valid &&
        req_error          === exp_req_error &&
        dec_line_mask      === exp_mask      &&
        dec_base_page_addr === exp_page) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s", label);
      if (dec_valid          !== exp_dec_valid)
        $display("      dec_valid:     exp=%0b got=%0b", exp_dec_valid, dec_valid);
      if (req_error          !== exp_req_error)
        $display("      req_error:     exp=%0b got=%0b", exp_req_error, req_error);
      if (dec_line_mask      !== exp_mask)
        $display("      dec_line_mask: exp=%016h got=%016h", exp_mask, dec_line_mask);
      if (dec_base_page_addr !== exp_page)
        $display("      dec_page_addr: exp=%013h got=%013h", exp_page, dec_base_page_addr);
      fail_count++;
    end
  endtask

  // Use when dec_line_mask is don't-care (req_valid=0 or error path).
  task automatic check_status(
    input string label,
    input logic  exp_dec_valid,
    input logic  exp_req_error
  );
    #1;
    if (dec_valid === exp_dec_valid && req_error === exp_req_error) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s", label);
      if (dec_valid !== exp_dec_valid)
        $display("      dec_valid:  exp=%0b got=%0b", exp_dec_valid, dec_valid);
      if (req_error !== exp_req_error)
        $display("      req_error:  exp=%0b got=%0b", exp_req_error, req_error);
      fail_count++;
    end
  endtask

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_memcpy_req_decoder.fst");
    $dumpvars(0, tb_cci_memcpy_req_decoder);
  end
`endif

  initial begin
    pass_count = 0;
    fail_count = 0;

    req_valid      = 1'b1;
    req_base_addr  = BASE_PAGE_A;   // line index = 0
    req_line_count = 7'd1;
    req_line_mask  = '0;
    check("T01 nCACHELINE=1",
          1'b1, 1'b0,
          64'h0000_0000_0000_0001,
          PAGE_A);

    req_line_count = 7'd8;
    check("T02 nCACHELINE=8",
          1'b1, 1'b0,
          64'h0000_0000_0000_00FF,
          PAGE_A);

    req_line_count = 7'd16;
    check("T03 nCACHELINE=16",
          1'b1, 1'b0,
          64'h0000_0000_0000_FFFF,
          PAGE_A);

    req_line_count = 7'd64;
    check("T04 nCACHELINE=64",
          1'b1, 1'b0,
          64'hFFFF_FFFF_FFFF_FFFF,
          PAGE_A);

    req_base_addr  = {PAGE_A, 6'd60, 6'h00};  // line 60 in page A
    req_line_count = 7'd8;
    req_line_mask  = '0;
    check("T05 page boundary crossing (line60+8)",
          1'b0, 1'b1,
          '0,
          PAGE_A);

    // Edge: start at line 56, count 8 → end=64 (exactly fits)
    req_base_addr  = {PAGE_A, 6'd56, 6'h00};
    req_line_count = 7'd8;
    check("T05b line56+8 exactly fits",
          1'b1, 1'b0,
          64'hFF00_0000_0000_0000,  // bits 63:56
          PAGE_A);

    // Edge: start at line 63, count 1 → end=64 (exactly fits)
    req_base_addr  = {PAGE_A, 6'd63, 6'h00};
    req_line_count = 7'd1;
    check("T05c line63+1 exactly fits",
          1'b1, 1'b0,
          64'h8000_0000_0000_0000,  // bit 63
          PAGE_A);

    req_base_addr  = BASE_PAGE_A;
    req_line_count = 7'd0;                      // ignored in explicit mode
    req_line_mask  = 64'h0000_0000_0000_00A5;
    check("T06 explicit sparse mask 0xA5",
          1'b1, 1'b0,
          64'h0000_0000_0000_00A5,
          PAGE_A);

    req_line_count = 7'd16;  // nonzero count with explicit mask: mask takes priority
    req_line_mask  = 64'hDEAD_BEEF_0000_0000;
    check("T06b explicit mask overrides line_count",
          1'b1, 1'b0,
          64'hDEAD_BEEF_0000_0000,
          PAGE_A);

    req_base_addr  = BASE_PAGE_A;
    req_line_count = 7'd0;
    req_line_mask  = '0;
    check("T07 count=0 mask=0 (error)",
          1'b0, 1'b1,
          '0,
          PAGE_A);

    req_line_count = 7'd65;
    req_line_mask  = '0;
    check("T07b count=65 (out of range, error)",
          1'b0, 1'b1,
          '0,
          PAGE_A);

    // dec_line_mask is don't-care when req_valid=0; use check_status to avoid false failure.
    req_valid      = 1'b0;
    req_base_addr  = BASE_PAGE_A;
    req_line_count = 7'd0;
    req_line_mask  = '0;
    check_status("T08a req_valid=0 count=0 mask=0", 1'b0, 1'b0);

    req_line_count = 7'd16;
    check_status("T08b req_valid=0 count=16 (don't-care mask)", 1'b0, 1'b0);

    req_line_count = 7'd0;
    req_line_mask  = 64'hDEAD_BEEF_0000_0000;
    check_status("T08c req_valid=0 explicit mask (don't-care)", 1'b0, 1'b0);
    req_line_mask  = '0;

    req_valid      = 1'b1;
    req_base_addr  = {PAGE_A, 6'd4, 6'h00};   // line 4 in page A
    req_line_count = 7'd8;
    req_line_mask  = '0;
    check("T09 non-aligned base line4 count8",
          1'b1, 1'b0,
          64'h0000_0000_0000_0FF0,  // bits 11:4
          PAGE_A);

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
