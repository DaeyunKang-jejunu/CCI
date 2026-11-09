`timescale 1ns/1ps
module tb_ace_snoop_pipeline;
    import ace_snoop_pkg::*;
    localparam int TARGETS=2;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic [1:0] active_mask=2'b11;logic filter_enable=0,sf_update_valid=0,sf_update_target=0;
    logic [63:0] sf_update_addr=0;logic sf_update_present=0;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last;
    logic [1:0] m_ac_valid,m_ac_ready;logic [1:0][63:0] m_ac_addr;logic [1:0][3:0] m_ac_snoop;
    logic [1:0] m_cr_valid,m_cr_ready;logic [1:0][4:0] m_cr_resp;
    logic [1:0] m_cd_valid,m_cd_ready,m_cd_last;logic [1:0][127:0] m_cd_data;
    logic idle,protocol_error;
    logic [1:0] local_ready,local_rsp_valid,local_error,local_hit,endpoint_idle;
    cache_state_t local_rstate[2];logic [1:0][511:0] local_rdata;
    int accepted,returned,live,peak,target_accept[2];
    ace_snoop_fabric #(.TARGETS(2),.OUTSTANDING(4)) dut(.*);
    for(genvar g=0;g<2;g++) begin:G_EP
        ace_cache_snoop_endpoint #(.LINES(8),.OUTSTANDING(4)) ep(
            .clk,.rst_n,.local_valid(1'b0),.local_ready(local_ready[g]),.local_op('0),.local_addr('0),
            .local_wdata('0),.local_state(INVALID),.local_rsp_valid(local_rsp_valid[g]),
            .local_rsp_ready(1'b1),.local_error(local_error[g]),.local_hit(local_hit[g]),
            .local_rstate(local_rstate[g]),.local_rdata(local_rdata[g]),
            .ac_valid(m_ac_valid[g]),.ac_ready(m_ac_ready[g]),.ac_addr(m_ac_addr[g]),.ac_snoop(m_ac_snoop[g]),
            .cr_valid(m_cr_valid[g]),.cr_ready(m_cr_ready[g]),.cr_resp(m_cr_resp[g]),
            .cd_valid(m_cd_valid[g]),.cd_ready(m_cd_ready[g]),.cd_data(m_cd_data[g]),.cd_last(m_cd_last[g]),
            .idle(endpoint_idle[g]));
    end
    always @(posedge clk) if(rst_n) begin
        if(ac_valid&&ac_ready) begin accepted++;live++;end
        if(cr_valid&&cr_ready) begin returned++;live--;end
        for(int t=0;t<2;t++) if(m_ac_valid[t]&&m_ac_ready[t]) target_accept[t]++;
        if(live>peak) peak=live;
        assert(live>=0&&live<=4) else $fatal(1,"FABRIC_OUTSTANDING_BOUND");
    end
    task automatic tick;@(posedge clk);#1;endtask
    initial begin
        ac_valid=0;ac_addr=0;ac_snoop=MAKE_INVALID;cr_ready=0;cd_ready=1;
        accepted=0;returned=0;live=0;peak=0;target_accept[0]=0;target_accept[1]=0;
        repeat(4) tick();rst_n=1;repeat(2) tick();
        for(int i=0;i<4;i++) begin
            @(negedge clk);ac_valid=1;ac_addr=64'h8000+64'(i*64);ac_snoop=MAKE_INVALID;
            do @(posedge clk);while(!ac_ready);
        end
        @(negedge clk);ac_valid=0;repeat(20) tick();
        assert(accepted==4&&returned==0&&peak==4&&!ac_ready&&
            target_accept[0]==4&&target_accept[1]==4)
            else $fatal(1,"FABRIC_MULTI_ACCEPT accepted=%0d returned=%0d peak=%0d target=%0d,%0d",
                accepted,returned,peak,target_accept[0],target_accept[1]);
        cr_ready=1;
        for(int i=0;i<4;i++) begin
            do @(posedge clk);while(!cr_valid);
            assert(cr_resp==0) else $fatal(1,"FABRIC_MULTI_RESP index=%0d resp=%0h",i,cr_resp);
        end
        @(negedge clk);cr_ready=0;repeat(3) tick();
        assert(returned==4&&live==0&&idle&&(&endpoint_idle)&&!protocol_error)
            else $fatal(1,"FABRIC_MULTI_DRAIN");
        $display("COVERAGE snoop_pipeline depth=4 peak=4 target_ac=4,4 ordered_cr=4");
        $display("PASS ACE fabric and endpoints multiple outstanding snoops");
        $finish;
    end
    initial begin repeat(1500) @(posedge clk);$fatal(1,"SNOOP_PIPELINE_TIMEOUT");end
endmodule
