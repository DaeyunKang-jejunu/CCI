`timescale 1ns/1ps
module tb_cci_ace_integration #(
    parameter bit USE_RANGE=1,
    parameter int CACHED_MASTERS=1,
    parameter bit LONG_STRESS=0,
    parameter int M1_INGRESS_DEPTH=16,
    parameter int LINE_TRACKER_ENTRIES=4,
    parameter int COMMON_ADMISSION_TOKENS=16,
    // REVIEW 10.2: late service writeback AW while a manager AW waits on WB.
    parameter bit WB_CONTENTION=0
);
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic quiescent=1,legacy_ac_valid=0,legacy_ac_ready,legacy_cr_valid,legacy_cr_ready=0;
    logic [63:0] legacy_ac_addr=0;logic [3:0] legacy_ac_snoop=13;logic [1:0] legacy_cr_resp;
    logic req_valid=0,req_ready,rsp_valid,rsp_ready=0;logic [63:0] req_addr=0;logic [3:0] req_snoop=0;
    logic [4:0] rsp_resp;logic [511:0] rsp_data;logic maintenance_busy,idle,fault;
    logic ac_valid,ac_ready,cr_valid,cr_ready,cd_valid,cd_ready,cd_last;
    logic [63:0] ac_addr;logic [3:0] ac_snoop;logic [4:0] cr_resp;logic [127:0] cd_data;
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
    logic  setup_valid;
    logic  setup_ready;
    logic [63:0] setup_addr;
    logic [63:0] setup_mask;
    logic [6:0] setup_count;
    logic [3:0] setup_source;
    logic [1:0] setup_op=0,range_op;
    logic  setup_error;
    logic  range_active;
    logic  write_release;
    logic read_release,range_fault;logic [51:0] range_base_page;logic [63:0] range_line_mask;
    logic [63:0] wr_issued_mask;
    logic [63:0] done_mask;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count;
    logic  tracker_full_stall;
    logic  admission_freeze;
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
        .COMMON_ADMISSION_TOKENS(COMMON_ADMISSION_TOKENS),
        .CACHED_MASTERS(CACHED_MASTERS)) dut(
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
        .setup_valid(setup_valid),
        .setup_ready(setup_ready),
        .setup_addr(setup_addr),
        .setup_mask(setup_mask),
        .setup_count(setup_count),
        .setup_source(setup_source),
        .setup_op(setup_op),
        .setup_error(setup_error),
        .ACVALID(ac_valid),
        .ACREADY(ac_ready),
        .ACADDR(ac_addr),
        .ACSNOOP(ac_snoop),
        .CRVALID(cr_valid),
        .CRREADY(cr_ready),
        .CRRESP(cr_resp),
        .snoop_idle(endpoint_idle),
        .range_active(range_active),
        .write_release(write_release),
        .read_release,.range_op,.range_base_page,.range_line_mask,.range_fault,
        .wr_issued_mask(wr_issued_mask),
        .done_mask(done_mask),
        .ingress_count(ingress_count),
        .tracker_count(tracker_count),
        .tracker_full_stall(tracker_full_stall),
        .admission_freeze(admission_freeze),
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
    ace_cache_snoop_endpoint #(.LINES(2)) cache(
        .clk,.rst_n,.local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready,.local_error,.local_hit,.local_rstate,.local_rdata,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid(ecr_valid),.cr_ready(ecr_ready),.cr_resp,
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
    axi4_simple_2to1_bus_arbiter #(.ID_WIDTH(5),.MAX_OUTSTANDING_TRANSACTIONS(4)) memory_bus(
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
    axi_memory_slave #(.ID_WIDTH(6),.MAX_OUTSTANDING_TRANSACTIONS(4),.RESP_LATENCY(3)) memory(
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
        assert(M1_BVALID&&M1_BID==4'hc&&M1_BRESP==0&&max_lines>=2)
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
    task automatic range_read_ci(input logic [63:0] addr,input logic [ID_WIDTH-1:0] id,
                                 input logic [511:0] expected);
        int before_count=ac_count;
        int ar_wait=0;
        if($test$plusargs("stage6_debug"))$display("S6_TB_RANGE_READ_START t=%0t id=%0d",$time,id);
        setup_addr=addr;setup_count=1;setup_mask=0;setup_source=1;setup_op=1;setup_valid=1;
        do @(posedge clk);while(!setup_ready);
        @(negedge clk);setup_valid=0;setup_op=0;
        M0_ARADDR=addr;M0_ARID=4'hb;M0_ARLEN=3;M0_RREADY=0;M0_ARVALID=1;
        M1_AWADDR=addr;M1_AWID=4'ha;M1_AWLEN=3;M1_AWVALID=1;
        M1_ARADDR=addr;M1_ARID=id;M1_ARLEN=3;M1_ARVALID=1;
        do begin @(posedge clk);ar_wait++;
        end while(!M1_ARREADY && ar_wait<200);
        assert(M1_ARREADY) else $fatal(1,"RANGE_READ_ACTIVATION_TIMEOUT");
        assert(!M0_ARREADY && !M1_AWREADY)
            else $fatal(1,"RANGE_READ_HAZARD: target request admitted before range reservation");
        @(negedge clk);M1_ARVALID=0;M1_RREADY=1;
        assert(range_active && range_op==1 && wr_issued_mask[addr[11:6]] && read_tracker_count==0)
            else $fatal(1,"RANGE_READ_CLASSIFICATION op=%0d issued=%h trackers=%0d",
                range_op,wr_issued_mask,read_tracker_count);
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!(M1_RVALID && M1_RREADY));
            assert(!M0_ARREADY && !M1_AWREADY)
                else $fatal(1,"RANGE_READ_HAZARD: target request admitted before M1 RLAST");
            assert(M1_RID==id && M1_RDATA==expected[b*128+:128] && M1_RLAST==(b==3) && M1_RRESP==0)
                else $fatal(1,"RANGE_READ_DATA beat=%0d",b);
            @(negedge clk);
        end
        M1_AWVALID=0;
        do @(posedge clk);while(!M0_ARREADY);
        @(negedge clk);M0_ARVALID=0;M0_RREADY=1;
        for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!(M0_RVALID && M0_RREADY));
            assert(M0_RID==4'hb && M0_RDATA==expected[b*128+:128] && M0_RLAST==(b==3))
                else $fatal(1,"RANGE_READ_HAZARD: post-release M0 data");
            @(negedge clk);
        end
        for(int n=0;n<100 && range_active;n++) tick();
        assert(!range_active && ac_count==before_count+1 && last_ac_snoop==CLEAN_INVALID &&
               read_ingress_count==0 && read_tracker_count==0 && !range_fault)
            else $fatal(1,"RANGE_READ_COMPLETION active=%0d ac_delta=%0d ingress=%0d trackers=%0d fault=%0d",
                range_active,ac_count-before_count,read_ingress_count,read_tracker_count,range_fault);
        if($test$plusargs("stage6_debug"))$display("S6_TB_RANGE_READ_END t=%0t id=%0d",$time,id);
    endtask
    task automatic range_read_sparse;
        logic [63:0] page,addr[3];logic [511:0] expected[3];logic [63:0] mask;
        int before_count=ac_count;
        page={ADDRESS[63:12],12'b0};
        addr[0]=page+64'(4*64);addr[1]=page+64'(5*64);addr[2]=page+64'(7*64);
        expected[0]=pattern(20);expected[1]=pattern(21);expected[2]=pattern(22);
        mask=(64'h1<<4)|(64'h1<<5)|(64'h1<<7);
        for(int i=0;i<3;i++) for(int b=0;b<64;b++)
            memory.put_byte(addr[i]+64'(b),expected[i][b*8+:8]);
        local_cmd_at(addr[0],1,UNIQUE_DIRTY,expected[0]);
        local_cmd_at(addr[1],1,UNIQUE_CLEAN,expected[1]);
        setup_addr=page;setup_count=0;setup_mask=mask;setup_source=1;setup_op=1;setup_valid=1;
        do @(posedge clk);while(!setup_ready);
        @(negedge clk);setup_valid=0;setup_op=0;
        for(int i=0;i<3;i++) begin
            M1_ARADDR=addr[i];M1_ARID=4'(i+1);M1_ARLEN=3;M1_ARVALID=1;
            do @(posedge clk);while(!M1_ARREADY);
            @(negedge clk);M1_ARVALID=0;
        end
        assert(wr_issued_mask==mask && read_tracker_count==0)
            else $fatal(1,"RANGE_READ_SPARSE_RESERVATION issued=%h trackers=%0d",wr_issued_mask,read_tracker_count);
        M1_RREADY=1;
        for(int i=0;i<3;i++) for(int b=0;b<4;b++) begin
            do @(posedge clk);while(!(M1_RVALID && M1_RREADY));
            assert(M1_RID==4'(i+1) && M1_RDATA==expected[i][b*128+:128] &&
                   M1_RLAST==(b==3) && M1_RRESP==0)
                else $fatal(1,"RANGE_READ_SPARSE_DATA line=%0d beat=%0d",i,b);
            @(negedge clk);
        end
        for(int n=0;n<100 && range_active;n++) tick();
        assert(!range_active && done_mask==mask && wr_issued_mask==mask &&
               read_ingress_count==0 && read_tracker_count==0 &&
               ac_count==before_count+3 && !range_fault)
            else $fatal(1,"RANGE_READ_SPARSE_COMPLETION active=%0d ac_delta=%0d ingress=%0d",
                range_active,ac_count-before_count,read_ingress_count);
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
        if(USE_RANGE) begin
            setup_addr=base;setup_count=6;setup_mask=0;setup_source=1;setup_valid=1;
            do @(posedge clk);while(!setup_ready);
            @(negedge clk);setup_valid=0;
            for(int n=0;n<80 && !range_active;n++) tick();
            assert(range_active && !write_release) else $fatal(1,"ACE_MULTILINE_RANGE_INVALIDATING");
            repeat(4) begin tick();assert(!write_release) else $fatal(1,"ACE_MULTILINE_RANGE_CR_BYPASS");end
            allow_cr=1;
            for(int n=0;n<400 && !write_release;n++) tick();
            assert(write_release && ac_count==before_ac+6)
                else $fatal(1,"ACE_MULTILINE_RANGE_RELEASE ac_delta=%0d",ac_count-before_ac);
            for(int i=0;i<6;i++) core_aw_at(base+64'(i*64),ID_WIDTH'(i));
            assert(tracker_count==0 &&
                   $countones(wr_issued_mask[21:16])==(LINE_TRACKER_ENTRIES<6?LINE_TRACKER_ENTRIES:6))
                else $fatal(1,"ACE_MULTILINE_RANGE_WINDOW trackers=%0d mask=%h",tracker_count,wr_issued_mask);
        end else begin
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
        end
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
        for(int n=0;n<1200 && (dut.writes_pending!=0 || ingress_count!=0 || range_active);n++) tick();
        assert(dut.writes_pending==0 && ingress_count==0 && !range_active && tracker_count==0)
            else $fatal(1,"ACE_MULTILINE_DRAIN pending=%0d ingress=%0d range=%0d trackers=%0d",
                dut.writes_pending,ingress_count,range_active,tracker_count);
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
        setup_valid='0;
        setup_addr='0;
        setup_mask='0;
        setup_count='0;
        setup_source='0;
        ACE_ARVALID=0;ACE_ARID=0;ACE_ARADDR=0;ACE_ARLEN=0;ACE_ARSIZE=0;ACE_ARBURST=0;
        ACE_ARSNOOP=0;ACE_ARDOMAIN=0;ACE_ARBAR=0;ACE_ARCACHE=0;ACE_ARLOCK=0;
        ACE_RREADY=0;ACE_RACK=0;
        ACE_AWVALID=0;ACE_AWID=0;ACE_AWADDR=0;ACE_AWLEN=0;ACE_AWSIZE=0;ACE_AWBURST=0;
        ACE_AWSNOOP=0;ACE_AWDOMAIN=0;ACE_AWBAR=0;ACE_AWCACHE=0;ACE_AWLOCK=0;ACE_AWUNIQUE=0;
        ACE_WVALID=0;ACE_WDATA=0;ACE_WSTRB=0;ACE_WLAST=0;ACE_BREADY=0;ACE_WACK=0;
        reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;M1_BREADY=0;
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
        if(USE_RANGE) begin
            setup_addr=ADDRESS;setup_count=1;setup_mask=0;setup_source=1;setup_valid=1;
            do @(posedge clk);while(!setup_ready);
            @(negedge clk);setup_valid=0;
        end
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
        local_cmd(0,INVALID,0);assert(!local_hit && !range_active && ingress_count==0) else $fatal(1,"FINAL_CACHE_DRAIN");
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
            local_cmd(1,UNIQUE_DIRTY,pattern(12));range_read_ci(ADDRESS,4'h7,pattern(12));
            local_cmd(0,INVALID,0);assert(!local_hit) else $fatal(1,"RANGE_READ_CLEANINVALID");
            value=pattern(13);for(int b=0;b<64;b++) memory.put_byte(ADDRESS+64'(b),value[b*8+:8]);
            local_cmd(1,UNIQUE_CLEAN,pattern(13));range_read_ci(ADDRESS,4'h7,pattern(13));
            local_cmd(0,INVALID,0);assert(!local_hit) else $fatal(1,"RANGE_READ_CLEAN_COPY");
            value=pattern(14);for(int b=0;b<64;b++) memory.put_byte(ADDRESS+64'(b),value[b*8+:8]);
            range_read_ci(ADDRESS,4'h7,pattern(14));
            range_read_sparse();
            setup_addr=ADDRESS;setup_count=1;setup_mask=0;setup_source=1;setup_op=2;setup_valid=1;
            do @(posedge clk);while(!setup_ready);
            @(negedge clk);setup_valid=0;setup_op=0;
            assert(setup_error && !range_active) else $fatal(1,"RANGE_READ_RESERVED_OP");
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
        setup_addr=ADDRESS;setup_count=1;setup_mask=0;setup_source=1;setup_valid=1;
        repeat(10) begin
            @(posedge clk);
            assert(!M0_ARREADY && !M1_AWREADY && !setup_ready && fault)
                else $fatal(1,"FATAL_FAULT_ADMISSION: core m0ar=%0d m1aw=%0d setup=%0d",
                    M0_ARREADY,M1_AWREADY,setup_ready);
        end
        @(negedge clk);M0_ARVALID=0;M1_AWVALID=0;setup_valid=0;
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
        $display("ACE_TIMEOUT_FAULT service=%0b inner=%0b proto=%0b cfault=%b adapters=%b admission=%0b ace=%0b read=%0b range=%0b live=%b sent=%b owners=%p",
            dut.service_fault,dut.service.inner_fault,dut.service.bank.protocol_fault,dut.service.bank.c_fault,
            dut.adapter_fault,dut.admission_fault,ACE_PROTOCOL_ERROR,dut.read_service_fault,range_fault,
            dut.service.bank.tag_live,dut.service.bank.status_sent,dut.service.bank.status_count);
        $display("ACE_TIMEOUT_WRITE_ADAPTER ctx=%0d lines=%0d law=%0b/%0b lw=%0b/%0b lb=%0b/%0b eb=%0b/%0b core_ingress=%0d tracker=%0d q=%0b/%0b path=%b range=%0b release=%0b",
            dut.write_context_count,dut.write_line_outstanding,dut.write_line_aw_valid,dut.write_line_aw_ready,
            dut.write_line_w_valid,dut.write_line_w_ready,dut.write_line_b_valid,dut.write_line_b_ready,
            M1_BVALID,M1_BREADY,ingress_count,tracker_count,dut.core.q_valid,dut.core.q_ready,
            dut.core.coherent.control.path,range_active,write_release);
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
