`timescale 1ns/1ps
module tb_cci_ace_integration #(
    parameter bit USE_RANGE=1,
    parameter int CACHED_MASTERS=1,
    parameter bit LONG_STRESS=0,
    parameter int M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=4,
    parameter int COMMON_ADMISSION_TOKENS=16,
    // REVIEW 10.2: late service writeback AW while a manager AW waits on WB.
    parameter bit WB_CONTENTION=0,
    // RCCI_PLAN 14.3-1: conservative ACE-busy issue gate (comparison build).
    parameter bit RANGE_ACE_ISSUE_GATE=0,
    // RCCI_PLAN 14.4-5: logical context depth E (defaults to the ingress depth).
    parameter int M1_READ_CONTEXTS=M1_INGRESS_DEPTH,parameter int M1_WRITE_CONTEXTS=M1_INGRESS_DEPTH,
    // RCCI_PLAN 14.6-5: read/write N_fly for the configuration matrix.
    parameter int RANGE_READ_WINDOW=LINE_TRACKER_ENTRIES,parameter int RANGE_WRITE_WINDOW=LINE_TRACKER_ENTRIES,
    // RCCI_PLAN 14.7 (보완 6): cache capacity for the dirty-ratio sweep and CPU token reservation.
    parameter int CACHE_LINES=2,parameter int CPU_RESERVED_TOKENS=0,
    // Memory-side outstanding Q (TB arbiter and memory slave).
    parameter int MEM_OUTSTANDING=4,
    // Snoop service context count S (ACE_SNOOP_CONTEXTS) and ACE manager contexts.
    parameter int SNOOP_CONTEXTS=4,
    parameter bit USE_SNOOP_FILTER=0
);
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic quiescent=1,legacy_ac_valid=0,legacy_ac_ready,legacy_cr_valid,legacy_cr_ready=0;
    logic [63:0] legacy_ac_addr=0;logic [3:0] legacy_ac_snoop=13;logic [1:0] legacy_cr_resp;
    logic req_valid=0,req_ready,rsp_valid,rsp_ready=0;logic [63:0] req_addr=0;logic [3:0] req_snoop=0;
    logic [4:0] rsp_resp;logic [511:0] rsp_data;logic maintenance_busy,idle,fault;
    logic ac_valid,ac_ready,cr_valid,cr_ready,cd_valid,cd_ready,cd_last;
    logic [63:0] ac_addr;logic [3:0] ac_snoop;logic [4:0] cr_resp,cache_cr_resp;logic [127:0] cd_data;
    logic force_cr_resp_valid=0;logic [4:0] force_cr_resp_value=0;
    logic AC1VALID,AC1READY,CR1VALID,CR1READY,CD1VALID,CD1READY,CD1LAST;
    logic [63:0] AC1ADDR;logic [3:0] AC1SNOOP;logic [4:0] CR1RESP;logic [127:0] CD1DATA;
    logic SF_UPDATE_VALID=0,SF_UPDATE_TARGET=0,SF_UPDATE_PRESENT=0;logic [63:0] SF_UPDATE_ADDR=0;
    logic aw_valid,aw_ready,w_valid,w_ready,w_last,b_valid,b_ready;
    logic [63:0] aw_addr;logic [7:0] aw_len;logic [2:0] aw_size;logic [1:0] aw_burst,b_resp;
    logic [127:0] w_data;logic [15:0] w_strb;
    logic local_valid=0,local_ready,local_rsp_valid,local_rsp_ready=0,local_error,local_hit;
    logic [1:0] local_op=0;logic [63:0] local_addr=0;logic [511:0] local_wdata=0,local_rdata;
    cache_state_t local_state=INVALID,local_rstate;
    logic endpoint_idle,ecr_valid,ecd_valid,ecr_ready,ecd_ready;
    logic allow_cr=1,allow_cd=1,allow_aw=1,allow_w=1,allow_b=1,inject_b_error=0;
    logic wb_aw_block=0;  // holds the shared WB AW port without READY
    logic mem_awready,mem_wready,mem_bvalid,mem_err;logic [1:0] mem_bresp;
    int ac_count;logic [3:0] last_ac_snoop;
    localparam logic [63:0] ADDRESS=64'h12_0000_1040;
    localparam int ID_WIDTH=4,ADDR_WIDTH=64,DATA_WIDTH=128;
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
    logic [2:0] M1_AWSNOOP,M1_AWSIZE;
    logic [1:0] M1_AWDOMAIN,M1_AWBURST,M1_AWBAR;
    logic [3:0] M1_AWCACHE;
    logic M1_AWLOCK;
    logic  M1_WVALID;
    logic  M1_WREADY;
    logic [DATA_WIDTH-1:0] M1_WDATA;
    logic [DATA_WIDTH/8-1:0] M1_WSTRB;
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
    logic [3:0] M1_ARSNOOP,M1_ARCACHE;
    logic [2:0] M1_ARSIZE;
    logic [1:0] M1_ARDOMAIN,M1_ARBURST,M1_ARBAR;
    logic M1_ARLOCK;
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
    logic [DATA_WIDTH/8-1:0] S_WSTRB;
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
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count;
    logic  tracker_full_stall;
    logic conv_read_fault,conv_read_error;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] read_ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] read_tracker_count;
    logic ACE_ARVALID,ACE_ARREADY;logic [ID_WIDTH-1:0] ACE_ARID;logic [63:0] ACE_ARADDR;
    logic [7:0] ACE_ARLEN;logic [2:0] ACE_ARSIZE;logic [1:0] ACE_ARBURST,ACE_ARDOMAIN,ACE_ARBAR;
    logic [3:0] ACE_ARSNOOP,ACE_ARCACHE;logic ACE_ARLOCK;
    logic ACE_RVALID,ACE_RREADY;logic [ID_WIDTH-1:0] ACE_RID;logic [127:0] ACE_RDATA;
    logic ACE_RLAST;logic [3:0] ACE_RRESP;logic ACE_RACK;
    logic ACE_AWVALID,ACE_AWREADY;logic [ID_WIDTH-1:0] ACE_AWID;logic [63:0] ACE_AWADDR;
    logic [7:0] ACE_AWLEN;logic [2:0] ACE_AWSIZE,ACE_AWSNOOP;logic [1:0] ACE_AWBURST,ACE_AWDOMAIN,ACE_AWBAR;
    logic [3:0] ACE_AWCACHE;logic ACE_AWLOCK,ACE_AWUNIQUE;
    logic ACE_WVALID,ACE_WREADY;logic [127:0] ACE_WDATA;logic [15:0] ACE_WSTRB;logic ACE_WLAST;
    logic ACE_BVALID,ACE_BREADY;logic [ID_WIDTH-1:0] ACE_BID;logic [1:0] ACE_BRESP;logic ACE_WACK;
    logic ACE_MANAGER_BUSY,ACE_PROTOCOL_ERROR;
    logic [31:0] admission_token_stall_cycles,m1_read_depth_stall_cycles;
    logic [31:0] m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles;
    logic wb_arvalid,wb_arready,wb_rvalid,wb_rready,wb_rlast;
    logic [63:0] wb_araddr;logic [7:0] wb_arlen;logic [2:0] wb_arsize;logic [1:0] wb_arburst,wb_rresp;
    logic [127:0] wb_rdata;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin ac_count<=0;last_ac_snoop<=0;end
        else if(ac_valid && ac_ready) begin ac_count<=ac_count+1;last_ac_snoop<=ac_snoop;end
    end
    axi_cci_ace_top #(.USE_RANGE(USE_RANGE),.M1_INGRESS_DEPTH(M1_INGRESS_DEPTH),
        .LINE_TRACKER_ENTRIES(LINE_TRACKER_ENTRIES),.M1_READ_TRACKERS(LINE_TRACKER_ENTRIES),
        .COMMON_ADMISSION_TOKENS(COMMON_ADMISSION_TOKENS),.CPU_RESERVED_TOKENS(CPU_RESERVED_TOKENS),.ACE_SNOOP_CONTEXTS(SNOOP_CONTEXTS),
        .CACHED_MASTERS(CACHED_MASTERS),.USE_SNOOP_FILTER(USE_SNOOP_FILTER),.RANGE_ACE_ISSUE_GATE(RANGE_ACE_ISSUE_GATE),
        .M1_READ_CONTEXTS(M1_READ_CONTEXTS),.M1_WRITE_CONTEXTS(M1_WRITE_CONTEXTS),
        .RANGE_READ_WINDOW(RANGE_READ_WINDOW),.RANGE_WRITE_WINDOW(RANGE_WRITE_WINDOW)) dut(
        .ACLK(clk),
        .ARESETn(rst_n),
        .M0_AWVALID(M0_AWVALID),
        .M0_AWREADY(M0_AWREADY),
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
        .M0_ARVALID(M0_ARVALID),
        .M0_ARREADY(M0_ARREADY),
        .M0_ARID(M0_ARID),
        .M0_ARADDR(M0_ARADDR),
        .M0_ARLEN(M0_ARLEN),
        .M0_RVALID(M0_RVALID),
        .M0_RREADY(M0_RREADY),
        .M0_RID(M0_RID),
        .M0_RDATA(M0_RDATA),
        .M0_RLAST(M0_RLAST),
        .M0_RRESP(M0_RRESP),
        .M1_AWVALID(M1_AWVALID),
        .M1_AWREADY(M1_AWREADY),
        .M1_AWID(M1_AWID),
        .M1_AWADDR(M1_AWADDR),
        .M1_AWLEN(M1_AWLEN),
        .M1_AWSNOOP(M1_AWSNOOP),.M1_AWDOMAIN(M1_AWDOMAIN),.M1_AWSIZE(M1_AWSIZE),
        .M1_AWBURST(M1_AWBURST),.M1_AWCACHE(M1_AWCACHE),.M1_AWLOCK(M1_AWLOCK),.M1_AWBAR(M1_AWBAR),
        .M1_WVALID(M1_WVALID),
        .M1_WREADY(M1_WREADY),
        .M1_WDATA(M1_WDATA),
        .M1_WSTRB(M1_WSTRB),
        .M1_WLAST(M1_WLAST),
        .M1_BVALID(M1_BVALID),
        .M1_BREADY(M1_BREADY),
        .M1_BID(M1_BID),
        .M1_BRESP(M1_BRESP),
        .M1_ARVALID(M1_ARVALID),
        .M1_ARREADY(M1_ARREADY),
        .M1_ARID(M1_ARID),
        .M1_ARADDR(M1_ARADDR),
        .M1_ARLEN(M1_ARLEN),
        .M1_ARSNOOP(M1_ARSNOOP),.M1_ARDOMAIN(M1_ARDOMAIN),.M1_ARSIZE(M1_ARSIZE),
        .M1_ARBURST(M1_ARBURST),.M1_ARCACHE(M1_ARCACHE),.M1_ARLOCK(M1_ARLOCK),.M1_ARBAR(M1_ARBAR),
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
        .ACVALID(ac_valid),
        .ACREADY(ac_ready),
        .ACADDR(ac_addr),
        .ACSNOOP(ac_snoop),
        .CRVALID(cr_valid),
        .CRREADY(cr_ready),
        .CRRESP(cr_resp),
        .ingress_count(ingress_count),
        .tracker_count(tracker_count),
        .tracker_full_stall(tracker_full_stall),
        .quiescent(quiescent),
        .req_valid(req_valid),
        .req_ready(req_ready),
        .req_addr(req_addr),
        .req_snoop(req_snoop),
        .rsp_valid(rsp_valid),
        .rsp_ready(rsp_ready),
        .rsp_resp(rsp_resp),
        .rsp_data(rsp_data),
        .maintenance_busy(maintenance_busy),
        .fault(fault),
        .conv_read_fault,.conv_read_error,.read_ingress_count,.read_tracker_count,
        .admission_token_stall_cycles,.m1_read_depth_stall_cycles,
        .m1_write_depth_stall_cycles,.ace_context_stall_cycles,.ace_drain_stall_cycles,
        .ACE_ARVALID,.ACE_ARREADY,.ACE_ARID,.ACE_ARADDR,.ACE_ARLEN,
        .ACE_ARSIZE,.ACE_ARBURST,.ACE_ARSNOOP,.ACE_ARDOMAIN,
        .ACE_ARBAR,.ACE_ARCACHE,.ACE_ARLOCK,
        .ACE_RVALID,.ACE_RREADY,.ACE_RID,.ACE_RDATA,.ACE_RLAST,.ACE_RRESP,.ACE_RACK,
        .ACE_AWVALID,.ACE_AWREADY,.ACE_AWID,.ACE_AWADDR,.ACE_AWLEN,
        .ACE_AWSIZE,.ACE_AWBURST,.ACE_AWSNOOP,.ACE_AWDOMAIN,
        .ACE_AWBAR,.ACE_AWCACHE,.ACE_AWLOCK,.ACE_AWUNIQUE,
        .ACE_WVALID,.ACE_WREADY,.ACE_WDATA,.ACE_WSTRB,.ACE_WLAST,
        .ACE_BVALID,.ACE_BREADY,.ACE_BID,.ACE_BRESP,.ACE_WACK,
        .ACE_MANAGER_BUSY,.ACE_PROTOCOL_ERROR,
        .CDVALID(cd_valid),
        .CDREADY(cd_ready),
        .CDDATA(cd_data),
        .CDLAST(cd_last),
        .AC1VALID,.AC1READY,.AC1ADDR,.AC1SNOOP,.CR1VALID,.CR1READY,.CR1RESP,
        .CD1VALID,.CD1READY,.CD1DATA,.CD1LAST,
        .SF_UPDATE_VALID,.SF_UPDATE_TARGET,.SF_UPDATE_ADDR,.SF_UPDATE_PRESENT,
        .WB_AWVALID(aw_valid),
        .WB_AWREADY(aw_ready && !wb_aw_block),
        .WB_AWADDR(aw_addr),
        .WB_AWLEN(aw_len),
        .WB_AWSIZE(aw_size),
        .WB_AWBURST(aw_burst),
        .WB_WVALID(w_valid),
        .WB_WREADY(w_ready),
        .WB_WDATA(w_data),
        .WB_WSTRB(w_strb),
        .WB_WLAST(w_last),
        .WB_BVALID(b_valid),
        .WB_BREADY(b_ready),
        .WB_BRESP(b_resp),
        .WB_ARVALID(wb_arvalid),.WB_ARREADY(wb_arready),.WB_ARADDR(wb_araddr),.WB_ARLEN(wb_arlen),
        .WB_ARSIZE(wb_arsize),.WB_ARBURST(wb_arburst),.WB_RVALID(wb_rvalid),.WB_RREADY(wb_rready),
        .WB_RDATA(wb_rdata),.WB_RLAST(wb_rlast),.WB_RRESP(wb_rresp)
    );
    ace_cache_snoop_endpoint #(.LINES(CACHE_LINES)) cache(
        .clk,.rst_n,.local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready,.local_error,.local_hit,.local_rstate,.local_rdata,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid(ecr_valid),.cr_ready(ecr_ready),.cr_resp(cache_cr_resp),
        .cd_valid(ecd_valid),.cd_ready(ecd_ready),.cd_data,.cd_last,.idle(endpoint_idle)
    );
    ace_cache_snoop_endpoint #(.LINES(2)) cache1(
        .clk,.rst_n,.local_valid(1'b0),.local_ready(),.local_op('0),.local_addr('0),
        .local_wdata('0),.local_state(cache_state_t'(INVALID)),.local_rsp_valid(),.local_rsp_ready(1'b0),
        .local_error(),.local_hit(),.local_rstate(),.local_rdata(),
        .ac_valid(AC1VALID),.ac_ready(AC1READY),.ac_addr(AC1ADDR),.ac_snoop(AC1SNOOP),
        .cr_valid(CR1VALID),.cr_ready(CR1READY),.cr_resp(CR1RESP),
        .cd_valid(CD1VALID),.cd_ready(CD1READY),.cd_data(CD1DATA),.cd_last(CD1LAST),.idle()
    );
    assign cr_resp=force_cr_resp_valid?force_cr_resp_value:cache_cr_resp;
    assign cr_valid=ecr_valid && allow_cr;assign ecr_ready=cr_ready && allow_cr;
    assign cd_valid=ecd_valid && allow_cd;assign ecd_ready=cd_ready && allow_cd;
    logic mem_AWVALID;
    logic mem_AWREADY;
    logic [5:0] mem_AWID;
    logic [63:0] mem_AWADDR;
    logic [7:0] mem_AWLEN;
    logic mem_WVALID;
    logic mem_WREADY;
    logic [127:0] mem_WDATA;
    logic [15:0] mem_WSTRB;
    logic mem_WLAST;
    logic mem_BVALID;
    logic mem_BREADY;
    logic [5:0] mem_BID;
    logic [1:0] mem_BRESP;
    logic mem_ARVALID;
    logic mem_ARREADY;
    logic [5:0] mem_ARID;
    logic [63:0] mem_ARADDR;
    logic [7:0] mem_ARLEN;
    logic mem_RVALID;
    logic mem_RREADY;
    logic [5:0] mem_RID;
    logic [127:0] mem_RDATA;
    logic mem_RLAST;
    logic [1:0] mem_RRESP;
    logic arb_werr,arb_rerr,arb_biderr,arb_riderr,arb_overflow;
    axi4_simple_2to1_bus_arbiter #(.ID_WIDTH(5),.MAX_OUTSTANDING_TRANSACTIONS(MEM_OUTSTANDING)) memory_bus(
        .ACLK(clk),
        .ARESETn(rst_n),
        .M0_AWVALID(S_AWVALID),
        .S_AWVALID(mem_AWVALID),
        .M1_AWVALID(aw_valid && !wb_aw_block),
        .M0_AWREADY(S_AWREADY),
        .S_AWREADY(mem_AWREADY),
        .M1_AWREADY(aw_ready),
        .M0_AWID(S_AWID),
        .S_AWID(mem_AWID),
        .M1_AWID(5'd0),
        .M0_AWADDR(S_AWADDR),
        .S_AWADDR(mem_AWADDR),
        .M1_AWADDR(aw_addr),
        .M0_AWLEN(S_AWLEN),
        .S_AWLEN(mem_AWLEN),
        .M1_AWLEN(aw_len),
        .M0_WVALID(S_WVALID),
        .S_WVALID(mem_WVALID),
        .M1_WVALID(w_valid),
        .M0_WREADY(S_WREADY),
        .S_WREADY(mem_WREADY),
        .M1_WREADY(w_ready),
        .M0_WDATA(S_WDATA),
        .M0_WSTRB(S_WSTRB),
        .S_WDATA(mem_WDATA),
        .S_WSTRB(mem_WSTRB),
        .M1_WDATA(w_data),
        .M1_WSTRB(w_strb),
        .M0_WLAST(S_WLAST),
        .S_WLAST(mem_WLAST),
        .M1_WLAST(w_last),
        .M0_BVALID(S_BVALID),
        .S_BVALID(mem_BVALID),
        .M1_BVALID(b_valid),
        .M0_BREADY(S_BREADY),
        .S_BREADY(mem_BREADY),
        .M1_BREADY(b_ready),
        .M0_BID(S_BID),
        .S_BID(mem_BID),
        .M1_BID(),
        .M0_BRESP(S_BRESP),
        .S_BRESP(mem_BRESP),
        .M1_BRESP(b_resp),
        .M0_ARVALID(S_ARVALID),
        .S_ARVALID(mem_ARVALID),
        .M1_ARVALID(wb_arvalid),
        .M0_ARREADY(S_ARREADY),
        .S_ARREADY(mem_ARREADY),
        .M1_ARREADY(wb_arready),
        .M0_ARID(S_ARID),
        .S_ARID(mem_ARID),
        .M1_ARID(5'd0),
        .M0_ARADDR(S_ARADDR),
        .S_ARADDR(mem_ARADDR),
        .M1_ARADDR(wb_araddr),
        .M0_ARLEN(S_ARLEN),
        .S_ARLEN(mem_ARLEN),
        .M1_ARLEN(wb_arlen),
        .M0_RVALID(S_RVALID),
        .S_RVALID(mem_RVALID),
        .M1_RVALID(wb_rvalid),
        .M0_RREADY(S_RREADY),
        .S_RREADY(mem_RREADY),
        .M1_RREADY(wb_rready),
        .M0_RID(S_RID),
        .S_RID(mem_RID),
        .M1_RID(),
        .M0_RDATA(S_RDATA),
        .S_RDATA(mem_RDATA),
        .M1_RDATA(wb_rdata),
        .M0_RLAST(S_RLAST),
        .S_RLAST(mem_RLAST),
        .M1_RLAST(wb_rlast),
        .M0_RRESP(S_RRESP),
        .S_RRESP(mem_RRESP),
        .M1_RRESP(wb_rresp),
        .M1_AWINGRESS_IDX(4'd0),
        .protocol_error_wlast(arb_werr),
        .protocol_error_rlast(arb_rerr),
        .protocol_error_bid_order(arb_biderr),
        .protocol_error_rid_order(arb_riderr),
        .protocol_error_outstanding_overflow(arb_overflow)
    );
    axi_memory_slave #(.ID_WIDTH(6),.MAX_OUTSTANDING_TRANSACTIONS(MEM_OUTSTANDING),.RESP_LATENCY(3)) memory(
        .ACLK(clk),.ARESETn(rst_n),
        .AWVALID(mem_AWVALID),
        .AWREADY(mem_AWREADY),
        .AWID(mem_AWID),
        .AWADDR(mem_AWADDR),
        .AWLEN(mem_AWLEN),
        .WVALID(mem_WVALID),
        .WREADY(mem_WREADY),
        .WDATA(mem_WDATA),
        .WSTRB(mem_WSTRB),
        .WLAST(mem_WLAST),
        .BVALID(mem_BVALID),
        .BREADY(mem_BREADY),
        .BID(mem_BID),
        .BRESP(mem_BRESP),
        .ARVALID(mem_ARVALID),
        .ARREADY(mem_ARREADY),
        .ARID(mem_ARID),
        .ARADDR(mem_ARADDR),
        .ARLEN(mem_ARLEN),
        .RVALID(mem_RVALID),
        .RREADY(mem_RREADY),
        .RID(mem_RID),
        .RDATA(mem_RDATA),
        .RLAST(mem_RLAST),
        .RRESP(mem_RRESP),
        .protocol_error_wlast(mem_err)
    );
    function automatic logic [511:0] pattern(input int n);
        for(int b=0;b<64;b++) pattern[b*8+:8]=8'(n*13+b*7);
    endfunction
    int slave_aw_count,slave_ar_count;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin slave_aw_count<=0;slave_ar_count<=0;end
        else begin
            if(S_AWVALID&&S_AWREADY)slave_aw_count<=slave_aw_count+1;
            if(S_ARVALID&&S_ARREADY)slave_ar_count<=slave_ar_count+1;
        end
    end
`ifdef RCCI_FIX_CASES
    // ---- RCCI_PLAN 14.2 (보완 1): ownership monitor --------------------------
    // Enabled by +fix1_monitor. It checks the conflict pairs of 14.6-7:
    //  (a) M1 line issue (read allocation / write line AW) vs registered ACE span
    //  (b) M1 line issue vs ACE handshake span in the same cycle
    //  (c) ACE handshake span vs M1 lines already owned (read trackers/entries,
    //      write line ingress entries)
    localparam int FIX1_MGR_CTX=4;
    bit fix1_monitor_on;
    initial fix1_monitor_on=$test$plusargs("fix1_monitor");
    logic [FIX1_MGR_CTX-1:0] fix1_ace_busy;
    logic [58:0] fix1_ace_first[FIX1_MGR_CTX],fix1_ace_last[FIX1_MGR_CTX];
    for(genvar g=0;g<FIX1_MGR_CTX;g++)begin:FIX1_ACE
        wire [64:0] last_byte={1'b0,dut.manager.G_CONTEXT[g].u_context.txn_addr}+
            ((65'(dut.manager.G_CONTEXT[g].u_context.txn_len)+65'd1)<<
              dut.manager.G_CONTEXT[g].u_context.txn_size)-65'd1;
        // Ownership (not mere busy): barrier, DVM, Evict and rejected requests own nothing.
        // The span is computed here from the stored request, independently of the DUT's own span.
        assign fix1_ace_busy[g]=dut.ace_own_valid[g];
        assign fix1_ace_first[g]={1'b0,dut.manager.G_CONTEXT[g].u_context.txn_addr[63:6]};
        assign fix1_ace_last[g]=last_byte[64:6];
    end
    function automatic logic [58:0] fix1_last_line(input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] size);
        logic [64:0] last_byte;
        last_byte={1'b0,addr}+((65'(len)+65'd1)<<size)-65'd1;
        return last_byte[64:6];
    endfunction
    wire fix1_rd_issue=dut.G_COH_READ.read_ingress.can_allocate;
    wire [63:0] fix1_rd_addr=
        dut.G_COH_READ.read_ingress.entries[dut.G_COH_READ.read_ingress.issue_head].addr+
        64'(dut.G_COH_READ.read_ingress.entries[dut.G_COH_READ.read_ingress.issue_head].issue_idx)*64'd64;
    // After 보완 2 a write line is owned from its reservation (hold_load).
    wire fix1_wr_issue=dut.write_range_adapter.hold_load;
    wire [63:0] fix1_wr_addr=dut.write_range_adapter.issue_cand_addr;
    wire fix1_ace_ar_fire=ACE_ARVALID&&ACE_ARREADY;
    wire fix1_ace_aw_fire=ACE_AWVALID&&ACE_AWREADY;
    function automatic bit fix1_in(input logic [58:0] line,input logic [58:0] first,input logic [58:0] last);
        return first<=line&&line<=last;
    endfunction
    int fix1_overlap_count;
    always @(posedge clk)if(rst_n&&fix1_monitor_on)begin
        logic [58:0] l;
        // (a)(b) M1 line issue
        for(int k=0;k<2;k++)begin
            bit fire;string src;
            fire=k==0?fix1_rd_issue:fix1_wr_issue;
            l=k==0?{1'b0,fix1_rd_addr[63:6]}:{1'b0,fix1_wr_addr[63:6]};
            src=k==0?"read-alloc":"write-reserve";
            if(fire)begin
                for(int g=0;g<FIX1_MGR_CTX;g++)if(fix1_ace_busy[g]&&fix1_in(l,fix1_ace_first[g],fix1_ace_last[g]))
                    $fatal(1,"FIX1_OWNERSHIP_OVERLAP src=%s line=%h ace_ctx=%0d span=%h..%h t=%0t",
                        src,l,g,fix1_ace_first[g],fix1_ace_last[g],$time);
                if(fix1_ace_ar_fire&&fix1_in(l,{1'b0,ACE_ARADDR[63:6]},fix1_last_line(ACE_ARADDR,ACE_ARLEN,ACE_ARSIZE)))
                    $fatal(1,"FIX1_OWNERSHIP_OVERLAP src=%s line=%h same-cycle ACE AR t=%0t",src,l,$time);
                if(fix1_ace_aw_fire&&fix1_in(l,{1'b0,ACE_AWADDR[63:6]},fix1_last_line(ACE_AWADDR,ACE_AWLEN,ACE_AWSIZE)))
                    $fatal(1,"FIX1_OWNERSHIP_OVERLAP src=%s line=%h same-cycle ACE AW t=%0t",src,l,$time);
            end
        end
        // (c) ACE accept vs lines already owned by M1
        for(int k=0;k<2;k++)begin
            logic [58:0] f,e;bit fire;
            fire=k==0?fix1_ace_ar_fire:fix1_ace_aw_fire;
            f=k==0?{1'b0,ACE_ARADDR[63:6]}:{1'b0,ACE_AWADDR[63:6]};
            e=k==0?fix1_last_line(ACE_ARADDR,ACE_ARLEN,ACE_ARSIZE):fix1_last_line(ACE_AWADDR,ACE_AWLEN,ACE_AWSIZE);
            if(fire)begin
                for(int t=0;t<LINE_TRACKER_ENTRIES;t++)if(dut.G_COH_READ.read_ingress.trackers[t].valid)begin
                    l={1'b0,dut.G_COH_READ.read_ingress.entries[dut.G_COH_READ.read_ingress.trackers[t].entry].addr[63:6]}+
                        59'(dut.G_COH_READ.read_ingress.trackers[t].line_idx);
                    if(fix1_in(l,f,e))$fatal(1,"FIX1_ACE_ADMIT_OVERLAP owner=read-tracker line=%h ace=%h..%h t=%0t",l,f,e,$time);
                end
                for(int x=0;x<M1_INGRESS_DEPTH;x++)if(dut.G_COH_READ.read_ingress.entries[x].valid&&
                    !dut.G_COH_READ.read_ingress.entries[x].kind_range)begin
                    l={1'b0,dut.G_COH_READ.read_ingress.entries[x].addr[63:6]};
                    if(fix1_in(l,f,e))$fatal(1,"FIX1_ACE_ADMIT_OVERLAP owner=read-line-entry line=%h ace=%h..%h t=%0t",l,f,e,$time);
                end
                if(dut.write_range_adapter.hold_valid)begin
                    l={1'b0,dut.write_range_adapter.hold_addr[63:6]};
                    if(fix1_in(l,f,e))$fatal(1,"FIX1_ACE_ADMIT_OVERLAP owner=write-hold line=%h ace=%h..%h t=%0t",l,f,e,$time);
                end
                for(int x=0;x<M1_INGRESS_DEPTH;x++)if(dut.core.coherent.control.entries[x].valid)begin
                    l={1'b0,dut.core.coherent.control.entries[x].addr[63:6]};
                    if(fix1_in(l,f,e))$fatal(1,"FIX1_ACE_ADMIT_OVERLAP owner=write-line-entry line=%h ace=%h..%h t=%0t",l,f,e,$time);
                end
            end
        end
        // (d) M1 read allocation vs write ownership, write reservation vs read
        // ownership, and same-line issue in the same cycle (RCCI_PLAN 14.5).
        if(fix1_rd_issue)begin
            l={1'b0,fix1_rd_addr[63:6]};
            for(int x=0;x<M1_INGRESS_DEPTH;x++)if(dut.write_range_adapter.contexts[x].valid)begin
                logic [58:0] lo,hi;
                lo={1'b0,dut.write_range_adapter.contexts[x].addr[63:6]}+59'(dut.write_range_adapter.contexts[x].b_idx);
                hi={1'b0,dut.write_range_adapter.contexts[x].addr[63:6]}+59'(dut.write_range_adapter.contexts[x].issue_idx)+59'(dut.write_range_adapter.hold_valid&&
                    x==int'(dut.write_range_adapter.issue_head));
                if(l>=lo&&l<hi)$fatal(1,"FIX1_M1_ISSUE_OVERLAP read-alloc line=%h in write ctx %0d t=%0t",l,x,$time);
            end
        end
        if(fix1_wr_issue)begin
            l={1'b0,fix1_wr_addr[63:6]};
            for(int x=0;x<M1_INGRESS_DEPTH;x++)if(dut.G_COH_READ.read_ingress.entries[x].valid&&
                l>={1'b0,dut.G_COH_READ.read_ingress.entries[x].addr[63:6]}+59'(dut.G_COH_READ.read_ingress.entries[x].out_idx)&&
                l<{1'b0,dut.G_COH_READ.read_ingress.entries[x].addr[63:6]}+(dut.G_COH_READ.read_ingress.entries[x].kind_range?59'(dut.G_COH_READ.read_ingress.entries[x].issue_idx):59'd1))
                $fatal(1,"FIX1_M1_ISSUE_OVERLAP write-reserve line=%h in read entry %0d t=%0t",l,x,$time);
            if(fix1_rd_issue&&fix1_rd_addr[63:6]==fix1_wr_addr[63:6])
                $fatal(1,"FIX1_M1_ISSUE_OVERLAP same-cycle line=%h t=%0t",l,$time);
        end
    end
    int fix1_m1_conflicts;
    always @(posedge clk)if(!rst_n)fix1_m1_conflicts<=0;
        else if(dut.read_issue_line_valid&&dut.write_issue_cand_valid&&
                dut.read_issue_line_addr[63:6]==dut.write_issue_cand_addr[63:6])fix1_m1_conflicts<=fix1_m1_conflicts+1;
    // ---------------------------------------------------------------------------
`endif
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic reset_case;
        @(negedge clk);rst_n=0;req_valid=0;rsp_ready=0;local_valid=0;local_rsp_ready=0;
        legacy_ac_valid=0;legacy_cr_ready=0;allow_cr=1;allow_cd=1;allow_aw=1;allow_w=1;allow_b=1;inject_b_error=0;quiescent=1;
        repeat(3) tick();rst_n=1;tick();
        for(int b=0;b<64;b++) memory.put_byte(ADDRESS+64'(b),8'haa);
    endtask
    task automatic local_cmd_at(input logic [63:0] addr,input logic [1:0] op,input cache_state_t state,input logic [511:0] value,input bit error_expected=0);
        local_addr=addr;local_op=op;local_state=state;local_wdata=value;local_valid=1;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        assert(local_rsp_valid && local_error==error_expected) else $fatal(1,"LOCAL_RESPONSE");
        local_rsp_ready=1;tick();local_rsp_ready=0;
    endtask
    task automatic local_cmd(input logic [1:0] op,input cache_state_t state,input logic [511:0] value,input bit error_expected=0);
        local_cmd_at(ADDRESS,op,state,value,error_expected);
    endtask
    task automatic request_at(input logic [63:0] addr,input logic [3:0] op);
        req_addr=addr;req_snoop=op;req_valid=1;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
    endtask
    task automatic request(input logic [3:0] op);
        request_at(ADDRESS,op);
    endtask
    task automatic core_aw_at(input logic [63:0] addr,input logic [ID_WIDTH-1:0] id);
        M1_AWADDR=addr;M1_AWID=id;M1_AWLEN=3;M1_AWVALID=1;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;
    endtask
    task automatic core_aw;
        core_aw_at(ADDRESS,3);
    endtask
    task automatic core_w(input logic [511:0] value);
        for(int b=0;b<4;b++) begin
            M1_WVALID=1;M1_WLAST=b==3;M1_WDATA=value[b*128+:128];
            do @(posedge clk);while(!M1_WREADY);
            @(negedge clk);M1_WVALID=0;
        end
    endtask
    task automatic stage8_write_error_only;
        logic [63:0] addr;int before_aw;
        addr=ADDRESS+64'h2000;before_aw=slave_aw_count;
        force_cr_resp_value=5'b00010;force_cr_resp_valid=1;M1_BREADY=0;
        core_aw_at(addr,4'hb);
        for(int n=0;n<100&&!dut.core.q_drop_valid;n++)tick();
        assert(dut.core.q_drop_valid&&!fault)else $fatal(1,"STAGE8_WRITE_ERROR_CLASSIFY");
        force_cr_resp_valid=0;core_w(pattern(101));
        for(int n=0;n<100&&!M1_BVALID;n++)tick();
        assert(M1_BVALID&&M1_BID==4'hb&&M1_BRESP==2'b10&&slave_aw_count==before_aw&&!fault)
            else $fatal(1,"STAGE8_WRITE_ERROR_BYPASS aw_delta=%0d b=%0b",slave_aw_count-before_aw,M1_BRESP);
        M1_BREADY=1;tick();M1_BREADY=0;
        assert(ingress_count==0&&tracker_count==0)else $fatal(1,"STAGE8_WRITE_ERROR_DRAIN");
    endtask
    task automatic stage8_read_error_only;
        logic [63:0] addr;int before_ar;
        addr=ADDRESS+64'h2040;before_ar=slave_ar_count;
        force_cr_resp_value=5'b00010;force_cr_resp_valid=1;
        M1_ARADDR=addr;M1_ARID=4'ha;M1_ARLEN=3;M1_ARVALID=1;
        do @(posedge clk);while(!M1_ARREADY);
        @(negedge clk);M1_ARVALID=0;M1_RREADY=1;
        for(int n=0;n<100&&!dut.G_COH_READ.read_ingress.hit_valid;n++)tick();
        force_cr_resp_valid=0;
        for(int beat=0;beat<4;beat++)begin
            do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
            assert(M1_RID==4'ha&&M1_RDATA==0&&M1_RRESP==2'b10&&M1_RLAST==(beat==3))
                else $fatal(1,"STAGE8_READ_ERROR beat=%0d",beat);
            @(negedge clk);
        end
        assert(slave_ar_count==before_ar&&conv_read_error&&!conv_read_fault&&!fault)
            else $fatal(1,"STAGE8_READ_ERROR_BYPASS ar_delta=%0d",slave_ar_count-before_ar);
    endtask
    task automatic stage8_fatal_reset;
        force_cr_resp_value=5'b00011;force_cr_resp_valid=1;
        core_aw_at(ADDRESS+64'h2080,4'h9);
        for(int n=0;n<100&&!fault;n++)tick();
        assert(fault&&!M1_WREADY)else $fatal(1,"STAGE8_ERROR_DATA_NOT_FATAL");
        force_cr_resp_valid=0;reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;
        assert(!fault&&ingress_count==0&&tracker_count==0&&!M1_BVALID)
            else $fatal(1,"STAGE8_RESET_STATE");
        stage8_write_error_only();
    endtask
    task automatic stage8_hazard_concurrency;
        logic [63:0] write_addr,ace_addr;bit admitted;
        write_addr=ADDRESS+64'h3000;ace_addr=write_addr+64'h1000;
        allow_cr=0;M1_BREADY=0;core_aw_at(write_addr,4'h7);
        for(int n=0;n<100&&tracker_count==0;n++)tick();
        assert(ingress_count!=0&&tracker_count!=0)else $fatal(1,"STAGE8_CONCURRENT_WRITE_HOLD");
        ACE_ARID=4'h6;ACE_ARADDR=write_addr;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;
        ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
        repeat(5)begin @(posedge clk);assert(!ACE_ARREADY)
            else $fatal(1,"STAGE8_CONFLICTING_ACE_ADMITTED");end
        @(negedge clk);ACE_ARADDR=ace_addr;
        admitted=0;
        for(int n=0;n<20;n++)begin
            @(posedge clk);if(ACE_ARREADY)begin admitted=1;break;end
            @(negedge clk);
        end
        assert(admitted)else $fatal(1,"STAGE8_NONCONFLICTING_ACE_BLOCKED");
        @(negedge clk);ACE_ARVALID=0;
        assert(ACE_MANAGER_BUSY&&ingress_count!=0)
            else $fatal(1,"STAGE8_NONCONFLICTING_CONCURRENCY_NOT_REACHED");
        allow_cr=1;core_w(pattern(102));M1_BREADY=1;
        for(int n=0;n<100&&!M1_BVALID;n++)tick();
        assert(M1_BVALID)else $fatal(1,"STAGE8_CONCURRENT_WRITE_B");
        tick();M1_BREADY=0;
        ACE_RREADY=1;
        for(int beat=0;beat<4;beat++)begin
            do @(posedge clk);while(!ACE_RVALID);
            assert(ACE_RID==4'h6&&ACE_RLAST==(beat==3))
                else $fatal(1,"STAGE8_CONCURRENT_ACE_R beat=%0d",beat);
            @(negedge clk);
        end
        ACE_RREADY=0;ACE_RACK=1;tick();ACE_RACK=0;
        for(int n=0;n<100&&ACE_MANAGER_BUSY;n++)tick();
        assert(!ACE_MANAGER_BUSY&&ingress_count==0&&dut.admission_active_count==0&&!fault)
            else $fatal(1,"STAGE8_CONCURRENT_DRAIN");
    endtask
`ifdef RCCI_FIX_CASES
    // ---- RCCI_PLAN 14.2 (보완 1): R1/R1' reproduction scenarios ---------------
    task automatic fix1_ace_aw(input logic [3:0] id,input logic [63:0] addr,input logic [7:0] len,
        input logic [2:0] snoop,input logic [1:0] domain);
        ACE_AWID=id;ACE_AWADDR=addr;ACE_AWLEN=len;ACE_AWSIZE=4;ACE_AWBURST=1;ACE_AWSNOOP=snoop;
        ACE_AWDOMAIN=domain;ACE_AWBAR=0;ACE_AWCACHE=4'b0010;ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
        do @(posedge clk);while(!ACE_AWREADY);
        @(negedge clk);ACE_AWVALID=0;
    endtask
    task automatic fix1_ace_w_b(input logic [7:0] len,input logic [511:0] value);
        for(int b=0;b<=int'(len);b++)begin
            ACE_WDATA=value[(b%4)*128+:128];ACE_WSTRB='1;ACE_WLAST=b==int'(len);ACE_WVALID=1;
            do @(posedge clk);while(!ACE_WREADY);
            @(negedge clk);ACE_WVALID=0;
        end
        ACE_WLAST=0;ACE_BREADY=1;
        do @(posedge clk);while(!ACE_BVALID);
        assert(ACE_BRESP==0)else $fatal(1,"FIX1_ACE_B_RESP %0b",ACE_BRESP);
        @(negedge clk);ACE_BREADY=0;
    endtask
    task automatic fix1_ace_wack;ACE_WACK=1;tick();ACE_WACK=0;endtask
    task automatic fix1_ace_ar(input logic [3:0] id,input logic [63:0] addr,input logic [7:0] len,
        input logic [3:0] snoop,input logic [1:0] domain);
        ACE_ARID=id;ACE_ARADDR=addr;ACE_ARLEN=len;ACE_ARSIZE=4;ACE_ARBURST=1;ACE_ARSNOOP=snoop;
        ACE_ARDOMAIN=domain;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
        do @(posedge clk);while(!ACE_ARREADY);
        @(negedge clk);ACE_ARVALID=0;
    endtask
    task automatic fix1_ace_r(input logic [7:0] len);
        ACE_RREADY=1;
        for(int b=0;b<=int'(len);b++)begin
            do @(posedge clk);while(!ACE_RVALID);
            assert(ACE_RLAST==(b==int'(len)))else $fatal(1,"FIX1_ACE_R_LAST beat=%0d",b);
            @(negedge clk);
        end
        ACE_RREADY=0;
    endtask
    task automatic fix1_ace_rack;ACE_RACK=1;tick();ACE_RACK=0;endtask
    function automatic logic [63:0] fix1_base(input logic [63:0] offset);
        return {ADDRESS[63:12],12'b0}+offset;
    endfunction
    // WriteRange of 8 lines with W held back: lines 0..3 fill the write window,
    // lines 4..7 stay unissued inside the adapter context.
    task automatic fix1_write_range_start(input logic [63:0] base);
        for(int line=0;line<8;line++)for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),8'h55);
        M1_BREADY=0;M1_AWADDR=base;M1_AWID=4'hc;M1_AWLEN=8'd31;
        M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWVALID=1;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;
        for(int n=0;n<200&&int'(dut.write_line_outstanding)<LINE_TRACKER_ENTRIES;n++)tick();
        assert(int'(dut.write_range_adapter.contexts[dut.write_range_adapter.issue_head].issue_idx)<5)
            else $fatal(1,"FIX1_SETUP_WRITE_LINE5_ALREADY_ISSUED");
    endtask
    task automatic fix1_write_range_w;
        logic [511:0] value;
        for(int line=0;line<8;line++)begin
            value=pattern(70+line);
            for(int beat=0;beat<4;beat++)begin
                M1_WDATA=value[beat*128+:128];M1_WSTRB='1;M1_WLAST=line==7&&beat==3;M1_WVALID=1;
                do @(posedge clk);while(!M1_WREADY);
                @(negedge clk);M1_WVALID=0;
            end
        end
        M1_WLAST=0;
    endtask
    task automatic fix1_write_range_finish(input logic [63:0] base);
        logic [511:0] value;
        for(int n=0;n<2000&&!M1_BVALID;n++)tick();
        assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0)else $fatal(1,"FIX1_WRITE_RANGE_B");
        M1_BREADY=1;tick();M1_BREADY=0;
        for(int n=0;n<200&&(dut.write_context_count!=0||ingress_count!=0);n++)tick();
        for(int line=0;line<8;line++)begin
            value=pattern(70+line);
            for(int b=0;b<64;b++)assert(memory.get_byte(base+64'(line*64+b))==value[b*8+:8])
                else $fatal(1,"FIX1_WRITE_RANGE_MEMORY line=%0d byte=%0d",line,b);
        end
        M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
    endtask
    // ReadRange of 8 lines with R held back: lines 0..3 fill the read window.
    task automatic fix1_read_range_start(input logic [63:0] base);
        for(int line=0;line<8;line++)begin
            logic [511:0] v;v=pattern(40+line);
            for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),v[b*8+:8]);
        end
        M1_RREADY=0;M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;
        M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
        do @(posedge clk);while(!M1_ARREADY);
        @(negedge clk);M1_ARVALID=0;
        for(int n=0;n<200&&int'(read_tracker_count)<LINE_TRACKER_ENTRIES;n++)tick();
        assert(int'(dut.G_COH_READ.read_ingress.entries[dut.G_COH_READ.read_ingress.issue_head].issue_idx)<5)
            else $fatal(1,"FIX1_SETUP_READ_LINE5_ALREADY_ISSUED");
    endtask
    task automatic fix1_read_range_r(input int line5_seed);
        logic [511:0] expected;
        M1_RREADY=1;
        for(int line=0;line<8;line++)begin
            expected=pattern(line==5?line5_seed:40+line);
            for(int beat=0;beat<4;beat++)begin
                do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                assert(M1_RID==4'hd&&M1_RDATA==expected[beat*128+:128]&&M1_RLAST==(line==7&&beat==3))
                    else $fatal(1,"FIX1_READ_RANGE_DATA line=%0d beat=%0d",line,beat);
                @(negedge clk);
            end
        end
        M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;
    endtask
    localparam int FIX1_HOLD=150;
    // ReadRange data check for read/write overlap cases: lines >= new_from may
    // hold either the old value or the concurrent WriteRange value, but each
    // line must be one of the two in full.
    task automatic fix1_read_lenient(input int old_seed,input int new_seed,input int new_from,
        output int new_lines);
        logic [511:0] got,old_v,new_v;
        new_lines=0;M1_RREADY=1;
        for(int line=0;line<8;line++)begin
            for(int beat=0;beat<4;beat++)begin
                do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                assert(M1_RID==4'hd&&M1_RLAST==(line==7&&beat==3))else $fatal(1,"FIX1_READ_RANGE_DATA framing line=%0d",line);
                got[beat*128+:128]=M1_RDATA;
                @(negedge clk);
            end
            old_v=pattern(old_seed+line);new_v=pattern(new_seed+line-new_from);
            if(line>=new_from&&got==new_v)new_lines++;
            else assert(got==old_v)else $fatal(1,"FIX1_READ_RANGE_DATA mixed/torn line=%0d",line);
        end
        M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;
    endtask
    task automatic fix1_write_w_seed(input int seed);
        logic [511:0] value;
        for(int line=0;line<8;line++)begin
            value=pattern(seed+line);
            for(int beat=0;beat<4;beat++)begin
                M1_WDATA=value[beat*128+:128];M1_WSTRB='1;M1_WLAST=line==7&&beat==3;M1_WVALID=1;
                do @(posedge clk);while(!M1_WREADY);
                @(negedge clk);M1_WVALID=0;
            end
        end
        M1_WLAST=0;
        for(int n=0;n<3000&&!M1_BVALID;n++)tick();
        assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0)else $fatal(1,"FIX1_WRITE_RANGE_B");
        M1_BREADY=1;tick();M1_BREADY=0;M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
    endtask
    task automatic fix1_m1_aw_range(input logic [63:0] addr);
        M1_BREADY=0;M1_AWADDR=addr;M1_AWID=4'hc;M1_AWLEN=8'd31;M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWVALID=1;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;
    endtask
    task automatic fix1_check_memory(input logic [63:0] base,input int seed);
        logic [511:0] v;
        for(int n=0;n<300&&(dut.write_context_count!=0||ingress_count!=0);n++)tick();
        for(int line=0;line<8;line++)begin
            v=pattern(seed+line);
            for(int b=0;b<64;b++)assert(memory.get_byte(base+64'(line*64+b))==v[b*8+:8])
                else $fatal(1,"FIX1_WRITE_RANGE_MEMORY line=%0d byte=%0d",line,b);
        end
    endtask
    // Stress builds use only the monitor: leaving the directed cases out keeps the C++ compile short.
`ifndef RCCI_STRESS
    task automatic fix1_case(input int c);
        logic [63:0] base,x;int t_m1,t_ace;
        case(c)
        1:begin // wr_range_vs_writeback
            base=fix1_base(64'h400);fix1_write_range_start(base);
            // WriteBack data and B finish first; WACK is delayed so the ACE context
            // still owns line 5. (A late ACE W cannot reorder memory here because the
            // manager's memory AW already holds the WB write port.)
            fix1_ace_aw(4'h5,base+64'(5*64),3,WRITE_BACK,DOMAIN_INNER);fix1_ace_w_b(3,pattern(200));
            fork fix1_write_range_w(); begin repeat(FIX1_HOLD)tick();fix1_ace_wack();end join
            fix1_write_range_finish(base);
        end
        2:begin // rd_range_vs_readunique
            // Held M1 R would block the shared in-order memory R path and also
            // the manager's ReadUnique refill. Build with LINE_TRACKER_ENTRIES=2
            // and make lines 0..1 clean cache hits so the window holds no memory R.
            assert(LINE_TRACKER_ENTRIES==2)else $fatal(1,"FIX1_CASE2_NEEDS_TRACKERS_2");
            base=fix1_base(64'h800);
            for(int line=0;line<2;line++)local_cmd_at(base+64'(line*64),1,UNIQUE_CLEAN,pattern(40+line));
            fix1_read_range_start(base);
            fix1_ace_ar(4'h6,base+64'(5*64),3,READ_UNIQUE,DOMAIN_INNER);fix1_ace_r(3);
            fork fix1_read_range_r(45); begin repeat(FIX1_HOLD)tick();fix1_ace_rack();end join
        end
        3:begin // rd_range_vs_writeback
            base=fix1_base(64'hc00);fix1_read_range_start(base);
            // The CPU presents WriteBack AW first and its W later (AXI allows it).
            // A range read of line 5 issued in between returns stale memory data.
            fix1_ace_aw(4'h5,base+64'(5*64),3,WRITE_BACK,DOMAIN_INNER);
            fork fix1_read_range_r(201); begin repeat(FIX1_HOLD)tick();fix1_ace_w_b(3,pattern(201));fix1_ace_wack();end join
        end
        4:begin // wr_range_vs_readshared
            base=fix1_base(64'h400);fix1_write_range_start(base);
            fix1_ace_ar(4'h6,base+64'(5*64),3,READ_SHARED,DOMAIN_INNER);fix1_ace_r(3);
            fork fix1_write_range_w(); begin repeat(FIX1_HOLD)tick();fix1_ace_rack();end join
            fix1_write_range_finish(base);
        end
        5:begin // wr_range_vs_ns_read_burst (lines 5..6, non-shareable ReadOnce)
            base=fix1_base(64'h400);fix1_write_range_start(base);
            fix1_ace_ar(4'h6,base+64'(5*64),7,READ_ONCE,DOMAIN_NONSHAREABLE);fix1_ace_r(7);
            fork fix1_write_range_w(); begin repeat(FIX1_HOLD)tick();fix1_ace_rack();end join
            fix1_write_range_finish(base);
        end
        6:begin // rd_range_vs_ns_write (WriteNoSnoop line 5)
            base=fix1_base(64'hc00);fix1_read_range_start(base);
            fix1_ace_aw(4'h5,base+64'(5*64),3,3'd0,DOMAIN_NONSHAREABLE);fix1_ace_w_b(3,pattern(202));
            fork fix1_read_range_r(202); begin repeat(FIX1_HOLD)tick();fix1_ace_wack();end join
        end
        7,9:begin // B1 M1 + ACE AR presented in the same cycle, same line
            x=fix1_base(64'h5000);
            for(int b=0;b<64;b++)memory.put_byte(x+64'(b),8'h33);
            M1_BREADY=1;
            fork
                begin
                    if(c==7)begin
                        M1_ARADDR=x;M1_ARID=4'h2;M1_ARLEN=3;M1_ARVALID=1;
                        do @(posedge clk);while(!M1_ARREADY);t_m1=$time;
                        @(negedge clk);M1_ARVALID=0;M1_RREADY=1;
                        for(int b=0;b<4;b++)begin do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));@(negedge clk);end
                    end else begin
                        M1_AWADDR=x;M1_AWID=4'h2;M1_AWLEN=3;M1_AWVALID=1;
                        do @(posedge clk);while(!M1_AWREADY);t_m1=$time;
                        @(negedge clk);M1_AWVALID=0;core_w(pattern(211));
                        for(int n=0;n<2000&&!M1_BVALID;n++)tick();
                    end
                end
                begin
                    fix1_ace_ar(4'h7,x,3,READ_SHARED,DOMAIN_INNER);t_ace=$time-5;
                    fix1_ace_r(3);repeat(FIX1_HOLD)tick();fix1_ace_rack();
                end
            join
            $display("FIX1_SAME_CYCLE case=%0d m1_accept=%0t ace_accept=%0t same=%0b",c,t_m1,t_ace,t_m1==t_ace);
            M1_BREADY=0;
        end
        8:begin // B1 WriteLineUnique + ACE WriteUnique presented in the same cycle
            x=fix1_base(64'h5000);M1_BREADY=1;
            fork
                begin
                    M1_AWADDR=x;M1_AWID=4'h2;M1_AWLEN=3;M1_AWVALID=1;
                    do @(posedge clk);while(!M1_AWREADY);t_m1=$time;
                    @(negedge clk);M1_AWVALID=0;core_w(pattern(212));
                    for(int n=0;n<2000&&!M1_BVALID;n++)tick();
                end
                begin
                    fix1_ace_aw(4'h5,x,0,WRITE_UNIQUE,DOMAIN_INNER);t_ace=$time-5;
                    fix1_ace_w_b(0,pattern(213));repeat(FIX1_HOLD)tick();fix1_ace_wack();
                end
            join
            $display("FIX1_SAME_CYCLE case=8 m1_accept=%0t ace_accept=%0t same=%0b",t_m1,t_ace,t_m1==t_ace);
            M1_BREADY=0;
        end
        10:begin // ACE non-shareable burst whose tail overlaps an already owned M1 line
            base=fix1_base(64'h400);fix1_write_range_start(base);
            // After the fix the ACE burst must wait for owned line 0, so the M1 W
            // stream and the ACE request run in parallel.
            fork
                fix1_write_range_w();
                begin
                    fix1_ace_ar(4'h6,base-64'd64,7,READ_ONCE,DOMAIN_NONSHAREABLE);fix1_ace_r(7);
                    repeat(FIX1_HOLD)tick();fix1_ace_rack();
                end
            join
            fix1_write_range_finish(base);
        end
        11:begin // wr_hold_late_ace: a held line AW keeps VALID/payload; a late ACE waits
            base=fix1_base(64'h400);
            for(int line=0;line<8;line++)for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),8'h55);
            force dut.write_line_aw_ready=1'b0;
            M1_BREADY=0;M1_AWADDR=base;M1_AWID=4'hc;M1_AWLEN=8'd31;
            M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWVALID=1;
            do @(posedge clk);while(!M1_AWREADY);
            @(negedge clk);M1_AWVALID=0;
            for(int n=0;n<50&&!dut.write_range_adapter.hold_valid;n++)tick();
            assert(dut.write_range_adapter.hold_valid&&dut.write_line_aw_valid&&
                   dut.write_range_adapter.hold_addr==base)else $fatal(1,"FIX1_HOLD_NOT_RESERVED");
            ACE_ARID=4'h6;ACE_ARADDR=base;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;ACE_ARSNOOP=READ_SHARED;
            ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
            repeat(30)begin
                @(posedge clk);
                assert(!ACE_ARREADY)else $fatal(1,"FIX1_HOLD_ACE_ADMITTED");
                assert(dut.write_line_aw_valid&&dut.write_line_aw_addr==base)
                    else $fatal(1,"FIX1_HOLD_AW_DROPPED");
            end
            @(negedge clk);release dut.write_line_aw_ready;
            fork
                fix1_write_range_w();
                begin
                    do @(posedge clk);while(!ACE_ARREADY);
                    @(negedge clk);ACE_ARVALID=0;fix1_ace_r(3);fix1_ace_rack();
                end
            join
            fix1_write_range_finish(base);
        end
        13:begin // wr_hold_reset: reset discards a reservation; the path then works
            base=fix1_base(64'h400);
            force dut.write_line_aw_ready=1'b0;
            M1_AWADDR=base;M1_AWID=4'hc;M1_AWLEN=8'd31;M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWVALID=1;
            do @(posedge clk);while(!M1_AWREADY);
            @(negedge clk);M1_AWVALID=0;M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
            for(int n=0;n<50&&!dut.write_range_adapter.hold_valid;n++)tick();
            assert(dut.write_range_adapter.hold_valid)else $fatal(1,"FIX1_HOLD_NOT_RESERVED");
            release dut.write_line_aw_ready;
            reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;
            assert(!dut.write_range_adapter.hold_valid&&dut.write_context_count==0&&!fault)
                else $fatal(1,"FIX1_HOLD_RESET_STATE");
            M1_BREADY=1;core_aw_at(base,4'h3);core_w(pattern(214));
            for(int n=0;n<300&&!M1_BVALID;n++)tick();
            assert(M1_BVALID&&M1_BRESP==0)else $fatal(1,"FIX1_HOLD_RESET_RESUME");
            tick();M1_BREADY=0;
        end
        14:begin // non-overblock: an ACE context on another line must not stall the range
            base=fix1_base(64'h400);
            // The range is admitted first (an active ACE still blocks new M1
            // admission, a separate conservative policy in 14.10).
            fix1_write_range_start(base);
            fix1_ace_ar(4'h6,fix1_base(64'h6000),3,READ_SHARED,DOMAIN_INNER);fix1_ace_r(3);
            fork
                fix1_write_range_w();
                begin
                    for(int n=0;n<1500&&!M1_BVALID;n++)tick();
                    assert(M1_BVALID)else $fatal(1,"FIX1_OVERBLOCK range stalled by an unrelated ACE context");
                    fix1_ace_rack();
                end
            join
            fix1_write_range_finish(base);
        end
        15:begin // same-cycle race: ACE AR handshake in the cycle line 5 becomes allocatable
            base=fix1_base(64'h800);
            for(int line=0;line<8;line++)begin
                logic [511:0] v;v=pattern(40+line);
                for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),v[b*8+:8]);
            end
            M1_RREADY=1;M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;
            M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
            do @(posedge clk);while(!M1_ARREADY);
            @(negedge clk);M1_ARVALID=0;
            fork
                fix1_read_range_r(45);
                begin
                    // Present ACE exactly when line 5 would be allocated this cycle.
                    while(!(dut.G_COH_READ.read_ingress.alloc_wait&&dut.G_COH_READ.read_ingress.free_found&&
                            int'(read_tracker_count)<LINE_TRACKER_ENTRIES&&
                            dut.G_COH_READ.read_ingress.issue_line_addr==base+64'(5*64)))
                        @(negedge clk);
                    ACE_ARID=4'h6;ACE_ARADDR=base+64'(5*64);ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
                    ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;
                    ACE_ARLOCK=0;ACE_ARVALID=1;
                    @(posedge clk);
                    $display("FIX1_SAME_CYCLE case=15 ace_ready=%0b alloc=%0b",ACE_ARREADY,
                        dut.G_COH_READ.read_ingress.can_allocate);
                    while(!ACE_ARREADY)@(posedge clk);
                    @(negedge clk);ACE_ARVALID=0;fix1_ace_r(3);repeat(40)tick();fix1_ace_rack();
                end
            join
        end
        16:begin // ACE burst whose base line the range already passed but whose tail is ahead
            base=fix1_base(64'h800);
            fix1_read_range_start(base);                       // lines 0..3 allocated, R held
            fix1_ace_ar(4'h5,base+64'(5*64),3,READ_SHARED,DOMAIN_INNER); // A owns line 5
            fork
                fix1_read_range_r(45);
                fix1_ace_r(3);
                begin
                    // Wait until the range has completed line 4 (out_idx 5) and is blocked on 5.
                    while(int'(dut.G_COH_READ.read_ingress.entries[dut.G_COH_READ.read_ingress.retire_head].out_idx)<5)
                        @(negedge clk);
                    // B: non-shareable burst lines 4..6. Its base line 4 is no longer owned.
                    wait(!ACE_RVALID&&!ACE_RREADY);
                    fix1_ace_ar(4'h6,base+64'(4*64),11,READ_ONCE,DOMAIN_NONSHAREABLE);
                    fix1_ace_rack();                           // A releases line 5
                    repeat(40)tick();                          // range must still wait for B
                    fix1_ace_r(11);repeat(10)tick();fix1_ace_rack();
                end
            join
        end
        17:begin // top-address page: the exclusive interval end needs the 59th bit
            // The read window (<=4 lines) ends exactly at the last line of the address space.
            int nl17;nl17=RANGE_READ_WINDOW<4?RANGE_READ_WINDOW:4;
            base=64'hFFFF_FFFF_FFFF_FFC0-64'((nl17-1)*64);
            for(int line=0;line<nl17;line++)begin
                logic [511:0] v;v=pattern(40+line);
                for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),v[b*8+:8]);
            end
            M1_RREADY=0;M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'(4*nl17-1);
            M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
            do @(posedge clk);while(!M1_ARREADY);
            @(negedge clk);M1_ARVALID=0;
            for(int n=0;n<200&&int'(read_tracker_count)<nl17;n++)tick();
            // M0 read of the very last line must wait while the range owns it.
            M0_ARADDR=64'hFFFF_FFFF_FFFF_FFC0;M0_ARID=4'he;M0_ARLEN=3;M0_ARVALID=1;
            repeat(20)begin @(posedge clk);assert(!M0_ARREADY)else $fatal(1,"FIX1_TOP_PAGE_M0_ADMITTED");end
            @(negedge clk);M1_RREADY=1;
            fork
                for(int line=0;line<nl17;line++)for(int beat=0;beat<4;beat++)begin
                    logic [511:0] v;v=pattern(40+line);
                    do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                    assert(M1_RDATA==v[beat*128+:128]&&M1_RLAST==(line==nl17-1&&beat==3))
                        else $fatal(1,"FIX1_TOP_PAGE_DATA line=%0d",line);
                    @(negedge clk);
                end
                begin
                    do @(posedge clk);while(!M0_ARREADY);
                    @(negedge clk);M0_ARVALID=0;
                    for(int beat=0;beat<4;beat++)begin do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));@(negedge clk);end
                end
            join
            M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;
        end
        18:begin // 64-line ReadRange and WriteRange in flight together (E/N_fly geometry)
            logic [63:0] rbase,wbase;logic [511:0] v;
            rbase=fix1_base(64'h0)+64'h10000;wbase=fix1_base(64'h0)+64'h20000;
            for(int line=0;line<64;line++)begin
                v=pattern(300+line);
                for(int b=0;b<64;b++)begin memory.put_byte(rbase+64'(line*64+b),v[b*8+:8]);
                    memory.put_byte(wbase+64'(line*64+b),8'h55);end
            end
            M1_BREADY=0;M1_RREADY=1;
            M1_ARADDR=rbase;M1_ARID=4'hd;M1_ARLEN=8'd255;M1_ARSNOOP=ARSNOOP_READ_RANGE;
            M1_AWADDR=wbase;M1_AWID=4'hc;M1_AWLEN=8'd255;M1_AWSNOOP=AWSNOOP_WRITE_RANGE;
            M1_ARVALID=1;M1_AWVALID=1;
            fork
                begin do @(posedge clk);while(!M1_ARREADY);@(negedge clk);M1_ARVALID=0;end
                begin do @(posedge clk);while(!M1_AWREADY);@(negedge clk);M1_AWVALID=0;end
            join
            fork
                for(int line=0;line<64;line++)begin
                    v=pattern(300+line);
                    for(int beat=0;beat<4;beat++)begin
                        do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                        assert(M1_RID==4'hd&&M1_RDATA==v[beat*128+:128]&&M1_RLAST==(line==63&&beat==3))
                            else $fatal(1,"FIX1_RANGE64_READ line=%0d beat=%0d",line,beat);
                        @(negedge clk);
                    end
                end
                begin
                    logic [511:0] w;
                    for(int line=0;line<64;line++)begin
                        w=pattern(400+line);
                        for(int beat=0;beat<4;beat++)begin
                            M1_WDATA=w[beat*128+:128];M1_WSTRB='1;M1_WLAST=line==63&&beat==3;M1_WVALID=1;
                            do @(posedge clk);while(!M1_WREADY);
                            @(negedge clk);M1_WVALID=0;
                        end
                    end
                    M1_WLAST=0;
                    for(int n=0;n<5000&&!M1_BVALID;n++)tick();
                    assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0)else $fatal(1,"FIX1_RANGE64_B");
                    M1_BREADY=1;tick();M1_BREADY=0;
                end
            join
            for(int n=0;n<500&&(dut.write_context_count!=0||read_ingress_count!=0);n++)tick();
            for(int line=0;line<64;line++)begin
                v=pattern(400+line);
                for(int b=0;b<64;b++)assert(memory.get_byte(wbase+64'(line*64+b))==v[b*8+:8])
                    else $fatal(1,"FIX1_RANGE64_MEMORY line=%0d",line);
            end
            M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
        end
        12:begin // wr_hold_late_read: a held write line blocks a read that reaches it later
            logic [63:0] l4;int nl;
            base=fix1_base(64'h800);l4=base+64'(4*64);
            fix1_read_range_start(base);                     // read owns lines 0..3, R held
            force dut.write_line_aw_ready=1'b0;
            fix1_m1_aw_range(l4);                            // write lines 4..11 (read-relative)
            for(int n=0;n<50&&!dut.write_range_adapter.hold_valid;n++)tick();
            assert(dut.write_range_adapter.hold_valid&&dut.write_range_adapter.hold_addr==l4)
                else $fatal(1,"FIX1_HOLD_NOT_RESERVED");
            fork
                fix1_read_lenient(40,500,4,nl);
                begin
                    while(!(dut.read_issue_line_valid&&dut.read_issue_line_addr==l4))@(negedge clk);
                    repeat(30)begin
                        @(posedge clk);
                        assert(!dut.read_issue_fire)else $fatal(1,"FIX1_HOLD_READ_ADMITTED");
                        assert(dut.write_line_aw_valid&&dut.write_line_aw_addr==l4)else $fatal(1,"FIX1_HOLD_AW_DROPPED");
                    end
                    @(negedge clk);release dut.write_line_aw_ready;
                    fix1_write_w_seed(500);
                end
            join
            assert(nl==4)else $fatal(1,"FIX1_READ_AFTER_WRITE_ORDER new_lines=%0d",nl);
            fix1_check_memory(l4,500);
        end
        19:begin // read admitted first; a later WriteRange covers the read's future lines
            logic [63:0] wbase;int nl;
            base=fix1_base(64'h800);wbase=base+64'(4*64);
            fix1_read_range_start(base);
            fix1_m1_aw_range(wbase);
            fork fix1_read_lenient(40,500,4,nl); fix1_write_w_seed(500); join
            $display("FIX1_M1_ORDER case=19 read_lines_with_new_data=%0d",nl);
            fix1_check_memory(wbase,500);
        end
        20:begin // write admitted first; a later ReadRange covers the write's future lines
            logic [63:0] wbase;int nl;
            wbase=fix1_base(64'h400);base=wbase+64'(4*64);
            fix1_write_range_start(wbase);                   // write lines 0..3 issued, W held
            fix1_read_range_start(base);                     // read owns write lines 4..7
            fork fix1_read_lenient(40,74,0,nl); fix1_write_range_w(); join
            assert(nl==0)else $fatal(1,"FIX1_WRITE_OVERTOOK_READ new_lines=%0d",nl);
            fix1_write_range_finish(wbase);
        end
        21:begin // ReadRange and WriteRange of the same 8 lines presented together
            int nl;
            base=fix1_base(64'h3000);
            for(int line=0;line<8;line++)begin
                logic [511:0] v;v=pattern(40+line);
                for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),v[b*8+:8]);
            end
            M1_BREADY=0;M1_RREADY=0;
            M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;M1_ARSNOOP=ARSNOOP_READ_RANGE;
            M1_AWADDR=base;M1_AWID=4'hc;M1_AWLEN=8'd31;M1_AWSNOOP=AWSNOOP_WRITE_RANGE;
            M1_ARVALID=1;M1_AWVALID=1;
            fork
                begin do @(posedge clk);while(!M1_ARREADY);@(negedge clk);M1_ARVALID=0;end
                begin do @(posedge clk);while(!M1_AWREADY);@(negedge clk);M1_AWVALID=0;end
            join
            fork fix1_read_lenient(40,600,0,nl); fix1_write_w_seed(600); join
            $display("FIX1_M1_ORDER case=21 conflicts=%0d read_lines_with_new_data=%0d",fix1_m1_conflicts,nl);
            assert(fix1_m1_conflicts>0)else $fatal(1,"FIX1_NO_SAME_LINE_CONFLICT");
            fix1_check_memory(base,600);
        end
        24:begin // reset lifetime: ACE span, read interval, write hold and turn all live
            logic [63:0] ra,wb,cl;int nl;
            ra=fix1_base(64'h800);wb=fix1_base(64'h400);cl=fix1_base(64'h6000);
            fix1_read_range_start(ra);                        // read intervals non-empty
            force dut.write_line_aw_ready=1'b0;
            fix1_m1_aw_range(wb);                             // write hold on line 0 of wb
            for(int n=0;n<50&&!dut.write_range_adapter.hold_valid;n++)tick();
            fix1_ace_ar(4'h6,cl,3,READ_SHARED,DOMAIN_INNER);   // ACE context owns cl (no R taken)
            force dut.m1_issue_arbiter.turn=1'b1;@(negedge clk);release dut.m1_issue_arbiter.turn;
            tick();
            assert(dut.write_range_adapter.hold_valid&&(|dut.ace_own_valid)&&dut.m1_issue_turn&&
                   read_ingress_count!=0)else $fatal(1,"FIX1_RESET_SETUP");
            // The line AW stays blocked through reset, so only reset can clear the hold.
            reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=0;M1_BREADY=0;ACE_RREADY=0;
            M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
            assert(!dut.write_range_adapter.hold_valid)else $fatal(1,"FIX1_RESET_HOLD");
            release dut.write_line_aw_ready;
            assert(dut.ace_own_valid==0)else $fatal(1,"FIX1_RESET_ACE_SPAN");
            assert(!dut.m1_issue_turn)else $fatal(1,"FIX1_RESET_TURN");
            assert(read_ingress_count==0&&dut.write_context_count==0&&!fault)else $fatal(1,"FIX1_RESET_CONTEXTS");
            for(int e=0;e<M1_INGRESS_DEPTH;e++)
                assert(!dut.G_COH_READ.read_ingress.entries[e].valid&&!dut.write_range_adapter.contexts[e].valid)
                    else $fatal(1,"FIX1_RESET_INTERVAL");
            // Reuse the same IDs and addresses right after reset.
            fix1_read_range_start(ra);fix1_read_range_r(45);
            fix1_m1_aw_range(wb);fix1_write_w_seed(500);fix1_check_memory(wb,500);
            fix1_ace_ar(4'h6,cl,3,READ_SHARED,DOMAIN_INNER);fix1_ace_r(3);fix1_ace_rack();
        end
        25:begin // fatal lifetime: no new internal issue after a fatal fault, hold kept
            logic [63:0] ra,wb;int fire_after;
            ra=fix1_base(64'h800);wb=fix1_base(64'h400);fire_after=0;
            fix1_read_range_start(ra);                        // read owns lines 0..3, R held
            force dut.write_line_aw_ready=1'b0;
            fix1_m1_aw_range(wb);                             // write hold on wb line 0
            for(int n=0;n<50&&!dut.write_range_adapter.hold_valid;n++)tick();
            fix1_ace_ar(4'h5,ra+64'(4*64),3,READ_SHARED,DOMAIN_INNER); // A owns read line 4
            M1_RREADY=1;                                      // lines 0..3 drain, range stops at line 4
            fix1_ace_r(3);                                    // A's refill R queues behind M1 R
            for(int n=0;n<300&&!(dut.read_issue_line_valid&&dut.read_issue_line_addr==ra+64'(4*64)&&
                                 dut.read_alloc_ready);n++)tick();
            assert(dut.read_alloc_ready)else $fatal(1,"FIX1_FATAL_SETUP_TRACKER");
            // ACE B on another line receives Error+DataTransfer: service fatal.
            force_cr_resp_value=5'b00011;force_cr_resp_valid=1;
            ACE_ARID=4'h7;ACE_ARADDR=fix1_base(64'h6000);ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
            ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
            do @(posedge clk);while(!ACE_ARREADY);
            @(negedge clk);ACE_ARVALID=0;
            for(int n=0;n<200&&!fault;n++)tick();
            assert(fault)else $fatal(1,"FIX1_FATAL_NOT_RAISED");
            fix1_ace_rack();                                  // A releases line 4
            repeat(60)begin
                @(posedge clk);
                if(dut.read_issue_fire||dut.write_issue_reserve)fire_after++;
                assert(dut.write_range_adapter.hold_valid)else $fatal(1,"FIX1_FATAL_HOLD_CLEARED");
            end
            assert(fire_after==0)else $fatal(1,"FIX1_FATAL_NEW_ISSUE count=%0d",fire_after);
            @(negedge clk);force_cr_resp_valid=0;release dut.write_line_aw_ready;
            reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;M1_BREADY=0;ACE_RREADY=0;
            M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
            assert(!fault&&!dut.write_range_adapter.hold_valid)else $fatal(1,"FIX1_FATAL_RESET");
        end
        22,23:begin // Error-only lines release their interval (write drop / read SLVERR)
            int t0;
            base=fix1_base(64'h400);
            force_cr_resp_value=5'b00010;force_cr_resp_valid=1;
            if(c==22)begin
                fix1_m1_aw_range(base);
                fork
                    fix1_write_range_w();
                    begin
                        for(int n=0;n<3000&&!M1_BVALID;n++)tick();
                        assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==2'b10)else $fatal(1,"FIX1_ERROR_ONLY_WRITE_B");
                        M1_BREADY=1;tick();M1_BREADY=0;
                    end
                join
                M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;
            end else begin
                M1_RREADY=1;M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
                do @(posedge clk);while(!M1_ARREADY);
                @(negedge clk);M1_ARVALID=0;
                for(int line=0;line<8;line++)for(int beat=0;beat<4;beat++)begin
                    do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                    assert(M1_RDATA==0&&M1_RRESP==2'b10&&M1_RLAST==(line==7&&beat==3))
                        else $fatal(1,"FIX1_ERROR_ONLY_READ_R line=%0d",line);
                    @(negedge clk);
                end
                M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;
            end
            force_cr_resp_valid=0;
            for(int n=0;n<200&&(dut.write_context_count!=0||read_ingress_count!=0);n++)tick();
            assert(dut.write_context_count==0&&read_ingress_count==0&&!fault)
                else $fatal(1,"FIX1_ERROR_ONLY_INTERVAL_NOT_RELEASED");
            // The released lines are immediately available to an ACE request.
            ACE_ARID=4'h6;ACE_ARADDR=base+64'(3*64);ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;ACE_ARSNOOP=READ_SHARED;
            ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;t0=0;
            do begin @(posedge clk);t0++;end while(!ACE_ARREADY&&t0<20);
            assert(ACE_ARREADY)else $fatal(1,"FIX1_ERROR_ONLY_LINE_STILL_OWNED");
            @(negedge clk);ACE_ARVALID=0;fix1_ace_r(3);fix1_ace_rack();
        end
        26:begin // review: M0 AR presented while an ACE context is busy
            int core_hs,ext_hs;
            x=fix1_base(64'h7000);
            fix1_ace_ar(4'h6,fix1_base(64'h6000),3,READ_SHARED,DOMAIN_INNER); // ACE busy (RACK held)
            M0_ARADDR=x;M0_ARID=4'h2;M0_ARLEN=3;M0_ARVALID=1;M0_RREADY=1;core_hs=0;ext_hs=0;
            repeat(40)begin
                @(posedge clk);
                if(dut.core.M0_ARVALID&&dut.core.M0_ARREADY)core_hs++;
                if(M0_ARVALID&&M0_ARREADY)ext_hs++;
            end
            @(negedge clk);M0_ARVALID=0;
            $display("REVIEW_M0_DURING_ACE core_handshakes=%0d external_handshakes=%0d",core_hs,ext_hs);
            assert(core_hs==ext_hs)else $fatal(1,"REVIEW_M0_PHANTOM core=%0d ext=%0d",core_hs,ext_hs);
            assert(ext_hs==0)else $fatal(1,"REVIEW_M0_ADMITTED_DURING_ACE n=%0d",ext_hs);
            // After RACK the presented M0 request proceeds.
            fix1_ace_r(3);fix1_ace_rack();M0_ARVALID=1;
            do @(posedge clk);while(!M0_ARREADY);
            @(negedge clk);M0_ARVALID=0;
            for(int b=0;b<4;b++)begin do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));@(negedge clk);end
        end
        27:begin // R7: a granted M0 AR keeps VALID while an M1 line becomes hazardous
            logic [63:0] l;bit m0_done;
            l=fix1_base(64'h7000);
            for(int b=0;b<64;b++)memory.put_byte(l+64'(b),8'h77);
            force mem_ARREADY=1'b0;                          // memory side stalls
            M0_ARADDR=l;M0_ARID=4'h2;M0_ARLEN=3;M0_ARVALID=1;M0_RREADY=1;
            for(int n=0;n<20&&!(dut.core.ar_lock&&!dut.core.ar_route);n++)tick();
            assert(dut.core.ar_lock&&!dut.core.ar_route)else $fatal(1,"FIX1_M0_NOT_GRANTED");
            // M1 B1 read of the same line is admitted (M0 contract) and owns it.
            M1_ARADDR=l;M1_ARID=4'h3;M1_ARLEN=3;M1_ARSNOOP=READ_ONCE;M1_ARVALID=1;M1_RREADY=1;
            do @(posedge clk);while(!M1_ARREADY);
            @(negedge clk);M1_ARVALID=0;
            repeat(10)begin @(posedge clk);
                assert(dut.core.S_ARVALID&&dut.core.S_ARADDR==l)else $fatal(1,"FIX1_M0_GRANT_DROPPED");end
            @(negedge clk);release mem_ARREADY;
            m0_done=0;
            fork
                begin do @(posedge clk);while(!M0_ARREADY);@(negedge clk);M0_ARVALID=0;
                    for(int b=0;b<4;b++)begin do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));@(negedge clk);end
                    m0_done=1;end
                for(int b=0;b<4;b++)begin do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));@(negedge clk);end
            join
        end
        28:begin // ACE waits while an M0 request is presented (it may hold the grant)
            logic [63:0] l;int ace_t,m0_t;
            l=fix1_base(64'h7000);
            force mem_ARREADY=1'b0;
            M0_ARADDR=l;M0_ARID=4'h2;M0_ARLEN=3;M0_ARVALID=1;M0_RREADY=1;
            ACE_ARID=4'h6;ACE_ARADDR=fix1_base(64'h6000);ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
            ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
            repeat(20)begin @(posedge clk);assert(!ACE_ARREADY)else $fatal(1,"FIX1_ACE_OVER_PRESENTED_M0");end
            @(negedge clk);release mem_ARREADY;ace_t=-1;m0_t=-1;
            fork
                begin do @(posedge clk);while(!M0_ARREADY);m0_t=$time;@(negedge clk);M0_ARVALID=0;
                    for(int b=0;b<4;b++)begin do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));@(negedge clk);end end
                begin do @(posedge clk);while(!ACE_ARREADY);ace_t=$time;@(negedge clk);ACE_ARVALID=0;
                    fix1_ace_r(3);fix1_ace_rack();end
            join
            assert(m0_t>=0&&ace_t>m0_t)else $fatal(1,"FIX1_ACE_BEFORE_M0 m0=%0t ace=%0t",m0_t,ace_t);
        end
        29:begin // R8: a DMA that withholds R must not block a CPU refill
            base=fix1_base(64'h800);
            for(int line=0;line<8;line++)begin
                logic [511:0] v;v=pattern(40+line);
                for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),v[b*8+:8]);
            end
            M1_RREADY=0;M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
            do @(posedge clk);while(!M1_ARREADY);
            @(negedge clk);M1_ARVALID=0;
            for(int n=0;n<200&&int'(read_tracker_count)<LINE_TRACKER_ENTRIES;n++)tick();
            repeat(50)tick();                                 // memory reads of the window complete
            fix1_ace_ar(4'h6,fix1_base(64'h6000),3,READ_SHARED,DOMAIN_INNER);
            fork
                fix1_ace_r(3);
                begin repeat(300)tick();$fatal(1,"FIX1_CPU_BLOCKED_BY_DMA_R");end
            join_any
            disable fork;
            fix1_ace_rack();
            fix1_read_range_r(45);
        end
        30:begin // R10: a multi-line M0 burst whose tail overlaps an owned M1 line waits
            base=fix1_base(64'h800);
            fix1_read_range_start(base);                      // lines 0..3 owned, R held
            M0_ARADDR=base-64'd64;M0_ARID=4'h2;M0_ARLEN=8'd7;M0_ARVALID=1;M0_RREADY=1; // lines -1..0
            repeat(20)begin @(posedge clk);assert(!M0_ARREADY)else $fatal(1,"FIX1_M0_TAIL_ADMITTED");end
            @(negedge clk);
            fork
                fix1_read_range_r(45);
                begin do @(posedge clk);while(!M0_ARREADY);@(negedge clk);M0_ARVALID=0;
                    for(int b=0;b<8;b++)begin do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));@(negedge clk);end end
            join
        end
        31:begin // R13: an Evict owns no line and does not stall a range
            base=fix1_base(64'h400);fix1_write_range_start(base);
            ACE_AWID=4'h5;ACE_AWADDR=base+64'(5*64);ACE_AWLEN=3;ACE_AWSIZE=4;ACE_AWBURST=1;ACE_AWSNOOP=EVICT;
            ACE_AWDOMAIN=DOMAIN_INNER;ACE_AWBAR=0;ACE_AWCACHE=4'b0010;ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
            do @(posedge clk);while(!ACE_AWREADY);
            @(negedge clk);ACE_AWVALID=0;ACE_BREADY=1;
            do @(posedge clk);while(!ACE_BVALID);
            @(negedge clk);ACE_BREADY=0;                     // WACK held: Evict context busy
            fork
                fix1_write_range_w();
                begin for(int n=0;n<1500&&!M1_BVALID;n++)tick();
                    assert(M1_BVALID)else $fatal(1,"FIX1_EVICT_OVERBLOCK");end
            join
            fix1_write_range_finish(base);fix1_ace_wack();
        end
        default:$fatal(1,"FIX1_BAD_CASE");
        endcase
        for(int n=0;n<500&&(ACE_MANAGER_BUSY||dut.admission_active_count!=0);n++)tick();
        assert(!fault&&!ACE_PROTOCOL_ERROR)else $fatal(1,"FIX1_FAULT");
    endtask
`endif
    // ---------------------------------------------------------------------------
`endif

`ifdef RCCI_STRESS
    // ---- RCCI_PLAN 15.2 (보완 11): constrained-random stress -----------------
    // Agents run concurrently on a 4-page region with random sizes, gaps and
    // ready/ack delays: M1 reads (ReadRange/B1), M1 writes (WriteRange/B1),
    // M0 reads/writes (multi-line bursts), ACE reads/writes. Every written line
    // carries an encoded (line, version); a read must return one version that was
    // written to that line, untorn. With RCCI_FIX_CASES the ownership monitor runs.
    localparam logic [63:0] ST_BASE=64'h12_0040_0000;
    localparam int ST_LINES=256;
    int st_ver;                         // global version counter
    bit st_written[int][int];           // [line][version] values that may be observed
    int st_errors,st_m1r,st_m1w,st_m0r,st_m0w,st_acer,st_acew;
    int st_core_m0_ar,st_ext_m0_ar,st_core_m0_aw,st_ext_m0_aw;
    bit st_active;
    function automatic logic [511:0] st_enc(input int line,input int ver);
        for(int w=0;w<16;w++)st_enc[w*32+:32]={16'(ver),16'(line)};
    endfunction
    function automatic logic [63:0] st_addr(input int line);
        return ST_BASE+64'(line*64);
    endfunction
    task automatic st_check(input string who,input int line,input logic [511:0] got);
        int ver;bit ok;
        ok=1;
        for(int w=1;w<16;w++)if(got[w*32+:32]!=got[31:0])ok=0;
        ver=int'(got[31:16]);
        if(!ok||int'(got[15:0])!=line||!st_written[line].exists(ver)) begin
            st_errors++;
            $fatal(1,"STRESS_DATA %s line=%0d word0=%h torn=%0b",who,line,got[31:0],!ok);
        end
    endtask
    function automatic int st_new_version(input int line);
        st_ver++;st_written[line][st_ver]=1;
        return st_ver;
    endfunction
    always @(posedge clk)if(rst_n&&st_active)begin
        if(dut.core.M0_ARVALID&&dut.core.M0_ARREADY)st_core_m0_ar++;
        if(M0_ARVALID&&M0_ARREADY)st_ext_m0_ar++;
        if(dut.core.M0_AWVALID&&dut.core.M0_AWREADY)st_core_m0_aw++;
        if(M0_AWVALID&&M0_AWREADY)st_ext_m0_aw++;
    end
    // Random ready generators (each agent toggles its own ready).
    task automatic st_rand_wait(input int max);
        repeat($urandom_range(max,0))tick();
    endtask
    // ---- M1 read agent -------------------------------------------------------
    task automatic st_m1_reader(input int n);
        int q_line[$],q_len[$];
        fork
            begin
                for(int i=0;i<n;i++)begin
                    int line,len;bit rng;
                    rng=USE_RANGE&&($urandom_range(1,0)==1);
                    line=$urandom_range(ST_LINES-1,0);
                    len=rng?$urandom_range(8,1):1;
                    if((line%64)+len>64)len=64-(line%64);
                    M1_ARADDR=st_addr(line);M1_ARID=4'h1;M1_ARLEN=8'(4*len-1);
                    M1_ARSNOOP=rng?ARSNOOP_READ_RANGE:READ_ONCE;M1_ARVALID=1;
                    do @(posedge clk);while(!M1_ARREADY);
                    @(negedge clk);M1_ARVALID=0;
                    q_line.push_back(line);q_len.push_back(len);
                    st_rand_wait(20);
                end
            end
            begin
                for(int i=0;i<n;i++)begin
                    int line,len;logic [511:0] got;
                    while(q_line.size()==0)tick();
                    line=q_line.pop_front();len=q_len.pop_front();
                    for(int l=0;l<len;l++)begin
                        for(int b=0;b<4;b++)begin
                            M1_RREADY=($urandom_range(3,0)!=0);
                            while(!(M1_RVALID&&M1_RREADY))begin @(negedge clk);M1_RREADY=($urandom_range(3,0)!=0);
                                @(posedge clk);end
                            got[b*128+:128]=M1_RDATA;
                            assert(M1_RLAST==(l==len-1&&b==3))else $fatal(1,"STRESS_M1_RLAST");
                            @(negedge clk);
                        end
                        st_check("m1-read",line+l,got);
                    end
                    st_m1r++;
                end
                M1_RREADY=1;
            end
        join
    endtask
    // ---- M1 write agent ------------------------------------------------------
    task automatic st_m1_writer(input int n);
        int q_line[$],q_len[$],b_left;
        b_left=n;
        fork
            begin
                for(int i=0;i<n;i++)begin
                    int line,len;bit rng;
                    rng=USE_RANGE&&($urandom_range(1,0)==1);
                    line=$urandom_range(ST_LINES-1,0);
                    len=rng?$urandom_range(8,1):1;
                    if((line%64)+len>64)len=64-(line%64);
                    M1_AWADDR=st_addr(line);M1_AWID=4'h2;M1_AWLEN=8'(4*len-1);
                    M1_AWSNOOP=rng?AWSNOOP_WRITE_RANGE:WRITE_LINE_UNIQUE;M1_AWVALID=1;
                    do @(posedge clk);while(!M1_AWREADY);
                    @(negedge clk);M1_AWVALID=0;
                    q_line.push_back(line);q_len.push_back(len);
                    st_rand_wait(20);
                end
            end
            begin
                for(int i=0;i<n;i++)begin
                    int line,len;logic [511:0] v;
                    while(q_line.size()==0)tick();
                    line=q_line.pop_front();len=q_len.pop_front();
                    for(int l=0;l<len;l++)begin
                        v=st_enc(line+l,st_new_version(line+l));
                        for(int b=0;b<4;b++)begin
                            M1_WDATA=v[b*128+:128];M1_WSTRB='1;M1_WLAST=(l==len-1&&b==3);M1_WVALID=1;
                            do @(posedge clk);while(!M1_WREADY);
                            @(negedge clk);M1_WVALID=0;
                            st_rand_wait(2);
                        end
                    end
                    M1_WLAST=0;
                end
            end
            begin
                while(b_left>0)begin
                    M1_BREADY=($urandom_range(3,0)!=0);
                    @(posedge clk);
                    if(M1_BVALID&&M1_BREADY)begin
                        assert(M1_BRESP==0)else $fatal(1,"STRESS_M1_BRESP");
                        b_left--;st_m1w++;
                    end
                    @(negedge clk);
                end
                M1_BREADY=0;
            end
        join
    endtask
    // ---- M0 agent (non-coherent; reads see memory versions) ----------------
    task automatic st_m0(input int n);
        for(int i=0;i<n;i++)begin
            int line,len;logic [511:0] got;
            line=$urandom_range(ST_LINES-2,0);
            if($urandom_range(1,0))begin
                len=((line%64)==63)?1:$urandom_range(2,1);
                M0_ARADDR=st_addr(line);M0_ARID=4'h3;M0_ARLEN=8'(4*len-1);M0_ARVALID=1;
                do @(posedge clk);while(!M0_ARREADY);
                @(negedge clk);M0_ARVALID=0;
                for(int l=0;l<len;l++)begin
                    for(int b=0;b<4;b++)begin
                        M0_RREADY=($urandom_range(3,0)!=0);
                        while(!(M0_RVALID&&M0_RREADY))begin @(negedge clk);M0_RREADY=($urandom_range(3,0)!=0);@(posedge clk);end
                        got[b*128+:128]=M0_RDATA;@(negedge clk);
                    end
                    // M0 is non-coherent: it reads memory, which holds a written version.
                    st_check("m0-read",line+l,got);
                end
                M0_RREADY=1;st_m0r++;
            end else begin
                logic [511:0] v;
                v=st_enc(line,st_new_version(line));
                M0_AWADDR=st_addr(line);M0_AWID=4'h3;M0_AWLEN=3;M0_AWVALID=1;
                do @(posedge clk);while(!M0_AWREADY);
                @(negedge clk);M0_AWVALID=0;
                for(int b=0;b<4;b++)begin
                    M0_WDATA=v[b*128+:128];M0_WLAST=b==3;M0_WVALID=1;
                    do @(posedge clk);while(!M0_WREADY);
                    @(negedge clk);M0_WVALID=0;
                end
                M0_WLAST=0;M0_BREADY=1;
                do @(posedge clk);while(!M0_BVALID);
                @(negedge clk);st_m0w++;
            end
            st_rand_wait(30);
        end
    endtask
    // ---- ACE agent -----------------------------------------------------------
    task automatic st_ace(input int n);
        for(int i=0;i<n;i++)begin
            int line,kind,len;logic [511:0] got;
            line=$urandom_range(ST_LINES-2,0);kind=$urandom_range(4,0);
            if(kind<=2)begin
                len=(kind==2&&(line%64)!=63)?2:1;          // kind 2: non-shareable ReadOnce burst
                ACE_ARID=4'(4+(i%4));ACE_ARADDR=st_addr(line);ACE_ARLEN=8'(4*len-1);ACE_ARSIZE=4;ACE_ARBURST=1;
                ACE_ARSNOOP=kind==0?READ_SHARED:kind==1?READ_UNIQUE:READ_ONCE;
                ACE_ARDOMAIN=kind==2?DOMAIN_NONSHAREABLE:DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;
                ACE_ARVALID=1;
                do @(posedge clk);while(!ACE_ARREADY);
                @(negedge clk);ACE_ARVALID=0;ACE_RREADY=1;
                for(int l=0;l<len;l++)begin
                    for(int b=0;b<4;b++)begin do @(posedge clk);while(!ACE_RVALID);got[b*128+:128]=ACE_RDATA;@(negedge clk);end
                    st_check("ace-read",line+l,got);
                end
                ACE_RREADY=0;st_rand_wait(15);ACE_RACK=1;tick();ACE_RACK=0;st_acer++;
            end else begin
                logic [511:0] v;
                v=st_enc(line,st_new_version(line));
                ACE_AWID=4'(4+(i%4));ACE_AWADDR=st_addr(line);ACE_AWLEN=3;ACE_AWSIZE=4;ACE_AWBURST=1;
                ACE_AWSNOOP=kind==3?WRITE_LINE_UNIQUE:WRITE_BACK;ACE_AWDOMAIN=DOMAIN_INNER;ACE_AWBAR=0;
                ACE_AWCACHE=4'b0010;ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
                do @(posedge clk);while(!ACE_AWREADY);
                @(negedge clk);ACE_AWVALID=0;
                for(int b=0;b<4;b++)begin
                    ACE_WDATA=v[b*128+:128];ACE_WSTRB='1;ACE_WLAST=b==3;ACE_WVALID=1;
                    do @(posedge clk);while(!ACE_WREADY);
                    @(negedge clk);ACE_WVALID=0;
                end
                ACE_WLAST=0;ACE_BREADY=1;
                do @(posedge clk);while(!ACE_BVALID);
                @(negedge clk);ACE_BREADY=0;st_rand_wait(15);ACE_WACK=1;tick();ACE_WACK=0;st_acew++;
            end
            st_rand_wait(40);
        end
    endtask
    task automatic st_run;
        int seed,n;
        seed=1;n=40;
        void'($value$plusargs("stress_seed=%d",seed));void'($value$plusargs("stress_n=%d",n));
        void'($urandom(seed));
        // Initial memory: version 0 of every line; some lines dirty in the CPU cache.
        for(int l=0;l<ST_LINES;l++)begin
            logic [511:0] v;v=st_enc(l,0);st_written[l][0]=1;
            for(int b=0;b<64;b++)memory.put_byte(st_addr(l)+64'(b),v[b*8+:8]);
        end
        if(CACHE_LINES>=ST_LINES&&!USE_SNOOP_FILTER&&!$test$plusargs("stress_nodirty"))for(int l=0;l<ST_LINES;l+=7)
            local_cmd_at(st_addr(l),1,UNIQUE_DIRTY,st_enc(l,st_new_version(l)));
        st_active=1;M0_RREADY=1;
        fork
            st_m1_reader(n);
            st_m1_writer(n);
            st_m0(n);
            st_ace(n);
        join
        for(int t=0;t<2000&&(ACE_MANAGER_BUSY||read_ingress_count!=0||dut.write_context_count!=0||ingress_count!=0);t++)tick();
        st_active=0;
        assert(!fault&&!ACE_PROTOCOL_ERROR)else $fatal(1,"STRESS_FAULT");
        assert(st_core_m0_ar==st_ext_m0_ar&&st_core_m0_aw==st_ext_m0_aw)
            else $fatal(1,"STRESS_M0_HANDSHAKE core=%0d/%0d ext=%0d/%0d",st_core_m0_ar,st_core_m0_aw,st_ext_m0_ar,st_ext_m0_aw);
        assert(read_ingress_count==0&&dut.write_context_count==0&&!ACE_MANAGER_BUSY)
            else $fatal(1,"STRESS_DRAIN");
        $display("STRESS_RESULT seed=%0d m1r=%0d m1w=%0d m0r=%0d m0w=%0d acer=%0d acew=%0d versions=%0d",
            seed,st_m1r,st_m1w,st_m0r,st_m0w,st_acer,st_acew,st_ver);
    endtask
    // ---------------------------------------------------------------------------
`endif
`ifdef RCCI_PERF
    // ---- RCCI_PLAN 14.7 (보완 6): performance measurement -------------------
    // One run per simulation, configured by plusargs:
    //   +perf_op=0 read / 1 write, +perf_lines=N (<=256), +perf_dirty=0..100 (%),
    //   +perf_cpu=0 none / 1 non-conflicting / 2 conflicting ACE ReadShared stream,
    //   +perf_cpu_period=C (cycles between CPU requests, default 40).
    // B1 (USE_RANGE=0) issues one ReadOnce / WriteLineUnique per line with up to
    // LINE_TRACKER_ENTRIES outstanding; rCCI issues one ReadRange / WriteRange per
    // 4 KB chunk with up to M1_READ/WRITE_CONTEXTS outstanding ranges.
    localparam logic [63:0] PERF_BASE=64'h12_0010_0000;
    bit perf_active;int perf_cycles;
    longint perf_ent_sum,perf_trk_sum,perf_addr_stall,perf_res_stall;int perf_ent_max,perf_trk_max;
    always @(posedge clk)if(perf_active)begin
        int ent,trk;
        perf_cycles<=perf_cycles+1;
        ent=int'(read_ingress_count)+int'(dut.write_context_count);
        trk=int'(read_tracker_count)+int'(dut.write_line_outstanding);
        perf_ent_sum<=perf_ent_sum+ent;perf_trk_sum<=perf_trk_sum+trk;
        if(ent>perf_ent_max)perf_ent_max<=ent;
        if(trk>perf_trk_max)perf_trk_max<=trk;
        // Address-hazard stall: a line could issue but an owner blocks it.
        if((dut.read_issue_line_valid&&dut.read_alloc_ready&&!dut.read_issue_fire)||
           (dut.write_issue_cand_valid&&!dut.write_issue_reserve))perf_addr_stall<=perf_addr_stall+1;
        // Shared-resource stall: a line waits for a tracker / window slot.
        if(dut.read_issue_line_valid&&!dut.read_alloc_ready)perf_res_stall<=perf_res_stall+1;
    end
    function automatic bit perf_is_dirty(input int i,input int pct);
        return ((i+1)*pct)/100 > (i*pct)/100;
    endfunction
    task automatic perf_run;
        int op,lines,dirty,cpu,period,cap,t_first,t_end,dma_req,lines_done,beats,cpu_n;
        longint cpu_acc_sum,cpu_lat_sum;int cpu_acc_max,cpu_lat_max;bit dma_done;
        int tok0,rd0,wr0,ctx0;
        op=0;lines=64;dirty=0;cpu=0;period=40;
        void'($value$plusargs("perf_op=%d",op));void'($value$plusargs("perf_lines=%d",lines));
        void'($value$plusargs("perf_dirty=%d",dirty));void'($value$plusargs("perf_cpu=%d",cpu));
        void'($value$plusargs("perf_cpu_period=%d",period));
        assert(lines>0&&lines<=256&&(dirty==0||CACHE_LINES>=lines))else $fatal(1,"PERF_GEOMETRY");
        cap=USE_RANGE?(op==0?M1_READ_CONTEXTS:M1_WRITE_CONTEXTS):LINE_TRACKER_ENTRIES;
        for(int i=0;i<lines;i++)begin
            logic [511:0] v;v=pattern(1000+i);
            for(int b=0;b<64;b++)memory.put_byte(PERF_BASE+64'(i*64+b),v[b*8+:8]);
            if(perf_is_dirty(i,dirty))local_cmd_at(PERF_BASE+64'(i*64),1,UNIQUE_DIRTY,pattern(2000+i));
        end
        M1_RREADY=1;M1_BREADY=1;t_first=-1;dma_req=0;lines_done=0;dma_done=0;
        cpu_n=0;cpu_acc_sum=0;cpu_lat_sum=0;cpu_acc_max=0;cpu_lat_max=0;
        tok0=admission_token_stall_cycles;rd0=m1_read_depth_stall_cycles;
        wr0=m1_write_depth_stall_cycles;ctx0=ace_context_stall_cycles;
        @(negedge clk);perf_active=1;
        fork
            begin // DMA request issue
                int issued,out_lines,line_issued_ranges;int chunk;
                issued=0;
                while(issued<lines)begin
                    chunk=USE_RANGE?((64-((issued)%64))<(lines-issued)?(64-(issued%64)):(lines-issued)):1;
                    if((USE_RANGE?(dma_req-(op==0?0:0)):issued-lines_done)>=0 &&
                       (USE_RANGE?(perf_ranges_out<cap):(issued-lines_done<cap)))begin
                        if(op==0)begin
                            M1_ARADDR=PERF_BASE+64'(issued*64);M1_ARID=4'h1;M1_ARLEN=8'(4*chunk-1);
                            M1_ARSNOOP=USE_RANGE?ARSNOOP_READ_RANGE:READ_ONCE;M1_ARVALID=1;
                            do @(posedge clk);while(!M1_ARREADY);
                            @(negedge clk);M1_ARVALID=0;
                        end else begin
                            M1_AWADDR=PERF_BASE+64'(issued*64);M1_AWID=4'h1;M1_AWLEN=8'(4*chunk-1);
                            M1_AWSNOOP=USE_RANGE?AWSNOOP_WRITE_RANGE:WRITE_LINE_UNIQUE;M1_AWVALID=1;
                            do @(posedge clk);while(!M1_AWREADY);
                            @(negedge clk);M1_AWVALID=0;
                        end
                        perf_chunk_q.push_back(chunk);perf_ranges_out++;
                        issued+=chunk;dma_req++;
                    end else @(negedge clk);
                end
            end
            if(op==0)begin // R collection and data check
                logic [511:0] got,want;
                for(int i=0;i<lines;i++)begin
                    for(int b=0;b<4;b++)begin
                        do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                        if(t_first<0)t_first=perf_cycles;
                        got[b*128+:128]=M1_RDATA;
                        assert(M1_RRESP==0)else $fatal(1,"PERF_READ_RESP");
                        if(M1_RLAST)perf_ranges_out--;
                        @(negedge clk);
                    end
                    want=perf_is_dirty(i,dirty)?pattern(2000+i):pattern(1000+i);
                    assert(got==want)else $fatal(1,"PERF_READ_DATA line=%0d",i);
                    lines_done++;
                end
                t_end=perf_cycles;dma_done=1;
            end else begin // W stream, then B collection
                fork
                    begin
                        int sent,in_chunk,chunk_left;logic [511:0] v;
                        sent=0;
                        while(sent<lines)begin
                            while(perf_w_chunk_q.size()==0)begin
                                if(perf_chunk_q.size()!=perf_w_seen)begin perf_w_chunk_q.push_back(perf_chunk_q[perf_w_seen]);perf_w_seen++;end
                                else @(negedge clk);
                            end
                            chunk_left=perf_w_chunk_q.pop_front();
                            for(int l=0;l<chunk_left;l++)begin
                                v=pattern(3000+sent);
                                for(int b=0;b<4;b++)begin
                                    M1_WDATA=v[b*128+:128];M1_WSTRB='1;M1_WLAST=(l==chunk_left-1)&&b==3;M1_WVALID=1;
                                    do @(posedge clk);while(!M1_WREADY);
                                    if(t_first<0)t_first=perf_cycles;
                                    @(negedge clk);M1_WVALID=0;
                                end
                                sent++;
                            end
                        end
                        M1_WLAST=0;
                    end
                    begin
                        int bdone;bdone=0;
                        while(bdone<lines)begin
                            do @(posedge clk);while(!(M1_BVALID&&M1_BREADY));
                            assert(M1_BRESP==0)else $fatal(1,"PERF_WRITE_RESP");
                            bdone+=perf_b_chunk(perf_b_seen);perf_b_seen++;perf_ranges_out--;
                            lines_done=bdone;
                            @(negedge clk);
                        end
                    end
                join
                t_end=perf_cycles;dma_done=1;
            end
            begin // CPU ACE ReadShared stream
                int k;longint a0,t0;
                k=0;
                if(cpu!=0)while(!dma_done)begin
                    ACE_ARID=4'h6;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;ACE_ARSNOOP=READ_SHARED;
                    ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;
                    ACE_ARADDR=cpu==2?PERF_BASE+64'(((k*37)%lines)*64):PERF_BASE+64'h40000+64'(k*64);
                    a0=perf_cycles;ACE_ARVALID=1;
                    do @(posedge clk);while(!ACE_ARREADY);
                    t0=perf_cycles;@(negedge clk);ACE_ARVALID=0;ACE_RREADY=1;
                    for(int b=0;b<4;b++)begin do @(posedge clk);while(!ACE_RVALID);@(negedge clk);end
                    ACE_RREADY=0;ACE_RACK=1;tick();ACE_RACK=0;
                    cpu_n++;cpu_acc_sum+=t0-a0;cpu_lat_sum+=perf_cycles-a0;
                    if(t0-a0>cpu_acc_max)cpu_acc_max=t0-a0;
                    if(perf_cycles-a0>cpu_lat_max)cpu_lat_max=perf_cycles-a0;
                    k++;repeat(period)begin if(dma_done)break;tick();end
                end
            end
        join
        perf_active=0;
        if(op==1)begin
            for(int n=0;n<200&&(dut.write_context_count!=0||ingress_count!=0);n++)tick();
            for(int i=0;i<lines;i++)begin
                logic [511:0] v;v=pattern(3000+i);
                for(int b=0;b<64;b++)assert(memory.get_byte(PERF_BASE+64'(i*64+b))==v[b*8+:8])
                    else $fatal(1,"PERF_WRITE_MEMORY line=%0d",i);
            end
        end
        $display("PERF_RESULT s=%0d q=%0d design=%s op=%0d lines=%0d dirty=%0d cpu=%0d cap=%0d E=%0d rw=%0d ww=%0d trackers=%0d tokens=%0d cpu_res=%0d cycles=%0d first=%0d ent_sum=%0d ent_max=%0d trk_sum=%0d trk_max=%0d tok_stall=%0d rd_depth_stall=%0d wr_depth_stall=%0d ace_ctx_stall=%0d addr_stall=%0d res_stall=%0d dma_req=%0d cpu_n=%0d cpu_acc_sum=%0d cpu_acc_max=%0d cpu_lat_sum=%0d cpu_lat_max=%0d",
            SNOOP_CONTEXTS,MEM_OUTSTANDING,USE_RANGE?"rCCI":"B1",op,lines,dirty,cpu,cap,USE_RANGE?(op==0?M1_READ_CONTEXTS:M1_WRITE_CONTEXTS):LINE_TRACKER_ENTRIES,
            RANGE_READ_WINDOW,RANGE_WRITE_WINDOW,LINE_TRACKER_ENTRIES,COMMON_ADMISSION_TOKENS,CPU_RESERVED_TOKENS,
            t_end,t_first,perf_ent_sum,perf_ent_max,perf_trk_sum,perf_trk_max,
            int'(admission_token_stall_cycles)-tok0,int'(m1_read_depth_stall_cycles)-rd0,
            int'(m1_write_depth_stall_cycles)-wr0,int'(ace_context_stall_cycles)-ctx0,
            perf_addr_stall,perf_res_stall,dma_req,cpu_n,cpu_acc_sum,cpu_acc_max,cpu_lat_sum,cpu_lat_max);
    endtask
    int perf_ranges_out=0,perf_w_seen=0,perf_b_seen=0;int perf_chunk_q[$],perf_w_chunk_q[$];
    function automatic int perf_b_chunk(input int idx);
        return perf_chunk_q[idx];
    endfunction
    // ---------------------------------------------------------------------------
`endif
    task automatic core_read_ci(input logic [63:0] addr,input logic [ID_WIDTH-1:0] id,
                                input logic [511:0] expected);
        int before_count=ac_count;
        M1_ARADDR=addr;M1_ARID=id;M1_ARLEN=3;M1_ARVALID=1;
        do @(posedge clk);while(!M1_ARREADY);
        @(negedge clk);M1_ARVALID=0;M1_RREADY=1;
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!(M1_RVALID && M1_RREADY));
            assert(M1_RID==id && M1_RDATA==expected[b*128+:128] && M1_RLAST==(b==3) && M1_RRESP==0)
                else $fatal(1,"COHERENT_M1_READ_DATA");
            @(negedge clk);
        end
        assert(ac_count==before_count+1 && last_ac_snoop==READ_ONCE)
            else $fatal(1,"COHERENT_M1_READ_SNOOP");
        assert(read_ingress_count==0 && read_tracker_count==0 && !conv_read_fault && !conv_read_error)
            else $fatal(1,"COHERENT_M1_READ_DRAIN");
    endtask
    task automatic rcci_read_range_8;
        logic [63:0] base,mix_addr;logic [511:0] expected,mix_value;int before_count;
        base={ADDRESS[63:12],12'b0}+64'h2000;before_count=ac_count;
        for(int line=0;line<8;line++)begin
            expected=pattern(40+line);
            for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),expected[b*8+:8]);
        end
        // Keep the final line clean in the cache. Earlier lines miss, so the
        // top-level test covers memory R followed by a CD-sourced final line.
        local_cmd_at(base+64'(7*64),1,UNIQUE_CLEAN,pattern(47));
        mix_addr=base+64'h1000;mix_value=pattern(60);
        for(int b=0;b<64;b++)memory.put_byte(mix_addr+64'(b),mix_value[b*8+:8]);
        M1_ARADDR=base;M1_ARID=4'hd;M1_ARLEN=8'd31;
        M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARVALID=1;
        do @(posedge clk);while(!M1_ARREADY);
        @(negedge clk);M1_ARVALID=0;M1_RREADY=1;
        // Mix an unrelated M0 read while the range owns several line slots.
        M0_ARADDR=mix_addr;M0_ARID=4'he;M0_ARLEN=3;M0_ARVALID=1;
        do @(posedge clk);while(!M0_ARREADY);
        @(negedge clk);M0_ARVALID=0;M0_RREADY=1;
        fork
            begin
                for(int line=0;line<8;line++)begin
                    expected=pattern(40+line);
                    for(int beat=0;beat<4;beat++)begin
                        do @(posedge clk);while(!(M1_RVALID&&M1_RREADY));
                        assert(M1_RID==4'hd&&M1_RDATA==expected[beat*128+:128]&&
                               M1_RLAST==(line==7&&beat==3)&&M1_RRESP==0)
                            else $fatal(1,"RCCI_READ_RANGE_R line=%0d beat=%0d last=%0d",line,beat,M1_RLAST);
                        @(negedge clk);
                    end
                end
            end
            begin
                for(int beat=0;beat<4;beat++)begin
                    do @(posedge clk);while(!(M0_RVALID&&M0_RREADY));
                    assert(M0_RID==4'he&&M0_RDATA==mix_value[beat*128+:128]&&M0_RLAST==(beat==3))
                        else $fatal(1,"RCCI_READ_RANGE_M0_MIX beat=%0d",beat);
                    @(negedge clk);
                end
            end
        join
        M1_ARSNOOP=READ_ONCE;M1_ARLEN=3;
        for(int n=0;n<100&&(read_ingress_count!=0||read_tracker_count!=0);n++)tick();
        assert(ac_count==before_count+8&&last_ac_snoop==READ_ONCE&&
               read_ingress_count==0&&read_tracker_count==0&&!conv_read_fault&&!conv_read_error)
            else $fatal(1,"RCCI_READ_RANGE_DRAIN ac=%0d ingress=%0d tracker=%0d",
                ac_count-before_count,read_ingress_count,read_tracker_count);
        local_cmd_at(base+64'(7*64),0,INVALID,0);
        assert(local_hit&&local_rdata==pattern(47))else $fatal(1,"RCCI_READ_RANGE_HIT_COPY");
        local_cmd_at(base+64'(7*64),3,INVALID,0);
    endtask
    task automatic rcci_write_range_8;
        logic [63:0] base;logic [511:0] value;int before_count,max_lines;
        base={ADDRESS[63:12],12'b0}+64'h400;before_count=ac_count;max_lines=0;
        for(int line=0;line<8;line++)begin
            value=pattern(70+line);
            for(int b=0;b<64;b++)memory.put_byte(base+64'(line*64+b),8'h55);
        end
        local_cmd_at(base+64'h40,1,UNIQUE_DIRTY,pattern(91));
        local_cmd_at(base+64'h180,1,UNIQUE_CLEAN,pattern(92));
        M1_BREADY=0;M1_AWADDR=base;M1_AWID=4'hc;M1_AWLEN=8'd31;
        M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWVALID=1;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;
        for(int line=0;line<8;line++)begin
            value=pattern(70+line);
            for(int beat=0;beat<4;beat++)begin
                M1_WDATA=value[beat*128+:128];M1_WSTRB='1;
                M1_WLAST=line==7&&beat==3;M1_WVALID=1;
                do begin @(posedge clk);if(int'(dut.write_line_outstanding)>max_lines)
                    max_lines=int'(dut.write_line_outstanding);end while(!M1_WREADY);
                @(negedge clk);M1_WVALID=0;
            end
        end
        while(!M1_BVALID)begin tick();if(int'(dut.write_line_outstanding)>max_lines)
            max_lines=int'(dut.write_line_outstanding);end
        assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0&&max_lines>=(RANGE_WRITE_WINDOW<2?RANGE_WRITE_WINDOW:2))
            else $fatal(1,"RCCI_WRITE_RANGE_B id=%0h resp=%0b window=%0d",M1_BID,M1_BRESP,max_lines);
        repeat(3)begin tick();assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0)
            else $fatal(1,"RCCI_WRITE_RANGE_B_STABILITY");end
        M1_BREADY=1;tick();
        for(int n=0;n<100&&(dut.write_context_count!=0||ingress_count!=0||tracker_count!=0);n++)tick();
        assert(ac_count==before_count+8&&last_ac_snoop==MAKE_INVALID&&
               dut.write_context_count==0&&ingress_count==0&&tracker_count==0)
            else $fatal(1,"RCCI_WRITE_RANGE_DRAIN ac=%0d ctx=%0d ingress=%0d tracker=%0d",
                ac_count-before_count,dut.write_context_count,ingress_count,tracker_count);
        for(int line=0;line<8;line++)begin
            value=pattern(70+line);
            for(int b=0;b<64;b++)assert(memory.get_byte(base+64'(line*64+b))==value[b*8+:8])
                else $fatal(1,"RCCI_WRITE_RANGE_MEMORY line=%0d byte=%0d",line,b);
        end
        local_cmd_at(base+64'h40,0,INVALID,0);assert(!local_hit)else $fatal(1,"RCCI_WRITE_RANGE_DIRTY_NOT_INVALID");
        local_cmd_at(base+64'h180,0,INVALID,0);assert(!local_hit)else $fatal(1,"RCCI_WRITE_RANGE_CLEAN_NOT_INVALID");
        M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWLEN=3;M1_WLAST=0;
    endtask
    task automatic manager_readshared(input logic [511:0] expected);
        int before_count=ac_count;
        ACE_ARID=4'hc;ACE_ARADDR=ADDRESS;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;
        ACE_ARVALID=1;
        do @(posedge clk);while(!ACE_ARREADY);
        @(negedge clk);ACE_ARVALID=0;ACE_RREADY=1;
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!ACE_RVALID);
            assert(ACE_RID==4'hc && ACE_RDATA==expected[b*128+:128] && ACE_RLAST==(b==3) && ACE_RRESP[1:0]==0)
                else $fatal(1,"TOP_MANAGER_READSHARED");
            @(negedge clk);
        end
        ACE_RREADY=0;assert(ACE_MANAGER_BUSY) else $fatal(1,"TOP_MANAGER_RACK_WAIT");
        ACE_RACK=1;tick();ACE_RACK=0;wait(!ACE_MANAGER_BUSY);
        assert(ac_count==before_count+1 && last_ac_snoop==READ_SHARED) else $fatal(1,"TOP_MANAGER_AUTO_SNOOP");
    endtask
    task automatic manager_writeunique(input logic [127:0] write_beat);
        int before_count=ac_count;
        ACE_AWID=4'hd;ACE_AWADDR=ADDRESS;ACE_AWLEN=0;ACE_AWSIZE=4;ACE_AWBURST=1;
        ACE_AWSNOOP=WRITE_UNIQUE;ACE_AWDOMAIN=DOMAIN_INNER;ACE_AWBAR=0;ACE_AWCACHE=4'b0010;
        ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
        do @(posedge clk);while(!ACE_AWREADY);
        @(negedge clk);ACE_AWVALID=0;ACE_WDATA=write_beat;ACE_WSTRB='1;ACE_WLAST=1;ACE_WVALID=1;
        do @(posedge clk);while(!ACE_WREADY);
        @(negedge clk);ACE_WVALID=0;ACE_WLAST=0;ACE_BREADY=1;
        do @(posedge clk);while(!ACE_BVALID);
        assert(ACE_BID==4'hd && ACE_BRESP==0) else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_B");
        @(negedge clk);ACE_BREADY=0;assert(ACE_MANAGER_BUSY) else $fatal(1,"TOP_MANAGER_WACK_WAIT");
        ACE_WACK=1;tick();ACE_WACK=0;wait(!ACE_MANAGER_BUSY);
        assert(ac_count==before_count+1 && last_ac_snoop==CLEAN_INVALID) else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_SNOOP");
    endtask
    // Manager WriteBack (ID 1) waits on the WB AW port; a later WriteUnique (ID 2)
    // snoops a dirty line, so the service raises its writeback AW behind it.
    // The presented WB AW must stay the manager's until it is accepted.
    task automatic wb_contention;
        logic [511:0] dirty,wdata;int bcount;logic [3:0] bids[$];
        dirty=pattern(7);wdata=pattern(8);
        local_cmd(1,UNIQUE_DIRTY,dirty);
        @(negedge clk);wb_aw_block=1;
        fork
            begin
                ACE_AWID=4'h1;ACE_AWADDR=ADDRESS+64'h1000;ACE_AWLEN=3;ACE_AWSIZE=4;ACE_AWBURST=1;
                ACE_AWSNOOP=WRITE_BACK;ACE_AWDOMAIN=DOMAIN_INNER;ACE_AWBAR=0;ACE_AWCACHE=4'b0010;
                ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
                do @(posedge clk);while(!ACE_AWREADY);
                @(negedge clk);
                ACE_AWID=4'h2;ACE_AWADDR=ADDRESS;ACE_AWLEN=0;ACE_AWSNOOP=WRITE_UNIQUE;
                do @(posedge clk);while(!ACE_AWREADY);
                @(negedge clk);ACE_AWVALID=0;
            end
            begin
                for(int b=0;b<5;b++) begin
                    @(negedge clk);ACE_WDATA=(b<4)?wdata[b*128+:128]:{16{8'h5a}};
                    ACE_WSTRB='1;ACE_WLAST=(b==3)||(b==4);ACE_WVALID=1;
                    do @(posedge clk);while(!ACE_WREADY);
                end
                @(negedge clk);ACE_WVALID=0;ACE_WLAST=0;
            end
            begin
                int n;n=0;
                while(!dut.svc_aw_valid) begin @(posedge clk);n++;if(n>400) $fatal(1,"WB_CONTENTION_NO_SERVICE_AW");end
                repeat(4) @(posedge clk);
                assert(dut.WB_AWVALID && dut.WB_AWADDR==ADDRESS+64'h1000)
                    else $fatal(1,"WB_AW_PAYLOAD_STABILITY: presented %h",dut.WB_AWADDR);
                @(negedge clk);wb_aw_block=0;
            end
        join
        ACE_BREADY=1;bcount=0;
        while(bcount<2) begin
            @(posedge clk);
            if(ACE_BVALID && ACE_BREADY) begin
                assert(ACE_BRESP==0) else $fatal(1,"WB_CONTENTION_BRESP");
                bids.push_back(ACE_BID);bcount++;
                @(negedge clk);ACE_WACK=1;@(negedge clk);ACE_WACK=0;
            end
        end
        ACE_BREADY=0;
        wait(!ACE_MANAGER_BUSY);repeat(5) tick();
        assert(bids.size()==2 && ((bids[0]==1 && bids[1]==2) || (bids[0]==2 && bids[1]==1)) && !fault)
            else $fatal(1,"WB_CONTENTION_COMPLETION");
        for(int b=0;b<64;b++) begin
            assert(memory.get_byte(ADDRESS+64'h1000+64'(b))==wdata[b*8+:8]) else $fatal(1,"WB_CONTENTION_MANAGER_DATA");
            assert(memory.get_byte(ADDRESS+64'(b))==((b<16)?8'h5a:dirty[b*8+:8]))
                else $fatal(1,"WB_CONTENTION_DIRTY_DATA byte %0d",b);
        end
        $display("PASS ACE WB contention mode=%0d stable shared writeback AW",USE_RANGE);
    endtask
    task automatic manager_exclusive_load(input logic [ID_WIDTH-1:0] id,input logic [63:0] addr);
        ACE_ARID=id;ACE_ARADDR=addr;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=1;
        ACE_ARVALID=1;
        do @(posedge clk);while(!ACE_ARREADY);
        @(negedge clk);ACE_ARVALID=0;ACE_RREADY=1;
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!ACE_RVALID);
            assert(ACE_RID==id && ACE_RLAST==(b==3) && ACE_RRESP[1:0]==2'b01)
                else $fatal(1,"DUAL_RESERVATION_KILL: load id=%0h beat=%0d resp=%0h",id,b,ACE_RRESP);
            @(negedge clk);
        end
        ACE_RREADY=0;ACE_RACK=1;tick();ACE_RACK=0;wait(!ACE_MANAGER_BUSY);
    endtask
    task automatic manager_exclusive_store_must_fail(input logic [ID_WIDTH-1:0] id,input logic [63:0] addr);
        int before_count=ac_count;
        ACE_ARID=id;ACE_ARADDR=addr;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=CLEAN_UNIQUE;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=1;
        ACE_ARVALID=1;
        do @(posedge clk);while(!ACE_ARREADY);
        @(negedge clk);ACE_ARVALID=0;ACE_RREADY=1;
        do @(posedge clk);while(!ACE_RVALID);
        assert(ACE_RID==id && ACE_RLAST && ACE_RRESP==0)
            else $fatal(1,"DUAL_RESERVATION_KILL: stale reservation id=%0h resp=%0h",id,ACE_RRESP);
        @(negedge clk);ACE_RREADY=0;ACE_RACK=1;tick();ACE_RACK=0;wait(!ACE_MANAGER_BUSY);
        assert(ac_count==before_count)
            else $fatal(1,"DUAL_RESERVATION_KILL: failed store caused snoop id=%0h",id);
    endtask
    task automatic multiline_stress;
        logic [63:0] base,dirty_addr;
        logic [511:0] expected;
        int before_ac;
        bit tracker_full_seen;
        base={ADDRESS[63:12],12'h400};
        // Two resident dirty lines exercise independent CD snapshots and
        // writebacks. Hold the first CD to prove payload/transaction stability.
        for(int i=0;i<2;i++)
            local_cmd_at(ADDRESS+64'(i*64),1,UNIQUE_DIRTY,pattern(20+i));
        for(int i=0;i<2;i++) begin
            dirty_addr=ADDRESS+64'(i*64);expected=pattern(20+i);
            if(i==0) allow_cd=0;
            request_at(dirty_addr,READ_SHARED);
            if(i==0) begin
                for(int n=0;n<80 && !ecd_valid;n++) tick();
                assert(ecd_valid && !rsp_valid) else $fatal(1,"ACE_MULTILINE_CD_BACKPRESSURE");
                repeat(4) begin tick();assert(ecd_valid && !rsp_valid) else $fatal(1,"ACE_MULTILINE_CD_HOLD");end
                allow_cd=1;
            end
            for(int n=0;n<200 && !rsp_valid;n++) tick();
            assert(rsp_valid && rsp_resp==5'b11101 && rsp_data==expected)
                else $fatal(1,"ACE_MULTILINE_DIRTY_RESPONSE line=%0d",i);
            for(int b=0;b<64;b++)
                assert(memory.get_byte(dirty_addr+64'(b))==expected[b*8+:8])
                    else $fatal(1,"ACE_MULTILINE_DIRTY_MEMORY line=%0d byte=%0d",i,b);
            rsp_ready=1;tick();rsp_ready=0;
        end

        before_ac=ac_count;M1_BREADY=0;allow_cr=0;
            // Queue more conventional writes than tracker capacity while the
            // first CR is held. This must expose tracker-full backpressure and
            // recover once CR retirement resumes.
            for(int i=0;i<6;i++) core_aw_at(base+64'(i*64),ID_WIDTH'(i));
            tracker_full_seen=tracker_full_stall ||
                int'(dut.write_line_outstanding)==LINE_TRACKER_ENTRIES;
            for(int n=0;n<120;n++) begin
                tick();if(tracker_full_stall ||
                    int'(dut.write_line_outstanding)==LINE_TRACKER_ENTRIES)tracker_full_seen=1;
                if(tracker_full_seen && tracker_count==$bits(tracker_count)'(LINE_TRACKER_ENTRIES)) break;
            end
            assert(tracker_full_seen && tracker_count==$bits(tracker_count)'(LINE_TRACKER_ENTRIES))
                else $fatal(1,"ACE_MULTILINE_TRACKER_FULL seen=%0d count=%0d",tracker_full_seen,tracker_count);
            allow_cr=1;
        fork
            begin
                for(int i=0;i<6;i++) core_w(pattern(30+i));
            end
            begin
                for(int n=0;n<800 && !M1_BVALID;n++) tick();
                assert(M1_BVALID) else $fatal(1,"ACE_MULTILINE_NO_B");
                repeat(4) tick();M1_BREADY=1;
            end
        join
        for(int n=0;n<1200 && (dut.writes_pending!=0 || ingress_count!=0);n++) tick();
        assert(dut.writes_pending==0 && ingress_count==0 && tracker_count==0)
            else $fatal(1,"ACE_MULTILINE_DRAIN pending=%0d ingress=%0d trackers=%0d",
                dut.writes_pending,ingress_count,tracker_count);
        assert(ac_count==before_ac+6)
            else $fatal(1,"ACE_MULTILINE_SNOOP_COUNT delta=%0d",ac_count-before_ac);
        for(int i=0;i<6;i++) begin
            expected=pattern(30+i);
            for(int b=0;b<64;b++)
                assert(memory.get_byte(base+64'(i*64+b))==expected[b*8+:8])
                    else $fatal(1,"ACE_MULTILINE_CORE_MEMORY line=%0d byte=%0d",i,b);
        end
        M1_BREADY=1;
        $display("PASS ACE multiline stress mode=%0d dirty_lines=2 core_lines=6 tracker_full=%0d",USE_RANGE,tracker_full_seen);
    endtask
    task automatic admission_counter_test(input int which);
        int watchdog;
        case(which)
            1: begin
                assert(COMMON_ADMISSION_TOKENS==1) else $fatal(1,"COUNTER_TOKEN_GEOMETRY");
                // Retain the sole read token by withholding the final R
                // handshake, then present an otherwise admissible M1 write.
                M1_RREADY=0;M1_ARADDR=ADDRESS;M1_ARID=1;M1_ARLEN=3;M1_ARVALID=1;
                do @(posedge clk);while(!M1_ARREADY);
                @(negedge clk);M1_ARVALID=0;
                watchdog=0;while(!M1_RVALID && watchdog<200) begin tick();watchdog++;end
                assert(M1_RVALID && dut.admission_active_count==1)
                    else $fatal(1,"COUNTER_TOKEN_SETUP active=%0d",dut.admission_active_count);
                M1_AWADDR=ADDRESS+64'h40;M1_AWID=2;M1_AWLEN=3;M1_AWVALID=1;
                repeat(5) begin
                    @(posedge clk);assert(!M1_AWREADY) else $fatal(1,"COUNTER_TOKEN_ACCEPTED");
                    @(negedge clk);
                end
                assert(admission_token_stall_cycles>=5 && m1_read_depth_stall_cycles==0 &&
                       m1_write_depth_stall_cycles==0 && ace_context_stall_cycles==0 &&
                       ace_drain_stall_cycles==0)
                    else $fatal(1,"COUNTER_TOKEN_CLASSIFY token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
                        admission_token_stall_cycles,m1_read_depth_stall_cycles,
                        m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
            end
            2: begin
                assert(M1_INGRESS_DEPTH==1 && COMMON_ADMISSION_TOKENS>=2)
                    else $fatal(1,"COUNTER_READ_DEPTH_GEOMETRY");
                allow_cr=0;M1_RREADY=1;
                M1_ARADDR=ADDRESS;M1_ARID=1;M1_ARLEN=3;M1_ARVALID=1;
                do @(posedge clk);while(!M1_ARREADY);
                @(negedge clk);M1_ARVALID=0;
                wait(read_ingress_count==1);
                M1_ARADDR=ADDRESS+64'h40;M1_ARID=2;M1_ARVALID=1;
                repeat(5) begin
                    @(posedge clk);assert(!M1_ARREADY) else $fatal(1,"COUNTER_READ_DEPTH_ACCEPTED");
                    @(negedge clk);
                end
                assert(m1_read_depth_stall_cycles>=5 && admission_token_stall_cycles==0 &&
                       m1_write_depth_stall_cycles==0 && ace_context_stall_cycles==0 &&
                       ace_drain_stall_cycles==0)
                    else $fatal(1,"COUNTER_READ_DEPTH_CLASSIFY token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
                        admission_token_stall_cycles,m1_read_depth_stall_cycles,
                        m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
            end
            3: begin
                assert(M1_INGRESS_DEPTH==1 && COMMON_ADMISSION_TOKENS>=2)
                    else $fatal(1,"COUNTER_WRITE_DEPTH_GEOMETRY");
                allow_cr=0;
                M1_AWADDR=ADDRESS;M1_AWID=1;M1_AWLEN=3;M1_AWVALID=1;
                do @(posedge clk);while(!M1_AWREADY);
                @(negedge clk);M1_AWVALID=0;
                wait(ingress_count==1);
                M1_AWADDR=ADDRESS+64'h40;M1_AWID=2;M1_AWVALID=1;
                repeat(5) begin
                    @(posedge clk);assert(!M1_AWREADY) else $fatal(1,"COUNTER_WRITE_DEPTH_ACCEPTED");
                    @(negedge clk);
                end
                assert(m1_write_depth_stall_cycles>=5 && admission_token_stall_cycles==0 &&
                       m1_read_depth_stall_cycles==0 && ace_context_stall_cycles==0 &&
                       ace_drain_stall_cycles==0)
                    else $fatal(1,"COUNTER_WRITE_DEPTH_CLASSIFY token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
                        admission_token_stall_cycles,m1_read_depth_stall_cycles,
                        m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
            end
            4: begin
                // An admitted DMA read makes drained false. ACE must wait for
                // DMA retirement, which is distinct from token exhaustion.
                allow_cr=0;M1_RREADY=1;
                M1_ARADDR=ADDRESS;M1_ARID=1;M1_ARLEN=3;M1_ARVALID=1;
                do @(posedge clk);while(!M1_ARREADY);
                @(negedge clk);M1_ARVALID=0;
                wait(read_ingress_count==1);
                ACE_ARID=4'h8;ACE_ARADDR=ADDRESS+64'h40;ACE_ARLEN=3;ACE_ARSIZE=4;
                ACE_ARBURST=1;ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;
                ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
                repeat(5) begin
                    @(posedge clk);assert(!ACE_ARREADY) else $fatal(1,"COUNTER_DRAIN_ACCEPTED");
                    @(negedge clk);
                end
                assert(ace_drain_stall_cycles>=5 && admission_token_stall_cycles==0 &&
                       m1_read_depth_stall_cycles==0 && m1_write_depth_stall_cycles==0 &&
                       ace_context_stall_cycles==0)
                    else $fatal(1,"COUNTER_DRAIN_CLASSIFY token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
                        admission_token_stall_cycles,m1_read_depth_stall_cycles,
                        m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
            end
            5: begin
                // Fill all four fixed-ID manager slots while snoop responses
                // are held, then address slot zero again with ID 4.
                assert(COMMON_ADMISSION_TOKENS>4) else $fatal(1,"COUNTER_CONTEXT_GEOMETRY");
                allow_cr=0;
                ACE_ARADDR=ADDRESS;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
                ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;
                ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;
                for(int i=0;i<4;i++) begin
                    ACE_ARID=4'(i);ACE_ARADDR=ADDRESS+64'(i*64);ACE_ARVALID=1;
                    do @(posedge clk);while(!ACE_ARREADY);
                    @(negedge clk);ACE_ARVALID=0;
                end
                assert(dut.manager_outstanding_count==4)
                    else $fatal(1,"COUNTER_CONTEXT_SETUP count=%0d",dut.manager_outstanding_count);
                ACE_ARID=4'h4;ACE_ARADDR=ADDRESS+64'h100;ACE_ARVALID=1;
                repeat(5) begin
                    @(posedge clk);assert(!ACE_ARREADY) else $fatal(1,"COUNTER_CONTEXT_ACCEPTED");
                    @(negedge clk);
                end
                assert(ace_context_stall_cycles>=5 && admission_token_stall_cycles==0 &&
                       m1_read_depth_stall_cycles==0 && m1_write_depth_stall_cycles==0 &&
                       ace_drain_stall_cycles==0)
                    else $fatal(1,"COUNTER_CONTEXT_CLASSIFY token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
                        admission_token_stall_cycles,m1_read_depth_stall_cycles,
                        m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
            end
            default:$fatal(1,"COUNTER_BAD_CASE");
        endcase
        $display("PASS stage4 admission counter case=%0d token=%0d rd=%0d wr=%0d ctx=%0d drain=%0d",
            which,admission_token_stall_cycles,m1_read_depth_stall_cycles,
            m1_write_depth_stall_cycles,ace_context_stall_cycles,ace_drain_stall_cycles);
    endtask
    logic [511:0] value;
    always @(posedge clk) if(rst_n)
        assert(!(mem_err || arb_werr || arb_rerr || arb_biderr || arb_riderr || arb_overflow ||
            protocol_error_wlast || protocol_error_rlast || protocol_error_bid_order || protocol_error_rid_order || protocol_error_outstanding_overflow)) else $fatal(1,"ACE_INTEGRATION_PROTOCOL");
    initial begin
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
        M1_AWSNOOP=WRITE_LINE_UNIQUE;M1_AWDOMAIN=DOMAIN_INNER;M1_AWSIZE=3'd4;
        M1_AWBURST=2'b01;M1_AWCACHE=4'b0010;M1_AWLOCK=0;M1_AWBAR=0;
        M1_WVALID='0;
        M1_WDATA='0;
        M1_WSTRB='1;
        M1_WLAST='0;
        M1_BREADY='0;
        M1_ARVALID='0;
        M1_ARID='0;
        M1_ARADDR='0;
        M1_ARLEN='0;
        M1_ARSNOOP=READ_ONCE;M1_ARDOMAIN=DOMAIN_INNER;M1_ARSIZE=3'd4;
        M1_ARBURST=2'b01;M1_ARCACHE=4'b0010;M1_ARLOCK=0;M1_ARBAR=0;
        M1_RREADY='0;
        ACE_ARVALID=0;ACE_ARID=0;ACE_ARADDR=0;ACE_ARLEN=0;ACE_ARSIZE=0;ACE_ARBURST=0;
        ACE_ARSNOOP=0;ACE_ARDOMAIN=0;ACE_ARBAR=0;ACE_ARCACHE=0;ACE_ARLOCK=0;
        ACE_RREADY=0;ACE_RACK=0;
        ACE_AWVALID=0;ACE_AWID=0;ACE_AWADDR=0;ACE_AWLEN=0;ACE_AWSIZE=0;ACE_AWBURST=0;
        ACE_AWSNOOP=0;ACE_AWDOMAIN=0;ACE_AWBAR=0;ACE_AWCACHE=0;ACE_AWLOCK=0;ACE_AWUNIQUE=0;
        ACE_WVALID=0;ACE_WDATA=0;ACE_WSTRB=0;ACE_WLAST=0;ACE_BREADY=0;ACE_WACK=0;
        reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;M1_BREADY=0;
        begin : STAGE8_ERROR_POLICY
            int stage8_case;
            if($value$plusargs("stage8_case=%d",stage8_case))begin
                case(stage8_case)
                    1:stage8_write_error_only();
                    2:stage8_read_error_only();
                    3:stage8_fatal_reset();
                    4:stage8_hazard_concurrency();
                    default:$fatal(1,"STAGE8_BAD_CASE");
                endcase
                $display("PASS stage8 error policy/reset case=%0d",stage8_case);$finish;
            end
        end
`ifdef RCCI_FIX_CASES
        begin : FIX1_REPRO
            int fix1_c;
`ifndef RCCI_STRESS
            if($value$plusargs("fix1_case=%d",fix1_c))begin
                fix1_case(fix1_c);
                $display("PASS fix1 case=%0d",fix1_c);$finish;
            end
`endif
        end
`endif
`ifdef RCCI_STRESS
        begin : STRESS_RUN
            if($test$plusargs("stress"))begin st_run();$display("PASS stress");$finish;end
        end
`endif
`ifdef RCCI_PERF
        begin : PERF_RUN
            if($test$plusargs("perf_op"))begin perf_run();$display("PASS perf");$finish;end
        end
`endif
        begin : STAGE4_COUNTERS
            int counter_case;
            if($value$plusargs("counter_case=%d",counter_case)) begin
                admission_counter_test(counter_case);$finish;
            end
        end
        begin : STAGE2_NEGATIVE
            int bad;
            if($value$plusargs("stage2_bad=%d",bad)) begin
                // Start every negative case from one complete legal B1 request,
                // then change exactly the attribute named by the case.
                M1_ARADDR=ADDRESS;M1_ARLEN=3;M1_ARSNOOP=READ_ONCE;
                M1_ARDOMAIN=DOMAIN_INNER;M1_ARSIZE=3'd4;M1_ARBURST=2'b01;
                M1_ARCACHE=4'b0010;M1_ARLOCK=0;M1_ARBAR=0;
                M1_AWADDR=ADDRESS;M1_AWLEN=3;M1_AWSNOOP=WRITE_LINE_UNIQUE;
                M1_AWDOMAIN=DOMAIN_INNER;M1_AWSIZE=3'd4;M1_AWBURST=2'b01;
                M1_AWCACHE=4'b0010;M1_AWLOCK=0;M1_AWBAR=0;
                if(bad==1) begin
                    core_aw();M1_WSTRB=16'hfffe;M1_WDATA='0;M1_WLAST=0;M1_WVALID=1;
                    do @(posedge clk);while(!M1_WREADY);
                    @(negedge clk);M1_WVALID=0;tick();
                    $fatal(1,"STAGE2_WSTRB_MISSING");
                end else if(bad==20) begin
                    core_aw();M1_WDATA='0;M1_WLAST=1;M1_WVALID=1;
                    do @(posedge clk);while(!M1_WREADY);
                    @(negedge clk);M1_WVALID=0;
                    repeat(3) tick();
                    $fatal(1,"STAGE2_WLAST_MISSING");
                end else if(bad inside {[2:10]}) begin
                    case(bad)
                        2:M1_ARSNOOP=READ_SHARED;
                        3:M1_ARDOMAIN=DOMAIN_NONSHAREABLE;
                        4:M1_ARSIZE=3'd3;
                        5:M1_ARBURST=2'b00;
                        6:M1_ARCACHE=4'b0000;
                        7:M1_ARLOCK=1;
                        8:M1_ARBAR=2'b01;
                        9:M1_ARLEN=2;
                        10:M1_ARADDR=ADDRESS+1;
                        default:$fatal(1,"STAGE2_BAD_AR_CASE");
                    endcase
                    if(bad!=10) M1_ARADDR=ADDRESS;
                    M1_ARVALID=1;
                    repeat(4) begin
                        @(posedge clk);
                        assert(!M1_ARREADY) else $fatal(1,"STAGE2_AR_FORMAT_ACCEPTED");
                    end
                    assert(conv_read_fault==0&&fault)else $fatal(1,"STAGE2_AR_FAILSTOP_MISSING");
                    $display("PASS stage2 M1 AR format rejection");
                    $finish;
                end else if(bad inside {[11:19]}) begin
                    case(bad)
                        11:M1_AWSNOOP=3'b000;
                        12:M1_AWDOMAIN=DOMAIN_NONSHAREABLE;
                        13:M1_AWSIZE=3'd3;
                        14:M1_AWBURST=2'b00;
                        15:M1_AWCACHE=4'b0000;
                        16:M1_AWLOCK=1;
                        17:M1_AWBAR=2'b01;
                        18:M1_AWLEN=2;
                        19:M1_AWADDR=ADDRESS+1;
                        default:$fatal(1,"STAGE2_BAD_AW_CASE");
                    endcase
                    if(bad!=19) M1_AWADDR=ADDRESS;
                    M1_AWVALID=1;
                    repeat(4)begin @(posedge clk);
                        assert(!M1_AWREADY)else $fatal(1,"STAGE2_AW_FORMAT_ACCEPTED");
                    end
                    assert(fault)else $fatal(1,"STAGE2_AW_FAILSTOP_MISSING");
                    $display("PASS stage2 M1 AW format rejection");$finish;
                end else $fatal(1,"STAGE2_BAD_CASE");
            end
        end
        begin : STAGE5_RANGE_FORMAT
            int bad;
            if($value$plusargs("stage5_bad=%d",bad)) begin
                M1_ARADDR={ADDRESS[63:12],12'b0};M1_ARLEN=8'd15;
                M1_ARSNOOP=ARSNOOP_READ_RANGE;M1_ARDOMAIN=DOMAIN_INNER;
                M1_ARSIZE=3'd4;M1_ARBURST=2'b01;M1_ARCACHE=4'b0010;
                M1_ARLOCK=0;M1_ARBAR=0;
                case(bad)
                    1: ; // legal only when USE_RANGE=1; runner uses mode 0
                    2:M1_ARLEN=8'd14;
                    3:M1_ARADDR={ADDRESS[63:12],12'hfc0};
                    4:M1_ARDOMAIN=DOMAIN_NONSHAREABLE;
                    5:M1_ARSIZE=3'd3;
                    6:M1_ARBURST=2'b00;
                    7:M1_ARCACHE=4'b0000;
                    8:M1_ARLOCK=1;
                    9:M1_ARBAR=2'b01;
                    10:M1_ARADDR={ADDRESS[63:12],12'b0}+1'b1;
                    default:$fatal(1,"STAGE5_BAD_RANGE_CASE");
                endcase
                M1_ARVALID=1;
                repeat(4)begin @(posedge clk);
                    assert(!M1_ARREADY)else $fatal(1,"STAGE5_RANGE_FORMAT_ACCEPTED");
                end
                assert(fault)else $fatal(1,"STAGE5_RANGE_FAILSTOP_MISSING");
                $display("PASS stage5 ReadRange format rejection case=%0d",bad);
                $finish;
            end
        end
        begin : STAGE6_RANGE_FORMAT
            int bad;
            if($value$plusargs("stage6_bad=%d",bad))begin
                M1_AWADDR={ADDRESS[63:12],12'b0};M1_AWLEN=8'd15;
                M1_AWSNOOP=AWSNOOP_WRITE_RANGE;M1_AWDOMAIN=DOMAIN_INNER;
                M1_AWSIZE=3'd4;M1_AWBURST=2'b01;M1_AWCACHE=4'b0010;
                M1_AWLOCK=0;M1_AWBAR=0;
                case(bad)
                    1:;
                    2:M1_AWLEN=8'd14;
                    3:M1_AWADDR={ADDRESS[63:12],12'hfc0};
                    4:M1_AWDOMAIN=DOMAIN_NONSHAREABLE;
                    5:M1_AWSIZE=3'd3;
                    6:M1_AWBURST=2'b00;
                    7:M1_AWCACHE=4'b0000;
                    8:M1_AWLOCK=1;
                    9:M1_AWBAR=2'b01;
                    10:M1_AWADDR={ADDRESS[63:12],12'b0}+1'b1;
                    default:$fatal(1,"STAGE6_BAD_RANGE_CASE");
                endcase
                M1_AWVALID=1;
                repeat(4)begin @(posedge clk);
                    assert(!M1_AWREADY)else $fatal(1,"STAGE6_RANGE_FORMAT_ACCEPTED");
                end
                assert(fault)else $fatal(1,"STAGE6_RANGE_FAILSTOP_MISSING");
                $display("PASS stage6 WriteRange format rejection case=%0d",bad);$finish;
            end
        end
        if(WB_CONTENTION) begin wb_contention();$finish;end
        if(LONG_STRESS) begin
            M1_BREADY=1;multiline_stress();reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;M1_BREADY=0;
        end
        local_cmd(1,UNIQUE_DIRTY,pattern(1));
        core_aw();core_w(pattern(2));wait(M1_BVALID);@(negedge clk);
        req_addr=ADDRESS;req_snoop=1;req_valid=1;
        repeat(6) begin @(posedge clk);assert(!req_ready) else $fatal(1,"ACE_ADMITTED_BEFORE_CORE_B");@(negedge clk);end
        M1_BREADY=1;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;wait(rsp_valid);@(negedge clk);
        assert(rsp_resp==0) else $fatal(1,"LEGACY_MI_LEFT_CACHED_DATA");
        rsp_ready=1;tick();rsp_ready=0;tick();
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==8'(2*13+b*7)) else $fatal(1,"CORE_WRITE_BYTES");
        local_cmd(1,UNIQUE_DIRTY,pattern(3));request(1);wait(rsp_valid);@(negedge clk);
        assert(rsp_resp==5'b11101 && rsp_data==pattern(3) && !fault) else $fatal(1,"INTEGRATED_DIRTY_READSHARED");
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==8'(3*13+b*7)) else $fatal(1,"SHARED_MEMORY_WRITEBACK");
        M1_AWADDR=ADDRESS;M1_AWID=3;M1_AWLEN=3;M1_AWVALID=1;
        repeat(4) begin tick();assert(!M1_AWREADY && maintenance_busy) else $fatal(1,"CORE_NOT_FROZEN");end
        rsp_ready=1;tick();rsp_ready=0;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;core_w(pattern(4));
        wait(M1_BVALID);tick();repeat(3) tick();
        M0_ARADDR=ADDRESS;M0_ARID=5;M0_ARLEN=3;M0_ARVALID=1;
        do @(posedge clk);while(!M0_ARREADY);
        @(negedge clk);M0_ARVALID=0;value=pattern(4);
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!(M0_RVALID && M0_RREADY));
            assert(M0_RDATA==value[b*128+:128] && M0_RLAST==(b==3) && M0_RID==5) else $fatal(1,"CORE_READ_AFTER_WRITEBACK");
            @(negedge clk);
        end
        local_cmd(0,INVALID,0);assert(!local_hit && ingress_count==0) else $fatal(1,"FINAL_CACHE_DRAIN");
        local_cmd(1,UNIQUE_DIRTY,pattern(11));core_read_ci(ADDRESS,4'h6,pattern(11));
        local_cmd(0,INVALID,0);assert(local_hit&&local_rdata==pattern(11))
            else $fatal(1,"COHERENT_M1_READONCE_COPY");
        request(CLEAN_INVALID);wait(rsp_valid);rsp_ready=1;tick();rsp_ready=0;tick();
        local_cmd(0,INVALID,0);assert(!local_hit) else $fatal(1,"COHERENT_M1_READONCE_CLEANUP");
        // ReadOnce miss uses memory; a clean hit returns CD while retaining the cache copy.
        core_read_ci(ADDRESS,4'h8,pattern(11));
        local_cmd(0,INVALID,0);assert(!local_hit) else $fatal(1,"COHERENT_M1_READONCE_MISS_ALLOCATED");
        local_cmd(1,UNIQUE_CLEAN,pattern(15));core_read_ci(ADDRESS,4'h9,pattern(15));
        local_cmd(0,INVALID,0);assert(local_hit&&local_rdata==pattern(15))
            else $fatal(1,"COHERENT_M1_READONCE_CLEAN_COPY");
        local_cmd(3,INVALID,0);local_cmd(0,INVALID,0);assert(!local_hit)
            else $fatal(1,"COHERENT_M1_READONCE_CLEANUP_CLEAN");
        if(USE_RANGE) begin
            rcci_read_range_8();
            rcci_write_range_8();
        end
        local_cmd(1,UNIQUE_DIRTY,pattern(5));manager_readshared(pattern(5));
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==8'(5*13+b*7)) else $fatal(1,"TOP_MANAGER_WRITEBACK");
        local_cmd(1,UNIQUE_DIRTY,pattern(6));value=pattern(7);manager_writeunique(value[127:0]);local_cmd(0,INVALID,0);
        assert(!local_hit) else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_INVALIDATE");
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==(b<16?8'(7*13+b*7):8'(6*13+b*7)))
            else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_MEMORY");
        // Reserve both lines first. The simultaneous M0/M1 AW below must kill
        // both reservations, not collapse the two addresses into one event.
        manager_exclusive_load(4'h8,ADDRESS+64'h1000);
        manager_exclusive_load(4'h9,ADDRESS+64'h40);
        // M0 AW (arbiter) and M1 AW (ingress) can be accepted in the same cycle.
        // The manager-boundary pending count must include both, return to zero
        // after both B responses and then admit a maintenance request.
        if($test$plusargs("stage6_debug"))$display("S6_TB_SAME_CYCLE t=%0t",$time);
        @(negedge clk);
        M0_AWADDR=ADDRESS+64'h1000;M0_AWID=1;M0_AWLEN=3;M0_AWVALID=1;
        M1_AWADDR=ADDRESS+64'h40;M1_AWID=3;M1_AWLEN=3;M1_AWVALID=1;
        @(posedge clk);
        assert(M0_AWREADY && M1_AWREADY) else $fatal(1,"SAME_CYCLE_AW_SETUP");
        @(negedge clk);M0_AWVALID=0;M1_AWVALID=0;
        assert(dut.writes_pending==2) else $fatal(1,"PENDING_SAME_CYCLE_AW count=%0d",dut.writes_pending);
        fork
            for(int b=0;b<4;b++) begin
                M0_WVALID=1;M0_WLAST=b==3;M0_WDATA='0;
                do @(posedge clk);while(!M0_WREADY);
                @(negedge clk);M0_WVALID=0;
            end
            begin
                if($test$plusargs("stage6_debug"))$display("S6_TB_CORE_W_START t=%0t",$time);
                core_w(pattern(8));
                if($test$plusargs("stage6_debug"))$display("S6_TB_CORE_W_DONE t=%0t",$time);
            end
        join
        for(int n=0;n<400 && (dut.writes_pending!=0 || ingress_count!=0);n++) tick();
        assert(dut.writes_pending==0 && ingress_count==0)
            else $fatal(1,"PENDING_SAME_CYCLE_AW count=%0d",dut.writes_pending);
        manager_exclusive_store_must_fail(4'h8,ADDRESS+64'h1000);
        manager_exclusive_store_must_fail(4'h9,ADDRESS+64'h40);
        req_addr=ADDRESS;req_snoop=1;req_valid=1;
        for(int n=0;n<400 && !req_ready;n++) tick();
        assert(req_ready) else $fatal(1,"PENDING_SAME_CYCLE_AW maintenance blocked");
        @(negedge clk);req_valid=0;wait(rsp_valid);@(negedge clk);rsp_ready=1;tick();rsp_ready=0;
        assert(!ACE_PROTOCOL_ERROR) else $fatal(1,"TOP_MANAGER_PROTOCOL");
        // Keep the first automatic snoop response pending while an explicit
        // request is admitted behind it. Owner-local tagged status queues must
        // route the automatic response to the manager and explicit to rsp_*.
        local_cmd_at(ADDRESS,1,UNIQUE_CLEAN,pattern(9));
        local_cmd_at(ADDRESS+64'h40,1,UNIQUE_CLEAN,pattern(10));
        allow_cr=0;allow_cd=0;rsp_ready=0;ACE_RREADY=0;
        ACE_ARID=4'ha;ACE_ARADDR=ADDRESS;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;
        ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
        do @(posedge clk);while(!ACE_ARREADY);
        @(negedge clk);ACE_ARVALID=0;
        for(int n=0;n<100 && dut.service_outstanding_count<1;n++) tick();
        assert(dut.service_outstanding_count==1) else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:first");
        req_addr=ADDRESS+64'h40;req_snoop=MAKE_INVALID;req_valid=1;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
        assert(dut.service_outstanding_count==2) else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:depth");
        allow_cr=1;allow_cd=1;
        for(int n=0;n<200 && !ACE_RVALID;n++) tick();
        assert(ACE_RVALID) else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:route");
        ACE_RREADY=1;value=pattern(9);
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!ACE_RVALID);
            assert(ACE_RID==4'ha && ACE_RDATA==value[b*128+:128] && ACE_RLAST==(b==3))
                else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:rdata");
            @(negedge clk);
        end
        ACE_RREADY=0;ACE_RACK=1;tick();ACE_RACK=0;
        for(int n=0;n<100 && !rsp_valid;n++) tick();
        assert(rsp_valid && !rsp_resp[1]) else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:explicit");
        rsp_ready=1;tick();rsp_ready=0;
        for(int n=0;n<100 && (ACE_MANAGER_BUSY || dut.service_outstanding_count!=0);n++) tick();
        assert(!ACE_MANAGER_BUSY && dut.service_outstanding_count==0)
            else $fatal(1,"TOP_SERVICE_OWNER_ASSOCIATION:drain");
        assert(dut.admission_active_count==0 && dut.admission_owner_count=='0)
            else $fatal(1,"ADMISSION_TOKEN_LEAK count=%0d owners=%p",
                dut.admission_active_count,dut.admission_owner_count);
        // Fail-stop: a manager W framing error (WLAST on beat 0 of a 2-beat
        // WriteBack) is fatal. That transaction's B/WACK still drain, then no
        // new M0/M1/setup, explicit snoop or ACE AR/AW is accepted before reset.
        assert(!fault) else $fatal(1,"FATAL_FAULT_PRECONDITION");
        ACE_AWID=4'he;ACE_AWADDR=ADDRESS+64'h80;ACE_AWLEN=1;ACE_AWSIZE=4;ACE_AWBURST=1;
        ACE_AWSNOOP=WRITE_BACK;ACE_AWDOMAIN=DOMAIN_INNER;ACE_AWBAR=0;ACE_AWCACHE=4'b0010;
        ACE_AWLOCK=0;ACE_AWUNIQUE=0;ACE_AWVALID=1;
        do @(posedge clk);while(!ACE_AWREADY);
        @(negedge clk);ACE_AWVALID=0;
        for(int b=0;b<2;b++) begin
            ACE_WDATA='0;ACE_WSTRB='1;ACE_WLAST=1;ACE_WVALID=1;  // WLAST wrong on beat 0
            do @(posedge clk);while(!ACE_WREADY);
            @(negedge clk);ACE_WVALID=0;ACE_WLAST=0;
        end
        ACE_BREADY=1;
        do @(posedge clk);while(!ACE_BVALID);
        @(negedge clk);ACE_BREADY=0;ACE_WACK=1;tick();ACE_WACK=0;
        for(int n=0;n<50 && ACE_MANAGER_BUSY;n++) tick();
        assert(!ACE_MANAGER_BUSY) else $fatal(1,"FATAL_FAULT_RESPONSE_NOT_DRAINED");
        assert(ACE_PROTOCOL_ERROR && fault) else $fatal(1,"FATAL_FAULT_NOT_RAISED");
        // Probe each admission class separately so another asserted request
        // cannot accidentally provide the blocking condition under test.
        M0_ARADDR=ADDRESS+64'h1000;M0_ARID=2;M0_ARLEN=3;M0_ARVALID=1;
        M1_AWADDR=ADDRESS+64'h40;M1_AWID=3;M1_AWLEN=3;M1_AWVALID=1;
        repeat(10) begin
            @(posedge clk);
            assert(!M0_ARREADY && !M1_AWREADY && fault)
                else $fatal(1,"FATAL_FAULT_ADMISSION: core m0ar=%0d m1aw=%0d",
                    M0_ARREADY,M1_AWREADY);
        end
        @(negedge clk);M0_ARVALID=0;M1_AWVALID=0;
        begin int before_count=ac_count;
            req_addr=ADDRESS;req_snoop=READ_SHARED;req_valid=1;
            repeat(10) begin @(posedge clk);
                assert(!req_ready && !dut.service_req_valid && ac_count==before_count)
                    else $fatal(1,"FATAL_FAULT_ADMISSION: explicit req ready=%0d internal_valid=%0d ac_delta=%0d",
                        req_ready,dut.service_req_valid,ac_count-before_count);
            end
        end
        @(negedge clk);req_valid=0;
        ACE_ARID=4'hc;ACE_ARADDR=ADDRESS;ACE_ARLEN=3;ACE_ARSIZE=4;ACE_ARBURST=1;
        ACE_ARSNOOP=READ_SHARED;ACE_ARDOMAIN=DOMAIN_INNER;ACE_ARBAR=0;ACE_ARCACHE=4'b0010;ACE_ARLOCK=0;ACE_ARVALID=1;
        repeat(10) begin @(posedge clk);
            assert(!ACE_ARREADY) else $fatal(1,"FATAL_FAULT_ADMISSION: ace_ar");
        end
        @(negedge clk);ACE_ARVALID=0;
        ACE_AWVALID=1;
        repeat(10) begin @(posedge clk);assert(!ACE_AWREADY) else $fatal(1,"FATAL_FAULT_ADMISSION: ace_aw");end
        @(negedge clk);ACE_AWVALID=0;
        $display("PASS v9 ACE integration mode=%0d cached_masters=%0d legacy/drain/CD/writeback/initiating-manager ARSNOOP/AWSNOOP/resume",USE_RANGE,CACHED_MASTERS);$finish;
    end
    initial begin #100000;
        $display("ACE_TIMEOUT_DIAG req=%0b/%0b rsp=%0b/%0b svc=%0d ac=%0b/%0b cr=%0b/%0b cd=%0b/%0b m1aw=%0b/%0b m1b=%0b/%0b fault=%0b",
            req_valid,req_ready,rsp_valid,rsp_ready,dut.service_outstanding_count,
            ac_valid,ac_ready,cr_valid,cr_ready,cd_valid,cd_ready,
            M1_AWVALID,M1_AWREADY,M1_BVALID,M1_BREADY,fault);
        $display("ACE_TIMEOUT_FAULT service=%0b inner=%0b proto=%0b cfault=%b adapters=%b admission=%0b ace=%0b read=%0b live=%b sent=%b owners=%p",
            dut.service_fault,dut.service.inner_fault,dut.service.bank.protocol_fault,dut.service.bank.c_fault,
            dut.adapter_fault,dut.admission_fault,ACE_PROTOCOL_ERROR,dut.read_service_fault,
            dut.service.bank.tag_live,dut.service.bank.status_sent,dut.service.bank.status_count);
        $display("ACE_TIMEOUT_WRITE_ADAPTER ctx=%0d lines=%0d law=%0b/%0b lw=%0b/%0b lb=%0b/%0b eb=%0b/%0b core_ingress=%0d tracker=%0d q=%0b/%0b",
            dut.write_context_count,dut.write_line_outstanding,dut.write_line_aw_valid,dut.write_line_aw_ready,
            dut.write_line_w_valid,dut.write_line_w_ready,dut.write_line_b_valid,dut.write_line_b_ready,
            M1_BVALID,M1_BREADY,ingress_count,tracker_count,dut.core.q_valid,dut.core.q_ready);
        $display("ACE_TIMEOUT_PENDING all_w=%0d all_r=%0d m0_w=%0d m0_r=%0d manager=%0b block=%0b svcmaint=%0b explicit=%0b/%0b",
            dut.writes_pending,dut.reads_pending,dut.m0_writes_pending,dut.m0_reads_pending,
            ACE_MANAGER_BUSY,dut.block_admission,dut.service_maintenance_busy,
            dut.explicit_drain_q,dut.explicit_seen);
        $display("ACE_TIMEOUT_WRITE_CTX ptrs=%0d/%0d/%0d/%0d issue=%0d w=%0d beat=%0d b=%0d complete=%0b valid=%0b",
            dut.write_range_adapter.issue_head,dut.write_range_adapter.w_head,
            dut.write_range_adapter.complete_head,dut.write_range_adapter.retire_head,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].issue_idx,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].w_idx,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].w_beat,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].b_idx,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].b_complete,
            dut.write_range_adapter.contexts[dut.write_range_adapter.retire_head].valid);
        $display("ACE_TIMEOUT_WRITE_BUS extw=%0b/%0b/%0b linew=%0b/%0b/%0b maw=%0b/%0b wr_count=%0d wr_w_count=%0d beat=%0d whead=%0d bhead=%0d perr=%0b",
            M1_WVALID,M1_WREADY,M1_WLAST,dut.write_line_w_valid,dut.write_line_w_ready,dut.write_line_w_last,
            M0_AWVALID,M0_AWREADY,dut.core.bus.wr_count,dut.core.bus.wr_w_count,
            dut.core.bus.wr_beat_count,dut.core.bus.wr_w_head,dut.core.bus.wr_b_head,protocol_error_wlast);
        $fatal(1,"ACE_INTEGRATION_TIMEOUT");
    end
endmodule
