`timescale 1ns/1ps
module tb_excl;
    import ace_snoop_pkg::*;
    localparam int ID_WIDTH=4;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic accept_enable=1;
    logic ar_valid,ar_ready;logic [ID_WIDTH-1:0] ar_id;logic [63:0] ar_addr;logic [7:0] ar_len;
    logic [2:0] ar_size;logic [1:0] ar_burst;logic [3:0] ar_snoop;logic [1:0] ar_domain,ar_bar;
    logic [3:0] ar_cache;logic ar_lock;
    logic r_valid,r_ready;logic [ID_WIDTH-1:0] r_id;logic [127:0] r_data;logic r_last;logic [3:0] r_resp;logic r_ack;
    logic aw_valid,aw_ready;logic [ID_WIDTH-1:0] aw_id;logic [63:0] aw_addr;logic [7:0] aw_len;
    logic [2:0] aw_size;logic [1:0] aw_burst;logic [2:0] aw_snoop;logic [1:0] aw_domain,aw_bar;
    logic [3:0] aw_cache;logic aw_lock,aw_unique;
    logic w_valid,w_ready;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;
    logic b_valid,b_ready;logic [ID_WIDTH-1:0] b_id;logic [1:0] b_resp;logic w_ack;
    logic snoop_req_valid,snoop_req_ready;logic [63:0] snoop_req_addr;logic [3:0] snoop_req_snoop;
    logic snoop_rsp_valid,snoop_rsp_ready;logic [4:0] snoop_rsp_resp;logic [511:0] snoop_rsp_data;
    logic mem_aw_valid,mem_aw_ready;logic [63:0] mem_aw_addr;logic [7:0] mem_aw_len;logic [2:0] mem_aw_size;
    logic [1:0] mem_aw_burst;logic mem_w_valid,mem_w_ready;logic [127:0] mem_w_data;logic [15:0] mem_w_strb;
    logic mem_w_last,mem_b_valid,mem_b_ready;logic [1:0] mem_b_resp;
    logic mem_ar_valid,mem_ar_ready;logic [63:0] mem_ar_addr;logic [7:0] mem_ar_len;logic [2:0] mem_ar_size;
    logic [1:0] mem_ar_burst;logic mem_r_valid,mem_r_ready;logic [127:0] mem_r_data;logic mem_r_last;logic [1:0] mem_r_resp;
    logic [1:0] reservation_kill_valid=0;logic [1:0][63:0] reservation_kill_addr=0;
    logic busy,protocol_error;logic [2:0] outstanding_count;
    int accepted,acked,peak;logic same_id_probe;
    logic [ID_WIDTH-1:0] completion_order[$],b_completion_order[$];

    ace_manager_request_bank #(.ID_WIDTH(ID_WIDTH),.CONTEXTS(4)) dut(.*);

    always @(posedge clk) if(rst_n) begin
        if(ar_valid&&ar_ready) begin
            accepted++;
            assert(!same_id_probe) else $fatal(1,"ACE_SAME_ID_REACCEPT");
        end
        if(r_ack) acked++;
        if(outstanding_count>peak) peak=outstanding_count;
        if(r_valid&&r_ready&&r_last) completion_order.push_back(r_id);
        if(b_valid&&b_ready) b_completion_order.push_back(b_id);
        assert(outstanding_count<=4) else $fatal(1,"ACE_OUTSTANDING_BOUND");
    end
    task automatic tick;@(posedge clk);#1;endtask
    task automatic send_ar(input logic [3:0] id,input logic [63:0] addr,
        input logic [3:0] snoop,input logic [1:0] domain);
        @(negedge clk);ar_valid=1;ar_id=id;ar_addr=addr;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=snoop;ar_domain=domain;ar_bar=0;ar_cache=4'b0010;ar_lock=0;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;
    endtask
    task automatic send_aw(input logic [3:0] id,input logic [63:0] addr,
        input logic [2:0] snoop,input logic [1:0] domain);
        @(negedge clk);aw_valid=1;aw_id=id;aw_addr=addr;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=snoop;aw_domain=domain;aw_bar=0;aw_cache=4'b0010;aw_lock=0;aw_unique=0;
        do @(posedge clk);while(!aw_ready);
        @(negedge clk);aw_valid=0;
    endtask
    task automatic snoop_reply(input logic [4:0] resp);
        @(negedge clk);snoop_rsp_valid=1;snoop_rsp_resp=resp;snoop_rsp_data='0;
        do @(posedge clk);while(!snoop_rsp_ready);
        @(negedge clk);snoop_rsp_valid=0;
    endtask
    task automatic memory_read_response(input logic [3:0] expected_id,input byte seed);
        @(negedge clk);mem_ar_ready=1;
        do @(posedge clk);while(!(mem_ar_valid&&mem_ar_ready));
        @(negedge clk);mem_ar_ready=0;
        for(int beat=0;beat<4;beat++) begin
            @(negedge clk);mem_r_valid=1;mem_r_data={16{8'(seed+beat)}};mem_r_last=beat==3;
            do @(posedge clk);while(!mem_r_ready);
            assert(r_valid&&r_id==expected_id&&r_last==(beat==3)&&r_resp[1:0]==0)
                else $fatal(1,"ACE_OOO_R id=%0h beat=%0d rid=%0h",expected_id,beat,r_id);
        end
        @(negedge clk);mem_r_valid=0;mem_r_last=0;
        r_ack=1;@(negedge clk);r_ack=0;
    endtask
    task automatic send_w_and_b(input logic [3:0] expected_id,input byte seed);
        @(negedge clk);mem_aw_ready=1;
        do @(posedge clk);while(!(mem_aw_valid&&mem_aw_ready));
        @(negedge clk);mem_aw_ready=0;
        for(int beat=0;beat<4;beat++) begin
            @(negedge clk);w_valid=1;w_data={16{8'(seed+beat)}};w_strb='1;w_last=beat==3;
            do @(posedge clk);while(!w_ready);
        end
        @(negedge clk);w_valid=0;w_last=0;mem_b_valid=1;
        do @(posedge clk);while(!mem_b_ready);
        @(negedge clk);mem_b_valid=0;
        do @(posedge clk);while(!b_valid);
        assert(b_id==expected_id&&b_resp==0) else $fatal(1,"ACE_MULTI_B expected=%0h got=%0h",expected_id,b_id);
        @(negedge clk);w_ack=1;@(negedge clk);w_ack=0;
    endtask
    task automatic return_mem_b(input logic [3:0] expected_id);
        @(negedge clk);mem_b_valid=1;
        do @(posedge clk);while(!mem_b_ready);
        @(negedge clk);mem_b_valid=0;
        do @(posedge clk);while(!b_valid);
        assert(b_id==expected_id&&b_resp==0)
            else $fatal(1,"ACE_OVERLAP_B expected=%0h got=%0h",expected_id,b_id);
        @(negedge clk);w_ack=1;@(negedge clk);w_ack=0;
    endtask


    task automatic excl_read(input logic [3:0] id,input logic [63:0] addr,input logic [3:0] snoop,output logic [3:0] resp);
        @(negedge clk);ar_valid=1;ar_id=id;ar_addr=addr;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=snoop;ar_domain=DOMAIN_INNER;ar_bar=0;ar_cache=4'b0010;ar_lock=1;
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;ar_lock=0;
        fork
          begin
            if(snoop_req_valid || 1) begin
              // answer the snoop if one is issued (failing CleanUnique completes locally)
              repeat(3) begin @(posedge clk); if(snoop_req_valid) break; end
              if(snoop_req_valid) snoop_reply(5'b0);
            end
            @(negedge clk);mem_ar_ready=1;
            repeat(4) begin @(posedge clk); if(mem_ar_valid) break; end
            if(mem_ar_valid) begin
              @(negedge clk);mem_ar_ready=0;
              for(int beat=0;beat<4;beat++) begin
                @(negedge clk);mem_r_valid=1;mem_r_last=beat==3;
                do @(posedge clk);while(!mem_r_ready);
              end
              @(negedge clk);mem_r_valid=0;mem_r_last=0;
            end else begin @(negedge clk);mem_ar_ready=0; end
          end
        join_none
        do @(posedge clk);while(!(r_valid&&r_ready&&r_last));
        resp=r_resp;
        disable fork;
        @(negedge clk);mem_r_valid=0;mem_ar_ready=0;r_ack=1;@(negedge clk);r_ack=0;
        repeat(3) tick();
    endtask
    logic [3:0] rs;
    initial begin
        ar_valid=0;r_ready=1;r_ack=0;aw_valid=0;w_valid=0;w_data=0;w_strb='1;w_last=0;
        b_ready=1;w_ack=0;snoop_req_ready=1;snoop_rsp_valid=0;snoop_rsp_resp=0;snoop_rsp_data=0;
        mem_aw_ready=0;mem_w_ready=1;mem_b_valid=0;mem_b_resp=0;
        mem_ar_ready=0;mem_r_valid=0;mem_r_data=0;mem_r_last=0;mem_r_resp=0;
        accepted=0;acked=0;peak=0;same_id_probe=0;
        repeat(4) tick();rst_n=1;repeat(2) tick();
        excl_read(`IDA,64'h4000,READ_SHARED,rs); $display("load A resp=%b",rs);
        excl_read(`IDB,64'h4000,READ_SHARED,rs); $display("load B resp=%b",rs);
        excl_read(`IDB,64'h4000,CLEAN_UNIQUE,rs); $display("store B resp=%b (EXOKAY=01)",rs);
        excl_read(`IDA,64'h4000,CLEAN_UNIQUE,rs); $display("store A resp=%b (must be 00 after B succeeded)",rs);
        if(rs[1:0]==2'b01) $display("RESULT: BOTH_EXCLUSIVE_STORES_PASSED"); else $display("RESULT: SECOND_STORE_FAILED_CORRECTLY");
        $finish;
    end
endmodule
