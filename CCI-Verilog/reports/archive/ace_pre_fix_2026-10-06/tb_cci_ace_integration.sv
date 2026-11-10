`timescale 1ns/1ps
module tb_cci_ace_integration #(parameter bit USE_RANGE=1,parameter int CACHED_MASTERS=1);
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
    logic mem_awready,mem_wready,mem_bvalid,mem_err;logic [1:0] mem_bresp;
    int ac_count;
    localparam logic [63:0] ADDRESS=64'h12_0000_1040;
    localparam int ID_WIDTH=4,ADDR_WIDTH=64,DATA_WIDTH=128,M1_INGRESS_DEPTH=16,LINE_TRACKER_ENTRIES=4;
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
    logic  range_active;
    logic  write_release;
    logic [63:0] wr_issued_mask;
    logic [63:0] done_mask;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count;
    logic  tracker_full_stall;
    logic  admission_freeze;
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
    logic wb_arvalid,wb_arready,wb_rvalid,wb_rready,wb_rlast;
    logic [63:0] wb_araddr;logic [7:0] wb_arlen;logic [2:0] wb_arsize;logic [1:0] wb_arburst,wb_rresp;
    logic [127:0] wb_rdata;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) ac_count<=0;
        else if(ac_valid && ac_ready) ac_count<=ac_count+1;
    end
    axi_cci_ace_top #(.USE_RANGE(USE_RANGE),.LINE_TRACKER_ENTRIES(4),.CACHED_MASTERS(CACHED_MASTERS)) dut(
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
        .M1_WVALID(M1_WVALID),
        .M1_WREADY(M1_WREADY),
        .M1_WDATA(M1_WDATA),
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
        .setup_valid(setup_valid),
        .setup_ready(setup_ready),
        .setup_addr(setup_addr),
        .setup_mask(setup_mask),
        .setup_count(setup_count),
        .setup_source(setup_source),
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
        .WB_AWREADY(aw_ready),
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
        .M1_AWVALID(aw_valid),
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
        .S_WDATA(mem_WDATA),
        .M1_WDATA(w_data),
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
    task automatic local_cmd(input logic [1:0] op,input cache_state_t state,input logic [511:0] value,input bit error_expected=0);
        local_addr=ADDRESS;local_op=op;local_state=state;local_wdata=value;local_valid=1;
        do @(posedge clk);while(!local_ready);
        @(negedge clk);local_valid=0;
        assert(local_rsp_valid && local_error==error_expected) else $fatal(1,"LOCAL_RESPONSE");
        local_rsp_ready=1;tick();local_rsp_ready=0;
    endtask
    task automatic request(input logic [3:0] op);
        req_addr=ADDRESS;req_snoop=op;req_valid=1;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
    endtask
    task automatic core_aw;
        M1_AWADDR=ADDRESS;M1_AWID=3;M1_AWLEN=3;M1_AWVALID=1;
        do @(posedge clk);while(!M1_AWREADY);
        @(negedge clk);M1_AWVALID=0;
    endtask
    task automatic core_w(input logic [511:0] value);
        for(int b=0;b<4;b++) begin
            M1_WVALID=1;M1_WLAST=b==3;M1_WDATA=value[b*128+:128];
            do @(posedge clk);while(!M1_WREADY);
            @(negedge clk);M1_WVALID=0;
        end
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
        assert(ac_count==before_count+1 && ac_snoop==READ_SHARED) else $fatal(1,"TOP_MANAGER_AUTO_SNOOP");
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
        assert(ac_count==before_count+1 && ac_snoop==CLEAN_INVALID) else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_SNOOP");
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
        M1_WVALID='0;
        M1_WDATA='0;
        M1_WLAST='0;
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
        ACE_ARVALID=0;ACE_ARID=0;ACE_ARADDR=0;ACE_ARLEN=0;ACE_ARSIZE=0;ACE_ARBURST=0;
        ACE_ARSNOOP=0;ACE_ARDOMAIN=0;ACE_ARBAR=0;ACE_ARCACHE=0;ACE_ARLOCK=0;
        ACE_RREADY=0;ACE_RACK=0;
        ACE_AWVALID=0;ACE_AWID=0;ACE_AWADDR=0;ACE_AWLEN=0;ACE_AWSIZE=0;ACE_AWBURST=0;
        ACE_AWSNOOP=0;ACE_AWDOMAIN=0;ACE_AWBAR=0;ACE_AWCACHE=0;ACE_AWLOCK=0;ACE_AWUNIQUE=0;
        ACE_WVALID=0;ACE_WDATA=0;ACE_WSTRB=0;ACE_WLAST=0;ACE_BREADY=0;ACE_WACK=0;
        reset_case();M0_BREADY=1;M0_RREADY=1;M1_RREADY=1;M1_BREADY=0;
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
        local_cmd(1,UNIQUE_DIRTY,pattern(5));manager_readshared(pattern(5));
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==8'(5*13+b*7)) else $fatal(1,"TOP_MANAGER_WRITEBACK");
        local_cmd(1,UNIQUE_DIRTY,pattern(6));value=pattern(7);manager_writeunique(value[127:0]);local_cmd(0,INVALID,0);
        assert(!local_hit) else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_INVALIDATE");
        for(int b=0;b<64;b++) assert(memory.get_byte(ADDRESS+64'(b))==(b<16?8'(7*13+b*7):8'(6*13+b*7)))
            else $fatal(1,"TOP_MANAGER_WRITEUNIQUE_MEMORY");
        assert(!ACE_PROTOCOL_ERROR) else $fatal(1,"TOP_MANAGER_PROTOCOL");
        $display("PASS v9 ACE integration mode=%0d cached_masters=%0d legacy/drain/CD/writeback/initiating-manager ARSNOOP/AWSNOOP/resume",USE_RANGE,CACHED_MASTERS);$finish;
    end
    initial begin #100000;$fatal(1,"ACE_INTEGRATION_TIMEOUT");end
endmodule
