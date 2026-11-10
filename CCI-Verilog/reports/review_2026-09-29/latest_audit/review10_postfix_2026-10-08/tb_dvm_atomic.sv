`timescale 1ns/1ps
// Post-fix audit: a global DVM start must not admit an unrelated AW into a
// different manager context on the same edge.
module tb_dvm_atomic;
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
    logic mem_aw_valid,mem_aw_ready;logic [63:0] mem_aw_addr;logic [7:0] mem_aw_len;
    logic [2:0] mem_aw_size;logic [1:0] mem_aw_burst;
    logic mem_w_valid,mem_w_ready;logic [127:0] mem_w_data;logic [15:0] mem_w_strb;logic mem_w_last;
    logic mem_b_valid,mem_b_ready;logic [1:0] mem_b_resp;
    logic mem_ar_valid,mem_ar_ready;logic [63:0] mem_ar_addr;logic [7:0] mem_ar_len;
    logic [2:0] mem_ar_size;logic [1:0] mem_ar_burst;
    logic mem_r_valid,mem_r_ready;logic [127:0] mem_r_data;logic mem_r_last;logic [1:0] mem_r_resp;
    logic [1:0] reservation_kill_valid=0;logic [1:0][63:0] reservation_kill_addr=0;
    logic busy,protocol_error;logic [2:0] outstanding_count;
    logic ar_fire_seen=0,aw_fire_seen=0;

    ace_manager_request_bank #(.ID_WIDTH(ID_WIDTH),.CONTEXTS(4)) dut(.*);
    always @(posedge clk) if(rst_n) begin
        if(ar_valid&&ar_ready) ar_fire_seen<=1;
        if(aw_valid&&aw_ready) aw_fire_seen<=1;
    end

    initial begin
        ar_valid=0;aw_valid=0;w_valid=0;w_data=0;w_strb='1;w_last=0;
        r_ready=1;r_ack=0;b_ready=1;w_ack=0;
        snoop_req_ready=0;snoop_rsp_valid=0;snoop_rsp_resp=0;snoop_rsp_data=0;
        mem_aw_ready=0;mem_w_ready=0;mem_b_valid=0;mem_b_resp=0;
        mem_ar_ready=0;mem_r_valid=0;mem_r_data=0;mem_r_last=0;mem_r_resp=0;
        repeat(3) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);

        @(negedge clk);
        ar_valid=1;ar_id=2;ar_addr=64'h1000;ar_len=0;ar_size=4;ar_burst=1;
        ar_snoop=DVM_MESSAGE;ar_domain=DOMAIN_INNER;ar_bar=0;ar_cache=4'b0010;ar_lock=0;
        aw_valid=1;aw_id=1;aw_addr=64'h4000;aw_len=3;aw_size=4;aw_burst=1;
        aw_snoop=WRITE_BACK;aw_domain=DOMAIN_NONSHAREABLE;aw_bar=0;aw_cache=4'b0010;
        aw_lock=0;aw_unique=0;
        @(posedge clk);#1;
        $display("ar_fire=%0d aw_fire=%0d outstanding=%0d global=%0d slot=%0d",
            ar_fire_seen,aw_fire_seen,outstanding_count,dut.global_active,dut.global_slot);
        if(ar_fire_seen&&aw_fire_seen&&outstanding_count==2)
            $display("RESULT: DVM_AND_NORMAL_AW_ACCEPTED_TOGETHER");
        else $display("RESULT: GLOBAL_START_ATOMIC");
        $finish;
    end
endmodule
