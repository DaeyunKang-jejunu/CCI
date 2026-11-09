// Testbench for cci_range_hazard_checker.
//
// All tests are purely combinational. The testbench drives entry and probe
// signals, waits one time step for propagation, then checks probe_hazard.
// No clock is required.
//
// Test coverage:
//   T01  No hazard when entry.valid = 0 (idle entry)
//   T02  No hazard when probe_valid = 0
//   T03  No hazard when probe is on a different page
//   T04  No hazard when probe line is not in line_mask
//   T05  Hazard in INVALIDATING state (done_mask all 0)
//   T06  Hazard in TRACKING state (partial done_mask)
//   T07  No hazard when probe line is already done
//   T08  Progressive release: completed lines clear one by one
//   T09  Sparse (non-contiguous) line_mask -- targeted line hazardous
//   T10  Sparse line_mask -- gap line not hazardous
//   T11  No hazard in DONE state (all target lines done)
//   T12  No self-hazard when probe_source_id matches entry.source_id

`timescale 1ns/1ps

module tb_cci_range_hazard_checker;
  import cci_memcpy_pkg::*;

  cci_range_entry_t entry;
  logic             probe_valid;
  cci_master_id_t   probe_source_id;
  cci_addr_t        probe_addr;
  logic             probe_hazard;

  cci_range_hazard_checker dut (
    .entry        (entry),
    .probe_valid  (probe_valid),
    .probe_source_id(probe_source_id),
    .probe_addr   (probe_addr),
    .probe_hazard (probe_hazard)
  );

  int pass_count;
  int fail_count;

  function automatic cci_addr_t make_addr(
    input cci_page_addr_t page_num,
    input cci_line_idx_t  line_idx,
    input logic [LINE_OFFSET_BITS-1:0] byte_off
  );
    return {page_num, line_idx, byte_off};
  endfunction

  function automatic cci_range_entry_t make_entry(
    input cci_range_state_e state,
    input cci_page_addr_t   page_num,
    input cci_line_mask_t   line_mask,
    input cci_line_mask_t   done_mask
  );
    cci_range_entry_t e;
    e.valid          = 1'b1;
    e.state          = state;
    e.base_page_addr = page_num;
    e.line_mask      = line_mask;
    e.done_mask      = done_mask;
    e.source_id      = 4'd1;
    return e;
  endfunction

  function automatic cci_range_entry_t idle_entry();
    cci_range_entry_t e;
    e = '0;
    e.valid = 1'b0;
    return e;
  endfunction

  task automatic check(
    input string test_name,
    input logic  expected
  );
    #1;  // allow combinational propagation
    if (probe_hazard === expected) begin
      $display("PASS  %s", test_name);
      pass_count++;
    end else begin
      $display("FAIL  %s  expected=%0b  got=%0b", test_name, expected, probe_hazard);
      fail_count++;
    end
  endtask

  localparam cci_page_addr_t PAGE_A = 52'h0000_0000_0001;  // base page under test
  localparam cci_page_addr_t PAGE_B = 52'h0000_0000_0002;  // different page

  // line_mask covering lines 0..7 (8 lines, contiguous from index 0)
  localparam cci_line_mask_t MASK_8  = 64'h0000_0000_0000_00FF;
  // sparse mask: lines 2, 5, 10 only
  localparam cci_line_mask_t MASK_SPARSE = (64'h1 << 2) | (64'h1 << 5) | (64'h1 << 10);

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_range_hazard_checker.fst");
    $dumpvars(0, tb_cci_range_hazard_checker);
  end
`endif

  initial begin
    pass_count = 0;
    fail_count = 0;

    entry       = idle_entry();
    probe_valid = 1'b1;
    probe_source_id = 4'd2;
    probe_addr  = make_addr(PAGE_A, 6'd3, 6'd0);
    check("T01 idle entry, no hazard", 1'b0);

    entry       = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_8, '0);
    probe_valid = 1'b0;
    probe_addr  = make_addr(PAGE_A, 6'd3, 6'd0);
    check("T02 probe_valid=0, no hazard", 1'b0);

    entry       = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_8, '0);
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_B, 6'd3, 6'd0);
    check("T03 different page, no hazard", 1'b0);

    entry       = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_8, '0);
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_A, 6'd9, 6'd0);
    check("T04 line not in mask, no hazard", 1'b0);

    entry       = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_8, '0);
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_A, 6'd0, 6'd0);
    check("T05 INVALIDATING line 0, hazard", 1'b1);

    probe_addr  = make_addr(PAGE_A, 6'd7, 6'd0);
    check("T05 INVALIDATING line 7, hazard", 1'b1);

    entry       = make_entry(CCI_RANGE_TRACKING, PAGE_A, MASK_8,
                             64'h0000_0000_0000_000F);  // lines 0..3 done
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_A, 6'd5, 6'd0);
    check("T06 TRACKING pending line 5, hazard", 1'b1);

    probe_addr  = make_addr(PAGE_A, 6'd2, 6'd0);
    check("T07 TRACKING done line 2, no hazard", 1'b0);

    begin
      cci_line_mask_t dmask;
      dmask = 64'h0000_0000_0000_000F;  // lines 0..3 done initially

      for (int i = 4; i <= 7; i++) begin
        entry       = make_entry(CCI_RANGE_TRACKING, PAGE_A, MASK_8, dmask);
        probe_valid = 1'b1;
        probe_addr  = make_addr(PAGE_A, cci_line_idx_t'(i), 6'd0);
        check($sformatf("T08 before done line %0d, hazard", i), 1'b1);

        dmask[i]    = 1'b1;
        entry       = make_entry(CCI_RANGE_TRACKING, PAGE_A, MASK_8, dmask);
        check($sformatf("T08 after  done line %0d, no hazard", i), 1'b0);
      end
    end

    entry       = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_SPARSE, '0);
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_A, 6'd5, 6'd0);
    check("T09 sparse mask targeted line 5, hazard", 1'b1);

    probe_addr  = make_addr(PAGE_A, 6'd3, 6'd0);
    check("T10 sparse mask gap line 3, no hazard", 1'b0);

    entry       = make_entry(CCI_RANGE_DONE, PAGE_A, MASK_8, MASK_8);
    probe_valid = 1'b1;
    probe_addr  = make_addr(PAGE_A, 6'd3, 6'd0);
    check("T11 DONE state all lines complete, no hazard", 1'b0);

    entry           = make_entry(CCI_RANGE_INVALIDATING, PAGE_A, MASK_8, '0);
    probe_valid     = 1'b1;
    probe_source_id = 4'd1;
    probe_addr      = make_addr(PAGE_A, 6'd3, 6'd0);
    check("T12 same source, no self-hazard", 1'b0);

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All tests PASSED.");
      $finish;
    end else
      $fatal(1, "%0d test(s) failed", fail_count);
  end

endmodule
