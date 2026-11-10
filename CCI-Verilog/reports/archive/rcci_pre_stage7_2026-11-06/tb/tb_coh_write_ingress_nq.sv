`timescale 1ns/1ps
module tb_coh_write_ingress_nq;
    import cci_pkg::*;
    localparam int DEPTH=4,TRACKERS=2,IW=2,TW=1;
    logic clk=0,rst_n=0;always #5 clk=~clk;
    logic aw_valid=0,aw_ready;logic [3:0] aw_id=0;logic [63:0] aw_addr=0;logic [7:0] aw_len=3;
    logic out_valid,out_ready=0;logic [3:0] out_id;logic [63:0] out_addr;logic [7:0] out_len;
    logic [IW-1:0] out_idx,b_idx=0;logic b_fire=0;
    logic [63:0] m0_araddr=0,m0_awaddr=0;logic ar_hazard,aw_hazard;
    logic setup_valid=0,setup_ready;logic [63:0] setup_addr=0,setup_mask=0;
    logic [6:0] setup_count=0;logic [3:0] setup_source=0;logic [1:0] setup_op=0;logic setup_error;
    logic axi_idle=1,snoop_idle=1,admission_freeze;
    logic ac_valid,ac_ready=1;logic [63:0] ac_addr;logic [3:0] ac_snoop;
    logic cr_valid=0,cr_ready;logic [1:0] cr_resp=0;
    logic nq_valid,nq_ready=0;logic [63:0] nq_addr;logic [TW-1:0] nq_tracker;
    logic nq_rsp_valid=0,nq_rsp_ready;logic [TW-1:0] nq_rsp_tracker=0;logic [4:0] nq_rsp_resp=0;
    logic read_reserve_fire=0,read_done_fire=0;logic [5:0] read_reserve_idx=0,read_done_idx=0;
    logic read_prep_valid,read_prep_ready=0;logic [63:0] read_prep_addr;
    logic read_prep_rsp_valid=0,read_prep_rsp_ready;logic [4:0] read_prep_rsp=0;
    range_ctx_t range_ctx;logic write_release,read_release,range_fault,service_fault;
    logic [$clog2(DEPTH+1)-1:0] ingress_count;
    logic [$clog2(TRACKERS+1)-1:0] tracker_count;logic tracker_full_stall;
    localparam logic [63:0] A0=64'h4000,A1=64'h4040;

    coh_write_ingress #(.USE_RANGE(0),.TAGGED_NQ(1),.ID_WIDTH(4),.DEPTH(DEPTH),
        .TRACKERS(TRACKERS),.AC_DEPTH(TRACKERS)) dut(.*);

    task automatic tick;@(posedge clk);@(negedge clk);endtask
    task automatic push(input logic [3:0] id,input logic [63:0] addr);
        aw_id=id;aw_addr=addr;aw_valid=1;
        do tick();while(!aw_ready);
        aw_valid=0;
    endtask
    task automatic accept_nq(output logic [TW-1:0] tracker,output logic [63:0] addr);
        for(int n=0;n<30&&!nq_valid;n++)tick();
        assert(nq_valid)else $fatal(1,"WRITE_NQ_REQUEST_TIMEOUT");
        tracker=nq_tracker;addr=nq_addr;nq_ready=1;tick();nq_ready=0;
    endtask
    task automatic respond(input logic [TW-1:0] tracker);
        nq_rsp_tracker=tracker;nq_rsp_resp=0;nq_rsp_valid=1;tick();nq_rsp_valid=0;
    endtask
    task automatic respond_dirty(input logic [TW-1:0] tracker);
        nq_rsp_tracker=tracker;nq_rsp_resp=5'b11101;nq_rsp_valid=1;tick();nq_rsp_valid=0;
        nq_rsp_resp=0;
    endtask
    task automatic respond_error(input logic [TW-1:0] tracker);
        nq_rsp_tracker=tracker;nq_rsp_resp=5'b00010;nq_rsp_valid=1;tick();nq_rsp_valid=0;
        nq_rsp_resp=0;
    endtask
    task automatic issue_expect(input logic [3:0] id,input logic [63:0] addr,
                                output logic [IW-1:0] idx);
        for(int n=0;n<30&&!out_valid;n++)tick();
        assert(out_valid&&out_id==id&&out_addr==addr&&out_len==3)
            else $fatal(1,"WRITE_NQ_ISSUE_ORDER");
        idx=out_idx;out_ready=1;tick();out_ready=0;
    endtask
    task automatic retire(input logic [IW-1:0] idx);
        b_idx=idx;b_fire=1;tick();b_fire=0;
    endtask

    initial begin
        repeat(3)tick();rst_n=1;tick();
        push(1,A0);push(2,A1);
        begin logic [TW-1:0] t0,t1;logic [63:0] a;logic [IW-1:0] i0,i1;
            accept_nq(t0,a);assert(a==A0)else $fatal(1,"WRITE_NQ_ADDR0");
            accept_nq(t1,a);assert(a==A1&&t1!=t0)else $fatal(1,"WRITE_NQ_ADDR1");
            assert(!ac_valid&&!cr_ready)else $fatal(1,"WRITE_LEGACY_SNOOP_ACTIVE");
            respond(t1);repeat(2)begin tick();assert(!out_valid)else $fatal(1,"WRITE_NQ_OOO_BYPASS");end
            respond(t0);
            issue_expect(1,A0,i0);retire(i0);
            issue_expect(2,A1,i1);retire(i1);
        end
        assert(ingress_count==0&&tracker_count==0&&!nq_valid&&!range_fault)
            else $fatal(1,"WRITE_NQ_DRAIN");
        // DataTransfer/PassDirty is a legal MakeInvalid result. The tagged
        // service has already completed the dirty writeback before status.
        push(3,A0);
        begin logic [TW-1:0] td;logic [63:0] a;logic [IW-1:0] id;
            accept_nq(td,a);respond_dirty(td);issue_expect(3,A0,id);retire(id);
            assert(!service_fault)else $fatal(1,"WRITE_NQ_DIRTY_RESPONSE");
        end
        // The service adapter has already drained any announced CD before this
        // response. An Error response is sticky and must not release the AW.
        push(4,A1);
        begin logic [TW-1:0] te;logic [63:0] a;
            accept_nq(te,a);respond_error(te);tick();
            assert(service_fault&&!aw_ready&&!out_valid)
                else $fatal(1,"WRITE_NQ_ERROR_POLICY");
        end
        $display("PASS stage4 tagged NQ write inverse-response/ordered-AW sticky-error");
        $finish;
    end
endmodule
