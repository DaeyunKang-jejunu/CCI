`timescale 1ns/1ps
module tb_cci_memory_cache #(parameter bit USE_RANGE=1, parameter int CACHE_LINES=8, AXI_DEPTH=16, MEMORY_LATENCY=3);
    localparam int ID_WIDTH=4,ADDR_WIDTH=64,DATA_WIDTH=128,M1_INGRESS_DEPTH=16,LINE_TRACKER_ENTRIES=4;
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
    logic [1:0] setup_op=0,range_op;
    logic read_release,range_fault;
    logic [51:0] range_base_page;
    logic [63:0] range_line_mask,range_read_prep_addr;
    logic range_read_reserve_fire=0,range_read_done_fire=0,range_read_prep_ready=0,range_read_prep_rsp_valid=0;
    logic [5:0] range_read_reserve_idx=0,range_read_done_idx=0;
    logic range_read_prep_valid,range_read_prep_rsp_ready;
    logic [4:0] range_read_prep_rsp=0;
    logic [63:0] wr_issued_mask;
    logic [63:0] done_mask;
    logic [$clog2(M1_INGRESS_DEPTH+1)-1:0] ingress_count;
    logic [$clog2(LINE_TRACKER_ENTRIES+1)-1:0] tracker_count;
    logic  tracker_full_stall;
    logic  admission_freeze;
    axi_cci_top #(.USE_RANGE(USE_RANGE),.LINE_TRACKER_ENTRIES(4),.MAX_OUTSTANDING_TRANSACTIONS(AXI_DEPTH)) dut (.*);
    logic mem_err;
    axi_memory_slave #(.ID_WIDTH(5),.ADDR_WIDTH(64),.RESP_LATENCY(MEMORY_LATENCY),.MAX_OUTSTANDING_TRANSACTIONS(AXI_DEPTH)) memory (
        .ACLK,.ARESETn,
        .AWVALID(S_AWVALID),.AWREADY(S_AWREADY),.AWID(S_AWID),.AWADDR(S_AWADDR),.AWLEN(S_AWLEN),
        .WVALID(S_WVALID),.WREADY(S_WREADY),.WDATA(S_WDATA),.WLAST(S_WLAST),
        .BVALID(S_BVALID),.BREADY(S_BREADY),.BID(S_BID),.BRESP(S_BRESP),
        .ARVALID(S_ARVALID),.ARREADY(S_ARREADY),.ARID(S_ARID),.ARADDR(S_ARADDR),.ARLEN(S_ARLEN),
        .RVALID(S_RVALID),.RREADY(S_RREADY),.RID(S_RID),.RDATA(S_RDATA),.RLAST(S_RLAST),.RRESP(S_RRESP),
        .protocol_error_wlast(mem_err)
    );
    logic load_valid,load_ready,result_valid,result_ready,allow_r;
    logic [63:0] load_addr;
    logic [511:0] result_data;
    int dropped_fills,cache_hits;
    m0_clean_cache_model #(.LINES(CACHE_LINES)) cache (
        .clk(ACLK),.rst_n(ARESETn),.load_valid,.load_ready,.load_addr,.result_valid,.result_ready,.result_data,.allow_r,
        .ar_valid(M0_ARVALID),.ar_ready(M0_ARREADY),.ar_addr(M0_ARADDR),.ar_id(M0_ARID),.ar_len(M0_ARLEN),
        .r_valid(M0_RVALID),.r_ready(M0_RREADY),.r_data(M0_RDATA),.r_last(M0_RLAST),.r_id(M0_RID),.r_resp(M0_RRESP),
        .ac_valid(ACVALID),.ac_ready(ACREADY),.ac_addr(ACADDR),.ac_snoop(ACSNOOP),
        .cr_valid(CRVALID),.cr_ready(CRREADY),.cr_resp(CRRESP),.snoop_idle,.dropped_fills,.cache_hits
    );
    initial ACLK=0;
    always #5 ACLK=~ACLK;
    function automatic [511:0] source_line(input int i);
        for(int b=0;b<64;b++) source_line[b*8+:8]=8'(i*29+b*7+145);
    endfunction
    function automatic [511:0] old_line(input int i);
        for(int b=0;b<64;b++) old_line[b*8+:8]=8'(i*17+b*3+96);
    endfunction
    task automatic load(input logic[63:0] addr, output logic[511:0] value);
        @(negedge ACLK);load_valid=1;load_addr=addr;
        do @(posedge ACLK);while(!load_ready);
        @(negedge ACLK);load_valid=0;
        do @(posedge ACLK);while(!result_valid);
        value=result_data;
        @(negedge ACLK);result_ready=1;
        @(negedge ACLK);result_ready=0;
    endtask
    task automatic read_source(input logic[63:0] addr, output logic[511:0] value);
        @(negedge ACLK);M1_ARVALID=1;M1_ARADDR=addr;M1_ARLEN=3;M1_ARID=4;
        do @(posedge ACLK);while(!M1_ARREADY);
        @(negedge ACLK);M1_ARVALID=0;
        for(int b=0;b<4;b++) begin
            do @(posedge ACLK);while(!M1_RVALID);
            assert(M1_RID==4 && M1_RRESP==0 && M1_RLAST==(b==3)) else $fatal(1,"source R protocol");
            value[128*b+:128]=M1_RDATA;
            @(negedge ACLK);
        end
    endtask
    task automatic write_line(input logic[63:0] addr, input logic[511:0] value);
        @(negedge ACLK);M1_AWVALID=1;M1_AWADDR=addr;M1_AWLEN=3;M1_AWID=3;
        do @(posedge ACLK);while(!M1_AWREADY);
        @(negedge ACLK);M1_AWVALID=0;
        for(int b=0;b<4;b++) begin
            M1_WVALID=1;M1_WDATA=value[128*b+:128];M1_WLAST=(b==3);
            do @(posedge ACLK);while(!M1_WREADY);
            @(negedge ACLK);M1_WVALID=0;
        end
        do @(posedge ACLK);while(!M1_BVALID);
        assert(M1_BID==3 && M1_BRESP==0) else $fatal(1,"copy B");
        @(negedge ACLK);
    endtask
    task automatic range_setup(input logic[63:0] addr,input int count);
        @(negedge ACLK);setup_valid=1;setup_addr=addr;setup_count=7'(count);setup_mask=0;
        do @(posedge ACLK);while(!setup_ready);
        @(negedge ACLK);setup_valid=0;
        wait(range_active);
    endtask
    always @(posedge ACLK) if(ARESETn)
        assert(!(mem_err || protocol_error_wlast || protocol_error_rlast || protocol_error_bid_order ||
            protocol_error_rid_order || protocol_error_outstanding_overflow)) else $fatal(1,"memory/cache AXI protocol");
    initial begin : run
        logic [511:0] value, pending_value;
        ARESETn='0;
        M0_AWVALID='0;
        M0_AWID='0;
        M0_AWADDR='0;
        M0_AWLEN='0;
        M0_WVALID='0;
        M0_WDATA='0;
        M0_WLAST='0;
        M0_BREADY='0;
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
        load_valid=0;load_addr=0;result_ready=0;allow_r=1;
        M1_RREADY=1;M1_BREADY=1;M0_BREADY=1;setup_source=1;
        for(int i=0;i<8;i++) for(int b=0;b<64;b++) begin
            memory.put_byte(64'h100_0000_1000+64'(i*64+b),8'(i*29+b*7+145));
            memory.put_byte(64'h200_0000_2000+64'(i*64+b),8'(i*17+b*3+96));
        end
        repeat(4) @(negedge ACLK);ARESETn=1;
        for(int i=0;i<8;i++) begin
            load(64'h200_0000_2000+64'(i*64),value);
            assert(value==old_line(i)) else $fatal(1,"cache prime mismatch");
        end
        load(64'h200_0000_2000,value);
        load(64'h200_0000_2000,value);
        assert(cache_hits>0) else $fatal(1,"cache model did not exercise hits");
        if(USE_RANGE) range_setup(64'h200_0000_2000,8);
        for(int i=0;i<8;i++) begin
            read_source(64'h100_0000_1000+64'(i*64),value);
            assert(value==source_line(i)) else $fatal(1,"source bytes mismatch");
            write_line(64'h200_0000_2000+64'(i*64),value);
        end
        wait(!range_active && ingress_count==0);
        for(int i=0;i<8;i++) begin
            for(int b=0;b<64;b++) begin
                assert(memory.get_byte(64'h200_0000_2000+64'(i*64+b))==8'(i*29+b*7+145))
                    else $fatal(1,"destination byte mismatch");
                assert(memory.get_byte(64'h100_0000_1000+64'(i*64+b))==8'(i*29+b*7+145))
                    else $fatal(1,"source corrupted");
            end
            load(64'h200_0000_2000+64'(i*64),value);
            assert(value==source_line(i)) else $fatal(1,"stale resident cache line after copy");
        end
        $display("PASS memory-backed byte copy and cached destination invalidation mode=%0d",USE_RANGE);
        // Outstanding M0 refill versus conventional write in both B1 and P.
        for(int b=0;b<64;b++) memory.put_byte(64'h300_0000_3000+64'(b),8'(b));
        allow_r=0;
        fork
            load(64'h300_0000_3000,pending_value);
            begin
                wait(M0_RVALID);
                write_line(64'h300_0000_3000,source_line(7));
                assert(M0_RVALID && !M0_RREADY) else $fatal(1,"pending refill scenario lost");
                allow_r=1;
            end
        join
        assert(dropped_fills==1) else $fatal(1,"late snooped fill was installed");
        load(64'h300_0000_3000,value);
        assert(value==source_line(7)) else $fatal(1,"stale late refill visible to next load");
        $display("PASS pending refill poisoned; subsequent cached-master load sees new bytes");
        $display("PASS tb_cci_memory_cache USE_RANGE=%0d",USE_RANGE);$finish;
    end
    initial begin #200000; $fatal(1,"memory/cache timeout");end
endmodule
