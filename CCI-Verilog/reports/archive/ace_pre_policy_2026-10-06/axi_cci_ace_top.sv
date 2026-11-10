// v9 bus plus serialized ACE maintenance/CD/writeback extension.
`include "cci_pkg.sv"
module axi_cci_ace_top #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int MAX_OUTSTANDING_TRANSACTIONS=16, M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES,
    parameter int RANGE_MAX_ACTIVE_CYCLES=100000,
    parameter bit COHERENT=1, USE_RANGE=0,
    parameter int CACHED_MASTERS=1, SNOOP_FILTER_ENTRIES=16,
    parameter bit USE_SNOOP_FILTER=0
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
    input wire setup_valid,
    output wire setup_ready,
    input wire [63:0] setup_addr,
    input wire [63:0] setup_mask,
    input wire [6:0] setup_count,
    input wire [3:0] setup_source,
    output wire setup_error,
    output wire ACVALID,
    input wire ACREADY,
    output wire [63:0] ACADDR,
    output wire [3:0] ACSNOOP,
    input wire CRVALID,
    output wire CRREADY,
    input wire [4:0] CRRESP,
    input wire snoop_idle,
    output wire range_active,
    output wire write_release,
    output wire [63:0] wr_issued_mask,
    output wire [63:0] done_mask,
    output wire [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count,
    output wire [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count,
    output wire tracker_full_stall,
    output wire admission_freeze,
    input wire quiescent,
    input wire req_valid,output wire req_ready,input wire [63:0] req_addr,input wire [3:0] req_snoop,
    output wire rsp_valid,input wire rsp_ready,output wire [4:0] rsp_resp,output wire [511:0] rsp_data,
    output wire maintenance_busy,output wire fault,

    // Serialized ACE initiating-manager request port.  The sidebands are
    // decoded into AC snoops automatically; RACK/WACK retire the transaction.
    input wire ACE_ARVALID,output wire ACE_ARREADY,input wire [ID_WIDTH-1:0] ACE_ARID,
    input wire [63:0] ACE_ARADDR,input wire [7:0] ACE_ARLEN,input wire [2:0] ACE_ARSIZE,
    input wire [1:0] ACE_ARBURST,input wire [3:0] ACE_ARSNOOP,input wire [1:0] ACE_ARDOMAIN,
    input wire [1:0] ACE_ARBAR,input wire [3:0] ACE_ARCACHE,input wire ACE_ARLOCK,
    output wire ACE_RVALID,input wire ACE_RREADY,output wire [ID_WIDTH-1:0] ACE_RID,
    output wire [127:0] ACE_RDATA,output wire ACE_RLAST,output wire [3:0] ACE_RRESP,input wire ACE_RACK,
    input wire ACE_AWVALID,output wire ACE_AWREADY,input wire [ID_WIDTH-1:0] ACE_AWID,
    input wire [63:0] ACE_AWADDR,input wire [7:0] ACE_AWLEN,input wire [2:0] ACE_AWSIZE,
    input wire [1:0] ACE_AWBURST,input wire [2:0] ACE_AWSNOOP,input wire [1:0] ACE_AWDOMAIN,
    input wire [1:0] ACE_AWBAR,input wire [3:0] ACE_AWCACHE,input wire ACE_AWLOCK,input wire ACE_AWUNIQUE,
    input wire ACE_WVALID,output wire ACE_WREADY,input wire [127:0] ACE_WDATA,input wire [15:0] ACE_WSTRB,input wire ACE_WLAST,
    output wire ACE_BVALID,input wire ACE_BREADY,output wire [ID_WIDTH-1:0] ACE_BID,output wire [1:0] ACE_BRESP,input wire ACE_WACK,
    output wire ACE_MANAGER_BUSY,output wire ACE_PROTOCOL_ERROR,

    input wire CDVALID,output wire CDREADY,input wire [127:0] CDDATA,input wire CDLAST,
    // Optional second cached snoop target.
    output wire AC1VALID,input wire AC1READY,output wire [63:0] AC1ADDR,output wire [3:0] AC1SNOOP,
    input wire CR1VALID,output wire CR1READY,input wire [4:0] CR1RESP,
    input wire CD1VALID,output wire CD1READY,input wire [127:0] CD1DATA,input wire CD1LAST,
    // Authoritative filter updates. With USE_SNOOP_FILTER=1 every allocation
    // and eviction by either cached target must be reported here.
    input wire SF_UPDATE_VALID,input wire SF_UPDATE_TARGET,input wire [63:0] SF_UPDATE_ADDR,input wire SF_UPDATE_PRESENT,
    output wire WB_AWVALID,input wire WB_AWREADY,output wire [63:0] WB_AWADDR,
    output wire [7:0] WB_AWLEN,output wire [2:0] WB_AWSIZE,output wire [1:0] WB_AWBURST,
    output wire WB_WVALID,input wire WB_WREADY,output wire [127:0] WB_WDATA,output wire [15:0] WB_WSTRB,output wire WB_WLAST,
    input wire WB_BVALID,output wire WB_BREADY,input wire [1:0] WB_BRESP,
    output wire WB_ARVALID,input wire WB_ARREADY,output wire [63:0] WB_ARADDR,
    output wire [7:0] WB_ARLEN,output wire [2:0] WB_ARSIZE,output wire [1:0] WB_ARBURST,
    input wire WB_RVALID,output wire WB_RREADY,input wire [127:0] WB_RDATA,input wire WB_RLAST,input wire [1:0] WB_RRESP
);
    wire legacy_ac_valid,legacy_ac_ready,legacy_cr_valid,legacy_cr_ready,service_idle;
    wire [63:0] legacy_ac_addr;wire [3:0] legacy_ac_snoop;wire [1:0] legacy_cr_resp;
    wire core_M0_AWREADY,core_M0_ARREADY,core_M1_AWREADY,core_M1_ARREADY,core_setup_ready;
    wire service_maintenance_busy,block_admission,service_fault,fabric_protocol_error;
    wire service_ac_valid,service_ac_ready,service_cr_valid,service_cr_ready;
    wire [63:0] service_ac_addr;wire [3:0] service_ac_snoop;wire [4:0] service_cr_resp;
    wire service_cd_valid,service_cd_ready,service_cd_last;wire [127:0] service_cd_data;
    wire [1:0] fabric_ac_valid,fabric_ac_ready,fabric_cr_valid,fabric_cr_ready;
    wire [1:0][63:0] fabric_ac_addr;wire [1:0][3:0] fabric_ac_snoop;
    wire [1:0][4:0] fabric_cr_resp;wire [1:0] fabric_cd_valid,fabric_cd_ready,fabric_cd_last;
    wire [1:0][127:0] fabric_cd_data;
    wire auto_req_valid,auto_req_ready,auto_rsp_valid,auto_rsp_ready;
    wire [63:0] auto_req_addr;wire [3:0] auto_req_snoop;wire [4:0] auto_rsp_resp;wire [511:0] auto_rsp_data;
    wire service_req_valid,service_req_ready,service_rsp_valid,service_rsp_ready;
    wire [63:0] service_req_addr;wire [3:0] service_req_snoop;wire [4:0] service_rsp_resp;wire [511:0] service_rsp_data;
    logic service_owner_auto,wb_owner_manager;
    wire svc_aw_valid,svc_aw_ready,svc_w_valid,svc_w_ready,svc_b_valid,svc_b_ready;
    wire [63:0] svc_aw_addr;wire [7:0] svc_aw_len;wire [2:0] svc_aw_size;wire [1:0] svc_aw_burst;
    wire [127:0] svc_w_data;wire [15:0] svc_w_strb;wire svc_w_last;
    wire mgr_aw_valid,mgr_aw_ready,mgr_w_valid,mgr_w_ready,mgr_b_valid,mgr_b_ready;
    wire [63:0] mgr_aw_addr;wire [7:0] mgr_aw_len;wire [2:0] mgr_aw_size;wire [1:0] mgr_aw_burst;
    wire [127:0] mgr_w_data;wire [15:0] mgr_w_strb;wire mgr_w_last;
    // M0 writes held downstream plus M1 writes still in the ingress can both be
    // outstanding at the manager boundary, so size for their sum.
    localparam int PCW=$clog2(MAX_OUTSTANDING_TRANSACTIONS+M1_INGRESS_DEPTH+1);
    logic [PCW-1:0] writes_pending,reads_pending;
    // M1 AW enters the ingress while M0 AW goes through the arbiter, so both can
    // handshake in the same cycle. Count each handshake, not just "any".
    wire [1:0] aw_accepts=2'(M0_AWVALID && M0_AWREADY)+2'(M1_AWVALID && M1_AWREADY);
    wire [1:0] b_completes=2'(M0_BVALID && M0_BREADY)+2'(M1_BVALID && M1_BREADY);
    wire [1:0] ar_accepts=2'(M0_ARVALID && M0_ARREADY)+2'(M1_ARVALID && M1_ARREADY);
    wire [1:0] r_completes=2'(M0_RVALID && M0_RREADY && M0_RLAST)+2'(M1_RVALID && M1_RREADY && M1_RLAST);
    // Grant includes the cached master's local operations/refill obligations.
    wire drained=quiescent && writes_pending==0 && reads_pending==0 && ingress_count==0 &&
        !range_active && !admission_freeze;
    assign block_admission=service_maintenance_busy || fabric_protocol_error || req_valid || ACE_MANAGER_BUSY || ACE_ARVALID || ACE_AWVALID;
    assign maintenance_busy=block_admission;
    assign fault=service_fault || fabric_protocol_error;
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) begin writes_pending<=0;reads_pending<=0;end
        else begin
            // Count at the manager boundary so requests buffered inside the v9
            // arbiter/ingress are included before any ACE request can start.
            writes_pending<=writes_pending+PCW'(aw_accepts)-PCW'(b_completes);
            reads_pending<=reads_pending+PCW'(ar_accepts)-PCW'(r_completes);
        end
    end
`ifndef SYNTHESIS
    always @(posedge ACLK) if(ARESETn) begin
        assert(int'(writes_pending)+int'(aw_accepts)>=int'(b_completes) &&
               int'(reads_pending)+int'(ar_accepts)>=int'(r_completes))
            else $fatal(1,"ACE_PENDING_UNDERFLOW");
        assert(int'(writes_pending)+int'(aw_accepts)<(1<<PCW) &&
               int'(reads_pending)+int'(ar_accepts)<(1<<PCW))
            else $fatal(1,"ACE_PENDING_OVERFLOW");
    end
`endif
    assign M0_AWREADY=core_M0_AWREADY && !block_admission;
    assign M0_ARREADY=core_M0_ARREADY && !block_admission;
    assign M1_AWREADY=core_M1_AWREADY && !block_admission;
    assign M1_ARREADY=core_M1_ARREADY && !block_admission;
    assign setup_ready=core_setup_ready && !block_admission;
    axi_cci_top #(
        .ID_WIDTH(ID_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MAX_OUTSTANDING_TRANSACTIONS(MAX_OUTSTANDING_TRANSACTIONS),
        .M1_INGRESS_DEPTH(M1_INGRESS_DEPTH),
        .LINE_TRACKER_ENTRIES(LINE_TRACKER_ENTRIES),
        .CONV_AC_FIFO_DEPTH(CONV_AC_FIFO_DEPTH),
        .RANGE_MAX_ACTIVE_CYCLES(RANGE_MAX_ACTIVE_CYCLES),
        .COHERENT(COHERENT),
        .USE_RANGE(USE_RANGE)
    ) core(
        .ACLK(ACLK),
        .ARESETn(ARESETn),
        .M0_AWVALID((M0_AWVALID && !block_admission)),
        .M0_AWREADY(core_M0_AWREADY),
        .M0_AWID(M0_AWID),
        .M0_AWADDR(M0_AWADDR),
        .M0_AWLEN(M0_AWLEN),
        .M0_WVALID(M0_WVALID),
        .M0_WREADY(M0_WREADY),
        .M0_WDATA(M0_WDATA),
        .M0_WLAST(M0_WLAST),
        .M0_BVALID(M0_BVALID),
        .M0_BREADY(M0_BREADY),
        .M0_BID(M0_BID),
        .M0_BRESP(M0_BRESP),
        .M0_ARVALID((M0_ARVALID && !block_admission)),
        .M0_ARREADY(core_M0_ARREADY),
        .M0_ARID(M0_ARID),
        .M0_ARADDR(M0_ARADDR),
        .M0_ARLEN(M0_ARLEN),
        .M0_RVALID(M0_RVALID),
        .M0_RREADY(M0_RREADY),
        .M0_RID(M0_RID),
        .M0_RDATA(M0_RDATA),
        .M0_RLAST(M0_RLAST),
        .M0_RRESP(M0_RRESP),
        .M1_AWVALID((M1_AWVALID && !block_admission)),
        .M1_AWREADY(core_M1_AWREADY),
        .M1_AWID(M1_AWID),
        .M1_AWADDR(M1_AWADDR),
        .M1_AWLEN(M1_AWLEN),
        .M1_WVALID(M1_WVALID),
        .M1_WREADY(M1_WREADY),
        .M1_WDATA(M1_WDATA),
        .M1_WLAST(M1_WLAST),
        .M1_BVALID(M1_BVALID),
        .M1_BREADY(M1_BREADY),
        .M1_BID(M1_BID),
        .M1_BRESP(M1_BRESP),
        .M1_ARVALID((M1_ARVALID && !block_admission)),
        .M1_ARREADY(core_M1_ARREADY),
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
        .setup_valid((setup_valid && !block_admission)),
        .setup_ready(core_setup_ready),
        .setup_addr(setup_addr),
        .setup_mask(setup_mask),
        .setup_count(setup_count),
        .setup_source(setup_source),
        .setup_error(setup_error),
        .ACVALID(legacy_ac_valid),
        .ACREADY(legacy_ac_ready),
        .ACADDR(legacy_ac_addr),
        .ACSNOOP(legacy_ac_snoop),
        .CRVALID(legacy_cr_valid),
        .CRREADY(legacy_cr_ready),
        .CRRESP(legacy_cr_resp),
        .snoop_idle((snoop_idle && service_idle)),
        .range_active(range_active),
        .write_release(write_release),
        .wr_issued_mask(wr_issued_mask),
        .done_mask(done_mask),
        .ingress_count(ingress_count),
        .tracker_count(tracker_count),
        .tracker_full_stall(tracker_full_stall),
        .admission_freeze(admission_freeze)
    );
    assign service_req_valid=auto_req_valid || req_valid;
    assign service_req_addr=auto_req_valid ? auto_req_addr:req_addr;
    assign service_req_snoop=auto_req_valid ? auto_req_snoop:req_snoop;
    assign auto_req_ready=service_req_ready;
    assign req_ready=service_req_ready && !auto_req_valid;
    assign auto_rsp_valid=service_rsp_valid && service_owner_auto;
    assign auto_rsp_resp=service_rsp_resp;assign auto_rsp_data=service_rsp_data;
    assign rsp_valid=service_rsp_valid && !service_owner_auto;
    assign rsp_resp=service_rsp_resp;assign rsp_data=service_rsp_data;
    assign service_rsp_ready=service_owner_auto?auto_rsp_ready:rsp_ready;
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) service_owner_auto<=0;
        else if(service_req_valid && service_req_ready) service_owner_auto<=auto_req_valid;
    end

    cci_ace_snoop_service service(
        .clk(ACLK),.rst_n(ARESETn),.quiescent(service_maintenance_busy ? quiescent : drained),
        .legacy_ac_valid,.legacy_ac_ready,.legacy_ac_addr,.legacy_ac_snoop,.legacy_cr_valid,.legacy_cr_ready,.legacy_cr_resp,
        .req_valid(service_req_valid),.req_ready(service_req_ready),.req_addr(service_req_addr),.req_snoop(service_req_snoop),
        .rsp_valid(service_rsp_valid),.rsp_ready(service_rsp_ready),.rsp_resp(service_rsp_resp),.rsp_data(service_rsp_data),
        .maintenance_busy(service_maintenance_busy),.idle(service_idle),.fault(service_fault),
        .ac_valid(service_ac_valid),.ac_ready(service_ac_ready),.ac_addr(service_ac_addr),.ac_snoop(service_ac_snoop),
        .cr_valid(service_cr_valid),.cr_ready(service_cr_ready),.cr_resp(service_cr_resp),
        .cd_valid(service_cd_valid),.cd_ready(service_cd_ready),.cd_data(service_cd_data),.cd_last(service_cd_last),
        .aw_valid(svc_aw_valid),.aw_ready(svc_aw_ready),.aw_addr(svc_aw_addr),.aw_len(svc_aw_len),.aw_size(svc_aw_size),.aw_burst(svc_aw_burst),
        .w_valid(svc_w_valid),.w_ready(svc_w_ready),.w_data(svc_w_data),.w_strb(svc_w_strb),.w_last(svc_w_last),
        .b_valid(svc_b_valid),.b_ready(svc_b_ready),.b_resp(WB_BRESP)
    );

    generate if(CACHED_MASTERS==1) begin: G_SINGLE_TARGET
        assign ACVALID=service_ac_valid;assign service_ac_ready=ACREADY;
        assign ACADDR=service_ac_addr;assign ACSNOOP=service_ac_snoop;
        assign service_cr_valid=CRVALID;assign CRREADY=service_cr_ready;assign service_cr_resp=CRRESP;
        assign service_cd_valid=CDVALID;assign CDREADY=service_cd_ready;
        assign service_cd_data=CDDATA;assign service_cd_last=CDLAST;
        assign AC1VALID=0;assign AC1ADDR=0;assign AC1SNOOP=0;
        assign CR1READY=0;assign CD1READY=0;assign fabric_protocol_error=0;
    end else begin: G_MULTI_TARGET
        assign fabric_ac_ready={AC1READY,ACREADY};
        assign ACVALID=fabric_ac_valid[0];assign ACADDR=fabric_ac_addr[0];assign ACSNOOP=fabric_ac_snoop[0];
        assign AC1VALID=fabric_ac_valid[1];assign AC1ADDR=fabric_ac_addr[1];assign AC1SNOOP=fabric_ac_snoop[1];
        assign fabric_cr_valid={CR1VALID,CRVALID};
        assign fabric_cr_resp[0]=CRRESP;assign fabric_cr_resp[1]=CR1RESP;
        assign CRREADY=fabric_cr_ready[0];assign CR1READY=fabric_cr_ready[1];
        assign fabric_cd_valid={CD1VALID,CDVALID};
        assign fabric_cd_data[0]=CDDATA;assign fabric_cd_data[1]=CD1DATA;
        assign fabric_cd_last={CD1LAST,CDLAST};
        assign CDREADY=fabric_cd_ready[0];assign CD1READY=fabric_cd_ready[1];
        ace_snoop_fabric #(.TARGETS(2),.FILTER_ENTRIES(SNOOP_FILTER_ENTRIES)) snoop_fabric(
            .clk(ACLK),.rst_n(ARESETn),.active_mask(2'b11),
            .filter_enable(USE_SNOOP_FILTER),.sf_update_valid(USE_SNOOP_FILTER && SF_UPDATE_VALID),
            .sf_update_target(SF_UPDATE_TARGET),.sf_update_addr(SF_UPDATE_ADDR),.sf_update_present(SF_UPDATE_PRESENT),
            .ac_valid(service_ac_valid),.ac_ready(service_ac_ready),.ac_addr(service_ac_addr),.ac_snoop(service_ac_snoop),
            .cr_valid(service_cr_valid),.cr_ready(service_cr_ready),.cr_resp(service_cr_resp),
            .cd_valid(service_cd_valid),.cd_ready(service_cd_ready),.cd_data(service_cd_data),.cd_last(service_cd_last),
            .m_ac_valid(fabric_ac_valid),.m_ac_ready(fabric_ac_ready),.m_ac_addr(fabric_ac_addr),.m_ac_snoop(fabric_ac_snoop),
            .m_cr_valid(fabric_cr_valid),.m_cr_ready(fabric_cr_ready),.m_cr_resp(fabric_cr_resp),
            .m_cd_valid(fabric_cd_valid),.m_cd_ready(fabric_cd_ready),.m_cd_data(fabric_cd_data),.m_cd_last(fabric_cd_last),
            .idle(),.protocol_error(fabric_protocol_error)
        );
    end endgenerate

    ace_manager_request_controller #(.ID_WIDTH(ID_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DATA_WIDTH(DATA_WIDTH)) manager(
        .clk(ACLK),.rst_n(ARESETn),.accept_enable(drained && !req_valid && service_idle),
        .reservation_kill_valid((M0_AWVALID && M0_AWREADY)||(M1_AWVALID && M1_AWREADY)),
        .reservation_kill_addr((M0_AWVALID && M0_AWREADY)?M0_AWADDR:M1_AWADDR),
        .ar_valid(ACE_ARVALID),.ar_ready(ACE_ARREADY),.ar_id(ACE_ARID),.ar_addr(ACE_ARADDR),.ar_len(ACE_ARLEN),
        .ar_size(ACE_ARSIZE),.ar_burst(ACE_ARBURST),.ar_snoop(ACE_ARSNOOP),.ar_domain(ACE_ARDOMAIN),
        .ar_bar(ACE_ARBAR),.ar_cache(ACE_ARCACHE),.ar_lock(ACE_ARLOCK),
        .r_valid(ACE_RVALID),.r_ready(ACE_RREADY),.r_id(ACE_RID),.r_data(ACE_RDATA),.r_last(ACE_RLAST),.r_resp(ACE_RRESP),.r_ack(ACE_RACK),
        .aw_valid(ACE_AWVALID),.aw_ready(ACE_AWREADY),.aw_id(ACE_AWID),.aw_addr(ACE_AWADDR),.aw_len(ACE_AWLEN),
        .aw_size(ACE_AWSIZE),.aw_burst(ACE_AWBURST),.aw_snoop(ACE_AWSNOOP),.aw_domain(ACE_AWDOMAIN),
        .aw_bar(ACE_AWBAR),.aw_cache(ACE_AWCACHE),.aw_lock(ACE_AWLOCK),.aw_unique(ACE_AWUNIQUE),
        .w_valid(ACE_WVALID),.w_ready(ACE_WREADY),.w_data(ACE_WDATA),.w_strb(ACE_WSTRB),.w_last(ACE_WLAST),
        .b_valid(ACE_BVALID),.b_ready(ACE_BREADY),.b_id(ACE_BID),.b_resp(ACE_BRESP),.w_ack(ACE_WACK),
        .snoop_req_valid(auto_req_valid),.snoop_req_ready(auto_req_ready),.snoop_req_addr(auto_req_addr),.snoop_req_snoop(auto_req_snoop),
        .snoop_rsp_valid(auto_rsp_valid),.snoop_rsp_ready(auto_rsp_ready),.snoop_rsp_resp(auto_rsp_resp),.snoop_rsp_data(auto_rsp_data),
        .mem_aw_valid(mgr_aw_valid),.mem_aw_ready(mgr_aw_ready),.mem_aw_addr(mgr_aw_addr),.mem_aw_len(mgr_aw_len),
        .mem_aw_size(mgr_aw_size),.mem_aw_burst(mgr_aw_burst),.mem_w_valid(mgr_w_valid),.mem_w_ready(mgr_w_ready),
        .mem_w_data(mgr_w_data),.mem_w_strb(mgr_w_strb),.mem_w_last(mgr_w_last),
        .mem_b_valid(mgr_b_valid),.mem_b_ready(mgr_b_ready),.mem_b_resp(WB_BRESP),
        .mem_ar_valid(WB_ARVALID),.mem_ar_ready(WB_ARREADY),.mem_ar_addr(WB_ARADDR),.mem_ar_len(WB_ARLEN),
        .mem_ar_size(WB_ARSIZE),.mem_ar_burst(WB_ARBURST),.mem_r_valid(WB_RVALID),.mem_r_ready(WB_RREADY),
        .mem_r_data(WB_RDATA),.mem_r_last(WB_RLAST),.mem_r_resp(WB_RRESP),
        .busy(ACE_MANAGER_BUSY),.protocol_error(ACE_PROTOCOL_ERROR)
    );

    assign WB_AWVALID=svc_aw_valid || mgr_aw_valid;
    assign WB_AWADDR=svc_aw_valid?svc_aw_addr:mgr_aw_addr;
    assign WB_AWLEN=svc_aw_valid?svc_aw_len:mgr_aw_len;
    assign WB_AWSIZE=svc_aw_valid?svc_aw_size:mgr_aw_size;
    assign WB_AWBURST=svc_aw_valid?svc_aw_burst:mgr_aw_burst;
    assign svc_aw_ready=WB_AWREADY && svc_aw_valid;
    assign mgr_aw_ready=WB_AWREADY && !svc_aw_valid;
    assign WB_WVALID=wb_owner_manager?mgr_w_valid:svc_w_valid;
    assign WB_WDATA=wb_owner_manager?mgr_w_data:svc_w_data;
    assign WB_WSTRB=wb_owner_manager?mgr_w_strb:svc_w_strb;
    assign WB_WLAST=wb_owner_manager?mgr_w_last:svc_w_last;
    assign svc_w_ready=WB_WREADY && !wb_owner_manager;
    assign mgr_w_ready=WB_WREADY && wb_owner_manager;
    assign svc_b_valid=WB_BVALID && !wb_owner_manager;
    assign mgr_b_valid=WB_BVALID && wb_owner_manager;
    assign WB_BREADY=wb_owner_manager?mgr_b_ready:svc_b_ready;
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) wb_owner_manager<=0;
        else begin
            if(WB_AWVALID && WB_AWREADY) wb_owner_manager<=!svc_aw_valid;
            if(WB_BVALID && WB_BREADY) wb_owner_manager<=0;
        end
    end
    assert property(@(posedge ACLK) disable iff(!ARESETn) !(svc_aw_valid && mgr_aw_valid));
    initial assert(CACHED_MASTERS inside {1,2}) else $fatal(1,"ACE_CACHED_MASTERS");
endmodule
