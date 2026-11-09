// System-level testbench for cci_augmented_system.
//
// Verifies the realistic cost model: existing normal path + proposed memcpy path.
// Key behavioral properties under test:
//
//   T01  Normal only        : CCI_REQ_NORMAL request completes via normal tracker
//   T02  Memcpy only        : CCI_REQ_MEMCPY request completes via memcpy tracker
//   T03  Both simultaneously: both trackers active at the same time; independent
//   T04  Same-ID AW ordering: NORMAL then MEMCPY entries on same AXI ID; B
//                             routing is correct for both
//   T05  CCI_WR_NONE        : ordering-only AW/B does not generate completion
//   T06  Probe normal only  : normal_probe_hazard=1, memcpy_probe_hazard=0
//   T07  Probe both         : both trackers active, same probe → OR=1
//
// AC/CR timing (memcpy path):
//   collect_acs(n) peeks first (no clock advance) then loops.
//   After the loop, one extra @(posedge clk); #1; is required so the last
//   AC handshake registers and ac_gen_done fires in the range unit.
//   drive_cr_responses(n) checks cr_ready before each pulse (ACE protocol).
//
// AW/B timing:
//   do_aw / do_b drive at negedge, return at posedge+#1.
//   After do_b returns, done bits have been updated via NBA.
//
// NORMAL_ENTRIES=4 keeps cycle count low; synthesis uses 16.

`timescale 1ns/1ps

module tb_cci_augmented_system;
  import cci_memcpy_pkg::*;

  localparam int AXI_ID_W       = 4;
  localparam int FIFO_DEPTH     = 4;
  localparam int NORMAL_ENTRIES = 4;

  logic clk;
  logic rst_n;
  initial clk = 1'b0;
  always #5 clk = ~clk;

`ifdef TRACE
  initial begin
    $dumpfile("waves/tb_cci_augmented_system.fst");
    $dumpvars(0, tb_cci_augmented_system);
  end
