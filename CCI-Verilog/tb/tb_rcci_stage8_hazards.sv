`timescale 1ns/1ps
module tb_rcci_stage8_hazards;
    localparam int DEPTH=4,TRACKERS=4,IW=2,TW=2;
    localparam logic [63:0] A0=64'h0000_0000_0001_1040;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic aw_valid=0,aw_ready;logic [3:0] aw_id=0;logic [63:0] aw_addr=0;logic [7:0] aw_len=3;
    logic out_valid,out_ready=0;logic [3:0] out_id;logic [63:0] out_addr;logic [7:0] out_len;logic [IW-1:0] out_idx;
    logic drop_valid,drop_done=0,drop_retire_ready;logic [3:0] drop_id;logic [IW-1:0] drop_idx;
    logic b_fire=0;logic [IW-1:0] b_idx=0;
    logic [63:0] m0_araddr=0,m0_awaddr=0;logic ar_hazard,aw_hazard;
    logic ace_ar_probe_valid=0,ace_aw_probe_valid=0,m1_ar_probe_valid=0;
    logic [63:0] ace_ar_probe_addr=0,ace_aw_probe_addr=0,m1_ar_probe_addr=0;
    logic [7:0] m1_ar_probe_len=3;logic ace_ar_hazard,ace_aw_hazard,m1_ar_hazard;
    logic ac_valid,ac_ready=0;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid=0,cr_ready;logic [1:0] cr_resp=0;
    logic nq_valid,nq_ready=0;logic [63:0] nq_addr;logic [TW-1:0] nq_tracker;
    logic nq_rsp_valid=0,nq_rsp_ready;logic [TW-1:0] nq_rsp_tracker=0;logic [4:0] nq_rsp_resp=0;
    logic service_fault;logic [$clog2(DEPTH+1)-1:0] ingress_count;
    logic [$clog2(TRACKERS+1)-1:0] tracker_count;logic tracker_full_stall;

    // RCCI_PLAN 14.3: span probes default to the single probe line; no issue gate.
    logic [58:0] ace_ar_probe_last,ace_aw_probe_last;
    logic [58:0] m0_ar_last,m0_aw_last;
    assign m0_ar_last={1'b0,m0_araddr[63:6]};assign m0_aw_last={1'b0,m0_awaddr[63:6]};
    assign ace_ar_probe_last={1'b0,ace_ar_probe_addr[63:6]};
    assign ace_aw_probe_last={1'b0,ace_aw_probe_addr[63:6]};
    coh_write_ingress #(.TAGGED_NQ(1),.ID_WIDTH(4),.DEPTH(DEPTH),.TRACKERS(TRACKERS)) dut(.*);
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic push(input logic [3:0] id,input logic [63:0] addr);
        aw_id=id;aw_addr=addr;aw_valid=1;do tick();while(!aw_ready);aw_valid=0;
    endtask
    task automatic accept_nq(output logic [TW-1:0] tag);
        for(int n=0;n<30&&!nq_valid;n++)tick();
        assert(nq_valid)else $fatal(1,"STAGE8_NQ_TIMEOUT");
        tag=nq_tracker;nq_ready=1;tick();nq_ready=0;
    endtask
    task automatic respond(input logic [TW-1:0] tag,input logic [4:0] resp);
        nq_rsp_tracker=tag;nq_rsp_resp=resp;nq_rsp_valid=1;tick();nq_rsp_valid=0;
    endtask
    task automatic check_active_hazards;
        ace_ar_probe_valid=1;ace_aw_probe_valid=1;m1_ar_probe_valid=1;
        ace_ar_probe_addr=A0;ace_aw_probe_addr=A0;
        m1_ar_probe_addr=A0-64;m1_ar_probe_len=8'd7;#1;
        assert(ace_ar_hazard&&ace_aw_hazard&&m1_ar_hazard)
            else $fatal(1,"STAGE8_WRITE_WINDOW_HAZARD_MISSING");
        ace_ar_probe_addr=A0+64;ace_aw_probe_addr=A0+64;
        m1_ar_probe_addr=A0+64'h1000;m1_ar_probe_len=8'd31;#1;
        assert(!ace_ar_hazard&&!ace_aw_hazard&&!m1_ar_hazard)
            else $fatal(1,"STAGE8_WRITE_WINDOW_OVERBLOCK");
        ace_ar_probe_addr=A0;ace_aw_probe_addr=A0;
        m1_ar_probe_addr=A0-64;m1_ar_probe_len=8'd7;
    endtask

    initial begin
        repeat(3)tick();rst_n=1;tick();
        begin logic [TW-1:0] tag;logic [IW-1:0] idx;
            push(4'h1,A0);accept_nq(tag);check_active_hazards();respond(tag,0);
            for(int n=0;n<20&&!out_valid;n++)tick();
            assert(out_valid&&out_addr==A0)else $fatal(1,"STAGE8_NORMAL_ISSUE");
            idx=out_idx;out_ready=1;tick();out_ready=0;
            #1;assert(ace_ar_hazard&&ace_aw_hazard&&m1_ar_hazard)
                else $fatal(1,"STAGE8_HAZARD_EARLY_RELEASE");
            b_idx=idx;b_fire=1;tick();b_fire=0;#1;
            assert(!ace_ar_hazard&&!ace_aw_hazard&&!m1_ar_hazard)
                else $fatal(1,"STAGE8_HAZARD_NOT_RELEASED");
        end
        begin logic [TW-1:0] tag;logic [IW-1:0] idx;
            push(4'h2,A0);accept_nq(tag);respond(tag,5'b00010);
            for(int n=0;n<20&&!drop_valid;n++)tick();
            assert(drop_valid&&!out_valid&&!service_fault)else $fatal(1,"STAGE8_ERROR_ONLY_CLASSIFY");
            idx=drop_idx;drop_done=1;tick();drop_done=0;
            assert(drop_retire_ready)else $fatal(1,"STAGE8_ERROR_ONLY_RETIRE_ORDER");
            b_idx=idx;b_fire=1;tick();b_fire=0;
            assert(ingress_count==0&&tracker_count==0&&!service_fault)
                else $fatal(1,"STAGE8_ERROR_ONLY_DRAIN");
        end
        ace_ar_probe_valid=0;ace_aw_probe_valid=0;m1_ar_probe_valid=0;
        $display("PASS stage8 bidirectional hazard window and write Error-only drain");$finish;
    end
endmodule
