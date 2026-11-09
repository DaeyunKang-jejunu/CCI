`timescale 1ns/1ps
module tb_ace_snoop_outstanding;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic local_valid,local_ready;logic [1:0] local_op;logic [63:0] local_addr;logic [511:0] local_wdata;
    cache_state_t local_state,local_rstate;logic local_rsp_valid,local_rsp_ready,local_error,local_hit;logic [511:0] local_rdata;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last,idle;
    int accepted,returned,live,peak;
    ace_cache_snoop_endpoint #(.LINES(8),.OUTSTANDING(4)) dut(.*);
    always @(posedge clk) if(rst_n) begin
        if(ac_valid&&ac_ready) begin accepted++;live++;end
        if(cr_valid&&cr_ready) begin returned++;live--;end
        if(live>peak) peak=live;
        assert(live>=0&&live<=4) else $fatal(1,"SNOOP_OUTSTANDING_BOUND");
    end
    task automatic tick;@(posedge clk);#1;endtask
    initial begin
        local_valid=0;local_op=0;local_addr=0;local_wdata=0;local_state=INVALID;local_rsp_ready=0;
        ac_valid=0;ac_addr=0;ac_snoop=MAKE_INVALID;cr_ready=0;cd_ready=0;
        accepted=0;returned=0;live=0;peak=0;
        repeat(4) tick();rst_n=1;repeat(2) tick();
        // Hold responses and fill all four AC contexts on consecutive cycles.
        for(int i=0;i<4;i++) begin
            @(negedge clk);ac_valid=1;ac_addr=64'h1000+64'(i*64);ac_snoop=MAKE_INVALID;
            do @(posedge clk);while(!ac_ready);
        end
        @(negedge clk);ac_valid=0;repeat(2) tick();
        assert(accepted==4&&returned==0&&peak==4&&!ac_ready)
            else $fatal(1,"SNOOP_MULTI_ACCEPT accepted=%0d returned=%0d peak=%0d ready=%0d",accepted,returned,peak,ac_ready);
        cr_ready=1;
        for(int i=0;i<4;i++) begin
            do @(posedge clk);while(!cr_valid);
            assert(cr_resp==0) else $fatal(1,"SNOOP_MULTI_RESP index=%0d resp=%0h",i,cr_resp);
        end
        @(negedge clk);cr_ready=0;repeat(2) tick();
        assert(returned==4&&live==0&&idle) else $fatal(1,"SNOOP_MULTI_DRAIN");
        $display("COVERAGE snoop_outstanding depth=4 peak=4 ordered_cr=4");
        $display("PASS ACE endpoint multiple outstanding snoops");
        $finish;
    end
    initial begin repeat(1000) @(posedge clk);$fatal(1,"SNOOP_ENDPOINT_OUTSTANDING_TIMEOUT");end
endmodule
