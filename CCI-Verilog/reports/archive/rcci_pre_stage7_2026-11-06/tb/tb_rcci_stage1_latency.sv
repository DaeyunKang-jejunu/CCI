`timescale 1ns/1ps

module tb_rcci_stage1_latency;
    import ace_snoop_pkg::*;

    logic clk=0, rst_n=0;
    always #5 clk=~clk;
    string wave_path;
    initial begin
        if(!$value$plusargs("wave=%s",wave_path)) wave_path="rcci_stage1_latency.fst";
        $dumpfile(wave_path);
        $dumpvars(0,tb_rcci_stage1_latency);
    end
    int cycle;
    always @(posedge clk) begin
        if(!rst_n) cycle<=0;
        else cycle<=cycle+1;
    end

    logic local_valid,local_ready;
    logic [1:0] local_op;
    logic [63:0] local_addr;
    logic [511:0] local_wdata;
    cache_state_t local_state;
    logic local_rsp_valid,local_error,local_hit;
    cache_state_t local_rstate;
    logic [511:0] local_rdata;
    logic ac_valid,ac_ready;
    logic [63:0] ac_addr;
    logic [3:0] ac_snoop;
    logic cr_valid;
    logic [4:0] cr_resp;
    logic cd_valid;
    logic [127:0] cd_data;
    logic cd_last,idle;

    ace_cache_snoop_endpoint #(.LINES(8),.OUTSTANDING(4)) cache(
        .clk,.rst_n,
        .local_valid,.local_ready,.local_op,.local_addr,.local_wdata,.local_state,
        .local_rsp_valid,.local_rsp_ready(1'b1),.local_error,.local_hit,
        .local_rstate,.local_rdata,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,
        .cr_valid,.cr_ready(1'b1),.cr_resp,
        .cd_valid,.cd_ready(1'b1),.cd_data,.cd_last,.idle
    );

    logic awvalid,awready,wvalid,wready,wlast,bvalid;
    logic [4:0] awid,bid;
    logic [63:0] awaddr;
    logic [7:0] awlen;
    logic [127:0] wdata;
    logic [1:0] bresp;
    logic arvalid,arready,rvalid,rlast;
    logic [4:0] arid,rid;
    logic [63:0] araddr;
    logic [7:0] arlen;
    logic [127:0] rdata;
    logic [1:0] rresp;
    logic protocol_error_wlast;

    axi_memory_slave #(
        .ID_WIDTH(5),.ADDR_WIDTH(64),.DATA_WIDTH(128),
        .MAX_OUTSTANDING_TRANSACTIONS(16),.DEBUG(1'b0),.RESP_LATENCY(0)
    ) mem(
        .ACLK(clk),.ARESETn(rst_n),
        .AWVALID(awvalid),.AWREADY(awready),.AWID(awid),.AWADDR(awaddr),.AWLEN(awlen),
        .WVALID(wvalid),.WREADY(wready),.WDATA(wdata),.WSTRB(16'hffff),.WLAST(wlast),
        .BVALID(bvalid),.BREADY(1'b1),.BID(bid),.BRESP(bresp),
        .ARVALID(arvalid),.ARREADY(arready),.ARID(arid),.ARADDR(araddr),.ARLEN(arlen),
        .RVALID(rvalid),.RREADY(1'b1),.RID(rid),.RDATA(rdata),.RLAST(rlast),.RRESP(rresp),
        .protocol_error_wlast
    );

    task automatic cache_fill(input logic [63:0] addr,input cache_state_t state);
        @(negedge clk);
        local_addr=addr;local_state=state;local_wdata={16{32'hcafe_0001}};
        local_op=2'd1;local_valid=1;
        do @(posedge clk); while(!local_ready);
        @(negedge clk);local_valid=0;
        do @(posedge clk); while(!local_rsp_valid);
        if(local_error) $fatal(1,"STAGE1_CACHE_FILL");
    endtask

    task automatic issue_snoop(
        input logic [63:0] addr,input logic [3:0] snoop,
        output int ac_cycle,output int cr_cycle,output int last_cycle,
        output int cd_beats
    );
        @(negedge clk);ac_addr=addr;ac_snoop=snoop;ac_valid=1;
        do @(posedge clk); while(!ac_ready);
        ac_cycle=cycle;
        @(negedge clk);ac_valid=0;
        cr_cycle=-1;last_cycle=-1;cd_beats=0;
        while(cr_cycle<0 || (cr_resp[0] && last_cycle<0)) begin
            @(posedge clk);
            if(cr_valid) begin
                cr_cycle=cycle;
                if(!cr_resp[0]) last_cycle=cycle;
            end
            if(cd_valid) begin
                cd_beats++;
                if(cd_last) last_cycle=cycle;
            end
        end
    endtask

    int ac_c,cr_c,last_c,beats;
    int ls_nodata,ls_data,lm,lw;
    int ar_c,first_r_c,last_w_c,b_c;

    initial begin
        local_valid=0;local_op=0;local_addr=0;local_wdata=0;local_state=INVALID;
        ac_valid=0;ac_addr=0;ac_snoop=0;
        awvalid=0;awid=0;awaddr=0;awlen=0;wvalid=0;wdata=0;wlast=0;
        arvalid=0;arid=0;araddr=0;arlen=0;
        repeat(4) @(posedge clk);
        @(negedge clk);rst_n=1;

        // A cache miss has CR only. This is the Ls used by the read-miss model.
        issue_snoop(64'h0000_0000_0000_4000,READ_ONCE,ac_c,cr_c,last_c,beats);
        if(beats!=0 || cr_resp[0]) $fatal(1,"STAGE1_EXPECTED_NODATA");
        ls_nodata=last_c-ac_c;

        // A dirty hit exercises the complete four-beat CD return path.
        cache_fill(64'h0000_0000_0000_8000,UNIQUE_DIRTY);
        issue_snoop(64'h0000_0000_0000_8000,READ_SHARED,ac_c,cr_c,last_c,beats);
        if(beats!=4 || !cr_resp[0]) $fatal(1,"STAGE1_EXPECTED_DATA");
        ls_data=last_c-ac_c;

        // Lm: memory AR handshake through first R handshake.
        @(negedge clk);arid=5'd3;araddr=64'h10000;arlen=8'd3;arvalid=1;
        do @(posedge clk); while(!arready);
        ar_c=cycle;
        @(negedge clk);arvalid=0;
        do @(posedge clk); while(!rvalid);
        first_r_c=cycle;lm=first_r_c-ar_c;
        while(!(rvalid&&rlast)) @(posedge clk);

        // Lw: final W handshake through B handshake.
        @(negedge clk);awid=5'd5;awaddr=64'h20000;awlen=8'd3;awvalid=1;
        do @(posedge clk); while(!awready);
        @(negedge clk);awvalid=0;wvalid=1;
        for(int b=0;b<4;b++) begin
            wdata={120'd0,8'(b)};wlast=(b==3);
            do @(posedge clk); while(!wready);
            if(b==3) last_w_c=cycle;
            @(negedge clk);
        end
        wvalid=0;wlast=0;
        do @(posedge clk); while(!bvalid);
        b_c=cycle;lw=b_c-last_w_c;

        if(ls_nodata<=0 || ls_data<ls_nodata || lm<=0 || lw<=0)
            $fatal(1,"STAGE1_BAD_LATENCY");
        if(protocol_error_wlast) $fatal(1,"STAGE1_WLAST");
        $display("RCCI_STAGE1_LATENCY LS_NODATA=%0d LS_DATA=%0d LM=%0d LW=%0d",
                 ls_nodata,ls_data,lm,lw);
        $display("PASS rCCI stage1 RTL latency measurement");
        $finish;
    end

    initial begin
        #20000 $fatal(1,"STAGE1_TIMEOUT");
    end
endmodule
