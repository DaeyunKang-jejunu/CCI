// v9 bus plus multi-context ACE maintenance/CD/writeback extension.
`include "cci_pkg.sv"
module axi_cci_ace_top #(
    parameter int ID_WIDTH=4, ADDR_WIDTH=64, DATA_WIDTH=128,
    parameter int MAX_OUTSTANDING_TRANSACTIONS=16, M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=16, CONV_AC_FIFO_DEPTH=LINE_TRACKER_ENTRIES,
    parameter int ACE_MANAGER_CONTEXTS=4, ACE_SNOOP_CONTEXTS=4,
    parameter int M1_READ_TRACKERS=LINE_TRACKER_ENTRIES,
    parameter bit COHERENT_READ=1,
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
    input wire [1:0] setup_op,
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
    output wire read_release,
    output wire [1:0] range_op,
    output wire [51:0] range_base_page,
    output wire [63:0] range_line_mask,
    output wire range_fault,
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
    output wire conv_read_fault,output wire conv_read_error,
    output wire [$clog2(M1_INGRESS_DEPTH+1)-1:0] read_ingress_count,
    output wire [$clog2(M1_READ_TRACKERS+1)-1:0] read_tracker_count,

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
    wire service_req_valid,service_req_nq,service_req_ready,service_rsp_valid,service_rsp_ready;
    wire [63:0] service_req_addr;wire [3:0] service_req_snoop;wire [4:0] service_rsp_resp;wire [511:0] service_rsp_data;
    localparam int SOQW=(ACE_SNOOP_CONTEXTS<2?1:$clog2(ACE_SNOOP_CONTEXTS));
    localparam logic [1:0] SVC_AUTO=2'd0,SVC_EXPLICIT=2'd1,SVC_NQ_CONV=2'd2,SVC_NQ_RANGE=2'd3;
    localparam int RTW=(M1_READ_TRACKERS<2?1:$clog2(M1_READ_TRACKERS));
    logic [1:0] service_owner_q[ACE_SNOOP_CONTEXTS];
    logic [RTW-1:0] service_owner_idx_q[ACE_SNOOP_CONTEXTS];
    logic [SOQW-1:0] service_owner_head,service_owner_tail;
    logic [$clog2(ACE_SNOOP_CONTEXTS+1)-1:0] service_owner_count;
    logic wb_owner_valid,wb_owner_manager;
    // REVIEW 10.2: grants held while a request is shown without READY.
    logic wb_aw_hold_valid,wb_aw_hold_manager,svc_req_hold_valid;
    logic [1:0] svc_req_hold_sel,service_rr,service_sel;
    logic service_sel_valid;
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
    wire read_in_ready,read_out_valid,read_out_ready,read_nq_valid,read_nq_ready;
    wire [ID_WIDTH-1:0] read_out_id;wire [63:0] read_out_addr,read_nq_addr;wire [7:0] read_out_len;
    wire [RTW-1:0] read_nq_tracker,read_nq_rsp_tracker;
    wire read_nq_rsp_valid,read_nq_rsp_ready;
    wire [4:0] read_nq_rsp_resp;
    wire read_m0_ar_hazard,read_m0_aw_hazard,read_ace_ar_hazard,read_ace_aw_hazard;
    wire read_tracker_full_stall,read_config_fault,read_service_fault;
    wire range_read_reserve_fire,range_read_done_fire;
    wire [5:0] range_read_reserve_idx,range_read_done_idx;
    wire range_prep_valid,range_prep_ready,range_prep_rsp_valid,range_prep_rsp_ready;
    wire [63:0] range_prep_addr;wire [4:0] range_prep_rsp;
    wire read_m1_aw_hazard;
    cci_pkg::range_ctx_t read_range_ctx;
    assign read_range_ctx='{valid:range_active,state:cci_pkg::ST_TRACKING,
        op:cci_pkg::range_op_e'(range_op),base_page:range_base_page,
        line_mask:range_line_mask,wr_issued_mask:wr_issued_mask,
        done_mask:done_mask,source_id:4'd1};
    logic explicit_drain_q,explicit_seen;
    // M1 AW enters the ingress while M0 AW goes through the arbiter, so both can
    // handshake in the same cycle. Count each handshake, not just "any".
    wire [1:0] aw_accepts=2'(M0_AWVALID && M0_AWREADY)+2'(M1_AWVALID && M1_AWREADY);
    wire [1:0] b_completes=2'(M0_BVALID && M0_BREADY)+2'(M1_BVALID && M1_BREADY);
    wire [1:0] ar_accepts=2'(M0_ARVALID && M0_ARREADY)+2'(M1_ARVALID && M1_ARREADY);
    wire [1:0] r_completes=2'(M0_RVALID && M0_RREADY && M0_RLAST)+2'(M1_RVALID && M1_RREADY && M1_RLAST);
    // Grant includes the cached master's local operations/refill obligations.
    wire drained=quiescent && writes_pending==0 && reads_pending==0 && ingress_count==0 && read_ingress_count==0 &&
        !range_active && !admission_freeze;
    // Sticky fail-stop: a framing/association violation means transaction
    // boundaries can no longer be trusted. Transaction-level SLVERR is not fatal.
    // In-flight responses and RACK/WACK still drain; only new requests stop.
    wire fatal_fault=service_fault || fabric_protocol_error || ACE_PROTOCOL_ERROR || read_config_fault || read_service_fault || range_fault;
    wire explicit_claim=req_valid && !range_active && !admission_freeze;
    wire explicit_drain=explicit_drain_q || explicit_claim;
    wire explicit_req_fire=req_valid && req_ready && !explicit_seen;
    assign block_admission=service_maintenance_busy || fatal_fault || explicit_drain || ACE_MANAGER_BUSY || ACE_ARVALID || ACE_AWVALID;
    assign maintenance_busy=block_admission;
    assign fault=fatal_fault;
    assign conv_read_fault=read_service_fault;
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) begin writes_pending<=0;reads_pending<=0;explicit_drain_q<=0;explicit_seen<=0;end
        else begin
            // Count at the manager boundary so requests buffered inside the v9
            // arbiter/ingress are included before any ACE request can start.
            writes_pending<=writes_pending+PCW'(aw_accepts)-PCW'(b_completes);
            reads_pending<=reads_pending+PCW'(ar_accepts)-PCW'(r_completes);
            explicit_drain_q<=(explicit_drain_q || explicit_claim) && !explicit_req_fire;
            if(explicit_req_fire) explicit_seen<=1;
            else if(!req_valid) explicit_seen<=0;
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
    assign M0_AWREADY=core_M0_AWREADY && !block_admission && !read_m0_aw_hazard;
    assign M0_ARREADY=core_M0_ARREADY && !block_admission && !read_m0_ar_hazard;
    assign M1_AWREADY=core_M1_AWREADY && !block_admission && !read_m1_aw_hazard;
    assign M1_ARREADY=COHERENT_READ ? (read_in_ready && !block_admission && !admission_freeze) :
        (core_M1_ARREADY && !block_admission);
    assign setup_ready=core_setup_ready && !block_admission && (!COHERENT_READ || read_ingress_count==0);
    generate if(COHERENT_READ) begin: G_COH_READ
        coh_read_ingress #(.ID_WIDTH(ID_WIDTH),.DEPTH(M1_INGRESS_DEPTH),.TRACKERS(M1_READ_TRACKERS),.USE_RANGE(USE_RANGE)) read_ingress(
            .clk(ACLK),.rst_n(ARESETn),
            .in_valid(M1_ARVALID && !block_admission && !admission_freeze),.in_ready(read_in_ready),
            .in_id(M1_ARID),.in_addr(M1_ARADDR),.in_len(M1_ARLEN),
            .out_valid(read_out_valid),.out_ready(read_out_ready),.out_id(read_out_id),.out_addr(read_out_addr),.out_len(read_out_len),
            .retire_valid(M1_RVALID && M1_RREADY && M1_RLAST),.retire_resp(M1_RRESP),
            .range_ctx(read_range_ctx),.read_release(read_release),
            .range_reserve_fire(range_read_reserve_fire),.range_reserve_idx(range_read_reserve_idx),
            .range_done_fire(range_read_done_fire),.range_done_idx(range_read_done_idx),
            .nq_valid(read_nq_valid),.nq_ready(read_nq_ready),.nq_addr(read_nq_addr),.nq_tracker(read_nq_tracker),
            .nq_rsp_valid(read_nq_rsp_valid),.nq_rsp_ready(read_nq_rsp_ready),
            .nq_rsp_tracker(read_nq_rsp_tracker),.nq_rsp_resp(read_nq_rsp_resp),
            .m0_ar_probe_valid(M0_ARVALID),.m0_ar_probe_addr(M0_ARADDR),
            .m0_aw_probe_valid(M0_AWVALID),.m0_aw_probe_addr(M0_AWADDR),
            .ace_ar_probe_valid(ACE_ARVALID),.ace_ar_probe_addr(ACE_ARADDR),
            .ace_aw_probe_valid(ACE_AWVALID),.ace_aw_probe_addr(ACE_AWADDR),
            .m1_aw_probe_valid(M1_AWVALID),.m1_aw_probe_addr(M1_AWADDR),.m1_aw_hazard(read_m1_aw_hazard),
            .m0_ar_hazard(read_m0_ar_hazard),.m0_aw_hazard(read_m0_aw_hazard),
            .ace_ar_hazard(read_ace_ar_hazard),.ace_aw_hazard(read_ace_aw_hazard),
            .ingress_count(read_ingress_count),.tracker_count(read_tracker_count),
            .tracker_full_stall(read_tracker_full_stall),.config_fault(read_config_fault),
            .service_fault(read_service_fault),.read_error(conv_read_error)
        );
        assign read_out_ready=core_M1_ARREADY;
    end else begin: G_RAW_READ
        assign read_in_ready=core_M1_ARREADY;
        assign read_out_valid=M1_ARVALID && !block_admission;
        assign read_out_id=M1_ARID;assign read_out_addr=M1_ARADDR;assign read_out_len=M1_ARLEN;
        assign read_nq_valid=0;assign read_nq_addr=0;assign read_nq_tracker=0;
        assign read_nq_rsp_ready=1;assign read_m0_ar_hazard=0;assign read_m0_aw_hazard=0;
        assign read_ace_ar_hazard=0;assign read_ace_aw_hazard=0;
        assign read_m1_aw_hazard=0;assign range_read_reserve_fire=0;assign range_read_reserve_idx=0;
        assign range_read_done_fire=0;assign range_read_done_idx=0;
        assign read_ingress_count=0;assign read_tracker_count=0;assign read_tracker_full_stall=0;
        assign read_config_fault=0;assign read_service_fault=0;assign conv_read_error=0;
    end endgenerate
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
        .USE_RANGE(USE_RANGE),.ENABLE_RANGE_READ(1'b1)
    ) core(
        .ACLK(ACLK),
        .ARESETn(ARESETn),
        .M0_AWVALID((M0_AWVALID && !block_admission && !read_m0_aw_hazard)),
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
        .M0_ARVALID((M0_ARVALID && !block_admission && !read_m0_ar_hazard)),
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
        .M1_AWVALID((M1_AWVALID && !block_admission && !read_m1_aw_hazard)),
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
        .M1_ARVALID(read_out_valid),
        .M1_ARREADY(core_M1_ARREADY),
        .M1_ARID(read_out_id),
        .M1_ARADDR(read_out_addr),
        .M1_ARLEN(read_out_len),
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
        .setup_valid((setup_valid && !block_admission && (!COHERENT_READ || read_ingress_count==0))),
        .setup_ready(core_setup_ready),
        .setup_addr(setup_addr),
        .setup_mask(setup_mask),
        .setup_count(setup_count),
        .setup_source(setup_source),
        .setup_op(setup_op),
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
        .read_release(read_release),.range_op(range_op),.range_base_page(range_base_page),
        .range_line_mask(range_line_mask),.range_fault(range_fault),
        .range_read_reserve_fire(range_read_reserve_fire),.range_read_reserve_idx(range_read_reserve_idx),
        .range_read_done_fire(range_read_done_fire),.range_read_done_idx(range_read_done_idx),
        .range_read_prep_valid(range_prep_valid),.range_read_prep_ready(range_prep_ready),
        .range_read_prep_addr(range_prep_addr),.range_read_prep_rsp_valid(range_prep_rsp_valid),
        .range_read_prep_rsp_ready(range_prep_rsp_ready),.range_read_prep_rsp(range_prep_rsp),
        .wr_issued_mask(wr_issued_mask),
        .done_mask(done_mask),
        .ingress_count(ingress_count),
        .tracker_count(tracker_count),
        .tracker_full_stall(tracker_full_stall),
        .admission_freeze(admission_freeze)
    );
    wire service_owner_full=int'(service_owner_count)==ACE_SNOOP_CONTEXTS;
    wire [1:0] service_owner=service_owner_q[service_owner_head];
    wire service_owner_auto=service_owner_count!=0 && service_owner==SVC_AUTO;
    wire service_owner_explicit=service_owner_count!=0 && service_owner==SVC_EXPLICIT;
    wire service_owner_read=service_owner_count!=0 && service_owner==SVC_NQ_CONV;
    wire service_owner_range=service_owner_count!=0 && service_owner==SVC_NQ_RANGE;
    wire service_req_fire=service_req_valid && service_req_ready;
    wire service_rsp_fire=service_rsp_valid && service_rsp_ready;
    wire explicit_eligible=req_valid && !explicit_seen && drained && !fatal_fault;
    // Round-robin across manager-auto, explicit maintenance, conventional-read
    // CleanInvalid, and range-read preparation. A blocked grant is held.
    always_comb begin
        service_sel=service_rr;service_sel_valid=0;
        if(svc_req_hold_valid) begin service_sel=svc_req_hold_sel;service_sel_valid=1;end
        else case(service_rr)
            SVC_AUTO: begin
                if(auto_req_valid) begin service_sel=SVC_AUTO;service_sel_valid=1;end
                else if(read_nq_valid) begin service_sel=SVC_NQ_CONV;service_sel_valid=1;end
                else if(range_prep_valid) begin service_sel=SVC_NQ_RANGE;service_sel_valid=1;end
                else if(explicit_eligible) begin service_sel=SVC_EXPLICIT;service_sel_valid=1;end
            end
            SVC_EXPLICIT: begin
                if(explicit_eligible) begin service_sel=SVC_EXPLICIT;service_sel_valid=1;end
                else if(read_nq_valid) begin service_sel=SVC_NQ_CONV;service_sel_valid=1;end
                else if(range_prep_valid) begin service_sel=SVC_NQ_RANGE;service_sel_valid=1;end
                else if(auto_req_valid) begin service_sel=SVC_AUTO;service_sel_valid=1;end
            end
            SVC_NQ_CONV: begin
                if(read_nq_valid) begin service_sel=SVC_NQ_CONV;service_sel_valid=1;end
                else if(range_prep_valid) begin service_sel=SVC_NQ_RANGE;service_sel_valid=1;end
                else if(auto_req_valid) begin service_sel=SVC_AUTO;service_sel_valid=1;end
                else if(explicit_eligible) begin service_sel=SVC_EXPLICIT;service_sel_valid=1;end
            end
            default: begin
                if(range_prep_valid) begin service_sel=SVC_NQ_RANGE;service_sel_valid=1;end
                else if(auto_req_valid) begin service_sel=SVC_AUTO;service_sel_valid=1;end
                else if(explicit_eligible) begin service_sel=SVC_EXPLICIT;service_sel_valid=1;end
                else if(read_nq_valid) begin service_sel=SVC_NQ_CONV;service_sel_valid=1;end
            end
        endcase
    end
    assign service_req_valid=service_sel_valid && !service_owner_full;
    assign service_req_nq=service_sel==SVC_NQ_CONV || service_sel==SVC_NQ_RANGE;
    assign service_req_addr=service_sel==SVC_AUTO ? auto_req_addr :
                            service_sel==SVC_NQ_CONV ? read_nq_addr :
                            service_sel==SVC_NQ_RANGE ? range_prep_addr : req_addr;
    assign service_req_snoop=(service_sel==SVC_NQ_CONV || service_sel==SVC_NQ_RANGE) ? 4'd9 :
                             service_sel==SVC_AUTO ? auto_req_snoop : req_snoop;
    assign auto_req_ready=service_req_ready && service_req_valid && service_sel==SVC_AUTO;
    assign read_nq_ready=service_req_ready && service_req_valid && service_sel==SVC_NQ_CONV;
    assign range_prep_ready=service_req_ready && service_req_valid && service_sel==SVC_NQ_RANGE;
    assign req_ready=(explicit_seen && req_valid) ||
        (service_req_ready && service_req_valid && service_sel==SVC_EXPLICIT);
    assign auto_rsp_valid=service_rsp_valid && service_owner_auto && service_owner_count!=0;
    assign auto_rsp_resp=service_rsp_resp;assign auto_rsp_data=service_rsp_data;
    assign rsp_valid=service_rsp_valid && service_owner_explicit;
    assign rsp_resp=service_rsp_resp;assign rsp_data=service_rsp_data;
    assign read_nq_rsp_valid=service_rsp_valid && service_owner_read;
    assign read_nq_rsp_resp=service_rsp_resp;
    assign read_nq_rsp_tracker=service_owner_idx_q[service_owner_head];
    assign range_prep_rsp_valid=service_rsp_valid && service_owner_range;
    assign range_prep_rsp=service_rsp_resp;
    assign service_rsp_ready=service_owner_count!=0 &&
        (service_owner_auto ? auto_rsp_ready : service_owner_read ? read_nq_rsp_ready :
         service_owner_range ? range_prep_rsp_ready : rsp_ready);
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) begin
            service_owner_head<=0;service_owner_tail<=0;service_owner_count<=0;
            svc_req_hold_valid<=0;svc_req_hold_sel<=SVC_AUTO;service_rr<=SVC_AUTO;
        end else begin
            if(service_req_valid && !service_req_ready) begin svc_req_hold_valid<=1;svc_req_hold_sel<=service_sel;end
            if(service_req_fire || !service_req_valid) svc_req_hold_valid<=0;
            if(service_req_fire) begin
                service_owner_q[service_owner_tail]<=service_sel;
                service_owner_idx_q[service_owner_tail]<=read_nq_tracker;
                service_owner_tail<=service_owner_tail==SOQW'(ACE_SNOOP_CONTEXTS-1)?'0:service_owner_tail+1'b1;
                service_rr<=service_sel+1'b1;
            end
            if(service_rsp_fire)
                service_owner_head<=service_owner_head==SOQW'(ACE_SNOOP_CONTEXTS-1)?'0:service_owner_head+1'b1;
            unique case({service_req_fire,service_rsp_fire})
                2'b10:service_owner_count<=service_owner_count+1'b1;
                2'b01:service_owner_count<=service_owner_count-1'b1;
                default:;
            endcase
        end
    end

    cci_ace_snoop_service #(.OUTSTANDING(ACE_SNOOP_CONTEXTS)) service(
        .clk(ACLK),.rst_n(ARESETn),.quiescent(service_maintenance_busy ? quiescent : drained),
        .legacy_ac_valid,.legacy_ac_ready,.legacy_ac_addr,.legacy_ac_snoop,.legacy_cr_valid,.legacy_cr_ready,.legacy_cr_resp,
        .req_valid(service_req_valid),.req_nq(service_req_nq),.req_ready(service_req_ready),.req_addr(service_req_addr),.req_snoop(service_req_snoop),
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
        ace_snoop_fabric #(.TARGETS(2),.FILTER_ENTRIES(SNOOP_FILTER_ENTRIES),
            .OUTSTANDING(ACE_SNOOP_CONTEXTS)) snoop_fabric(
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

    ace_manager_request_bank #(.ID_WIDTH(ID_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DATA_WIDTH(DATA_WIDTH),
        .CONTEXTS(ACE_MANAGER_CONTEXTS)) manager(
        .clk(ACLK),.rst_n(ARESETn),.accept_enable(drained && !req_valid && !fatal_fault),
        .reservation_kill_valid({M1_AWVALID && M1_AWREADY,M0_AWVALID && M0_AWREADY}),
        .reservation_kill_addr({M1_AWADDR,M0_AWADDR}),
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
        .busy(ACE_MANAGER_BUSY),.protocol_error(ACE_PROTOCOL_ERROR),.outstanding_count()
    );

    // Service has priority for a new grant; a pending AW keeps its source.
    wire wb_sel_manager=wb_aw_hold_valid ? wb_aw_hold_manager : !svc_aw_valid;
    assign WB_AWVALID=!wb_owner_valid && (wb_sel_manager ? mgr_aw_valid : svc_aw_valid);
    assign WB_AWADDR=wb_sel_manager?mgr_aw_addr:svc_aw_addr;
    assign WB_AWLEN=wb_sel_manager?mgr_aw_len:svc_aw_len;
    assign WB_AWSIZE=wb_sel_manager?mgr_aw_size:svc_aw_size;
    assign WB_AWBURST=wb_sel_manager?mgr_aw_burst:svc_aw_burst;
    assign svc_aw_ready=WB_AWREADY && WB_AWVALID && !wb_sel_manager;
    assign mgr_aw_ready=WB_AWREADY && WB_AWVALID && wb_sel_manager;
    assign WB_WVALID=wb_owner_valid && (wb_owner_manager?mgr_w_valid:svc_w_valid);
    assign WB_WDATA=wb_owner_manager?mgr_w_data:svc_w_data;
    assign WB_WSTRB=wb_owner_manager?mgr_w_strb:svc_w_strb;
    assign WB_WLAST=wb_owner_manager?mgr_w_last:svc_w_last;
    assign svc_w_ready=WB_WREADY && wb_owner_valid && !wb_owner_manager;
    assign mgr_w_ready=WB_WREADY && wb_owner_valid && wb_owner_manager;
    assign svc_b_valid=WB_BVALID && wb_owner_valid && !wb_owner_manager;
    assign mgr_b_valid=WB_BVALID && wb_owner_valid && wb_owner_manager;
    assign WB_BREADY=wb_owner_valid && (wb_owner_manager?mgr_b_ready:svc_b_ready);
    always_ff @(posedge ACLK or negedge ARESETn) begin
        if(!ARESETn) begin wb_owner_valid<=0;wb_owner_manager<=0;wb_aw_hold_valid<=0;wb_aw_hold_manager<=0;end
        else begin
            if(WB_AWVALID && !WB_AWREADY) begin wb_aw_hold_valid<=1;wb_aw_hold_manager<=wb_sel_manager;end
            if(WB_AWVALID && WB_AWREADY) begin
                wb_owner_valid<=1;wb_owner_manager<=wb_sel_manager;wb_aw_hold_valid<=0;
            end
            if(WB_BVALID && WB_BREADY) begin wb_owner_valid<=0;wb_owner_manager<=0;end
        end
    end
    assert property(@(posedge ACLK) disable iff(!ARESETn)
        service_rsp_valid |-> service_owner_count!=0);
    assert property(@(posedge ACLK) disable iff(!ARESETn) WB_AWVALID && !WB_AWREADY |=>
        WB_AWVALID && $stable({WB_AWADDR,WB_AWLEN,WB_AWSIZE,WB_AWBURST}))
        else $fatal(1,"WB_AW_PAYLOAD_STABILITY");
    assert property(@(posedge ACLK) disable iff(!ARESETn || fatal_fault) service_req_valid && !service_req_ready |=>
        service_req_valid && $stable({service_req_addr,service_req_snoop}))
        else $fatal(1,"SERVICE_REQ_PAYLOAD_STABILITY");
    assert property(@(posedge ACLK) disable iff(!ARESETn)
        int'(service_owner_count)<=ACE_SNOOP_CONTEXTS);
    initial begin
        assert(CACHED_MASTERS inside {1,2}) else $fatal(1,"ACE_CACHED_MASTERS");
        assert(ACE_SNOOP_CONTEXTS>1) else $fatal(1,"ACE_SNOOP_CONTEXTS");
    end
endmodule
