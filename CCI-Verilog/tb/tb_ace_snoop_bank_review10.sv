`timescale 1ns/1ps
// REVIEW 10.2/10.3 regression for ace_snoop_controller_bank: AC is issued in
// request-acceptance order even when a lower-index controller is reused, and a
// dirty-writeback AW keeps its payload while waiting for READY.
module tb_ace_snoop_bank_review10;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic req_valid,req_ready;logic [63:0] req_addr;logic [3:0] req_snoop;
    logic rsp_valid,rsp_ready;logic [4:0] rsp_resp;logic [511:0] rsp_data;logic fault,idle;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last;
    logic aw_valid,aw_ready;logic [63:0] aw_addr;logic [7:0] aw_len;logic [2:0] aw_size;logic [1:0] aw_burst;
    logic w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;logic b_valid,b_ready;logic [1:0] b_resp;
    logic [2:0] outstanding_count;
    ace_snoop_controller_bank #(.OUTSTANDING(4)) dut(.*);

    logic [63:0] ac_log[$],rsp_log[$],aw_log[$];
    always @(posedge clk) if(rst_n) begin
        if(ac_valid && ac_ready) ac_log.push_back(ac_addr);
        if(aw_valid && aw_ready) aw_log.push_back(aw_addr);
    end
    // Writeback sink: W beats then one B per AW (ID-less, serialized by the bank).
    int b_due=0;
    assign w_ready=1;
    always @(posedge clk) if(rst_n && w_valid && w_ready && w_last) b_due++;
    initial forever begin
        @(negedge clk);
        if(b_due>0) begin b_valid=1;b_resp=0;do @(posedge clk);while(!b_ready);b_due--;@(negedge clk);b_valid=0;end
    end
    task automatic req(input logic [63:0] a,input logic [3:0] op);
        @(negedge clk);req_valid=1;req_addr=a;req_snoop=op;
        do @(posedge clk);while(!req_ready);
        @(negedge clk);req_valid=0;
    endtask
    task automatic accept_one_ac;
        @(negedge clk);ac_ready=1;do @(posedge clk);while(!ac_valid);@(negedge clk);ac_ready=0;
    endtask
    task automatic cr_clean;
        @(negedge clk);cr_valid=1;cr_resp=0;do @(posedge clk);while(!cr_ready);@(negedge clk);cr_valid=0;
    endtask
    task automatic cr_dirty_with_data(input byte seed);
        // DataTransfer + PassDirty, then four CD beats.
        @(negedge clk);cr_valid=1;cr_resp=5'b00101;do @(posedge clk);while(!cr_ready);@(negedge clk);cr_valid=0;
        for(int b=0;b<4;b++) begin
            @(negedge clk);cd_valid=1;cd_data={16{8'(seed+b)}};cd_last=b==3;
            do @(posedge clk);while(!cd_ready);
        end
        @(negedge clk);cd_valid=0;cd_last=0;
    endtask
    task automatic take_rsp(input logic [63:0] expected);
        int n;n=0;
        while(!rsp_valid) begin @(posedge clk);n++;if(n>200) $fatal(1,"SNOOP_BANK_REVIEW10_TIMEOUT");end
        @(negedge clk);rsp_ready=1;@(posedge clk);@(negedge clk);rsp_ready=0;
        rsp_log.push_back(expected);
    endtask

    initial begin
        req_valid=0;req_addr=0;req_snoop=0;rsp_ready=0;ac_ready=0;cr_valid=0;cr_resp=0;
        cd_valid=0;cd_data=0;cd_last=0;aw_ready=0;b_valid=0;b_resp=0;
        repeat(3) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);

        // 10.3: slot 0 is reused by the fourth request while two older requests
        // still wait for AC; AC must follow request order.
        req(64'h1000,4'b1101);req(64'h2000,4'b1101);req(64'h3000,4'b1101);
        accept_one_ac();cr_clean();take_rsp(64'h1000);
        req(64'h4000,4'b1101);
        for(int i=0;i<3;i++) begin accept_one_ac();cr_clean();end
        for(int i=0;i<3;i++) take_rsp(0);
        assert(ac_log.size()==4 && ac_log[0]==64'h1000 && ac_log[1]==64'h2000 &&
               ac_log[2]==64'h3000 && ac_log[3]==64'h4000)
            else $fatal(1,"SNOOP_AC_ORDER: %h %h %h %h",ac_log[0],ac_log[1],ac_log[2],ac_log[3]);

        // 10.2: controller 1 waits on WB AW; a reused controller 0 reaches AW
        // later and must not take over the presented AW (bank assertion).
        req(64'h5000,4'b1001);req(64'h6000,4'b1001);
        accept_one_ac();cr_clean();take_rsp(64'h5000);           // controller 0 frees
        accept_one_ac();cr_dirty_with_data(8'h60);               // controller 1 -> AW pending
        req(64'h7000,4'b1001);accept_one_ac();cr_dirty_with_data(8'h70); // controller 0 -> AW
        repeat(4) @(posedge clk);
        assert(aw_valid && aw_addr==64'h6000) else $fatal(1,"SNOOP_WB_AW_PAYLOAD_STABILITY: presented %h",aw_addr);
        @(negedge clk);aw_ready=1;
        take_rsp(64'h6000);take_rsp(64'h7000);
        assert(aw_log.size()==2 && aw_log[0]==64'h6000 && aw_log[1]==64'h7000)
            else $fatal(1,"SNOOP_WB_AW_ORDER");
        repeat(5) @(posedge clk);
        assert(idle && !fault) else $fatal(1,"SNOOP_BANK_REVIEW10_DRAIN");
        $display("PASS ACE snoop bank review10 request-ordered AC and stable writeback AW");
        $finish;
    end
    initial begin #100000;$fatal(1,"SNOOP_BANK_REVIEW10_GLOBAL_TIMEOUT");end
endmodule
