`timescale 1ns/1ps
module tb_sord;
    logic clk=0,rst_n=0; always #5 clk=~clk;
    logic req_valid,req_ready;logic [63:0] req_addr;logic [3:0] req_snoop;
    logic rsp_valid,rsp_ready;logic [4:0] rsp_resp;logic [511:0] rsp_data;logic fault,idle;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last;
    logic aw_valid,aw_ready;logic [63:0] aw_addr;logic [7:0] aw_len;logic [2:0] aw_size;logic [1:0] aw_burst;
    logic w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;logic b_valid,b_ready;logic [1:0] b_resp;
    logic [2:0] outstanding_count;
    ace_snoop_controller_bank #(.OUTSTANDING(4)) dut(.*);
    logic [63:0] ac_log[$];
    always @(posedge clk) if(rst_n && ac_valid && ac_ready) ac_log.push_back(ac_addr);
    task automatic req(input logic [63:0] a);
        @(negedge clk);req_valid=1;req_addr=a;req_snoop=4'b1101;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
    endtask
    task automatic cr_once;
        @(negedge clk);cr_valid=1;cr_resp=0;do @(posedge clk);while(!cr_ready);@(negedge clk);cr_valid=0;
    endtask
    initial begin
        req_valid=0;rsp_ready=1;ac_ready=0;cr_valid=0;cr_resp=0;cd_valid=0;cd_data=0;cd_last=0;
        aw_ready=1;w_ready=1;b_valid=0;b_resp=0;req_snoop=0;req_addr=0;
        repeat(3) @(posedge clk); rst_n=1; repeat(2) @(posedge clk);
        req(64'h1000); req(64'h2000); req(64'h3000);
        // accept only the first AC, complete it
        @(negedge clk); ac_ready=1; @(posedge clk); @(negedge clk); ac_ready=0;
        cr_once();
        repeat(4) @(posedge clk);
        req(64'h4000);
        @(negedge clk); ac_ready=1;
        repeat(6) begin @(posedge clk); end
        foreach(ac_log[i]) $display("AC[%0d] addr=%h",i,ac_log[i]);
        $finish;
    end
endmodule
