`timescale 1ns/1ps
module tb_coh_read_ingress;
    import cci_pkg::*;
    localparam int DEPTH=4,TRACKERS=2,IW=2,TW=1;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic in_valid=0,in_ready,in_range=0,in_attr_ok=1;logic [3:0] in_id=0;logic [63:0] in_addr=0;logic [7:0] in_len=3;
    logic out_valid,out_ready=0;logic [3:0] out_id;logic [63:0] out_addr;logic [7:0] out_len;
    logic retire_valid=0;logic [1:0] retire_resp=0;logic miss_last;
    logic nq_valid,nq_ready=0;logic [63:0] nq_addr;logic [TW-1:0] nq_tracker;
    logic nq_rsp_valid=0,nq_rsp_ready;logic [TW-1:0] nq_rsp_tracker=0;logic [4:0] nq_rsp_resp=0;
    logic [511:0] nq_rsp_data=0;
    logic hit_valid,hit_ready=0;logic [3:0] hit_id;logic [127:0] hit_data;logic hit_last;logic [1:0] hit_resp;
    logic m0_ar_probe_valid=0,m0_aw_probe_valid=0,ace_ar_probe_valid=0,ace_aw_probe_valid=0;
    logic [63:0] m0_ar_probe_addr=0,m0_aw_probe_addr=0,ace_ar_probe_addr=0,ace_aw_probe_addr=0;
    logic m0_ar_hazard,m0_aw_hazard,ace_ar_hazard,ace_aw_hazard;
    range_ctx_t range_ctx='0;logic read_release=0,range_reserve_fire,range_done_fire;
    logic [5:0] range_reserve_idx,range_done_idx;
    logic m1_aw_probe_valid=0,m1_aw_hazard;logic [63:0] m1_aw_probe_addr=0;
    logic [$clog2(DEPTH+1)-1:0] ingress_count;
    logic [$clog2(TRACKERS+1)-1:0] tracker_count;
    logic tracker_full_stall,config_fault,service_fault,read_error;
    logic [TW-1:0] trk0,trk1;
    localparam logic [63:0] A0=64'h1000,A1=64'h1040,A2=64'h1080,A3=64'h10c0;

    coh_read_ingress #(.ID_WIDTH(4),.DEPTH(DEPTH),.TRACKERS(TRACKERS)) dut(.*);
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic push(input logic [3:0] id,input logic [63:0] addr);
        in_id=id;in_addr=addr;in_len=3;in_valid=1;
        do @(posedge clk);while(!in_ready);
        @(negedge clk);in_valid=0;
    endtask
    task automatic accept_nq(output logic [TW-1:0] tracker,output logic [63:0] addr);
        for(int n=0;n<30 && !nq_valid;n++) tick();
        assert(nq_valid) else $fatal(1,"READ_NQ_TIMEOUT");
        tracker=nq_tracker;addr=nq_addr;
        nq_ready=1;tick();nq_ready=0;
    endtask
    task automatic respond(input logic [TW-1:0] tracker,input logic [4:0] resp=0);
        nq_rsp_tracker=tracker;nq_rsp_resp=resp;nq_rsp_valid=1;tick();nq_rsp_valid=0;
    endtask
    task automatic issue_expect(input logic [3:0] id,input logic [63:0] addr);
        for(int n=0;n<30 && !out_valid;n++) tick();
        assert(out_valid && out_id==id && out_addr==addr && out_len==3)
            else $fatal(1,"READ_ISSUE_ORDER id=%0d addr=%h",out_id,out_addr);
        out_ready=1;tick();out_ready=0;
    endtask
    task automatic retire_one(input logic [1:0] resp=0);
        retire_resp=resp;retire_valid=1;tick();retire_valid=0;retire_resp=0;
    endtask

    initial begin
        repeat(3) tick();rst_n=1;tick();
        // Four accepted reads with two trackers: later entries remain buffered.
        push(1,A0);push(2,A1);push(3,A2);push(4,A3);
        for(int n=0;n<10 && tracker_count!=2;n++) tick();
        assert(ingress_count==4 && tracker_count==2 && tracker_full_stall)
            else $fatal(1,"READ_TRACKER_FULL count=%0d trackers=%0d stall=%0d",ingress_count,tracker_count,tracker_full_stall);

        // Hazards begin at ingress acceptance, before snoop allocation/completion.
        m0_ar_probe_valid=1;m0_ar_probe_addr=A2;
        m0_aw_probe_valid=1;m0_aw_probe_addr=A2;
        ace_ar_probe_valid=1;ace_ar_probe_addr=A1;
        ace_aw_probe_valid=1;ace_aw_probe_addr=64'h2000;
        #1;assert(m0_ar_hazard && m0_aw_hazard && ace_ar_hazard && !ace_aw_hazard)
            else $fatal(1,"READ_HAZARD_CAM");
        m0_ar_probe_addr=A0;

        // Held NQ request must keep address/tracker stable under backpressure.
        wait(nq_valid);begin logic [63:0] held_addr;logic [TW-1:0] held_trk;
            held_addr=nq_addr;held_trk=nq_tracker;
            repeat(3) begin tick();assert(nq_valid && nq_addr==held_addr && nq_tracker==held_trk)
                else $fatal(1,"READ_NQ_BACKPRESSURE");end
        end
        begin logic [63:0] addr;
            accept_nq(trk0,addr);assert(addr==A0) else $fatal(1,"READ_NQ_ADDR0");
            accept_nq(trk1,addr);assert(addr==A1 && trk1!=trk0) else $fatal(1,"READ_NQ_ADDR1");
        end
        // Complete the younger snoop first. Strict issue order still blocks A0.
        respond(trk1);repeat(2) begin tick();assert(!out_valid) else $fatal(1,"READ_SNOOP_OOO_BYPASS");end
        respond(trk0);
        issue_expect(1,A0);issue_expect(2,A1);
        assert(m0_ar_hazard && ace_ar_hazard) else $fatal(1,"READ_HAZARD_EARLY_RELEASE");
        retire_one();#1;assert(!m0_ar_hazard && ace_ar_hazard) else $fatal(1,"READ_HAZARD_LINE_RELEASE");
        retire_one(2'b10);assert(read_error && !service_fault) else $fatal(1,"READ_RRESP_POLICY");

        // Freed trackers are reused for the two buffered entries.
        begin logic [63:0] addr;logic [TW-1:0] t2,t3;
            accept_nq(t2,addr);assert(addr==A2) else $fatal(1,"READ_NQ_ADDR2");respond(t2);
            accept_nq(t3,addr);assert(addr==A3) else $fatal(1,"READ_NQ_ADDR3");respond(t3);
        end
        issue_expect(3,A2);issue_expect(4,A3);retire_one();retire_one();
        assert(ingress_count==0 && tracker_count==0 && !m0_aw_hazard)
            else $fatal(1,"READ_DRAIN");

        // Unsupported burst geometry is fail-stop and is never accepted.
        in_addr=64'h1108;in_len=3;in_valid=1;tick();in_valid=0;
        assert(config_fault && !in_ready) else $fatal(1,"READ_FORMAT_FAULT");
        $display("PASS coherent read ingress outstanding/tracker/hazard/RLAST association");
        $finish;
    end
endmodule
