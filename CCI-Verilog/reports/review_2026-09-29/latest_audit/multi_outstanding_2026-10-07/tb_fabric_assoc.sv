`timescale 1ns/1ps
module tb_fabric_assoc;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic [0:0] active_mask=1;logic filter_enable=0;
    logic sf_update_valid=0;logic [0:0] sf_update_target=0;
    logic [63:0] sf_update_addr=0;logic sf_update_present=0;
    logic ac_valid=0,ac_ready;logic [63:0] ac_addr=0;logic [3:0] ac_snoop=READ_SHARED;
    logic cr_valid,cr_ready=0;logic [4:0] cr_resp;
    logic cd_valid,cd_ready=0;logic [127:0] cd_data;logic cd_last;
    logic [0:0] m_ac_valid,m_ac_ready=1,m_cr_valid=0,m_cr_ready;
    logic [0:0] m_cd_valid=0,m_cd_ready,m_cd_last=0;
    logic [0:0][63:0] m_ac_addr;logic [0:0][3:0] m_ac_snoop;
    logic [0:0][4:0] m_cr_resp=0;logic [0:0][127:0] m_cd_data=0;
    logic idle,protocol_error;

    ace_snoop_fabric #(.TARGETS(1),.FILTER_ENTRIES(1),.OUTSTANDING(4)) dut(.*);

    task automatic submit(input logic [63:0] addr);
        @(negedge clk);ac_valid=1;ac_addr=addr;
        do @(posedge clk);while(!ac_ready);
        @(negedge clk);ac_valid=0;
        do @(posedge clk);while(!m_ac_valid[0]);
    endtask

    initial begin
        repeat(3) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);
        submit(64'h1000);
        submit(64'h2000);

        // CR for request k says no data while the first CD beat for request
        // k+1 arrives. CR and CD are independent after their AC handshakes.
        @(negedge clk);
        m_cr_valid[0]=1;m_cr_resp[0]=5'b0;
        m_cd_valid[0]=1;m_cd_data[0]=128'h2222;m_cd_last[0]=0;
        @(posedge clk);#1;
        $display("ctx0 cr_seen=%0d cd_count=%0d ctx1 cr_seen=%0d cd_count=%0d",
            dut.cr_seen_q[0][0],dut.cd_count_q[0][0],
            dut.cr_seen_q[1][0],dut.cd_count_q[1][0]);
        if(dut.cd_count_q[0][0]==1 && dut.cd_count_q[1][0]==0)
            $display("RESULT: CD_KPLUS1_MISASSOCIATED_TO_K");
        else $fatal(1,"FABRIC_ASSOCIATION_REPRO_CHANGED");
        $finish;
    end
endmodule
