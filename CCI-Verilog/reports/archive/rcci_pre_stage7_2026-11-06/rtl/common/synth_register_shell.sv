module synth_register_shell #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int MAX_OUTSTANDING_TRANSACTIONS=16, M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES,
    parameter int RANGE_MAX_ACTIVE_CYCLES=100000,
    parameter bit OBSERVE_DEBUG=0,
    parameter int MODE=2
)(
    input  wire                         ACLK,
    input  wire                         ARESETn,

    // MASTER 0 WRITE ADDRESS
    input  wire                         M0_AWVALID,
    output logic                          M0_AWREADY,
    input  wire [ID_WIDTH-1:0]          M0_AWID,
    input  wire [ADDR_WIDTH-1:0]        M0_AWADDR,
    input  wire [7:0]                   M0_AWLEN,

    // MASTER 0 WRITE DATA
    input  wire                         M0_WVALID,
    output logic                          M0_WREADY,
    input  wire [DATA_WIDTH-1:0]        M0_WDATA,
    input  wire                         M0_WLAST,

    // MASTER 0 WRITE RESPONSE
    output logic                          M0_BVALID,
    input  wire                         M0_BREADY,
    output logic [ID_WIDTH-1:0]           M0_BID,
    output logic [1:0]                    M0_BRESP,

    // MASTER 0 READ ADDRESS
    input  wire                         M0_ARVALID,
    output logic                          M0_ARREADY,
    input  wire [ID_WIDTH-1:0]          M0_ARID,
    input  wire [ADDR_WIDTH-1:0]        M0_ARADDR,
    input  wire [7:0]                   M0_ARLEN,

    // MASTER 0 READ DATA
    output logic                          M0_RVALID,
    input  wire                         M0_RREADY,
    output logic [ID_WIDTH-1:0]           M0_RID,
    output logic [DATA_WIDTH-1:0]         M0_RDATA,
    output logic                          M0_RLAST,
    output logic [1:0]                    M0_RRESP,

    // MASTER 1 WRITE ADDRESS
    input  wire                         M1_AWVALID,
    output logic                          M1_AWREADY,
    input  wire [ID_WIDTH-1:0]          M1_AWID,
    input  wire [ADDR_WIDTH-1:0]        M1_AWADDR,
    input  wire [7:0]                   M1_AWLEN,

    // MASTER 1 WRITE DATA
    input  wire                         M1_WVALID,
    output logic                          M1_WREADY,
    input  wire [DATA_WIDTH-1:0]        M1_WDATA,
    input  wire [DATA_WIDTH/8-1:0]      M1_WSTRB,
    input  wire                         M1_WLAST,

    // MASTER 1 WRITE RESPONSE
    output logic                          M1_BVALID,
    input  wire                         M1_BREADY,
    output logic [ID_WIDTH-1:0]           M1_BID,
    output logic [1:0]                    M1_BRESP,

    // MASTER 1 READ ADDRESS
    input  wire                         M1_ARVALID,
    output logic                          M1_ARREADY,
    input  wire [ID_WIDTH-1:0]          M1_ARID,
    input  wire [ADDR_WIDTH-1:0]        M1_ARADDR,
    input  wire [7:0]                   M1_ARLEN,

    // MASTER 1 READ DATA
    output logic                          M1_RVALID,
    input  wire                         M1_RREADY,
    output logic [ID_WIDTH-1:0]           M1_RID,
    output logic [DATA_WIDTH-1:0]         M1_RDATA,
    output logic                          M1_RLAST,
    output logic [1:0]                    M1_RRESP,

    // SLAVE WRITE ADDRESS. Slave-side ID has one extra route bit for routing and checking.
    output logic                          S_AWVALID,
    input  wire                         S_AWREADY,
    output logic [ID_WIDTH:0]             S_AWID, // High bit is route (master select), low bits are ID.
    output logic [ADDR_WIDTH-1:0]         S_AWADDR,
    output logic [7:0]                    S_AWLEN,

    // SLAVE WRITE DATA
    output logic                          S_WVALID,
    input  wire                         S_WREADY,
    output logic [DATA_WIDTH-1:0]         S_WDATA,
    output logic [DATA_WIDTH/8-1:0]       S_WSTRB,
    output logic                          S_WLAST,

    // SLAVE WRITE RESPONSE
    input  wire                         S_BVALID,
    output logic                          S_BREADY,
    input  wire [ID_WIDTH:0]            S_BID, // High bit is route (master select), low bits are ID.
    input  wire [1:0]                   S_BRESP,

    // SLAVE READ ADDRESS
    output logic                          S_ARVALID,
    input  wire                         S_ARREADY,
    output logic [ID_WIDTH:0]             S_ARID, // High bit is route (master select), low bits are ID.
    output logic [ADDR_WIDTH-1:0]         S_ARADDR,
    output logic [7:0]                    S_ARLEN,

    // SLAVE READ DATA
    input  wire                         S_RVALID,
    output logic                          S_RREADY,
    input  wire [ID_WIDTH:0]            S_RID, // High bit is route (master select), low bits are ID.
    input  wire [DATA_WIDTH-1:0]        S_RDATA,
    input  wire                         S_RLAST,
    input  wire [1:0]                   S_RRESP,

    // Protocol status flags.
    output logic                          protocol_error_wlast,
    output logic                          protocol_error_rlast,
    output logic                          protocol_error_bid_order,
    output logic                          protocol_error_rid_order,
    output logic                          protocol_error_outstanding_overflow,
    input wire setup_valid,
    output logic setup_ready,
    input wire [63:0] setup_addr,
    input wire [63:0] setup_mask,
    input wire [6:0] setup_count,
    input wire [3:0] setup_source,
    output logic setup_error,
    output logic ACVALID,
    input wire ACREADY,
    output logic [63:0] ACADDR,
    output logic [3:0] ACSNOOP,
    input wire CRVALID,
    output logic CRREADY,
    input wire [1:0] CRRESP,
    input wire snoop_idle,
    output logic range_active,
    output logic write_release,
    output logic [63:0] wr_issued_mask,
    output logic [63:0] done_mask,
    output logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count,
    output logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count,
    output logic tracker_full_stall,
    output logic admission_freeze
);
    logic  M0_AWVALID_q;
    logic  M0_AWREADY_q;
    logic [ID_WIDTH-1:0] M0_AWID_q;
    logic [ADDR_WIDTH-1:0] M0_AWADDR_q;
    logic [7:0] M0_AWLEN_q;
    logic  M0_WVALID_q;
    logic  M0_WREADY_q;
    logic [DATA_WIDTH-1:0] M0_WDATA_q;
    logic  M0_WLAST_q;
    logic  M0_BVALID_q;
    logic  M0_BREADY_q;
    logic [ID_WIDTH-1:0] M0_BID_q;
    logic [1:0] M0_BRESP_q;
    logic  M0_ARVALID_q;
    logic  M0_ARREADY_q;
    logic [ID_WIDTH-1:0] M0_ARID_q;
    logic [ADDR_WIDTH-1:0] M0_ARADDR_q;
    logic [7:0] M0_ARLEN_q;
    logic  M0_RVALID_q;
    logic  M0_RREADY_q;
    logic [ID_WIDTH-1:0] M0_RID_q;
    logic [DATA_WIDTH-1:0] M0_RDATA_q;
    logic  M0_RLAST_q;
    logic [1:0] M0_RRESP_q;
    logic  M1_AWVALID_q;
    logic  M1_AWREADY_q;
    logic [ID_WIDTH-1:0] M1_AWID_q;
    logic [ADDR_WIDTH-1:0] M1_AWADDR_q;
    logic [7:0] M1_AWLEN_q;
    logic  M1_WVALID_q;
    logic  M1_WREADY_q;
    logic [DATA_WIDTH-1:0] M1_WDATA_q;
    logic [DATA_WIDTH/8-1:0] M1_WSTRB_q;
    logic  M1_WLAST_q;
    logic  M1_BVALID_q;
    logic  M1_BREADY_q;
    logic [ID_WIDTH-1:0] M1_BID_q;
    logic [1:0] M1_BRESP_q;
    logic  M1_ARVALID_q;
    logic  M1_ARREADY_q;
    logic [ID_WIDTH-1:0] M1_ARID_q;
    logic [ADDR_WIDTH-1:0] M1_ARADDR_q;
    logic [7:0] M1_ARLEN_q;
    logic  M1_RVALID_q;
    logic  M1_RREADY_q;
    logic [ID_WIDTH-1:0] M1_RID_q;
    logic [DATA_WIDTH-1:0] M1_RDATA_q;
    logic  M1_RLAST_q;
    logic [1:0] M1_RRESP_q;
    logic  S_AWVALID_q;
    logic  S_AWREADY_q;
    logic [ID_WIDTH:0] S_AWID_q;
    logic [ADDR_WIDTH-1:0] S_AWADDR_q;
    logic [7:0] S_AWLEN_q;
    logic  S_WVALID_q;
    logic  S_WREADY_q;
    logic [DATA_WIDTH-1:0] S_WDATA_q;
    logic [DATA_WIDTH/8-1:0] S_WSTRB_q;
    logic  S_WLAST_q;
    logic  S_BVALID_q;
    logic  S_BREADY_q;
    logic [ID_WIDTH:0] S_BID_q;
    logic [1:0] S_BRESP_q;
    logic  S_ARVALID_q;
    logic  S_ARREADY_q;
    logic [ID_WIDTH:0] S_ARID_q;
    logic [ADDR_WIDTH-1:0] S_ARADDR_q;
    logic [7:0] S_ARLEN_q;
    logic  S_RVALID_q;
    logic  S_RREADY_q;
    logic [ID_WIDTH:0] S_RID_q;
    logic [DATA_WIDTH-1:0] S_RDATA_q;
    logic  S_RLAST_q;
    logic [1:0] S_RRESP_q;
    logic  protocol_error_wlast_q;
    logic  protocol_error_rlast_q;
    logic  protocol_error_bid_order_q;
    logic  protocol_error_rid_order_q;
    logic  protocol_error_outstanding_overflow_q;
    logic  setup_valid_q;
    logic  setup_ready_q;
    logic [63:0] setup_addr_q;
    logic [63:0] setup_mask_q;
    logic [6:0] setup_count_q;
    logic [3:0] setup_source_q;
    logic  setup_error_q;
    logic  ACVALID_q;
    logic  ACREADY_q;
    logic [63:0] ACADDR_q;
    logic [3:0] ACSNOOP_q;
    logic  CRVALID_q;
    logic  CRREADY_q;
    logic [1:0] CRRESP_q;
    logic  snoop_idle_q;
    logic  range_active_q;
    logic  write_release_q;
    logic [63:0] wr_issued_mask_q;
    logic [63:0] done_mask_q;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count_q;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count_q;
    logic  tracker_full_stall_q;
    logic  admission_freeze_q;
    logic  write_service_fault_q;
    always_ff @(posedge ACLK) begin
        M0_AWVALID_q <= M0_AWVALID;
        M0_AWREADY <= M0_AWREADY_q;
        M0_AWID_q <= M0_AWID;
        M0_AWADDR_q <= M0_AWADDR;
        M0_AWLEN_q <= M0_AWLEN;
        M0_WVALID_q <= M0_WVALID;
        M0_WREADY <= M0_WREADY_q;
        M0_WDATA_q <= M0_WDATA;
        M0_WLAST_q <= M0_WLAST;
        M0_BVALID <= M0_BVALID_q;
        M0_BREADY_q <= M0_BREADY;
        M0_BID <= M0_BID_q;
        M0_BRESP <= M0_BRESP_q;
        M0_ARVALID_q <= M0_ARVALID;
        M0_ARREADY <= M0_ARREADY_q;
        M0_ARID_q <= M0_ARID;
        M0_ARADDR_q <= M0_ARADDR;
        M0_ARLEN_q <= M0_ARLEN;
        M0_RVALID <= M0_RVALID_q;
        M0_RREADY_q <= M0_RREADY;
        M0_RID <= M0_RID_q;
        M0_RDATA <= M0_RDATA_q;
        M0_RLAST <= M0_RLAST_q;
        M0_RRESP <= M0_RRESP_q;
        M1_AWVALID_q <= M1_AWVALID;
        M1_AWREADY <= M1_AWREADY_q;
        M1_AWID_q <= M1_AWID;
        M1_AWADDR_q <= M1_AWADDR;
        M1_AWLEN_q <= M1_AWLEN;
        M1_WVALID_q <= M1_WVALID;
        M1_WREADY <= M1_WREADY_q;
        M1_WDATA_q <= M1_WDATA;
        M1_WSTRB_q <= M1_WSTRB;
        M1_WLAST_q <= M1_WLAST;
        M1_BVALID <= M1_BVALID_q;
        M1_BREADY_q <= M1_BREADY;
        M1_BID <= M1_BID_q;
        M1_BRESP <= M1_BRESP_q;
        M1_ARVALID_q <= M1_ARVALID;
        M1_ARREADY <= M1_ARREADY_q;
        M1_ARID_q <= M1_ARID;
        M1_ARADDR_q <= M1_ARADDR;
        M1_ARLEN_q <= M1_ARLEN;
        M1_RVALID <= M1_RVALID_q;
        M1_RREADY_q <= M1_RREADY;
        M1_RID <= M1_RID_q;
        M1_RDATA <= M1_RDATA_q;
        M1_RLAST <= M1_RLAST_q;
        M1_RRESP <= M1_RRESP_q;
        S_AWVALID <= S_AWVALID_q;
        S_AWREADY_q <= S_AWREADY;
        S_AWID <= S_AWID_q;
        S_AWADDR <= S_AWADDR_q;
        S_AWLEN <= S_AWLEN_q;
        S_WVALID <= S_WVALID_q;
        S_WREADY_q <= S_WREADY;
        S_WDATA <= S_WDATA_q;
        S_WSTRB <= S_WSTRB_q;
        S_WLAST <= S_WLAST_q;
        S_BVALID_q <= S_BVALID;
        S_BREADY <= S_BREADY_q;
        S_BID_q <= S_BID;
        S_BRESP_q <= S_BRESP;
        S_ARVALID <= S_ARVALID_q;
        S_ARREADY_q <= S_ARREADY;
        S_ARID <= S_ARID_q;
        S_ARADDR <= S_ARADDR_q;
        S_ARLEN <= S_ARLEN_q;
        S_RVALID_q <= S_RVALID;
        S_RREADY <= S_RREADY_q;
        S_RID_q <= S_RID;
        S_RDATA_q <= S_RDATA;
        S_RLAST_q <= S_RLAST;
        S_RRESP_q <= S_RRESP;
        protocol_error_wlast <= protocol_error_wlast_q;
        protocol_error_rlast <= protocol_error_rlast_q;
        protocol_error_bid_order <= protocol_error_bid_order_q;
        protocol_error_rid_order <= protocol_error_rid_order_q;
        protocol_error_outstanding_overflow <= protocol_error_outstanding_overflow_q;
        setup_valid_q <= setup_valid;
        setup_ready <= setup_ready_q;
        setup_addr_q <= setup_addr;
        setup_mask_q <= setup_mask;
        setup_count_q <= setup_count;
        setup_source_q <= setup_source;
        setup_error <= setup_error_q;
        ACVALID <= ACVALID_q;
        ACREADY_q <= ACREADY;
        ACADDR <= ACADDR_q;
        ACSNOOP <= ACSNOOP_q;
        CRVALID_q <= CRVALID;
        CRREADY <= CRREADY_q;
        CRRESP_q <= CRRESP;
        snoop_idle_q <= snoop_idle;
        range_active <= OBSERVE_DEBUG ? range_active_q : '0;
        write_release <= OBSERVE_DEBUG ? write_release_q : '0;
        wr_issued_mask <= OBSERVE_DEBUG ? wr_issued_mask_q : '0;
        done_mask <= OBSERVE_DEBUG ? done_mask_q : '0;
        ingress_count <= OBSERVE_DEBUG ? ingress_count_q : '0;
        tracker_count <= OBSERVE_DEBUG ? tracker_count_q : '0;
        tracker_full_stall <= OBSERVE_DEBUG ? tracker_full_stall_q : '0;
        admission_freeze <= OBSERVE_DEBUG ? admission_freeze_q : '0;
    end
    // Include the same clean-cache endpoint hardware in B1 and P measurements.
    wire ep_acready, ep_crvalid, ep_idle;
    wire [1:0] ep_crresp;
    if (MODE != 0) begin : common_endpoint
        m0_snoop_endpoint #(.DEPTH(16), .LATENCY(8)) endpoint (
            .clk(ACLK), .rst_n(ARESETn), .ac_valid(ACVALID_q), .ac_ready(ep_acready),
            .ac_addr(ACADDR_q), .ac_snoop(ACSNOOP_q), .cr_valid(ep_crvalid),
            .cr_ready(CRREADY_q), .cr_resp(ep_crresp), .idle(ep_idle)
        );
    end else begin
        assign {ep_acready,ep_crvalid,ep_idle,ep_crresp}='0;
    end
    axi_cci_top #(
        .ID_WIDTH(ID_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MAX_OUTSTANDING_TRANSACTIONS(MAX_OUTSTANDING_TRANSACTIONS),
        .M1_INGRESS_DEPTH(M1_INGRESS_DEPTH),
        .LINE_TRACKER_ENTRIES(LINE_TRACKER_ENTRIES),
        .CONV_AC_FIFO_DEPTH(CONV_AC_FIFO_DEPTH),
        .RANGE_MAX_ACTIVE_CYCLES(RANGE_MAX_ACTIVE_CYCLES),
        .COHERENT(MODE!=0), .USE_RANGE(MODE==2)
    ) dut (
        .ACLK(ACLK),
        .ARESETn(ARESETn),
        .M0_AWVALID(M0_AWVALID_q),
        .M0_AWREADY(M0_AWREADY_q),
        .M0_AWID(M0_AWID_q),
        .M0_AWADDR(M0_AWADDR_q),
        .M0_AWLEN(M0_AWLEN_q),
        .M0_WVALID(M0_WVALID_q),
        .M0_WREADY(M0_WREADY_q),
        .M0_WDATA(M0_WDATA_q),
        .M0_WLAST(M0_WLAST_q),
        .M0_BVALID(M0_BVALID_q),
        .M0_BREADY(M0_BREADY_q),
        .M0_BID(M0_BID_q),
        .M0_BRESP(M0_BRESP_q),
        .M0_ARVALID(M0_ARVALID_q),
        .M0_ARREADY(M0_ARREADY_q),
        .M0_ARID(M0_ARID_q),
        .M0_ARADDR(M0_ARADDR_q),
        .M0_ARLEN(M0_ARLEN_q),
        .M0_RVALID(M0_RVALID_q),
        .M0_RREADY(M0_RREADY_q),
        .M0_RID(M0_RID_q),
        .M0_RDATA(M0_RDATA_q),
        .M0_RLAST(M0_RLAST_q),
        .M0_RRESP(M0_RRESP_q),
        .M1_AWVALID(M1_AWVALID_q),
        .M1_AWREADY(M1_AWREADY_q),
        .M1_AWID(M1_AWID_q),
        .M1_AWADDR(M1_AWADDR_q),
        .M1_AWLEN(M1_AWLEN_q),
        .M1_WVALID(M1_WVALID_q),
        .M1_WREADY(M1_WREADY_q),
        .M1_WDATA(M1_WDATA_q),
        .M1_WSTRB(M1_WSTRB_q),
        .M1_WLAST(M1_WLAST_q),
        .M1_BVALID(M1_BVALID_q),
        .M1_BREADY(M1_BREADY_q),
        .M1_BID(M1_BID_q),
        .M1_BRESP(M1_BRESP_q),
        .M1_ARVALID(M1_ARVALID_q),
        .M1_ARREADY(M1_ARREADY_q),
        .M1_ARID(M1_ARID_q),
        .M1_ARADDR(M1_ARADDR_q),
        .M1_ARLEN(M1_ARLEN_q),
        .M1_RVALID(M1_RVALID_q),
        .M1_RREADY(M1_RREADY_q),
        .M1_RID(M1_RID_q),
        .M1_RDATA(M1_RDATA_q),
        .M1_RLAST(M1_RLAST_q),
        .M1_RRESP(M1_RRESP_q),
        .S_AWVALID(S_AWVALID_q),
        .S_AWREADY(S_AWREADY_q),
        .S_AWID(S_AWID_q),
        .S_AWADDR(S_AWADDR_q),
        .S_AWLEN(S_AWLEN_q),
        .S_WVALID(S_WVALID_q),
        .S_WREADY(S_WREADY_q),
        .S_WDATA(S_WDATA_q),
        .S_WSTRB(S_WSTRB_q),
        .S_WLAST(S_WLAST_q),
        .S_BVALID(S_BVALID_q),
        .S_BREADY(S_BREADY_q),
        .S_BID(S_BID_q),
        .S_BRESP(S_BRESP_q),
        .S_ARVALID(S_ARVALID_q),
        .S_ARREADY(S_ARREADY_q),
        .S_ARID(S_ARID_q),
        .S_ARADDR(S_ARADDR_q),
        .S_ARLEN(S_ARLEN_q),
        .S_RVALID(S_RVALID_q),
        .S_RREADY(S_RREADY_q),
        .S_RID(S_RID_q),
        .S_RDATA(S_RDATA_q),
        .S_RLAST(S_RLAST_q),
        .S_RRESP(S_RRESP_q),
        .protocol_error_wlast(protocol_error_wlast_q),
        .protocol_error_rlast(protocol_error_rlast_q),
        .protocol_error_bid_order(protocol_error_bid_order_q),
        .protocol_error_rid_order(protocol_error_rid_order_q),
        .protocol_error_outstanding_overflow(protocol_error_outstanding_overflow_q),
        .setup_valid(setup_valid_q),
        .setup_ready(setup_ready_q),
        .setup_addr(setup_addr_q),
        .setup_mask(setup_mask_q),
        .setup_count(setup_count_q),
        .setup_source(setup_source_q),
        .setup_op(2'b00),
        .setup_error(setup_error_q),
        .ACVALID(ACVALID_q),
        .ACREADY(ep_acready),
        .ACADDR(ACADDR_q),
        .ACSNOOP(ACSNOOP_q),
        .CRVALID(ep_crvalid),
        .CRREADY(CRREADY_q),
        .CRRESP(ep_crresp),
        .write_nq_valid(),.write_nq_ready(1'b0),.write_nq_addr(),.write_nq_tracker(),
        .write_nq_rsp_valid(1'b0),.write_nq_rsp_ready(),.write_nq_rsp_tracker('0),
        .write_nq_rsp_resp('0),
        .snoop_idle(ep_idle),
        .range_active(range_active_q),
        .write_release(write_release_q),
        .read_release(),.range_op(),.range_base_page(),.range_line_mask(),.range_fault(),
        .range_read_reserve_fire(1'b0),.range_read_reserve_idx('0),
        .range_read_done_fire(1'b0),.range_read_done_idx('0),
        .range_read_prep_valid(),.range_read_prep_ready(1'b0),.range_read_prep_addr(),
        .range_read_prep_rsp_valid(1'b0),.range_read_prep_rsp_ready(),.range_read_prep_rsp('0),
        .wr_issued_mask(wr_issued_mask_q),
        .done_mask(done_mask_q),
        .ingress_count(ingress_count_q),
        .tracker_count(tracker_count_q),
        .tracker_full_stall(tracker_full_stall_q),
        .write_service_fault(write_service_fault_q),
        .admission_freeze(admission_freeze_q)
    );
endmodule
