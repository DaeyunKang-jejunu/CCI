`timescale 1ns/1ps
// REVIEW 10.4 regression for ace_snoop_fabric: CR and CD of one target are
// independent (IHI 0022H D3.9). CR(k, DataTransfer=0) together with the first
// CD beat of k+1, and a CD beat ahead of its own CR, must both land in k+1.
module tb_ace_fabric_review10;
    import ace_snoop_pkg::*;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic [0:0] active_mask=1;logic filter_enable=0;
    logic sf_update_valid=0;logic [0:0] sf_update_target=0;
    logic [63:0] sf_update_addr=0;logic sf_update_present=0;
    logic ac_valid=0,ac_ready;logic [63:0] ac_addr=0;logic [3:0] ac_snoop=READ_SHARED;
    logic cr_valid,cr_ready=1;logic [4:0] cr_resp;
    logic cd_valid,cd_ready=1;logic [127:0] cd_data;logic cd_last;
    logic [0:0] m_ac_valid,m_ac_ready=1,m_cr_valid=0,m_cr_ready;
    logic [0:0] m_cd_valid=0,m_cd_ready,m_cd_last=0;
    logic [0:0][63:0] m_ac_addr;logic [0:0][3:0] m_ac_snoop;
    logic [0:0][4:0] m_cr_resp=0;logic [0:0][127:0] m_cd_data=0;
    logic idle,protocol_error;

    ace_snoop_fabric #(.TARGETS(1),.FILTER_ENTRIES(1),.OUTSTANDING(4)) dut(.*);

    logic [4:0] up_cr[$];logic [127:0] up_cd[$];
    always @(posedge clk) if(rst_n) begin
        if(cr_valid&&cr_ready) up_cr.push_back(cr_resp);
        if(cd_valid&&cd_ready) up_cd.push_back(cd_data);
    end
    task automatic submit(input logic [63:0] addr);
        @(negedge clk);ac_valid=1;ac_addr=addr;
        do @(posedge clk);while(!ac_ready);
        @(negedge clk);ac_valid=0;
    endtask
    task automatic cd_beats(input int first,input logic [127:0] base);
        for(int b=first;b<4;b++) begin
            @(negedge clk);m_cd_valid[0]=1;m_cd_data[0]=base+b;m_cd_last[0]=b==3;
            do @(posedge clk);while(!m_cd_ready[0]);
        end
        @(negedge clk);m_cd_valid[0]=0;m_cd_last[0]=0;
    endtask
    task automatic check_line(input int idx,input logic [127:0] base,input string tag);
        for(int b=0;b<4;b++) assert(up_cd[idx*4+b]==base+b)
            else $fatal(1,"FABRIC_CD_ASSOCIATION:%s beat %0d got %h",tag,b,up_cd[idx*4+b]);
    endtask

    initial begin
        repeat(3) @(posedge clk);rst_n=1;repeat(2) @(posedge clk);
        // Case A: CR(0, no data) and CD(1) beat 0 start in the same cycle, then CR(1).
        submit(64'h1000);submit(64'h2000);repeat(3) @(posedge clk);
        fork
            cd_beats(0,128'h2220);
            begin
                @(negedge clk);m_cr_valid[0]=1;m_cr_resp[0]=5'b0;
                do @(posedge clk);while(!m_cr_ready[0]);
                @(negedge clk);m_cr_resp[0]=5'b00001;   // CR(1): DataTransfer
                do @(posedge clk);while(!m_cr_ready[0]);
                @(negedge clk);m_cr_valid[0]=0;
            end
        join
        // Case B: CD of a context ahead of its own CR is held until the CR.
        submit(64'h3000);repeat(3) @(posedge clk);
        fork
            cd_beats(0,128'h3330);
            begin
                repeat(3) begin @(posedge clk);assert(!m_cd_ready[0]) else $fatal(1,"FABRIC_CD_ASSOCIATION:accepted before CR");end
                @(negedge clk);m_cr_valid[0]=1;m_cr_resp[0]=5'b00001;
                do @(posedge clk);while(!m_cr_ready[0]);
                @(negedge clk);m_cr_valid[0]=0;
            end
        join
        repeat(10) @(posedge clk);
        assert(up_cr.size()==3 && up_cr[0]==0 && up_cr[1]==5'b00001 && up_cr[2]==5'b00001)
            else $fatal(1,"FABRIC_CD_ASSOCIATION:upstream CR");
        assert(up_cd.size()==8) else $fatal(1,"FABRIC_CD_ASSOCIATION:upstream CD count %0d",up_cd.size());
        check_line(0,128'h2220,"A");check_line(1,128'h3330,"B");
        assert(!protocol_error && idle) else $fatal(1,"FABRIC_CD_ASSOCIATION:error/drain");
        $display("PASS ACE fabric review10 independent CR/CD association");
        $finish;
    end
    initial begin #50000;$fatal(1,"FABRIC_REVIEW10_TIMEOUT");end
endmodule