`endif

  localparam int WATCHDOG_CYCLES = 10_000;
  initial begin
    #(WATCHDOG_CYCLES * 10);
    $fatal(1, "WATCHDOG: simulation exceeded %0d cycles", WATCHDOG_CYCLES);
  end

  // Request
  logic             req_valid;
  logic             req_ready;
  cci_req_type_e    req_type;
  cci_addr_t        req_base_addr;
  cci_line_mask_t   req_line_mask;
  cci_master_id_t   req_source_id;
  cci_line_count_t  req_line_count;
  logic             req_error;

  // AC / CR
  logic             ac_valid;
  logic             ac_ready;
  cci_addr_t        ac_addr;
  logic [3:0]       ac_snoop;
  logic             cr_valid;
  logic             cr_ready;
  logic [4:0]       cr_resp;

  // AW / B
  logic [AXI_ID_W-1:0] awid;
  logic             aw_valid;
  logic             aw_ready;
  cci_wr_track_e    aw_track_type;
  cci_addr_t        awaddr;
  logic [AXI_ID_W-1:0] bid;
  logic             b_valid;
  logic             b_ready;

  // Probe
  logic             probe_valid;
  cci_master_id_t   probe_source_id;
  cci_addr_t        probe_addr;
  logic             normal_probe_hazard;
  logic             memcpy_probe_hazard;
  logic             probe_hazard;

  // Status
  logic             normal_req_error;
  logic             normal_tracker_busy;
  logic             normal_tracker_done;
  logic             memcpy_tracker_busy;
  logic             memcpy_tracker_done;
  logic             write_release;
  logic             invalidation_done;
  logic             snoop_error;
  logic             overflow_sticky;
  logic             underflow_sticky;
  logic [2**AXI_ID_W-1:0] aw_full_mask;

  cci_augmented_system #(
    .AXI_ID_W      (AXI_ID_W),
    .FIFO_DEPTH    (FIFO_DEPTH),
    .NORMAL_ENTRIES(NORMAL_ENTRIES)
  ) dut (
    .clk                  (clk),
    .rst_n                (rst_n),
    .req_valid            (req_valid),
    .req_ready            (req_ready),
    .req_type             (req_type),
    .req_base_addr        (req_base_addr),
    .req_line_mask        (req_line_mask),
    .req_source_id        (req_source_id),
    .req_line_count       (req_line_count),
    .req_error            (req_error),
    .ac_valid             (ac_valid),
    .ac_ready             (ac_ready),
    .ac_addr              (ac_addr),
    .ac_snoop             (ac_snoop),
    .cr_valid             (cr_valid),
    .cr_ready             (cr_ready),
    .cr_resp              (cr_resp),
    .awid                 (awid),
    .aw_valid             (aw_valid),
    .aw_ready             (aw_ready),
    .aw_track_type        (aw_track_type),
    .awaddr               (awaddr),
    .bid                  (bid),
    .b_valid              (b_valid),
    .b_ready              (b_ready),
    .probe_valid          (probe_valid),
    .probe_source_id      (probe_source_id),
    .probe_addr           (probe_addr),
    .normal_probe_hazard  (normal_probe_hazard),
    .memcpy_probe_hazard  (memcpy_probe_hazard),
    .probe_hazard         (probe_hazard),
    .normal_req_error     (normal_req_error),
    .normal_tracker_busy  (normal_tracker_busy),
    .normal_tracker_done  (normal_tracker_done),
    .memcpy_tracker_busy  (memcpy_tracker_busy),
    .memcpy_tracker_done  (memcpy_tracker_done),
    .write_release        (write_release),
    .invalidation_done    (invalidation_done),
    .snoop_error          (snoop_error),
    .overflow_sticky      (overflow_sticky),
    .underflow_sticky     (underflow_sticky),
    .aw_full_mask         (aw_full_mask)
  );

  int pass_count;
  int fail_count;

  localparam cci_page_addr_t PG_A = 52'h0000_0000_0001;
  localparam cci_page_addr_t PG_B = 52'h0000_0000_0002;

  function automatic cci_addr_t line_addr(
    input cci_page_addr_t pg,
    input int             li
  );
    return {pg, cci_line_idx_t'(li), {LINE_OFFSET_BITS{1'b0}}};
  endfunction

  task automatic check_bit(input string label, input logic got, input logic exp);
    if (got === exp) begin
      $display("PASS  %s", label);
      pass_count++;
    end else begin
      $display("FAIL  %s  exp=%0b got=%0b", label, exp, got);
      fail_count++;
    end
  endtask

  task automatic do_reset();
    rst_n          = 1'b0;
    req_valid      = 1'b0;
    req_type       = CCI_REQ_NORMAL;
    req_base_addr  = '0;
    req_line_mask  = '0;
    req_source_id  = '0;
    req_line_count = '0;
    ac_ready       = 1'b1;
    cr_valid       = 1'b0;
    cr_resp        = 5'h00;
    aw_valid       = 1'b0;
    aw_ready       = 1'b1;
    aw_track_type  = CCI_WR_NONE;
    awid           = '0;
    awaddr         = '0;
    b_valid        = 1'b0;
    bid            = '0;
    probe_valid    = 1'b0;
    probe_source_id = '0;
    probe_addr     = '0;
    @(posedge clk); #1;
    rst_n = 1'b1;
    @(posedge clk); #1;
  endtask

  // Submit normal request; returns at posedge+#1 of accept cycle.
  task automatic submit_normal_req(
    input cci_addr_t      base,
    input cci_line_mask_t mask,
    input cci_master_id_t src
  );
    @(negedge clk);
    req_valid      = 1'b1;
    req_type       = CCI_REQ_NORMAL;
    req_base_addr  = base;
    req_line_mask  = mask;
    req_line_count = '0;
    req_source_id  = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // Submit memcpy request (contiguous count mode); returns at posedge+#1.
  task automatic submit_memcpy_req(
    input cci_addr_t       base,
    input cci_line_count_t count,
    input cci_master_id_t  src
  );
    @(negedge clk);
    req_valid      = 1'b1;
    req_type       = CCI_REQ_MEMCPY;
    req_base_addr  = base;
    req_line_mask  = '0;  // count mode
    req_line_count = count;
    req_source_id  = src;
    @(posedge clk); #1;
    req_valid = 1'b0;
  endtask

  // Collect n ACs (peek first; last AC still pending on exit — caller must
  // do one extra @(posedge clk); #1; to complete it).
  task automatic collect_acs(input int n, output int cnt);
    int cyc;
    cnt = 0; cyc = 0;
    ac_ready = 1'b1;
    if (ac_valid && ac_ready) cnt++;
    while (cnt < n) begin
      @(posedge clk); #1;
      cyc++;
      if (ac_valid && ac_ready) cnt++;
      if (cyc > n + 16)
        $fatal(1, "collect_acs timeout: got %0d/%0d", cnt, n);
    end
  endtask

  // Drive n CR responses; checks cr_ready before each.
  task automatic drive_cr_responses(input int n);
    for (int i = 0; i < n; i++) begin
      @(negedge clk);
      if (!cr_ready)
        $fatal(1, "drive_cr_responses[%0d]: cr_ready=0", i);
      cr_valid = 1'b1;
      @(posedge clk); #1;
      cr_valid = 1'b0;
    end
  endtask

  task automatic do_aw(
    input logic [AXI_ID_W-1:0] id,
    input cci_addr_t            addr,
    input cci_wr_track_e        trk
  );
    @(negedge clk);
    aw_valid = 1'b1; awid = id; awaddr = addr; aw_track_type = trk;
    @(posedge clk); #1;
    aw_valid = 1'b0; aw_track_type = CCI_WR_NONE;
  endtask

  task automatic do_b(input logic [AXI_ID_W-1:0] id);
    @(negedge clk);
    b_valid = 1'b1; bid = id;
    @(posedge clk); #1;
    b_valid = 1'b0;
  endtask

  // Convenience: AW + B for a normal write completion on a given page/line.
  task automatic do_normal_aw_b(
    input logic [AXI_ID_W-1:0] id,
    input cci_page_addr_t       pg,
    input int                   li
  );
    do_aw(id, line_addr(pg, li), CCI_WR_NORMAL);
    do_b(id);
  endtask

  // Convenience: AW + B for a memcpy write completion on a given page/line.
  task automatic do_memcpy_aw_b(
    input logic [AXI_ID_W-1:0] id,
    input cci_page_addr_t       pg,
    input int                   li
  );
    do_aw(id, line_addr(pg, li), CCI_WR_MEMCPY);
    do_b(id);
  endtask

  // ---------------------------------------------------------------------------
  // T01: Normal-only path
  // ---------------------------------------------------------------------------
  task test_T01();
    int cnt;
    $display("--- T01: normal-only request ---");
    check_bit("T01 normal_ready=1 idle",   req_ready,           1'b1);
    check_bit("T01 memcpy_busy=0 idle",    memcpy_tracker_busy, 1'b0);

    submit_normal_req(line_addr(PG_A, 0), 64'h3, 4'd1); // lines 0,1
    check_bit("T01 normal_busy after accept", normal_tracker_busy, 1'b1);
    check_bit("T01 memcpy_busy=0",            memcpy_tracker_busy, 1'b0);

    do_normal_aw_b(4'd0, PG_A, 0);
    check_bit("T01 normal_done=0 after line0",normal_tracker_done, 1'b0);
    do_normal_aw_b(4'd0, PG_A, 1);
    check_bit("T01 normal_done=1 after line1",normal_tracker_done, 1'b1);
    check_bit("T01 memcpy_busy=0 final",      memcpy_tracker_busy, 1'b0);
    check_bit("T01 snoop_error=0",            snoop_error,         1'b0);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T02: Memcpy-only path
  // ---------------------------------------------------------------------------
  task test_T02();
    int cnt;
    $display("--- T02: memcpy-only request ---");
    check_bit("T02 normal_busy=0 idle",    normal_tracker_busy, 1'b0);

    submit_memcpy_req(line_addr(PG_A, 0), 7'd2, 4'd1); // 2 lines
    check_bit("T02 memcpy_busy after accept", memcpy_tracker_busy, 1'b1);
    check_bit("T02 normal_busy=0",            normal_tracker_busy, 1'b0);
    check_bit("T02 req_error=0",              req_error,           1'b0);

    collect_acs(2, cnt);
    check_bit("T02 2 ACs counted", cnt == 2, 1'b1);
    @(posedge clk); #1; // complete last AC handshake

    check_bit("T02 write_release=0 before CRs", write_release, 1'b0);
    drive_cr_responses(2);
    check_bit("T02 write_release=1 after CRs",  write_release, 1'b1);

    do_memcpy_aw_b(4'd1, PG_A, 0);
    check_bit("T02 memcpy_done=0 after line0", memcpy_tracker_done, 1'b0);
    do_memcpy_aw_b(4'd1, PG_A, 1);
    check_bit("T02 memcpy_done=1 after line1", memcpy_tracker_done, 1'b1);
    check_bit("T02 normal_busy=0 final",       normal_tracker_busy, 1'b0);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T03: Both trackers active simultaneously
  // Normal tracker (ID=0) active when memcpy tracker (ID=1) is submitted.
  // Memcpy completes first; normal completes afterward.
  // ---------------------------------------------------------------------------
  task test_T03();
    int cnt;
    $display("--- T03: both trackers active simultaneously ---");

    submit_normal_req(line_addr(PG_A, 0), 64'h3, 4'd1); // lines 0,1
    check_bit("T03 normal_busy after normal req", normal_tracker_busy, 1'b1);

    // memcpy tracker is idle; submit while normal is still active
    submit_memcpy_req(line_addr(PG_A, 0), 7'd2, 4'd2);
    check_bit("T03 memcpy_busy after memcpy req", memcpy_tracker_busy, 1'b1);
    check_bit("T03 normal_busy still=1",          normal_tracker_busy, 1'b1);

    // drain memcpy ACs + CRs
    collect_acs(2, cnt);
    @(posedge clk); #1;
    drive_cr_responses(2);
    check_bit("T03 write_release=1",              write_release,       1'b1);

    // complete memcpy writes (ID=1) first
    do_memcpy_aw_b(4'd1, PG_A, 0);
    do_memcpy_aw_b(4'd1, PG_A, 1);
    check_bit("T03 memcpy_done=1",                memcpy_tracker_done, 1'b1);
    check_bit("T03 normal_busy still=1",          normal_tracker_busy, 1'b1);
    @(posedge clk); #1;

    // complete normal writes (ID=0) afterward
    do_normal_aw_b(4'd0, PG_A, 0);
    do_normal_aw_b(4'd0, PG_A, 1);
    check_bit("T03 normal_done=1",                normal_tracker_done, 1'b1);
    check_bit("T03 memcpy_busy=0 after release",  memcpy_tracker_busy, 1'b0);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T04: Same AXI ID ordering — NORMAL entry then MEMCPY entry on ID=0
  // Verifies that the B-response demux routes correctly in FIFO order.
  // ---------------------------------------------------------------------------
  task test_T04();
    int cnt;
    $display("--- T04: same AXI ID NORMAL/MEMCPY ordering ---");

    // Submit both requests (1 line each on PG_A line 0)
    submit_normal_req(line_addr(PG_A, 0), 64'h1, 4'd1);
    submit_memcpy_req(line_addr(PG_A, 0), 7'd1, 4'd2);

    // drain memcpy ACs + CRs before issuing any AWs
    collect_acs(1, cnt);
    @(posedge clk); #1;
    drive_cr_responses(1);
    check_bit("T04 write_release=1",             write_release,       1'b1);

    // Push NORMAL entry first, MEMCPY second (both on ID=0)
    do_aw(4'd0, line_addr(PG_A, 0), CCI_WR_NORMAL);
    do_aw(4'd0, line_addr(PG_A, 0), CCI_WR_MEMCPY);

    // B1 → pops NORMAL entry → normal_tracker done
    do_b(4'd0);
    check_bit("T04 normal_done=1 after B1", normal_tracker_done, 1'b1);
    check_bit("T04 memcpy_done=0 after B1", memcpy_tracker_done, 1'b0);

    // B2 → pops MEMCPY entry → memcpy_tracker done
    do_b(4'd0);
    check_bit("T04 memcpy_done=1 after B2", memcpy_tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T05: CCI_WR_NONE ordering-only — no completion fired
  // ---------------------------------------------------------------------------
  task test_T05();
    $display("--- T05: CCI_WR_NONE ordering only ---");
    submit_normal_req(line_addr(PG_A, 0), 64'h1, 4'd1);

    // unrelated AW+B (CCI_WR_NONE) — must not trigger completion
    do_aw(4'd0, line_addr(PG_B, 0), CCI_WR_NONE);
    do_b(4'd0);
    check_bit("T05 normal_done=0 after NONE", normal_tracker_done, 1'b0);
    check_bit("T05 normal_busy=1 still",      normal_tracker_busy, 1'b1);

    // real NORMAL AW+B
    do_normal_aw_b(4'd0, PG_A, 0);
    check_bit("T05 normal_done=1 after NORMAL", normal_tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T06: Probe hazard — normal tracker only (memcpy idle)
  // ---------------------------------------------------------------------------
  task test_T06();
    $display("--- T06: probe hazard normal tracker only ---");
    submit_normal_req(line_addr(PG_A, 0), 64'h3, 4'd1); // lines 0,1 source=1

    probe_valid      = 1'b1;
    probe_source_id  = 4'd2; // different source
    probe_addr       = line_addr(PG_A, 0);
    #1;
    check_bit("T06 normal_probe_hazard=1", normal_probe_hazard, 1'b1);
    check_bit("T06 memcpy_probe_hazard=0", memcpy_probe_hazard, 1'b0);
    check_bit("T06 probe_hazard=1 (OR)",   probe_hazard,        1'b1);
    probe_valid = 1'b0;

    // complete and clean up
    do_normal_aw_b(4'd0, PG_A, 0);
    do_normal_aw_b(4'd0, PG_A, 1);
    @(posedge clk); #1;
  endtask

  // ---------------------------------------------------------------------------
  // T07: Probe hazard — both trackers active → merged OR
  // Both request source=1, probe source=2; both track line 0 of PG_A.
  // ---------------------------------------------------------------------------
  task test_T07();
    int cnt;
    $display("--- T07: probe hazard both trackers ---");

    submit_normal_req(line_addr(PG_A, 0), 64'h1, 4'd1); // line 0, source=1
    submit_memcpy_req(line_addr(PG_A, 0), 7'd1, 4'd1);  // line 0, source=1

    // drain memcpy ACs (memcpy tracker still in INVALIDATING = hazard active)
    collect_acs(1, cnt);
    @(posedge clk); #1;

    probe_valid      = 1'b1;
    probe_source_id  = 4'd2;
    probe_addr       = line_addr(PG_A, 0);
    #1;
    check_bit("T07 normal_probe_hazard=1", normal_probe_hazard, 1'b1);
    check_bit("T07 memcpy_probe_hazard=1", memcpy_probe_hazard, 1'b1);
    check_bit("T07 probe_hazard=1 (OR)",   probe_hazard,        1'b1);
    probe_valid = 1'b0;

    // finish memcpy: send CR → write_release → MEMCPY AW/B
    drive_cr_responses(1);
    do_memcpy_aw_b(4'd1, PG_A, 0);
    check_bit("T07 memcpy_done=1",  memcpy_tracker_done, 1'b1);
    @(posedge clk); #1;

    // finish normal
    do_normal_aw_b(4'd0, PG_A, 0);
    check_bit("T07 normal_done=1",  normal_tracker_done, 1'b1);
    @(posedge clk); #1;
  endtask

  // T08: Normal path with arbitrary line positions (lines 16-17, > NORMAL_ENTRIES=4)
  task test_T08();
    $display("--- T08: normal req arbitrary lines 16-17 (> NORMAL_ENTRIES) ---");
    submit_normal_req(line_addr(PG_A, 0), 64'h3 << 16, 4'd1);
    check_bit("T08 normal_tracker_busy=1", normal_tracker_busy, 1'b1);
    check_bit("T08 req_ready=0",           req_ready,           1'b0);

    do_normal_aw_b(4'd0, PG_A, 16);
    check_bit("T08 normal_done=0 after line 16", normal_tracker_done, 1'b0);
    do_normal_aw_b(4'd0, PG_A, 17);
    check_bit("T08 normal_done=1 after line 17", normal_tracker_done, 1'b1);

    @(posedge clk); #1;
    check_bit("T08 req_ready=1 after done",  req_ready,           1'b1);
    check_bit("T08 normal_tracker_busy=0",   normal_tracker_busy, 1'b0);
  endtask

  // T09: normal_req_error on zero mask (normal path)
  task test_T09();
    $display("--- T09: normal_req_error on zero mask ---");
    @(negedge clk);
    req_valid      = 1'b1;
    req_type       = CCI_REQ_NORMAL;
    req_base_addr  = line_addr(PG_A, 0);
    req_line_mask  = '0;   // zero mask — illegal
    req_source_id  = 4'd1;
    req_line_count = '0;
    @(posedge clk); #1;
    check_bit("T09 normal_req_error=1 zero mask",  normal_req_error,    1'b1);
    check_bit("T09 req_ready=1 (idle)",            req_ready,           1'b1);
    check_bit("T09 normal_tracker_busy=0",         normal_tracker_busy, 1'b0);
    check_bit("T09 memcpy_tracker_busy=0",         memcpy_tracker_busy, 1'b0);
    req_valid = 1'b0;
    @(posedge clk); #1;
    check_bit("T09 normal_tracker_busy=0 next cycle", normal_tracker_busy, 1'b0);
    check_bit("T09 normal_req_error=0 idle",          normal_req_error,    1'b0);
  endtask

  initial begin
    pass_count = 0;
    fail_count = 0;

    do_reset(); test_T01(); @(posedge clk); #1;
    do_reset(); test_T02(); @(posedge clk); #1;
    do_reset(); test_T03(); @(posedge clk); #1;
    do_reset(); test_T04(); @(posedge clk); #1;
    do_reset(); test_T05(); @(posedge clk); #1;
    do_reset(); test_T06(); @(posedge clk); #1;
    do_reset(); test_T07(); @(posedge clk); #1;
    do_reset(); test_T08(); @(posedge clk); #1;
    do_reset(); test_T09();

    $display("-------------------------------");
    $display("Results: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0) begin
      $display("All cci_augmented_system tests PASSED.");
      $finish;
    end else begin
      $display("FAILURES detected.");
      $fatal(1, "%0d test(s) failed", fail_count);
    end
  end

endmodule
