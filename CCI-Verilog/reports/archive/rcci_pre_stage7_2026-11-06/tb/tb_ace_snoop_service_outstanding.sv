`timescale 1ns/1ps
module tb_ace_snoop_service_outstanding;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic quiescent=1,legacy_ac_valid=0,legacy_ac_ready,legacy_cr_valid,legacy_cr_ready=1;
    logic [63:0] legacy_ac_addr=0;logic [3:0] legacy_ac_snoop=MAKE_INVALID;logic [1:0] legacy_cr_resp;
    logic req_valid,req_ready;logic [63:0] req_addr;logic [3:0] req_snoop;
    logic rsp_valid,rsp_ready;logic [4:0] rsp_resp;logic [511:0] rsp_data;
    logic maintenance_busy,service_idle,fault;
    logic ac_valid,ac_ready;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid,cr_ready;logic [4:0] cr_resp;logic cd_valid,cd_ready;logic [127:0] cd_data;logic cd_last;
    logic aw_valid,aw_ready=1;logic [63:0] aw_addr;logic [7:0] aw_len;logic [2:0] aw_size;logic [1:0] aw_burst;
    logic w_valid,w_ready=1;logic [127:0] w_data;logic [15:0] w_strb;logic w_last;
    logic b_valid=0,b_ready;logic [1:0] b_resp=0;
    logic [1:0] m_ac_valid,m_ac_ready;logic [1:0][63:0] m_ac_addr;logic [1:0][3:0] m_ac_snoop;
    logic [1:0] m_cr_valid,m_cr_ready;logic [1:0][4:0] m_cr_resp;
    logic [1:0] m_cd_valid,m_cd_ready,m_cd_last;logic [1:0][127:0] m_cd_data;
    logic fabric_idle,fabric_error;logic [1:0] endpoint_idle,local_ready,local_rsp_valid,local_error,local_hit;
    cache_state_t local_rstate[2];logic [1:0][511:0] local_rdata;
    int accepted,returned,live,peak,target_accept[2];
    cci_ace_snoop_service #(.OUTSTANDING(4)) service(
        .clk,.rst_n,.quiescent,.legacy_ac_valid,.legacy_ac_ready,.legacy_ac_addr,.legacy_ac_snoop,
        .legacy_cr_valid,.legacy_cr_ready,.legacy_cr_resp,.req_valid,.req_nq(1'b0),.req_ready,.req_addr,.req_snoop,
        .rsp_valid,.rsp_ready,.rsp_resp,.rsp_data,.maintenance_busy,.idle(service_idle),.fault,
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,
        .aw_valid,.aw_ready,.aw_addr,.aw_len,.aw_size,.aw_burst,.w_valid,.w_ready,.w_data,.w_strb,.w_last,
        .b_valid,.b_ready,.b_resp);
    ace_snoop_fabric #(.TARGETS(2),.OUTSTANDING(4)) fabric(
        .clk,.rst_n,.active_mask(2'b11),.filter_enable(1'b0),.sf_update_valid(1'b0),
        .sf_update_target('0),.sf_update_addr('0),.sf_update_present(1'b0),
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp,.cd_valid,.cd_ready,.cd_data,.cd_last,
        .m_ac_valid,.m_ac_ready,.m_ac_addr,.m_ac_snoop,.m_cr_valid,.m_cr_ready,.m_cr_resp,
        .m_cd_valid,.m_cd_ready,.m_cd_data,.m_cd_last,.idle(fabric_idle),.protocol_error(fabric_error));
    for(genvar g=0;g<2;g++) begin:G_EP
        ace_cache_snoop_endpoint #(.LINES(8),.OUTSTANDING(4)) ep(
            .clk,.rst_n,.local_valid(1'b0),.local_ready(local_ready[g]),.local_op('0),.local_addr('0),
            .local_wdata('0),.local_state(INVALID),.local_rsp_valid(local_rsp_valid[g]),.local_rsp_ready(1'b1),
            .local_error(local_error[g]),.local_hit(local_hit[g]),.local_rstate(local_rstate[g]),.local_rdata(local_rdata[g]),
            .ac_valid(m_ac_valid[g]),.ac_ready(m_ac_ready[g]),.ac_addr(m_ac_addr[g]),.ac_snoop(m_ac_snoop[g]),
            .cr_valid(m_cr_valid[g]),.cr_ready(m_cr_ready[g]),.cr_resp(m_cr_resp[g]),
            .cd_valid(m_cd_valid[g]),.cd_ready(m_cd_ready[g]),.cd_data(m_cd_data[g]),.cd_last(m_cd_last[g]),
            .idle(endpoint_idle[g]));
    end
    always @(posedge clk) if(rst_n) begin
        if(req_valid&&req_ready) begin accepted++;live++;end
        if(rsp_valid&&rsp_ready) begin returned++;live--;assert(rsp_resp==0);end
        for(int t=0;t<2;t++) if(m_ac_valid[t]&&m_ac_ready[t]) target_accept[t]++;
        if(live>peak) peak=live;
    end
    task automatic tick;@(posedge clk);#1;endtask
    initial begin
        req_valid=0;req_addr=0;req_snoop=MAKE_INVALID;rsp_ready=0;
        accepted=0;returned=0;live=0;peak=0;target_accept[0]=0;target_accept[1]=0;
        repeat(4) tick();rst_n=1;repeat(2) tick();
        for(int i=0;i<4;i++) begin
            @(negedge clk);req_valid=1;req_addr=64'h10000+64'(i*64);req_snoop=MAKE_INVALID;
            do @(posedge clk);while(!req_ready);
        end
        @(negedge clk);req_valid=0;repeat(30) tick();
        assert(accepted==4&&returned==0&&peak==4&&!req_ready&&maintenance_busy&&
            target_accept[0]==4&&target_accept[1]==4)
            else $fatal(1,"SERVICE_MULTI_ACCEPT accepted=%0d returned=%0d peak=%0d targets=%0d,%0d",
                accepted,returned,peak,target_accept[0],target_accept[1]);
        rsp_ready=1;
        for(int i=0;i<4;i++) do @(posedge clk);while(!rsp_valid);
        @(negedge clk);rsp_ready=0;repeat(4) tick();
        assert(returned==4&&live==0&&service_idle&&fabric_idle&&(&endpoint_idle)&&!fault&&!fabric_error)
            else $fatal(1,"SERVICE_MULTI_DRAIN");
        $display("COVERAGE snoop_service_outstanding depth=4 peak=4 target_ac=4,4 responses=4");
        $display("PASS ACE snoop service multiple outstanding transactions");
        $finish;
    end
    initial begin repeat(2000) @(posedge clk);$fatal(1,"SNOOP_SERVICE_OUTSTANDING_TIMEOUT");end
endmodule
