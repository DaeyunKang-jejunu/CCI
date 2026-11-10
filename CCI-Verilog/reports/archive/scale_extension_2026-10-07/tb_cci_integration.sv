`timescale 1ns/1ps
module tb_cci_integration #(
    parameter bit USE_RANGE=1,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES,
    parameter int M1_INGRESS_DEPTH=16
);
    localparam int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128;
    logic  ACLK;
    logic  ARESETn;
    logic  M0_AWVALID;
    logic  M0_AWREADY;
    logic [ID_WIDTH-1:0] M0_AWID;
    logic [ADDR_WIDTH-1:0] M0_AWADDR;
    logic [7:0] M0_AWLEN;
    logic  M0_WVALID;
    logic  M0_WREADY;
    logic [DATA_WIDTH-1:0] M0_WDATA;
    logic  M0_WLAST;
    logic  M0_BVALID;
    logic  M0_BREADY;
    logic [ID_WIDTH-1:0] M0_BID;
    logic [1:0] M0_BRESP;
    logic  M0_ARVALID;
    logic  M0_ARREADY;
    logic [ID_WIDTH-1:0] M0_ARID;
    logic [ADDR_WIDTH-1:0] M0_ARADDR;
    logic [7:0] M0_ARLEN;
    logic  M0_RVALID;
    logic  M0_RREADY;
    logic [ID_WIDTH-1:0] M0_RID;
    logic [DATA_WIDTH-1:0] M0_RDATA;
    logic  M0_RLAST;
    logic [1:0] M0_RRESP;
    logic  M1_AWVALID;
    logic  M1_AWREADY;
    logic [ID_WIDTH-1:0] M1_AWID;
    logic [ADDR_WIDTH-1:0] M1_AWADDR;
    logic [7:0] M1_AWLEN;
    logic  M1_WVALID;
    logic  M1_WREADY;
    logic [DATA_WIDTH-1:0] M1_WDATA;
    logic  M1_WLAST;
    logic  M1_BVALID;
    logic  M1_BREADY;
    logic [ID_WIDTH-1:0] M1_BID;
    logic [1:0] M1_BRESP;
    logic  M1_ARVALID;
    logic  M1_ARREADY;
    logic [ID_WIDTH-1:0] M1_ARID;
    logic [ADDR_WIDTH-1:0] M1_ARADDR;
    logic [7:0] M1_ARLEN;
    logic  M1_RVALID;
    logic  M1_RREADY;
    logic [ID_WIDTH-1:0] M1_RID;
    logic [DATA_WIDTH-1:0] M1_RDATA;
    logic  M1_RLAST;
    logic [1:0] M1_RRESP;
    logic  S_AWVALID;
    logic  S_AWREADY;
    logic [ID_WIDTH:0] S_AWID;
    logic [ADDR_WIDTH-1:0] S_AWADDR;
    logic [7:0] S_AWLEN;
    logic  S_WVALID;
    logic  S_WREADY;
    logic [DATA_WIDTH-1:0] S_WDATA;
    logic  S_WLAST;
    logic  S_BVALID;
    logic  S_BREADY;
    logic [ID_WIDTH:0] S_BID;
    logic [1:0] S_BRESP;
    logic  S_ARVALID;
    logic  S_ARREADY;
    logic [ID_WIDTH:0] S_ARID;
    logic [ADDR_WIDTH-1:0] S_ARADDR;
    logic [7:0] S_ARLEN;
    logic  S_RVALID;
    logic  S_RREADY;
    logic [ID_WIDTH:0] S_RID;
    logic [DATA_WIDTH-1:0] S_RDATA;
    logic  S_RLAST;
    logic [1:0] S_RRESP;
    logic  protocol_error_wlast;
    logic  protocol_error_rlast;
    logic  protocol_error_bid_order;
    logic  protocol_error_rid_order;
    logic  protocol_error_outstanding_overflow;
    logic  setup_valid;
    logic  setup_ready;
    logic [63:0] setup_addr;
    logic [63:0] setup_mask;
    logic [6:0] setup_count;
    logic [3:0] setup_source;
    logic  setup_error;
    logic  ACVALID;
    logic  ACREADY;
    logic [63:0] ACADDR;
    logic [3:0] ACSNOOP;
    logic  CRVALID;
    logic  CRREADY;
    logic [1:0] CRRESP;
    logic  snoop_idle;
    logic  range_active;
    logic  write_release;
    logic [63:0] wr_issued_mask;
    logic [63:0] done_mask;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count;
    logic  tracker_full_stall;
    logic  admission_freeze;
    axi_cci_top #(.USE_RANGE(USE_RANGE), .M1_INGRESS_DEPTH(M1_INGRESS_DEPTH), .LINE_TRACKER_ENTRIES(LINE_TRACKER_ENTRIES),
        .CONV_AC_FIFO_DEPTH(CONV_AC_FIFO_DEPTH), .RANGE_MAX_ACTIVE_CYCLES(2000)) dut (.*);
    logic [1:0] raw_crresp, raw_bresp;
    bit inject_range_cr_error, inject_b_error;
    assign CRRESP=inject_range_cr_error && range_active && !write_release ? 2'b10 : raw_crresp;
    assign S_BRESP=inject_b_error ? 2'b10 : raw_bresp;
    logic slave_awready, slave_arready, slave_wready, slave_werror;
    logic permit_cr=1, permit_ac=1, endpoint_acready, endpoint_crvalid, endpoint_idle;
    logic aw_enable=1, ar_enable=1, w_enable=1, random_stalls=1;
    int cycle;
    int unsigned seed=1, aw_rng, ar_rng, w_rng;
    bit seeded_stalls;
    function automatic int unsigned rng_next(input int unsigned x);
        x ^= x << 13; x ^= x >> 17; x ^= x << 5; return x;
    endfunction
    initial begin
        seeded_stalls=$value$plusargs("seed=%d",seed);
        inject_range_cr_error=$test$plusargs("range_cr_error");
        inject_b_error=$test$plusargs("b_error");
    end
    // Every case reset restarts the same time-indexed external READY trace.
    always @(posedge ACLK) begin
        if(!ARESETn) begin
            aw_rng <= (seed ^ 32'h12345678) | 1;
            ar_rng <= (seed ^ 32'h87654321) | 1;
            w_rng <= (seed ^ 32'habcdef01) | 1;
        end else begin
            aw_rng<=rng_next(aw_rng); ar_rng<=rng_next(ar_rng); w_rng<=rng_next(w_rng);
        end
    end
    wire aw_go=!random_stalls || (seeded_stalls ? aw_rng[0] : cycle%5!=0);
    wire ar_go=!random_stalls || (seeded_stalls ? ar_rng[0] : cycle%7!=0);
    wire w_go=!random_stalls || (seeded_stalls ? w_rng[0] : cycle%4!=0);
    assign S_AWREADY=slave_awready && aw_enable && aw_go;
    assign S_ARREADY=slave_arready && ar_enable && ar_go;
    assign S_WREADY=slave_wready && w_enable && w_go;
    simple_axi_slave #(.ID_WIDTH(5), .ADDR_WIDTH(64), .DATA_WIDTH(128),
        .MAX_OUTSTANDING_TRANSACTIONS(16), .RESP_LATENCY(5)) memory (
        .ACLK, .ARESETn,
        .AWVALID(S_AWVALID && aw_enable && aw_go), .AWREADY(slave_awready),
        .AWID(S_AWID), .AWADDR(S_AWADDR), .AWLEN(S_AWLEN),
        .WVALID(S_WVALID && w_enable && w_go), .WREADY(slave_wready),
        .WDATA(S_WDATA), .WLAST(S_WLAST), .BVALID(S_BVALID), .BREADY(S_BREADY), .BID(S_BID), .BRESP(raw_bresp),
        .ARVALID(S_ARVALID && ar_enable && ar_go), .ARREADY(slave_arready),
        .ARID(S_ARID), .ARADDR(S_ARADDR), .ARLEN(S_ARLEN),
        .RVALID(S_RVALID), .RREADY(S_RREADY), .RID(S_RID), .RDATA(S_RDATA), .RLAST(S_RLAST), .RRESP(S_RRESP),
        .protocol_error_wlast(slave_werror)
    );
    m0_snoop_endpoint #(.DEPTH(16), .LATENCY(12)) endpoint (
        .clk(ACLK), .rst_n(ARESETn), .ac_valid(ACVALID && permit_ac), .ac_ready(endpoint_acready),
        .ac_addr(ACADDR), .ac_snoop(ACSNOOP), .cr_valid(endpoint_crvalid),
        .cr_ready(CRREADY && permit_cr), .cr_resp(raw_crresp), .idle(endpoint_idle)
    );
    assign ACREADY=endpoint_acready && permit_ac;
    assign CRVALID=endpoint_crvalid && permit_cr;
    assign snoop_idle=endpoint_idle;
    initial ACLK=0;
    always #5 ACLK=~ACLK;
    task automatic ticks(input int n);
        repeat(n) @(negedge ACLK);
    endtask
    int accepted, downstream, completed, w_finished, ac_total, cr_total;
    logic [63:0] expected_done_mask, expected_reserved_mask;
    int setup_errors;
    int peak_tracker, tracker_stalls, ingress_stalls, peak_ac, peak_ingress;
    logic [63:0] expected_addr[4096];
    logic [3:0] expected_id[4096];
    logic expected_path[4096];
    logic expected_ac_sent[4096], expected_cr_done[4096];
    int ac_owner[4096];
    logic [63:0] expected_range_ac;
    // Reference state is driven exclusively by public setup/AW/AC/CR/B events.
    // It never reads DUT classifier, context, tracker, or FIFO state.
    bit ref_setup_seen;
    logic [51:0] ref_page;
    logic [63:0] ref_mask;
    int ref_old_write_limit, ref_required_cr, ref_received_cr;
    bit slave_write_route[8192];
    int slave_aw_count, slave_w_count;
    int downstream_w, beat_w;
    int last_ac_cycle, ac_run, max_ac_run;
    function automatic [127:0] data_pattern(input int txn, beat);
        return {32'hc0ffee01,32'(txn),32'(beat),32'hfacebeef};
    endfunction
    always @(posedge ACLK) begin
        if (!ARESETn) begin
            ref_setup_seen=0; ref_page=0; ref_mask=0; ref_old_write_limit=0;
            ref_required_cr=0; ref_received_cr=0; slave_aw_count=0; slave_w_count=0;
            last_ac_cycle=-2; ac_run=0; max_ac_run=0;
            cycle=0; expected_range_ac=0; expected_done_mask=0; expected_reserved_mask=0; setup_errors=0; accepted=0; downstream=0; completed=0; ac_total=0; cr_total=0;
            peak_tracker=0; tracker_stalls=0; ingress_stalls=0; peak_ac=0; peak_ingress=0;
            downstream_w=0; beat_w=0;
        end else begin
            if (range_active) begin
                assert (done_mask==expected_done_mask && wr_issued_mask==expected_reserved_mask)
                    else $fatal(1,"independent actual-B/reservation bitmap scoreboard");
            end
            if (setup_valid && setup_ready && setup_source==1 && setup_addr[5:0]==0 &&
                (setup_mask!=0 || (setup_count>0 && int'(setup_addr[11:6])+int'(setup_count)<=64))) begin
                ref_setup_seen=1; ref_page=setup_addr[63:12]; ref_mask=setup_mask;
                if (setup_mask==0) begin
                    ref_mask=0;
                    for(int l=0;l<int'(setup_count);l++) ref_mask[int'(setup_addr[11:6])+l]=1;
                end
                ref_old_write_limit=accepted; ref_required_cr=$countones(ref_mask); ref_received_cr=0;
                expected_done_mask=0; expected_reserved_mask=0; expected_range_ac=0;
            end
            cycle++;
            if(setup_error) setup_errors++;
            if (M1_AWVALID && M1_AWREADY) begin
                expected_addr[accepted]=M1_AWADDR; expected_id[accepted]=M1_AWID;
                expected_path[accepted]=USE_RANGE && ref_setup_seen && M1_AWADDR[63:12]==ref_page &&
                    ref_mask[M1_AWADDR[11:6]] && !expected_reserved_mask[M1_AWADDR[11:6]];
                expected_ac_sent[accepted]=0; expected_cr_done[accepted]=0;
                if (expected_path[accepted]) expected_reserved_mask[M1_AWADDR[11:6]]=1;
                accepted++;
            end
            if (S_AWVALID && S_AWREADY && S_AWID[4]) begin
                assert (downstream<accepted && S_AWADDR==expected_addr[downstream] &&
                        S_AWID[3:0]==expected_id[downstream] && S_AWLEN==3)
                    else $fatal(1,"downstream AW order/payload");
                if (expected_path[downstream]) begin
                    assert(ref_received_cr==ref_required_cr && write_release) else $fatal(1,"early range AW");
                end else assert(expected_cr_done[downstream]) else $fatal(1,"AW preceded its own CR");
                downstream++;
            end
            if (S_AWVALID && S_AWREADY) begin
                slave_write_route[slave_aw_count]=S_AWID[4]; slave_aw_count++;
            end
            if (S_WVALID && S_WREADY && slave_write_route[slave_w_count]) begin
                assert (S_WDATA==data_pattern(downstream_w,beat_w) && S_WLAST==(beat_w==3))
                    else $fatal(1,"write data association txn=%0d beat=%0d",downstream_w,beat_w);
                if (beat_w==3) begin beat_w=0; downstream_w++; end else beat_w++;
            end
            if (S_WVALID && S_WREADY && S_WLAST) slave_w_count++;
            if (M1_BVALID && M1_BREADY) begin
                assert (completed<downstream && M1_BID==expected_id[completed] && (inject_b_error || M1_BRESP==0))
                    else $fatal(1,"actual B response order");
                if (expected_path[completed]) expected_done_mask[expected_addr[completed][11:6]]=1;
                completed++;
            end
            if (ACVALID && ACREADY) begin
                if(last_ac_cycle==cycle-1) ac_run++; else ac_run=1;
                last_ac_cycle=cycle; if(ac_run>max_ac_run) max_ac_run=ac_run;
                if (ref_setup_seen && completed>=ref_old_write_limit && ref_received_cr<ref_required_cr) begin
                    assert (ACADDR[63:12]==ref_page &&
                            ref_mask[ACADDR[11:6]] &&
                            !expected_range_ac[ACADDR[11:6]]) else $fatal(1,"range AC address/duplicate");
                    expected_range_ac[ACADDR[11:6]]=1;
                    ac_owner[ac_total]=-1;
                end else begin
                    automatic int oldest=-1;
                    for (int i=0;i<accepted;i++)
                        if (!expected_path[i] && !expected_ac_sent[i] && oldest<0) oldest=i;
                    assert(oldest>=0 && ACADDR==expected_addr[oldest])
                        else $fatal(1,"conventional AC age/address");
                    expected_ac_sent[oldest]=1; ac_owner[ac_total]=oldest;
                end
                ac_total++;
            end
            if (CRVALID && CRREADY) begin
                assert(cr_total<ac_total) else $fatal(1,"unsolicited CR");
                if (ac_owner[cr_total]>=0) expected_cr_done[ac_owner[cr_total]]=1;
                else ref_received_cr++;
                cr_total++;
            end
            if (tracker_count>peak_tracker) peak_tracker=int'(tracker_count);
            if (ingress_count>peak_ingress) peak_ingress=int'(ingress_count);
            if (dut.coherent.control.ac_count>peak_ac) peak_ac=int'(dut.coherent.control.ac_count);
            if (tracker_full_stall) tracker_stalls++;
            if (M1_AWVALID && !M1_AWREADY) ingress_stalls++;
            assert (!(protocol_error_wlast || protocol_error_rlast || protocol_error_bid_order ||
                protocol_error_rid_order || protocol_error_outstanding_overflow || slave_werror))
                else $fatal(1,"AXI protocol flags");
        end
    end
    // W stream starts only for accepted AWs, but runs independently of AW producer.
    initial begin
        M1_WVALID=0; M1_WDATA=0; M1_WLAST=0; w_finished=0;
        forever begin
            @(negedge ACLK);
            if (!ARESETn) begin w_finished=0; M1_WVALID=0; end
            else if (w_finished<accepted) begin
                for (int beat=0;beat<4;beat++) begin
                    M1_WVALID=1; M1_WDATA=data_pattern(w_finished,beat); M1_WLAST=(beat==3);
                    do @(posedge ACLK); while (ARESETn && !M1_WREADY);
                    @(negedge ACLK);
                    M1_WVALID=0;
                    if(!ARESETn) break;
                end
                if(ARESETn) w_finished++; else w_finished=0;
            end
        end
    end
    task automatic send_aw(input logic [63:0] addr);
        @(negedge ACLK); M1_AWVALID=1; M1_AWADDR=addr; M1_AWID=4'(accepted); M1_AWLEN=3;
        do @(posedge ACLK); while (!M1_AWREADY);
        @(negedge ACLK); M1_AWVALID=0;
    endtask
    task automatic setup(input logic [63:0] addr, input int count, input logic [63:0] mask=0);
        @(negedge ACLK); setup_valid=1; setup_addr=addr; setup_count=7'(count); setup_mask=mask;
        do @(posedge ACLK); while (!setup_ready);
        @(negedge ACLK); setup_valid=0;
    endtask
    task automatic drain;
        wait(completed==accepted && ingress_count==0 && !range_active);
        ticks(3);
    endtask
    task automatic reset_case;
        @(negedge ACLK); ARESETn=0; M1_AWVALID=0; M0_AWVALID=0; M0_ARVALID=0;
        M0_WVALID=0; M1_ARVALID=0; setup_valid=0;
        M1_BREADY=1; M0_BREADY=1; M0_RREADY=1; M1_RREADY=1;
        permit_ac=1; permit_cr=1; aw_enable=1; ar_enable=1; w_enable=1;
        ticks(4); ARESETn=1; ticks(2);
    endtask
    task automatic m0_read(input logic [63:0] addr, input string hazard_case="", input string block_case="", input bit cross_probe=0);
        int waited;
        waited=0;
        @(negedge ACLK); M0_ARADDR=addr; M0_ARLEN=3; M0_ARID=9; M0_ARVALID=1;
        do begin
            @(posedge ACLK);
            if (block_case!="" || cross_probe) begin
                assert(range_active && !admission_freeze && tracker_count==0)
                    else $fatal(1,"HAZARD_BLOCK_PRECONDITION:AR");
                for(int e=0;e<M1_INGRESS_DEPTH;e++)
                    assert(!dut.coherent.control.entries[e].valid || dut.coherent.control.path[e])
                        else $fatal(1,"HAZARD_CONVENTIONAL_CONTAMINATION");
                if (cross_probe) begin
                    waited++;
                    assert(M0_ARREADY || waited<8)
                        else $fatal(1,"HAZARD_CROSS_ACCEPT_TIMEOUT:AR");
                end else if (completed==0) begin
                    assert(!M0_ARREADY)
                        else $fatal(1,"HAZARD_BLOCK_MISSING:AR:%s",block_case);
                end else begin
                    waited++;
                    assert(M0_ARREADY || waited<8)
                        else $fatal(1,"HAZARD_RELEASE_TIMEOUT:AR:%s",block_case);
                end
            end
            if (hazard_case!="") begin
                assert(range_active && !admission_freeze && ingress_count==0 && tracker_count==0)
                    else $fatal(1,"HAZARD_PROBE_PRECONDITION AR %s",hazard_case);
                waited++;
                assert(M0_ARREADY || waited<8)
                    else $fatal(1,"HAZARD_ACCEPT_TIMEOUT:%s:AR",hazard_case);
            end
        end while (!M0_ARREADY);
        @(negedge ACLK); M0_ARVALID=0;
        do @(posedge ACLK); while (!(M0_RVALID && M0_RREADY && M0_RLAST));
        @(negedge ACLK);
    endtask
    task automatic m1_read(input logic [63:0] addr);
        @(negedge ACLK); M1_ARADDR=addr; M1_ARLEN=3; M1_ARID=6; M1_ARVALID=1;
        do @(posedge ACLK); while (!M1_ARREADY);
        @(negedge ACLK); M1_ARVALID=0;
        do @(posedge ACLK); while (!(M1_RVALID && M1_RREADY && M1_RLAST));
        @(negedge ACLK);
    endtask
    task automatic m0_write(input logic [63:0] addr, input string hazard_case="", input string block_case="", input bit cross_probe=0);
        int waited;
        waited=0;
        @(negedge ACLK); M0_AWADDR=addr; M0_AWLEN=3; M0_AWID=8; M0_AWVALID=1;
        do begin
            @(posedge ACLK);
            if (block_case!="" || cross_probe) begin
                assert(range_active && !admission_freeze && tracker_count==0)
                    else $fatal(1,"HAZARD_BLOCK_PRECONDITION:AW");
                for(int e=0;e<M1_INGRESS_DEPTH;e++)
                    assert(!dut.coherent.control.entries[e].valid || dut.coherent.control.path[e])
                        else $fatal(1,"HAZARD_CONVENTIONAL_CONTAMINATION");
                if (cross_probe) begin
                    waited++;
                    assert(M0_AWREADY || waited<8)
                        else $fatal(1,"HAZARD_CROSS_ACCEPT_TIMEOUT:AW");
                end else if (completed==0) begin
                    assert(!M0_AWREADY)
                        else $fatal(1,"HAZARD_BLOCK_MISSING:AW:%s",block_case);
                end else begin
                    waited++;
                    assert(M0_AWREADY || waited<8)
                        else $fatal(1,"HAZARD_RELEASE_TIMEOUT:AW:%s",block_case);
                end
            end
            if (hazard_case!="") begin
                assert(range_active && !admission_freeze && ingress_count==0 && tracker_count==0)
                    else $fatal(1,"HAZARD_PROBE_PRECONDITION AW %s",hazard_case);
                waited++;
                assert(M0_AWREADY || waited<8)
                    else $fatal(1,"HAZARD_ACCEPT_TIMEOUT:%s:AW",hazard_case);
            end
        end while (!M0_AWREADY);
        @(negedge ACLK); M0_AWVALID=0;
        for(int b=0;b<4;b++) begin
            M0_WVALID=1; M0_WDATA=128'(b); M0_WLAST=(b==3);
            do @(posedge ACLK); while (!M0_WREADY);
            @(negedge ACLK); M0_WVALID=0;
        end
        do @(posedge ACLK); while (!(M0_BVALID && M0_BREADY));
        @(negedge ACLK);
    endtask
    // Independent range-only safety probes; the opposite channel accesses a non-target.
    task automatic range_block_case(input int phase, input bit aw_probe);
        string label;
        label=(phase==0)?"INVALIDATING":((phase==1)?"TRACKING_NO_WRITE":"B_PENDING");
        reset_case(); random_stalls=0; M1_BREADY=0;
        if(phase==0) permit_cr=0;
        setup(64'h41_0000_0440,2); wait(range_active);
        if(phase!=0) wait(write_release);
        if(phase==2) begin send_aw(64'h41_0000_0440); wait(M1_BVALID); end
        ticks(2);
        fork
            begin
                if(aw_probe) m0_write(64'h41_0000_0440,"",label);
                else m0_read(64'h41_0000_0440,"",label);
            end
            begin
                if(aw_probe) m0_read(64'h41_0000_0400,"","",1);
                else m0_write(64'h41_0000_0400,"","",1);
            end
            begin
                // Request drivers start next negedge. Observe eight full pending cycles.
                @(negedge ACLK); ticks(9);
                assert(completed==0 && done_mask==0 && range_active && tracker_count==0 &&
                       (aw_probe ? M0_AWVALID : M0_ARVALID))
                    else $fatal(1,"HAZARD_BLOCK_WINDOW:%s",label);
                if(phase==0) assert(!write_release && accepted==0 && ingress_count==0)
                    else $fatal(1,"HAZARD_PHASE_INVALIDATING");
                if(phase==1) assert(write_release && accepted==0 && ingress_count==0)
                    else $fatal(1,"HAZARD_PHASE_NO_WRITE");
                if(phase==2) assert(write_release && downstream==1 && M1_BVALID && ingress_count==1)
                    else $fatal(1,"HAZARD_PHASE_B_PENDING");
                permit_cr=1;
                if(phase!=2) send_aw(64'h41_0000_0440);
                wait(M1_BVALID); ticks(8);
                @(negedge ACLK); M1_BREADY=1;
            end
        join
        assert(completed==1 && range_active && done_mask==(64'h1<<17) && tracker_count==0)
            else $fatal(1,"HAZARD_RELEASE_CONTEXT");
        $display("PASS range-only block/release phase=%s channel=%s different-address opposite probe",label,aw_probe?"AW":"AR");
        send_aw(64'h41_0000_0480); drain(); random_stalls=1;
    endtask
    task automatic reset_midburst;
        reset_case(); send_aw(64'h71_0000_0000);
        // Stop after a real first beat, not before W begins.
        do @(posedge ACLK); while(!(M1_WVALID && M1_WREADY));
        @(negedge ACLK); w_enable=0;
        wait(M1_WVALID && !M1_WREADY);
        assert(!M1_WLAST) else $fatal(1,"MIDBURST_RESET_PRECONDITION");
        reset_case(); send_aw(64'h71_0000_0040); drain();
        reset_case(); w_enable=0;
        for(int i=0;i<((M1_INGRESS_DEPTH<3)?M1_INGRESS_DEPTH:3);i++)
            send_aw(64'h71_0000_1000+64'(i*64));
        reset_case();send_aw(64'h71_0000_2000);drain();
        $display("PASS reset after first W beat and queued writes");
    endtask
    task automatic setup_boundaries;
        reset_case();
        setup_source=2; setup(64'h7200_0000,1); ticks(2);
        setup_source=1; setup(64'h7200_0001,1); ticks(2);
        setup(64'h7200_0000,0); ticks(2);
        assert(setup_errors==3 && !range_active) else $fatal(1,"SETUP_INVALID_BOUNDARIES");
        // Explicit mask overrides count and start-line in the page, including count=127.
        setup(64'h7200_0fc0,127,1); wait(write_release);
        @(negedge ACLK); setup_valid=1;setup_addr=64'h7300_0000;setup_count=1;setup_mask=0;
        repeat(8) begin @(posedge ACLK); assert(!setup_ready) else $fatal(1,"SETUP_BUSY_READY");end
        @(negedge ACLK);setup_valid=0;
        send_aw(64'h7200_0000);drain();
        assert(expected_path[0] && ac_total==1 && setup_errors==3) else $fatal(1,"SETUP_MASK_PRECEDENCE");
        $display("PASS setup source/alignment/zero-count/mask-priority/busy boundaries");
    endtask
    task automatic small_depth_directed;
        reset_case(); M1_BREADY=0;send_aw(64'h7400_0000);wait(M1_BVALID);
        fork
            m0_read(64'h7400_0000);
            m0_write(64'h7400_0000);
            begin ticks(8);assert(!M0_ARREADY && !M0_AWREADY) else $fatal(1,"SMALL_CONVENTIONAL_HAZARD");M1_BREADY=1;end
        join
        drain();
        if(USE_RANGE) begin
            setup_boundaries();
            for(int phase=0;phase<3;phase++) begin range_block_case(phase,1);range_block_case(phase,0);end
            reset_case();setup(64'h7500_0000,2);wait(write_release);
            send_aw(64'h7500_0000);wait(completed==1);ticks(2);
            M1_BREADY=0;send_aw(64'h7500_0000);wait(M1_BVALID);
            assert(expected_path[0] && !expected_path[1] && tracker_count==1) else $fatal(1,"SMALL_DUPLICATE");
            fork
                m0_read(64'h7500_0000);
                begin ticks(8);assert(!M0_ARREADY) else $fatal(1,"SMALL_DUPLICATE_HAZARD");M1_BREADY=1;end
            join
            send_aw(64'h7500_0040);drain();
            reset_case();M1_BREADY=0;send_aw(64'h7600_0000);wait(M1_BVALID);
            setup(64'h7600_1000,1);ticks(8);
            assert(admission_freeze && !range_active) else $fatal(1,"SMALL_SETUP_DRAIN");
            M1_BREADY=1;wait(range_active);send_aw(64'h7600_1000);drain();
            if(M1_INGRESS_DEPTH>=3) begin
                reset_case();permit_cr=0;setup(64'h7700_0000,2);wait(range_active);
                send_aw(64'h7700_0000);send_aw(64'h7800_0000);send_aw(64'h7700_0040);ticks(8);
                assert(downstream==0 && accepted==3) else $fatal(1,"SMALL_RANGE_HOL");
                permit_cr=1;drain();
            end
        end
        reset_midburst();
        $display("PASS parameter directed hazards/duplicate/drain/reset; queued HOL requires depth>=3");
    endtask
    task automatic randomized_traffic(input int unsigned traffic_seed);
        int unsigned state;
        int n,start,stride,order[8],swap_index,temp;
        int sparse_cases,contiguous_cases,overlap_cases,read_cases,write_cases,duplicates;
        logic [63:0] page,mask;
        state=traffic_seed|1;
        sparse_cases=0;contiguous_cases=0;overlap_cases=0;read_cases=0;write_cases=0;duplicates=0;
        for(int scenario=0;scenario<24;scenario++) begin
            reset_case();random_stalls=1;
            state=rng_next(state);n=2+int'(state%4);start=int'((state>>8)%40);
            stride=(scenario%2==0)?1:2;
            page={32'hb000_0000|state,32'h0};mask=0;
            for(int i=0;i<n;i++) begin order[i]=start+i*stride;mask[order[i]]=1;end
            for(int i=n-1;i>0;i--) begin
                state=rng_next(state);swap_index=int'(state%(32'(i)+1));
                temp=order[i];order[i]=order[swap_index];order[swap_index]=temp;
            end
            if(scenario%2==0) contiguous_cases++;else sparse_cases++;
            if(USE_RANGE) begin
                if(scenario%3==0) begin
                    M1_BREADY=0;send_aw(page+64'h2000);wait(M1_BVALID);
                    setup(page+64'(start*64),(stride==1)?n:127,(stride==1)?0:mask);
                    state=rng_next(state);ticks(1+int'(state%6));
                    assert(admission_freeze && !range_active) else $fatal(1,"TRAFFIC_SETUP_DRAIN");
                    M1_BREADY=1;overlap_cases++;
                end else setup(page+64'(start*64),(stride==1)?n:127,(stride==1)?0:mask);
                wait(range_active);
            end
            for(int i=0;i<n;i++) begin
                // AW order, target addresses, gaps, and the M0/M1 mix vary by seed.
                state=rng_next(state);ticks(int'(state%4));
                if(state[4]) begin
                    fork
                        send_aw(page+64'(order[i]*64));
                        m0_read(page+64'hfc0);
                    join
                    read_cases++;
                end else begin
                    send_aw(page+64'(order[i]*64));
                    m0_write(page+64'hfc0);write_cases++;
                end
                if(i==0) begin send_aw(page+64'(order[i]*64));duplicates++;end
                if(state[5]) m1_read(page+64'h3000);
                if(state[6]) send_aw(page+64'h1000+64'(order[i]*64));
            end
            drain();
            assert(completed==accepted && (!USE_RANGE || expected_reserved_mask==mask))
                else $fatal(1,"TRAFFIC_COMPLETION");
        end
        assert(sparse_cases==12 && contiguous_cases==12 && read_cases>0 && write_cases>0 && duplicates==24 &&
               (!USE_RANGE || overlap_cases==8)) else $fatal(1,"TRAFFIC_COVERAGE");
        $display("COVERAGE traffic seed=%0d mode=%0d sparse=%0d contiguous=%0d setup_overlap=%0d m0_read_mix=%0d m0_write_mix=%0d duplicates=%0d",
            traffic_seed,USE_RANGE,sparse_cases,contiguous_cases,overlap_cases,read_cases,write_cases,duplicates);
        $display("PASS constrained traffic addresses/masks/setup-overlap/order/mixed-M0-M1 seed=%0d mode=%0d",traffic_seed,USE_RANGE);
    endtask
    task automatic copy_benchmark;
        reset_case(); random_stalls=1;
        // Same time-indexed external trace, reset independent of prior scenarios.
        begin
            int start_cycle;
            start_cycle=cycle;
            if(USE_RANGE) begin setup(64'hc_0000_0000,8); wait(range_active); end
            for(int i=0;i<8;i++) send_aw(64'hc_0000_0000+64'(i*64));
            drain();
            assert(completed==8 && ac_total==8) else $fatal(1,"copy workload");
            if(USE_RANGE) assert(peak_tracker==0) else $fatal(1,"range tracker allocation");
            $display("METRIC mode=%0d trackers=%0d fifo=%0d peak_tracker=%0d tracker_stall=%0d ingress_stall=%0d copy_cycles=%0d accepted_per_cycle=%f peak_ingress=%0d",
                USE_RANGE,LINE_TRACKER_ENTRIES,CONV_AC_FIFO_DEPTH,peak_tracker,tracker_stalls,ingress_stalls,
                cycle-start_cycle,8.0/real'(cycle-start_cycle),peak_ingress);
        end
    endtask
    // Scale benchmark: lines > tracker count and optional writes outside the
    // range expose allocation stall (B1) and context/setup cost (P).
    bit sb_on; int sb_tsum, sb_peak, sb_tfs, sb_ing, sb_swait, sb_freeze, sb_range, sb_cyc;
    always @(posedge ACLK) begin
        if(!ARESETn) begin sb_tsum=0;sb_peak=0;sb_tfs=0;sb_ing=0;sb_swait=0;sb_freeze=0;sb_range=0;sb_cyc=0; end
        else if(sb_on) begin
            sb_cyc++; sb_tsum+=int'(tracker_count); if(int'(tracker_count)>sb_peak) sb_peak=int'(tracker_count);
            if(tracker_full_stall) sb_tfs++; if(M1_AWVALID && !M1_AWREADY) sb_ing++;
            if(setup_valid && !setup_ready) sb_swait++; if(admission_freeze) sb_freeze++; if(range_active) sb_range++;
        end
    end
    // lines: copy targets, one range setup per 4KB page (P). outside=K puts one
    // extra write to a non-range page after every K-th target (0 = none).
    task automatic scale_benchmark(input int nl, input int outside);
        int outs; logic [63:0] base;
        reset_case(); random_stalls=1; sb_on=1; outs=0; base=64'h0e_0000_0000;
        for(int pg=0; pg*64<nl; pg++) begin
            int cnt; cnt=(nl-pg*64)>64 ? 64 : nl-pg*64;
            if(USE_RANGE) setup(base+64'(pg*4096), cnt);
            for(int i=0;i<cnt;i++) begin
                send_aw(base+64'(pg*4096)+64'(i*64));
                if(outside>0 && ((pg*64+i+1)%outside)==0) begin send_aw(64'h0f_0000_0000+64'(outs*64)); outs++; end
            end
        end
        drain(); sb_on=0;
        assert(completed==nl+outs) else $fatal(1,"SCALE_COMPLETION %0d/%0d",completed,nl+outs);
        if(USE_RANGE && outside==0) assert(sb_peak==0) else $fatal(1,"SCALE_RANGE_TRACKER peak=%0d",sb_peak);
        $display("SCALE_METRIC mode=%0d trackers=%0d fifo=%0d lines=%0d outside=%0d cycles=%0d peak_tracker=%0d avg_tracker=%0.3f tracker_full_stall=%0d ingress_stall=%0d setup_wait=%0d freeze=%0d range_active=%0d completed=%0d",
            USE_RANGE,LINE_TRACKER_ENTRIES,CONV_AC_FIFO_DEPTH,nl,outs,sb_cyc,sb_peak,real'(sb_tsum)/real'(sb_cyc),sb_tfs,sb_ing,sb_swait,sb_freeze,sb_range,completed);
    endtask
    initial begin : tests
        int unsigned traffic_seed;
        ARESETn='0;
        M0_AWVALID='0;
        M0_AWID='0;
        M0_AWADDR='0;
        M0_AWLEN='0;
        M0_WVALID='0;
        M0_WDATA='0;
        M0_WLAST='0;
        M0_BREADY='0;
        M0_ARVALID='0;
        M0_ARID='0;
        M0_ARADDR='0;
        M0_ARLEN='0;
        M0_RREADY='0;
        M1_AWVALID='0;
        M1_AWID='0;
        M1_AWADDR='0;
        M1_AWLEN='0;
        M1_BREADY='0;
        M1_ARVALID='0;
        M1_ARID='0;
        M1_ARADDR='0;
        M1_ARLEN='0;
        M1_RREADY='0;
        setup_valid='0;
        setup_addr='0;
        setup_mask='0;
        setup_count='0;
        setup_source='0;
        setup_source=1;
        reset_case();
        if($value$plusargs("traffic_seed=%d",traffic_seed)) begin
            randomized_traffic(traffic_seed);$finish;
        end
        if($test$plusargs("scale_bench")) begin
            int nl,outside;
            if(!$value$plusargs("lines=%d",nl)) nl=64;
            if(!$value$plusargs("outside=%d",outside)) outside=0;
            scale_benchmark(nl,outside); $display("PASS scale benchmark"); $finish;
        end
        if($test$plusargs("bench_only")) begin
            int delay_cycles;
            if(!$value$plusargs("bench_delay=%d",delay_cycles)) delay_cycles=0;
            ticks(delay_cycles); copy_benchmark();
            $display("PASS isolated copy benchmark"); $finish;
        end
        if (M1_INGRESS_DEPTH<16 || LINE_TRACKER_ENTRIES<4) begin
            for(int i=0;i<32;i++) send_aw(64'h50_0000_0000+64'(i*64));
            drain();
            if(USE_RANGE) begin
                setup(64'h51_0000_0000,8); wait(range_active);
                for(int i=0;i<8;i++) send_aw(64'h51_0000_0000+64'(i*64));
                drain();
            end
            small_depth_directed();
            $display("PASS parameter_boundary depth=%0d trackers=%0d fifo=%0d",M1_INGRESS_DEPTH,LINE_TRACKER_ENTRIES,CONV_AC_FIFO_DEPTH);
            $finish;
        end
        if($test$plusargs("m0_crossing")) begin
            M0_ARADDR=64'h1000; M0_ARLEN=4; M0_ARVALID=1;
            ticks(20); $fatal(1,"crossing assertion did not trigger");
        end
        // Multiple outstanding snoops and reduced-depth FIFO full gate.
        permit_cr=0; permit_ac=0;
        for(int i=0;i<16;i++) send_aw(64'h1_0000_4000+64'(i*64));
        ticks(30); permit_ac=1; ticks(60);
        assert(max_ac_run==((CONV_AC_FIFO_DEPTH<LINE_TRACKER_ENTRIES)?CONV_AC_FIFO_DEPTH:LINE_TRACKER_ENTRIES))
            else $fatal(1,"CONVENTIONAL_AC_THROUGHPUT");
        assert(ingress_count==16 && tracker_count==LINE_TRACKER_ENTRIES &&
               ac_total==((CONV_AC_FIFO_DEPTH<LINE_TRACKER_ENTRIES)?CONV_AC_FIFO_DEPTH:LINE_TRACKER_ENTRIES))
            else $fatal(1,"allocation/FIFO pressure counts");
        // Explicit age-order check: first tracker wave must cover first accepted requests.
        for(int i=0;i<LINE_TRACKER_ENTRIES;i++)
            assert(dut.coherent.control.entries[i].allocated) else $fatal(1,"older entry skipped");
        permit_cr=1;
        drain();
        assert(ac_total==16 && cr_total==16 && peak_ac>1) else $fatal(1,"multiple AC completion");
        $display("PASS ordered allocation/multiple AC/FIFO: trackers=%0d fifo=%0d",LINE_TRACKER_ENTRIES,CONV_AC_FIFO_DEPTH);

        // Ring wrap under tracker shortage: 48 further transactions.
        for(int i=0;i<48;i++) send_aw(64'h2_0000_0000+64'(i*64));
        drain();
        assert(completed==64) else $fatal(1,"wrap drain");

        reset_case();
        M1_BREADY=0;
        send_aw(64'h3_0000_0440);
        wait(M1_BVALID); ticks(2);
        assert(tracker_count==1 && ingress_count==1) else $fatal(1,"freed before actual B");
        // Same line index on a different high page must pass.
        m0_read(64'h4_0000_0440);
        fork
            m0_read(64'h3_0000_0440);
            m0_write(64'h3_0000_0440);
            begin
                ticks(8);
                assert(!M0_ARREADY && !M0_AWREADY) else $fatal(1,"dual conventional hazard");
                M1_BREADY=1;
            end
        join
        drain();
        $display("PASS conventional actual-B lifetime, AR/AW hazards, high-page alias");

        if(USE_RANGE) begin
            // No random READY stalls or competing requests: acceptance must be bounded.
            // Keep line 18 pending throughout, so context teardown cannot hide overblocking.
            reset_case(); random_stalls=0;
            setup(64'h31_0000_0440,2); wait(write_release); ticks(2);
            assert(range_active && done_mask==0 && ingress_count==0 && tracker_count==0)
                else $fatal(1,"HAZARD_PROBE_INITIAL_STATE");
            m0_read (64'h31_0000_0400,"non_target");
            m0_write(64'h31_0000_0400,"non_target");
            m0_read (64'h32_0000_0440,"other_page");
            m0_write(64'h32_0000_0440,"other_page");
            send_aw(64'h31_0000_0440);
            wait(completed==1 && ingress_count==0); ticks(2);
            assert(range_active && done_mask==(64'h1<<17) && tracker_count==0)
                else $fatal(1,"HAZARD_PROBE_DONE_STATE");
            m0_read (64'h31_0000_0440,"done_target");
            m0_write(64'h31_0000_0440,"done_target");
            assert(range_active && done_mask==(64'h1<<17))
                else $fatal(1,"HAZARD_PROBE_CONTEXT_ENDED");
            send_aw(64'h31_0000_0480); drain(); random_stalls=1;
            $display("PASS bounded range hazard acceptance: non_target/other_page/done_target AR+AW limit=8");
            reset_case();
            for(int phase=0;phase<3;phase++) begin
                range_block_case(phase,1);
                range_block_case(phase,0);
            end
            reset_case();
            // Same line index, different 64-bit page must remain conventional.
            setup(64'h21_0000_0440,2); wait(range_active);
            send_aw(64'h22_0000_0440);
            send_aw(64'h21_0000_0400); // same page, outside mask
            send_aw(64'h21_0000_0440);
            send_aw(64'h21_0000_0440); // duplicate
            send_aw(64'h21_0000_0480);
            drain();
            assert(!expected_path[0] && !expected_path[1] && expected_path[2] &&
                   !expected_path[3] && expected_path[4]) else $fatal(1,"REFERENCE_PATH");
            $display("PASS independent range page-alias/membership/duplicate oracle");
            reset_case();
            // Invalid crossing setup reports error and cannot allocate.
            setup(64'h1_fc0,2); ticks(1);
            assert(!range_active && setup_errors==1) else $fatal(1,"invalid range activated/error missing");
            // Quiescent drain must wait for an actual held B.
            M1_BREADY=0; send_aw(64'h7_0000_0000); wait(M1_BVALID);
            setup(64'h8_0000_0440,4); ticks(5);
            assert(admission_freeze && !range_active) else $fatal(1,"nonquiescent activation");
            M1_BREADY=1; wait(range_active); ticks(1);
            assert(dut.coherent.control.range_ctx.line_mask==(64'hf<<17) && done_mask==0 && wr_issued_mask==0)
                else $fatal(1,"start line / allocation clear");
            permit_cr=0;
            send_aw(64'h8_0000_0440); // first RANGE
            send_aw(64'h8_0000_0440); // duplicate conventional
            send_aw(64'h9_0000_0100); // normal conventional behind range HOL
            ticks(15);
            assert(downstream==1 && expected_path[1] && !expected_path[2] && !expected_path[3] &&
                   tracker_count==2 && wr_issued_mask==(64'h1<<17)) else $fatal(1,"PATH/HOL/reservation");
            assert(dut.coherent.control.ac_count==0) else $fatal(1,"conventional CR contamination");
            permit_cr=1;
            M1_BREADY=0;
            wait(M1_BVALID); ticks(4);
            assert(done_mask==0) else $fatal(1,"W completion used as B");
            // Hold both M0 probes until actual B; duplicate conventional keeps line blocked.
            fork
                m0_read(64'h8_0000_0440);
                m0_write(64'h8_0000_0440);
                begin
                    ticks(8);
                    assert(!M0_ARREADY && !M0_AWREADY) else $fatal(1,"range dual hazard");
                    M1_BREADY=1;
                end
            join
            for(int i=18;i<=20;i++) send_aw(64'h8_0000_0000+64'(i*64));
            drain();
            assert(ac_total==7 && cr_total==7) else $fatal(1,"range + conventional AC count");
            $display("PASS range start-line, duplicate fallback, HOL, B masks, dual hazards, drain");

            reset_case();
            setup(64'ha_0000_0fc0,1); wait(range_active);
            send_aw(64'ha_0000_0fc0); drain();
            assert(ac_total==1 && peak_tracker==0) else $fatal(1,"single line63 bypass");
            setup(64'hb_0000_0000,0,64'h8000_0000_0000_0005); wait(range_active);
            send_aw(64'hb_0000_0000); send_aw(64'hb_0000_0080); send_aw(64'hb_0000_0fc0); drain();
            assert(ac_total==4 && peak_tracker==0) else $fatal(1,"sparse range");
            $display("PASS one-line/page-end and sparse-mask context reuse");
            setup(64'he_0000_0000,64); wait(range_active);
            for(int i=0;i<64;i++) send_aw(64'he_0000_0000+64'(i*64));
            drain();
            assert(ac_total==68 && completed==68 && peak_tracker==0) else $fatal(1,"full-page counters");
            $display("PASS 64-line full page and ingress wrap");

            reset_case();
            aw_enable=0; ar_enable=0;
            fork
                m0_read(64'hf_0000_0000);
                m0_write(64'hf_0000_0040);
                begin
                    wait(dut.aw_lock && dut.ar_lock);
                    setup(64'hf_0000_1000,1);
                    ticks(5);
                    assert(admission_freeze && !range_active && S_AWVALID && S_ARVALID)
                        else $fatal(1,"drain withdrew stalled grants / activated early");
                    aw_enable=1; ar_enable=1;
                end
            join
            wait(range_active);
            send_aw(64'hf_0000_1000); drain();
            $display("PASS setup drain preserves stalled AW/AR grants");

            reset_case();
            permit_ac=0;
            setup(64'h10_0000_0000,2); wait(ACVALID); ticks(5);
            reset_case();
            assert(!range_active && ingress_count==0 && tracker_count==0 && !ACVALID && !CRVALID)
                else $fatal(1,"reset during invalidation");
            setup(64'h10_0000_1000,1); wait(range_active);
            send_aw(64'h10_0000_1000); drain();
            $display("PASS reset during stalled invalidation and restart");
        end

        reset_case();
        reset_midburst();
        if(USE_RANGE) setup_boundaries();
        reset_case();
        // Hold a W beat, reset every participant, then check a fresh transaction.
        w_enable=0; send_aw(64'h60_0000_0000); wait(M1_WVALID && !M1_WREADY);
        reset_case(); send_aw(64'h60_0000_0040); drain();
        // Reset with a completed W burst and held actual B.
        M1_BREADY=0; send_aw(64'h60_0000_0080); wait(M1_BVALID);
        reset_case(); send_aw(64'h60_0000_00c0); drain();
        $display("PASS reset during stalled W and held B");
        if(USE_RANGE) begin
            reset_case();
            M1_RREADY=0;
            fork
                m1_read(64'h61_0000_0000);
                begin
                    wait(M1_RVALID);
                    setup(64'h62_0000_0000,1);
                    ticks(10);
                    assert(admission_freeze && !range_active) else $fatal(1,"M1 read drain");
                    M1_RREADY=1;
                end
            join
            wait(range_active); send_aw(64'h62_0000_0000); drain();
            reset_case(); ar_enable=0;
            fork
                m1_read(64'h63_0000_0000);
                begin
                    wait(S_ARVALID && !S_ARREADY);
                    setup(64'h64_0000_0000,1); ticks(5);
                    assert(S_ARVALID && !range_active) else $fatal(1,"M1 read grant withdrawn");
                    ar_enable=1;
                end
            join
            wait(range_active); send_aw(64'h64_0000_0000); drain();
            $display("PASS M1 AR/R pending and locked-read setup drain");
        end
        reset_case();
        M1_RREADY=0; M1_ARADDR=64'h65_0000_0000; M1_ARLEN=3; M1_ARID=5; M1_ARVALID=1;
        do @(posedge ACLK); while(!M1_ARREADY);
        @(negedge ACLK); M1_ARVALID=0; wait(M1_RVALID);
        reset_case(); m1_read(64'h65_0000_0040);
        $display("PASS reset with held R then fresh M1 read");
        reset_case();
        copy_benchmark();
        if($test$plusargs("watchdog_negative") && USE_RANGE) begin
            setup(64'hd_0000_0000,2); wait(range_active);
            send_aw(64'hd_0000_0000); ticks(2500);
            $fatal(1,"watchdog failed to trigger");
        end
        $display("PASS tb_cci_integration USE_RANGE=%0d TRACKERS=%0d FIFO=%0d",USE_RANGE,LINE_TRACKER_ENTRIES,CONV_AC_FIFO_DEPTH);
        $finish;
    end
    initial begin #1000000; $fatal(1,"integration timeout"); end
endmodule
