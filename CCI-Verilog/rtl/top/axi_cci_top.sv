module axi_cci_top #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int MAX_OUTSTANDING_TRANSACTIONS=16, M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES,
    parameter bit COHERENT=1,
    parameter bit TAGGED_WRITE_NQ=0,
    parameter bit WRITE_LINE_CAM=1
)(
    input  wire                         ACLK,
    input  wire                         ARESETn,

    // MASTER 0 WRITE ADDRESS
    input  wire                         M0_AWVALID,
    output reg                          M0_AWREADY,
    input  wire [ID_WIDTH-1:0]          M0_AWID,
    input  wire [ADDR_WIDTH-1:0]        M0_AWADDR,
    input  wire [7:0]                   M0_AWLEN,

    // MASTER 0 WRITE DATA
    input  wire                         M0_WVALID,
    output reg                          M0_WREADY,
    input  wire [DATA_WIDTH-1:0]        M0_WDATA,
    input  wire                         M0_WLAST,

    // MASTER 0 WRITE RESPONSE
    output reg                          M0_BVALID,
    input  wire                         M0_BREADY,
    output reg [ID_WIDTH-1:0]           M0_BID,
    output reg [1:0]                    M0_BRESP,

    // MASTER 0 READ ADDRESS
    input  wire                         M0_ARVALID,
    output reg                          M0_ARREADY,
    input  wire [ID_WIDTH-1:0]          M0_ARID,
    input  wire [ADDR_WIDTH-1:0]        M0_ARADDR,
    input  wire [7:0]                   M0_ARLEN,

    // MASTER 0 READ DATA
    output reg                          M0_RVALID,
    input  wire                         M0_RREADY,
    output reg [ID_WIDTH-1:0]           M0_RID,
    output reg [DATA_WIDTH-1:0]         M0_RDATA,
    output reg                          M0_RLAST,
    output reg [1:0]                    M0_RRESP,

    // MASTER 1 WRITE ADDRESS
    input  wire                         M1_AWVALID,
    output reg                          M1_AWREADY,
    input  wire [ID_WIDTH-1:0]          M1_AWID,
    input  wire [ADDR_WIDTH-1:0]        M1_AWADDR,
    input  wire [7:0]                   M1_AWLEN,

    // MASTER 1 WRITE DATA
    input  wire                         M1_WVALID,
    output reg                          M1_WREADY,
    input  wire [DATA_WIDTH-1:0]        M1_WDATA,
    input  wire [DATA_WIDTH/8-1:0]      M1_WSTRB,
    input  wire                         M1_WLAST,

    // MASTER 1 WRITE RESPONSE
    output reg                          M1_BVALID,
    input  wire                         M1_BREADY,
    output reg [ID_WIDTH-1:0]           M1_BID,
    output reg [1:0]                    M1_BRESP,

    // MASTER 1 READ ADDRESS
    input  wire                         M1_ARVALID,
    output reg                          M1_ARREADY,
    input  wire [ID_WIDTH-1:0]          M1_ARID,
    input  wire [ADDR_WIDTH-1:0]        M1_ARADDR,
    input  wire [7:0]                   M1_ARLEN,

    // MASTER 1 READ DATA
    output reg                          M1_RVALID,
    input  wire                         M1_RREADY,
    output reg [ID_WIDTH-1:0]           M1_RID,
    output reg [DATA_WIDTH-1:0]         M1_RDATA,
    output reg                          M1_RLAST,
    output reg [1:0]                    M1_RRESP,

    // SLAVE WRITE ADDRESS. Slave-side ID has one extra route bit for routing and checking.
    output reg                          S_AWVALID,
    input  wire                         S_AWREADY,
    output reg [ID_WIDTH:0]             S_AWID, // High bit is route (master select), low bits are ID.
    output reg [ADDR_WIDTH-1:0]         S_AWADDR,
    output reg [7:0]                    S_AWLEN,

    // SLAVE WRITE DATA
    output reg                          S_WVALID,
    input  wire                         S_WREADY,
    output reg [DATA_WIDTH-1:0]         S_WDATA,
    output reg [DATA_WIDTH/8-1:0]       S_WSTRB,
    output reg                          S_WLAST,

    // SLAVE WRITE RESPONSE
    input  wire                         S_BVALID,
    output reg                          S_BREADY,
    input  wire [ID_WIDTH:0]            S_BID, // High bit is route (master select), low bits are ID.
    input  wire [1:0]                   S_BRESP,

    // SLAVE READ ADDRESS
    output reg                          S_ARVALID,
    input  wire                         S_ARREADY,
    output reg [ID_WIDTH:0]             S_ARID, // High bit is route (master select), low bits are ID.
    output reg [ADDR_WIDTH-1:0]         S_ARADDR,
    output reg [7:0]                    S_ARLEN,

    // SLAVE READ DATA
    input  wire                         S_RVALID,
    output reg                          S_RREADY,
    input  wire [ID_WIDTH:0]            S_RID, // High bit is route (master select), low bits are ID.
    input  wire [DATA_WIDTH-1:0]        S_RDATA,
    input  wire                         S_RLAST,
    input  wire [1:0]                   S_RRESP,

    // Protocol status flags.
    output reg                          protocol_error_wlast,
    output reg                          protocol_error_rlast,
    output reg                          protocol_error_bid_order,
    output reg                          protocol_error_rid_order,
    output reg                          protocol_error_outstanding_overflow,
    output wire ACVALID,
    input wire ACREADY,
    output wire [63:0] ACADDR,
    output wire [3:0] ACSNOOP,
    input wire CRVALID,
    output wire CRREADY,
    input wire [1:0] CRRESP,
    output wire write_nq_valid,
    input wire write_nq_ready,
    output wire [63:0] write_nq_addr,
    output wire [(LINE_TRACKER_ENTRIES<2?1:$clog2(LINE_TRACKER_ENTRIES))-1:0] write_nq_tracker,
    input wire write_nq_rsp_valid,
    output wire write_nq_rsp_ready,
    input wire [(LINE_TRACKER_ENTRIES<2?1:$clog2(LINE_TRACKER_ENTRIES))-1:0] write_nq_rsp_tracker,
    input wire [4:0] write_nq_rsp_resp,
    output wire [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count,
    output wire [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count,
    output wire tracker_full_stall,
    output wire write_service_fault,
    input wire PROBE_ACE_ARVALID,input wire [63:0] PROBE_ACE_ARADDR,
    input wire PROBE_ACE_AWVALID,input wire [63:0] PROBE_ACE_AWADDR,
    // RCCI_PLAN 14.3-2 (R5): last 64 B line of the ACE burst footprint.
    input wire [58:0] PROBE_ACE_ARLAST,input wire [58:0] PROBE_ACE_AWLAST,
    // RCCI_PLAN 14.3/14.4: write-side M0 hazards owned outside the line ingress
    // (reserved line, rCCI interval CAM). They use the same held-grant exception.
    input wire EXT_M0_AR_HAZARD,input wire EXT_M0_AW_HAZARD,
    input wire PROBE_M1_ARVALID,input wire [63:0] PROBE_M1_ARADDR,
    input wire [7:0] PROBE_M1_ARLEN,
    output wire WRITE_ACE_AR_HAZARD,output wire WRITE_ACE_AW_HAZARD,
    output wire WRITE_M1_AR_HAZARD
);

    localparam int IW=M1_INGRESS_DEPTH<2 ? 1 : $clog2(M1_INGRESS_DEPTH);
    wire q_valid, q_ready, bus_b_fire, core_b_fire, axi_idle;
    wire q_drop_valid,q_drop_done,q_drop_retire_ready;
    wire [ID_WIDTH-1:0] q_drop_id;
    wire [ID_WIDTH-1:0] q_id;
    wire [63:0] q_addr;
    wire [7:0] q_len;
    wire [IW-1:0] q_idx, bus_b_idx,q_drop_idx,core_b_idx;
    logic [1:0] drop_beat;
    logic drop_b_valid;
    logic [ID_WIDTH-1:0] drop_b_id;
    logic [IW-1:0] drop_b_idx;
    wire bus_m1_wready,bus_m1_bvalid,bus_m1_bready;
    wire [ID_WIDTH-1:0] bus_m1_bid;wire [1:0] bus_m1_bresp;
    wire ar_hazard, aw_hazard;
    wire aw_lock, ar_lock, aw_route, ar_route;
    // RCCI_PLAN 15.3 (R10): last 64 B line of an M0 burst (16 B beats).
    wire [64:0] m0_ar_last_byte={1'b0,M0_ARADDR}+((65'(M0_ARLEN)+65'd1)<<4)-65'd1;
    wire [64:0] m0_aw_last_byte={1'b0,M0_AWADDR}+((65'(M0_AWLEN)+65'd1)<<4)-65'd1;
    wire [58:0] m0_ar_last=m0_ar_last_byte[64:6],m0_aw_last=m0_aw_last_byte[64:6];
    wire raw_m0_awready, raw_m0_arready, raw_m1_arready;
    // A held downstream request keeps its grant even if a newly accepted line
    // becomes hazardous in the same cycle.
    wire allow_m0_aw=!(aw_hazard||EXT_M0_AW_HAZARD) || (aw_lock && !aw_route);
    wire allow_m0_ar=!(ar_hazard||EXT_M0_AR_HAZARD) || (ar_lock && !ar_route);
    wire allow_m1_ar=1'b1;
    assign M0_AWREADY=raw_m0_awready && allow_m0_aw;
    assign M0_ARREADY=raw_m0_arready && allow_m0_ar;
    assign M1_ARREADY=raw_m1_arready && allow_m1_ar;
    assign q_drop_done=q_drop_valid&&M1_WVALID&&M1_WREADY&&drop_beat==2'd3;
    assign M1_WREADY=q_drop_valid ? !drop_b_valid : bus_m1_wready;
    assign M1_BVALID=drop_b_valid&&q_drop_retire_ready ? 1'b1 : bus_m1_bvalid;
    assign M1_BID=drop_b_valid&&q_drop_retire_ready ? drop_b_id : bus_m1_bid;
    assign M1_BRESP=drop_b_valid&&q_drop_retire_ready ? 2'b10 : bus_m1_bresp;
    assign bus_m1_bready=M1_BREADY&&!(drop_b_valid&&q_drop_retire_ready);
    assign core_b_fire=bus_b_fire||(M1_BVALID&&M1_BREADY&&drop_b_valid&&q_drop_retire_ready);
    assign core_b_idx=(drop_b_valid&&q_drop_retire_ready)?drop_b_idx:bus_b_idx;
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn)begin drop_beat<=0;drop_b_valid<=0;drop_b_id<=0;drop_b_idx<=0;end
        else begin
            if(q_drop_valid&&M1_WVALID&&M1_WREADY)begin
                if(drop_beat==2'd3)begin
                    drop_beat<=0;drop_b_valid<=1;drop_b_id<=q_drop_id;drop_b_idx<=q_drop_idx;
                end else drop_beat<=drop_beat+1'b1;
            end
            if(drop_b_valid&&q_drop_retire_ready&&M1_BREADY)drop_b_valid<=0;
        end
    end
    if (COHERENT) begin : coherent
        coh_write_ingress #(.TAGGED_NQ(TAGGED_WRITE_NQ),.LINE_CAM(WRITE_LINE_CAM),.ID_WIDTH(ID_WIDTH),
            .DEPTH(M1_INGRESS_DEPTH),.TRACKERS(LINE_TRACKER_ENTRIES),
            .AC_DEPTH(CONV_AC_FIFO_DEPTH)) control (
            .clk(ACLK),.rst_n(ARESETn),.aw_valid(M1_AWVALID),.aw_ready(M1_AWREADY),
            .aw_id(M1_AWID),.aw_addr(M1_AWADDR),.aw_len(M1_AWLEN),
            .out_valid(q_valid),.out_ready(q_ready),.out_id(q_id),.out_addr(q_addr),
            .out_len(q_len),.out_idx(q_idx),
            .drop_valid(q_drop_valid),.drop_id(q_drop_id),.drop_idx(q_drop_idx),
            .drop_done(q_drop_done),.drop_retire_ready(q_drop_retire_ready),
            .b_fire(core_b_fire),.b_idx(core_b_idx),
            .m0_araddr(M0_ARADDR),.m0_awaddr(M0_AWADDR),.m0_ar_last(m0_ar_last),.m0_aw_last(m0_aw_last),
            .ar_hazard,.aw_hazard,
            .ace_ar_probe_valid(PROBE_ACE_ARVALID),.ace_ar_probe_addr(PROBE_ACE_ARADDR),
            .ace_aw_probe_valid(PROBE_ACE_AWVALID),.ace_aw_probe_addr(PROBE_ACE_AWADDR),
            .ace_ar_probe_last(PROBE_ACE_ARLAST),.ace_aw_probe_last(PROBE_ACE_AWLAST),
            .m1_ar_probe_valid(PROBE_M1_ARVALID),.m1_ar_probe_addr(PROBE_M1_ARADDR),
            .m1_ar_probe_len(PROBE_M1_ARLEN),
            .ace_ar_hazard(WRITE_ACE_AR_HAZARD),.ace_aw_hazard(WRITE_ACE_AW_HAZARD),
            .m1_ar_hazard(WRITE_M1_AR_HAZARD),
            .ac_valid(ACVALID),.ac_ready(ACREADY),.ac_addr(ACADDR),.ac_snoop(ACSNOOP),
            .cr_valid(CRVALID),.cr_ready(CRREADY),.cr_resp(CRRESP),
            .nq_valid(write_nq_valid),.nq_ready(write_nq_ready),.nq_addr(write_nq_addr),
            .nq_tracker(write_nq_tracker),.nq_rsp_valid(write_nq_rsp_valid),
            .nq_rsp_ready(write_nq_rsp_ready),.nq_rsp_tracker(write_nq_rsp_tracker),
            .nq_rsp_resp(write_nq_rsp_resp),.service_fault(write_service_fault),
            .ingress_count,.tracker_count,.tracker_full_stall
        );
    end else begin : pure_axi
        assign {q_valid,q_id,q_addr,q_len}={M1_AWVALID,M1_AWID,M1_AWADDR,M1_AWLEN};
        assign q_idx=0;assign M1_AWREADY=q_ready;
        assign q_drop_valid=0;assign q_drop_id=0;assign q_drop_idx=0;assign q_drop_retire_ready=0;
        assign {ar_hazard,aw_hazard}=0;
        assign {ACVALID,ACADDR,ACSNOOP,CRREADY}=0;
        assign {write_nq_valid,write_nq_addr,write_nq_tracker,write_nq_rsp_ready}=0;
        assign {ingress_count,tracker_count,tracker_full_stall}=0;
        assign write_service_fault=0;
        assign {WRITE_ACE_AR_HAZARD,WRITE_ACE_AW_HAZARD,WRITE_M1_AR_HAZARD}=0;
    end
    axi4_simple_2to1_bus_arbiter #(.ID_WIDTH(ID_WIDTH), .ADDR_WIDTH(ADDR_WIDTH), .DATA_WIDTH(DATA_WIDTH),
        .MAX_OUTSTANDING_TRANSACTIONS(MAX_OUTSTANDING_TRANSACTIONS), .INGRESS_IDX_WIDTH(IW)) bus (
        .ACLK(ACLK),
        .ARESETn(ARESETn),
        .M0_AWVALID(M0_AWVALID && allow_m0_aw),
        .M0_AWREADY(raw_m0_awready),
        .M0_AWID(M0_AWID),
        .M0_AWADDR(M0_AWADDR),
        .M0_AWLEN(M0_AWLEN),
        .M0_WVALID(M0_WVALID),
        .M0_WREADY(M0_WREADY),
        .M0_WDATA(M0_WDATA),
        .M0_WSTRB({DATA_WIDTH/8{1'b1}}),
        .M0_WLAST(M0_WLAST),
        .M0_BVALID(M0_BVALID),
        .M0_BREADY(M0_BREADY),
        .M0_BID(M0_BID),
        .M0_BRESP(M0_BRESP),
        .M0_ARVALID(M0_ARVALID && allow_m0_ar),
        .M0_ARREADY(raw_m0_arready),
        .M0_ARID(M0_ARID),
        .M0_ARADDR(M0_ARADDR),
        .M0_ARLEN(M0_ARLEN),
        .M0_RVALID(M0_RVALID),
        .M0_RREADY(M0_RREADY),
        .M0_RID(M0_RID),
        .M0_RDATA(M0_RDATA),
        .M0_RLAST(M0_RLAST),
        .M0_RRESP(M0_RRESP),
        .M1_AWVALID(q_valid),
        .M1_AWREADY(q_ready),
        .M1_AWID(q_id),
        .M1_AWADDR(q_addr),
        .M1_AWLEN(q_len),
        .M1_WVALID(M1_WVALID&&!q_drop_valid),
        .M1_WREADY(bus_m1_wready),
        .M1_WDATA(M1_WDATA),
        .M1_WSTRB(M1_WSTRB),
        .M1_WLAST(M1_WLAST),
        .M1_BVALID(bus_m1_bvalid),
        .M1_BREADY(bus_m1_bready),
        .M1_BID(bus_m1_bid),
        .M1_BRESP(bus_m1_bresp),
        .M1_ARVALID(M1_ARVALID && allow_m1_ar),
        .M1_ARREADY(raw_m1_arready),
        .M1_ARID(M1_ARID),
        .M1_ARADDR(M1_ARADDR),
        .M1_ARLEN(M1_ARLEN),
        .M1_RVALID(M1_RVALID),
        .M1_RREADY(M1_RREADY),
        .M1_RID(M1_RID),
        .M1_RDATA(M1_RDATA),
        .M1_RLAST(M1_RLAST),
        .M1_RRESP(M1_RRESP),
        .S_AWVALID(S_AWVALID),
        .S_AWREADY(S_AWREADY),
        .S_AWID(S_AWID),
        .S_AWADDR(S_AWADDR),
        .S_AWLEN(S_AWLEN),
        .S_WVALID(S_WVALID),
        .S_WREADY(S_WREADY),
        .S_WDATA(S_WDATA),
        .S_WSTRB(S_WSTRB),
        .S_WLAST(S_WLAST),
        .S_BVALID(S_BVALID),
        .S_BREADY(S_BREADY),
        .S_BID(S_BID),
        .S_BRESP(S_BRESP),
        .S_ARVALID(S_ARVALID),
        .S_ARREADY(S_ARREADY),
        .S_ARID(S_ARID),
        .S_ARADDR(S_ARADDR),
        .S_ARLEN(S_ARLEN),
        .S_RVALID(S_RVALID),
        .S_RREADY(S_RREADY),
        .S_RID(S_RID),
        .S_RDATA(S_RDATA),
        .S_RLAST(S_RLAST),
        .S_RRESP(S_RRESP),
        .protocol_error_wlast(protocol_error_wlast),
        .protocol_error_rlast(protocol_error_rlast),
        .protocol_error_bid_order(protocol_error_bid_order),
        .protocol_error_rid_order(protocol_error_rid_order),
        .protocol_error_outstanding_overflow(protocol_error_outstanding_overflow),
        .M1_AWINGRESS_IDX(q_idx), .M1_BINGRESS_IDX(bus_b_idx), .M1_BFIRE(bus_b_fire), .axi_idle,
        .aw_grant_locked(aw_lock), .ar_grant_locked(ar_lock), .aw_locked_route(aw_route), .ar_locked_route(ar_route)
    );
`ifndef SYNTHESIS
    always @(posedge ACLK) if (ARESETn && COHERENT) begin
        if (bus_b_fire) assert (S_BRESP == 0) else $fatal(1,"CCI_B_ERROR: normal response required");
        if(q_drop_done)assert(M1_WLAST)else $fatal(1,"CCI_ERROR_DRAIN_WLAST");
        // RCCI_PLAN 15.3 (R10): multi-line M0 bursts are covered by span
        // hazards; only the AXI 4 KB boundary rule remains.
        if (M0_AWVALID && M0_AWREADY)
            assert (int'(M0_AWADDR[11:0])+(int'(M0_AWLEN)+1)*16 <= 4096)
                else $fatal(1,"M0_AW_CROSSES_4KB");
        if (M0_ARVALID && M0_ARREADY)
            assert (int'(M0_ARADDR[11:0])+(int'(M0_ARLEN)+1)*16 <= 4096)
                else $fatal(1,"M0_AR_CROSSES_4KB");
    end
    initial if (COHERENT) assert (ADDR_WIDTH==64 && DATA_WIDTH==128) else $fatal(1,"CCI geometry");
    assert property (@(posedge ACLK) disable iff (!ARESETn)
        S_AWVALID && !S_AWREADY |=> S_AWVALID && $stable({S_AWID,S_AWADDR,S_AWLEN}));
    assert property (@(posedge ACLK) disable iff (!ARESETn)
        S_ARVALID && !S_ARREADY |=> S_ARVALID && $stable({S_ARID,S_ARADDR,S_ARLEN}));
    assert property (@(posedge ACLK) disable iff (!ARESETn)
        ACVALID && !ACREADY |=> ACVALID && $stable({ACADDR,ACSNOOP}));
`endif
endmodule
