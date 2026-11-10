`timescale 1ns/1ps
module tb_coh_read_ingress_readonce;
    import cci_pkg::*;
    localparam int DEPTH=4,TRACKERS=3,IW=2,TW=2;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic in_valid=0,in_ready,in_range=0,in_attr_ok=1;logic [3:0] in_id=0;logic [63:0] in_addr=0;logic [7:0] in_len=3;
    logic out_valid,out_ready=0;logic [3:0] out_id;logic [63:0] out_addr;logic [7:0] out_len;
    logic retire_valid=0;logic [1:0] retire_resp=0;logic miss_last;
    range_ctx_t range_ctx='0;logic read_release=0,range_reserve_fire,range_done_fire;
    logic [5:0] range_reserve_idx,range_done_idx;
    logic nq_valid,nq_ready=0;logic [63:0] nq_addr;logic [TW-1:0] nq_tracker;
    logic nq_rsp_valid=0,nq_rsp_ready;logic [TW-1:0] nq_rsp_tracker=0;
    logic [4:0] nq_rsp_resp=0;logic [511:0] nq_rsp_data=0;
    logic hit_valid,hit_ready=0;logic [3:0] hit_id;logic [127:0] hit_data;
    logic hit_last;logic [1:0] hit_resp;
    logic m0_ar_probe_valid=0,m0_aw_probe_valid=0,ace_ar_probe_valid=0,ace_aw_probe_valid=0;
    logic [63:0] m0_ar_probe_addr=0,m0_aw_probe_addr=0,ace_ar_probe_addr=0,ace_aw_probe_addr=0;
    logic m0_ar_hazard,m0_aw_hazard,ace_ar_hazard,ace_aw_hazard;
    logic m1_aw_probe_valid=0,m1_aw_hazard;logic [63:0] m1_aw_probe_addr=0;
    logic [$clog2(DEPTH+1)-1:0] ingress_count;
    logic [$clog2(TRACKERS+1)-1:0] tracker_count;
    logic tracker_full_stall,config_fault,service_fault,read_error;
    localparam logic [63:0] A0=64'h8000,A1=64'h8040;
    logic [511:0] hit_line;

    coh_read_ingress #(.ID_WIDTH(4),.DEPTH(DEPTH),.TRACKERS(TRACKERS)) dut(.*);
    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic push(input logic [3:0] id,input logic [63:0] addr);
        in_id=id;in_addr=addr;in_valid=1;do tick();while(!in_ready);in_valid=0;
    endtask
    task automatic accept_nq(output logic [TW-1:0] tracker,output logic [63:0] addr);
        for(int n=0;n<30&&!nq_valid;n++)tick();
        assert(nq_valid)else $fatal(1,"READONCE_NQ_TIMEOUT");
        tracker=nq_tracker;addr=nq_addr;nq_ready=1;tick();nq_ready=0;
    endtask
    task automatic respond(input logic [TW-1:0] tracker,input logic hit,input logic [511:0] data);
        nq_rsp_tracker=tracker;nq_rsp_resp={4'b0,hit};nq_rsp_data=data;nq_rsp_valid=1;tick();nq_rsp_valid=0;
    endtask

    initial begin
        for(int b=0;b<4;b++)hit_line[128*b+:128]={16{8'(8'h40+b)}};
        repeat(3)tick();rst_n=1;tick();push(1,A0);push(2,A1);
        begin logic [TW-1:0] t0,t1;logic [63:0] a;
            accept_nq(t0,a);assert(a==A0)else $fatal(1,"READONCE_ADDR0");
            accept_nq(t1,a);assert(a==A1&&t1!=t0)else $fatal(1,"READONCE_ADDR1");
            // Younger hit completes first, but must not bypass the older miss.
            respond(t1,1,hit_line);repeat(2)begin tick();assert(!hit_valid&&!out_valid)
                else $fatal(1,"READONCE_HIT_BYPASS");end
            respond(t0,0,'0);
            for(int n=0;n<30&&!out_valid;n++)tick();
            assert(out_valid&&out_id==1&&out_addr==A0)else $fatal(1,"READONCE_MISS_AR");
            out_ready=1;tick();out_ready=0;
            repeat(2)begin tick();assert(!out_valid&&!hit_valid)else $fatal(1,"READONCE_EARLY_HIT_R");end
            // Complete the older memory line; only now can the hit line return.
            retire_valid=1;tick();retire_valid=0;
            for(int beat=0;beat<4;beat++)begin
                for(int n=0;n<20&&!hit_valid;n++)tick();
                assert(hit_valid&&hit_id==2&&hit_data==hit_line[128*beat+:128]&&
                       hit_last==(beat==3)&&hit_resp==0)
                    else $fatal(1,"READONCE_HIT_BEAT beat=%0d",beat);
                if(beat==1)begin tick();assert(hit_valid&&hit_data==hit_line[128*beat+:128])
                    else $fatal(1,"READONCE_HIT_BACKPRESSURE");end
                hit_ready=1;tick();hit_ready=0;
            end
        end
        assert(ingress_count==0&&tracker_count==0&&!service_fault&&!read_error)
            else $fatal(1,"READONCE_DRAIN");
        $display("PASS stage4 ReadOnce hit/miss ordered R assembly");
        $finish;
    end
endmodule
