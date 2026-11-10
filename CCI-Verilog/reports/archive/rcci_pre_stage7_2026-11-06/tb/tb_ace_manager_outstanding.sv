`timescale 1ns/1ps
module tb_ace_manager_outstanding;
    import ace_snoop_pkg::*;
    localparam int ID_WIDTH=4,TOKEN_WIDTH=3;
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
    logic ar_admission_enable=1,aw_admission_enable=1,ar_tokenized=1,aw_tokenized=1;
    logic [TOKEN_WIDTH-1:0] ar_token_tag=0,aw_token_tag=0;
    logic [1:0] token_release_count,token_release_valid;
    logic [1:0][TOKEN_WIDTH-1:0] token_release_tag;
    logic [TOKEN_WIDTH-1:0] expected_r_token,expected_b_token;
    int accepted,acked,peak;logic same_id_probe;
    logic [ID_WIDTH-1:0] completion_order[$],b_completion_order[$];

    ace_manager_request_bank #(.ID_WIDTH(ID_WIDTH),.CONTEXTS(4),.TOKEN_WIDTH(TOKEN_WIDTH)) dut(.*);

    always @(posedge clk) if(rst_n) begin
        if(ar_valid&&ar_ready) begin
            accepted++;
            assert(!same_id_probe) else $fatal(1,"ACE_SAME_ID_REACCEPT");
        end
        if(r_ack) acked++;
        if(outstanding_count>peak) peak=outstanding_count;
        if(r_valid&&r_ready&&r_last) completion_order.push_back(r_id);
        if(b_valid&&b_ready) b_completion_order.push_back(b_id);
        if(r_valid&&r_ready&&r_last) expected_r_token<=r_id[TOKEN_WIDTH-1:0];
        if(b_valid&&b_ready) expected_b_token<=b_id[TOKEN_WIDTH-1:0];
        if(token_release_valid[0]) assert(token_release_tag[0]==expected_r_token)
            else $fatal(1,"ACE_READ_TOKEN_TAG expected=%0d got=%0d",expected_r_token,token_release_tag[0]);
        if(token_release_valid[1]) assert(token_release_tag[1]==expected_b_token)
            else $fatal(1,"ACE_WRITE_TOKEN_TAG expected=%0d got=%0d",expected_b_token,token_release_tag[1]);
        assert(outstanding_count<=4) else $fatal(1,"ACE_OUTSTANDING_BOUND");
    end
    task automatic tick;@(posedge clk);#1;endtask
    task automatic send_ar(input logic [3:0] id,input logic [63:0] addr,
        input logic [3:0] snoop,input logic [1:0] domain);
        @(negedge clk);ar_valid=1;ar_id=id;ar_addr=addr;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=snoop;ar_domain=domain;ar_bar=0;ar_cache=4'b0010;ar_lock=0;
        ar_token_tag=id[TOKEN_WIDTH-1:0];
        do @(posedge clk);while(!ar_ready);
        @(negedge clk);ar_valid=0;
    endtask
    task automatic send_aw(input logic [3:0] id,input logic [63:0] addr,
        input logic [2:0] snoop,input logic [1:0] domain);
        @(negedge clk);aw_valid=1;aw_id=id;aw_addr=addr;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=snoop;aw_domain=domain;aw_bar=0;aw_cache=4'b0010;aw_lock=0;aw_unique=0;
        aw_token_tag=id[TOKEN_WIDTH-1:0];
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

    initial begin
        ar_valid=0;r_ready=1;r_ack=0;aw_valid=0;w_valid=0;w_data=0;w_strb='1;w_last=0;
        b_ready=1;w_ack=0;snoop_req_ready=1;snoop_rsp_valid=0;snoop_rsp_resp=0;snoop_rsp_data=0;
        mem_aw_ready=0;mem_w_ready=1;mem_b_valid=0;mem_b_resp=0;
        mem_ar_ready=0;mem_r_valid=0;mem_r_data=0;mem_r_last=0;mem_r_resp=0;
        accepted=0;acked=0;peak=0;same_id_probe=0;expected_r_token=0;expected_b_token=0;
        repeat(4) tick();rst_n=1;repeat(2) tick();

        // ID 0 takes the coherent/snoop path and is deliberately delayed.
        send_ar(0,64'h1000,READ_SHARED,DOMAIN_INNER);
        do @(posedge clk);while(!(snoop_req_valid&&snoop_req_ready));
        // ID 1 bypasses snoop. It must be accepted and complete first.
        send_ar(1,64'h2000,READ_ONCE,DOMAIN_NONSHAREABLE);
        repeat(2) tick();
        assert(outstanding_count==2) else $fatal(1,"ACE_MULTI_ACCEPT count=%0d",outstanding_count);

        // A repeated ID is blocked until the earlier ID 0 transaction is ACKed.
        @(negedge clk);same_id_probe=1;ar_valid=1;ar_id=0;ar_addr=64'h3000;ar_len=3;ar_size=4;ar_burst=1;
        ar_snoop=READ_ONCE;ar_domain=DOMAIN_NONSHAREABLE;ar_bar=0;ar_cache=2;ar_lock=0;
        ar_token_tag=0;
        repeat(3) begin tick();assert(!ar_ready) else $fatal(1,"ACE_SAME_ID_REACCEPT");end
        @(negedge clk);ar_valid=0;same_id_probe=0;

        memory_read_response(1,8'h20);
        snoop_reply(5'b0); // miss: ID 0 continues to memory only now
        memory_read_response(0,8'h10);
        repeat(3) tick();
        assert(completion_order.size()==2&&completion_order[0]==1&&completion_order[1]==0)
            else $fatal(1,"ACE_ID_OOO_ORDER");
        assert(peak>=2&&!busy&&outstanding_count==0) else $fatal(1,"ACE_MULTI_DRAIN peak=%0d count=%0d",peak,outstanding_count);

        // A later dataless Evict can return B while an older WriteUnique is
        // still waiting for its snoop. This proves cross-ID B reordering
        // without violating the ID-less AXI4 W association rule.
        b_ready=0;
        send_aw(2,64'h4000,WRITE_UNIQUE,DOMAIN_INNER);
        do @(posedge clk);while(!(snoop_req_valid&&snoop_req_ready));
        send_aw(3,64'h5000,EVICT,DOMAIN_INNER);
        repeat(2) tick();assert(outstanding_count==2) else $fatal(1,"ACE_MULTI_AW_ACCEPT");
        do @(posedge clk);while(!b_valid);
        assert(b_id==3&&b_resp==0) else $fatal(1,"ACE_OOO_B_FAST bid=%0h",b_id);
        @(negedge clk);b_ready=1;tick();b_ready=0;w_ack=1;tick();w_ack=0;b_ready=1;
        snoop_reply(5'b0);
        send_w_and_b(2,8'h40);
        repeat(3) tick();
        assert(b_completion_order.size()==2&&b_completion_order[0]==3&&b_completion_order[1]==2)
            else $fatal(1,"ACE_ID_OOO_B_ORDER");
        assert(!busy&&outstanding_count==0&&!protocol_error) else $fatal(1,"ACE_MULTI_WRITE_DRAIN");

        // Complete the first W stream in the same cycle that a second AW is
        // accepted. The W-order FIFO must perform a simultaneous pop/push
        // without losing the new owner.
        send_aw(0,64'h6000,WRITE_BACK,DOMAIN_NONSHAREABLE);
        @(negedge clk);mem_aw_ready=1;
        do @(posedge clk);while(!(mem_aw_valid&&mem_aw_ready));
        @(negedge clk);mem_aw_ready=0;
        for(int beat=0;beat<3;beat++) begin
            w_valid=1;w_data={16{8'(8'h60+beat)}};w_strb='1;w_last=0;
            do @(posedge clk);while(!w_ready);
            @(negedge clk);
        end
        w_valid=1;w_data={16{8'h63}};w_last=1;
        aw_valid=1;aw_id=1;aw_addr=64'h7000;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=WRITE_BACK;aw_domain=DOMAIN_NONSHAREABLE;aw_bar=0;aw_cache=2;aw_lock=0;aw_unique=0;
        aw_token_tag=1;
        @(posedge clk);
        assert(w_ready&&aw_ready) else $fatal(1,"ACE_WQ_PUSH_POP_OVERLAP");
        @(negedge clk);w_valid=0;w_last=0;aw_valid=0;
        return_mem_b(0);
        send_w_and_b(1,8'h70);
        repeat(3) tick();
        assert(!busy&&outstanding_count==0&&!protocol_error) else $fatal(1,"ACE_WQ_OVERLAP_DRAIN");
        $display("COVERAGE ace_manager_outstanding peak=%0d read_completion=1,0 write_completion=3,2 wq_push_pop=1",peak);
        $display("PASS ACE manager multiple outstanding and cross-ID out-of-order response");
        $finish;
    end
    initial begin repeat(4000) @(posedge clk);$fatal(1,"ACE_MANAGER_OUTSTANDING_TIMEOUT");end
endmodule
