`timescale 1ns/1ps
module tb_ace_tagged_service;
    localparam int OUTSTANDING=4,OWNERS=4,TW=2;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic quiescent=1;
    logic legacy_ac_valid=0,legacy_ac_ready;logic [63:0] legacy_ac_addr=0;logic [3:0] legacy_ac_snoop=0;
    logic legacy_cr_valid,legacy_cr_ready=1;logic [1:0] legacy_cr_resp;
    logic req_valid=0,req_ready;logic [63:0] req_addr;logic [3:0] req_snoop;logic [1:0] req_owner;
    logic req_requires_quiescence=0;logic [TW-1:0] req_tag;
    logic [OWNERS-1:0] status_valid,status_ready=0;
    logic [OWNERS-1:0][TW-1:0] status_tag;logic [OWNERS-1:0][4:0] status_resp;
    logic data_select_valid=0,data_select_ready;logic [1:0] data_select_owner;logic [TW-1:0] data_select_tag;
    logic data_valid;logic [TW-1:0] data_tag;logic [511:0] data;logic data_done=0;
    logic release_valid=0,release_ready;logic [1:0] release_owner;logic [TW-1:0] release_tag;
    logic maintenance_busy,idle,fault;
    logic ac_valid,ac_ready=0;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid=0,cr_ready;logic [4:0] cr_resp=0;
    logic cd_valid=0,cd_ready;logic [127:0] cd_data=0;logic cd_last=0;
    logic aw_valid;logic aw_ready=1;logic [63:0] aw_addr;logic [7:0] aw_len;
    logic [2:0] aw_size;logic [1:0] aw_burst;logic w_valid,w_ready=1;logic [127:0] w_data;
    logic [15:0] w_strb;logic w_last;logic b_valid=0;logic b_ready;logic [1:0] b_resp=0;
    logic [2:0] outstanding_count;
    int cycle=0,data_complete_cycle=-1,data_status_cycle=-1,no_data_complete_cycle=-1,no_data_status_cycle=-1;
    always @(posedge clk)if(rst_n)begin
        cycle<=cycle+1;
        if(status_valid[0]&&data_status_cycle<0)data_status_cycle<=cycle;
        if(status_valid[1]&&no_data_status_cycle<0)no_data_status_cycle<=cycle;
    end

    cci_ace_tagged_snoop_service #(.OUTSTANDING(OUTSTANDING),.OWNERS(OWNERS)) dut(.*);
    task automatic tick;@(posedge clk);#1;endtask
    task automatic send_req(input [1:0] owner,input [63:0] addr,input [3:0] snoop,output [TW-1:0] tag);
        @(negedge clk);req_owner=owner;req_addr=addr;req_snoop=snoop;req_valid=1;
        do @(posedge clk);while(!req_ready);tag=req_tag;@(negedge clk);req_valid=0;
    endtask
    task automatic accept_ac_and_respond(input [4:0] resp,input bit with_data,input [7:0] seed);
        ac_ready=1;do @(posedge clk);while(!ac_valid);@(negedge clk);ac_ready=0;
        cr_resp=resp;cr_valid=1;do @(posedge clk);while(!cr_ready);@(negedge clk);cr_valid=0;
        if(!with_data&&no_data_complete_cycle<0)no_data_complete_cycle=cycle;
        if(with_data)begin
            for(int beat=0;beat<4;beat++)begin
                cd_data={16{8'(seed+beat)}};cd_last=beat==3;cd_valid=1;
                do @(posedge clk);while(!cd_ready);@(negedge clk);cd_valid=0;
            end
            data_complete_cycle=cycle;
        end
    endtask
    task automatic pop_status(input [1:0] owner,output [TW-1:0] tag);
        for(int n=0;n<40&&!status_valid[owner];n++)tick();
        assert(status_valid[owner])else $fatal(1,"TAG_STATUS_PROGRESS owner=%0d",owner);
        tag=status_tag[owner];status_ready[owner]=1;tick();@(negedge clk);status_ready[owner]=0;
    endtask
    task automatic release_one(input [1:0] owner,input [TW-1:0] tag);
        @(negedge clk);release_owner=owner;release_tag=tag;release_valid=1;
        do @(posedge clk);while(!release_ready);@(negedge clk);release_valid=0;
    endtask

    initial begin
        logic [TW-1:0] tag0,tag1,tag2,popped;
        repeat(3)tick();rst_n=1;tick();
        // AC is blocked while three owners acquire contexts, proving request
        // allocation is independent of the ordered ACE pin service.
        send_req(0,64'h1000,4'd1,tag0);
        send_req(1,64'h2000,4'd13,tag1);
        send_req(2,64'h3000,4'd9,tag2);
        assert(tag0!=tag1&&tag1!=tag2&&tag0!=tag2&&outstanding_count==3)
            else $fatal(1,"TAG_UNIQUE_ALLOCATION");

        // Ordered AC/CR/CD completion: owner 0 returns data, owners 1/2 do not.
        accept_ac_and_respond(5'b00001,1,8'h40);
        accept_ac_and_respond(5'b00000,0,0);
        accept_ac_and_respond(5'b00000,0,0);
        for(int n=0;n<40&&!(status_valid[0]&&status_valid[1]&&status_valid[2]);n++)tick();
        assert(status_valid[0]&&status_valid[1]&&status_valid[2])
            else $fatal(1,"TAG_OWNER_QUEUE_PROGRESS");
        // Leave owner 0 pending and retire owners 1/2. Their independent queues
        // must not suffer head-of-line blocking behind owner 0.
        pop_status(1,popped);assert(popped==tag1)else $fatal(1,"TAG_OWNER1_ROUTE");
        if($test$plusargs("wrong_owner"))begin
            @(negedge clk);release_owner=0;release_tag=popped;release_valid=1;tick();
            @(negedge clk);release_valid=0;tick();
            assert(fault)else $fatal(1,"TAG_WRONG_OWNER_MISSING");
            $display("PASS stage3 tagged service wrong-owner detection");$finish;
        end
        release_one(1,popped);
        pop_status(2,popped);assert(popped==tag2)else $fatal(1,"TAG_OWNER2_ROUTE");
        release_one(2,popped);
        assert(outstanding_count==1&&status_valid[0])else $fatal(1,"TAG_HOL_INDEPENDENCE");

        assert(status_resp[0][0])else $fatal(1,"TAG_OWNER0_DATA_STATUS");
        pop_status(0,popped);assert(popped==tag0)else $fatal(1,"TAG_OWNER0_ROUTE");
        @(negedge clk);release_owner=0;release_tag=popped;release_valid=1;#1;
        assert(!release_ready&&!fault)else $fatal(1,"TAG_RELEASE_BEFORE_DATA_DONE");
        @(negedge clk);release_valid=0;
        @(negedge clk);data_select_owner=0;data_select_tag=popped;data_select_valid=1;
        do @(posedge clk);while(!data_select_ready);@(negedge clk);data_select_valid=0;
        for(int n=0;n<40&&!data_valid;n++)tick();
        assert(data_valid&&data_tag==tag0)else $fatal(1,"TAG_DATA_PROGRESS");
        begin logic [511:0] held=data;repeat(3)begin tick();assert(data_valid&&data==held&&data_tag==tag0)
            else $fatal(1,"TAG_DATA_HELD_GRANT");end end
        data_done=1;tick();@(negedge clk);data_done=0;
        release_one(0,tag0);tick();
        assert(outstanding_count==0&&idle&&!fault)else $fatal(1,"TAG_FINAL_DRAIN");
        $display("LC_STATUS_DATA=%0d LC_STATUS_NO_DATA=%0d",
            data_status_cycle-data_complete_cycle,no_data_status_cycle-no_data_complete_cycle);
        $display("PASS stage3 tagged snoop service owner-queues held-data release");
        $finish;
    end
    initial begin #10000;
        $display("TAG_TIMEOUT req=%0b/%0b ac=%0b/%0b cr=%0b/%0b cd=%0b/%0b out=%0d status=%b fault=%0b reqcnt=%0d unissued=%0d accnt=%0d live=%b sent=%b",
            req_valid,req_ready,ac_valid,ac_ready,cr_valid,cr_ready,cd_valid,cd_ready,
            outstanding_count,status_valid,fault,dut.bank.req_count,dut.bank.unissued,
            dut.bank.ac_count,dut.bank.tag_live,dut.bank.status_sent);
        $display("TAG_TIMEOUT order=%0d head=%0d states=%0d,%0d,%0d,%0d ccrready=%b",
            dut.bank.ac_order[dut.bank.ac_head],dut.bank.ac_head,
            dut.bank.G_CTRL[0].u_controller.state,dut.bank.G_CTRL[1].u_controller.state,
            dut.bank.G_CTRL[2].u_controller.state,dut.bank.G_CTRL[3].u_controller.state,
            dut.bank.c_cr_ready);
        $fatal(1,"TAG_SERVICE_TIMEOUT");
    end
endmodule
