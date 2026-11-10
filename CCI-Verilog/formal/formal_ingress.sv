// Bounded-proof environment for the active line-only coh_write_ingress.
// Range decomposition is outside this module; every accepted AW is one line.
module formal_ingress #(parameter DEPTH=3, TRACKERS=2, AC_DEPTH=2, WITNESS=0) (
    input clk,input rst_n,input aw_valid,input [1:0] aw_id,
    input aw_pg,input [1:0] aw_ln,input out_ready,input b_req,
    input ar_pg,input [1:0] ar_ln,input wr_pg,input [1:0] wr_ln,
    input ac_ready,input cr_req);
    localparam IW=(DEPTH<2)?1:$clog2(DEPTH);
    wire aw_ready,out_valid,ar_hazard,aw_hazard,ac_valid,cr_ready;
    wire service_fault,tracker_full_stall;
    wire [1:0] out_id;wire [63:0] out_addr,ac_addr;wire [7:0] out_len;
    wire [IW-1:0] out_idx;wire [3:0] ac_snoop;
    wire drop_valid,drop_retire_ready;wire [1:0] drop_id;wire [IW-1:0] drop_idx;
    wire [$clog2(DEPTH+1)-1:0] ingress_count;
    wire [$clog2(TRACKERS+1)-1:0] tracker_count;
    reg [IW-1:0] q[0:DEPTH-1];reg [IW-1:0] qh,qt;reg [IW:0] qc;
    wire issue=out_valid&&out_ready;
    wire b_fire=b_req&&(qc!=0);wire [IW-1:0] b_idx=q[qh];
    reg [3:0] pend;wire cr_valid=cr_req&&(pend!=0);
    wire ac_fire=ac_valid&&ac_ready,cr_fire=cr_valid&&cr_ready;
    reg init=1'b1;
    always @(posedge clk)begin
        if(init)assume(!rst_n);else assume(rst_n);init<=1'b0;
        if(!rst_n)begin qh<=0;qt<=0;qc<=0;pend<=0;end
        else begin
            if(issue)begin q[qt]<=out_idx;qt<=(qt==DEPTH-1)?0:qt+1'b1;end
            if(b_fire)qh<=(qh==DEPTH-1)?0:qh+1'b1;
            qc<=qc+issue-b_fire;pend<=pend+ac_fire-cr_fire;
        end
    end
    coh_write_ingress #(.ID_WIDTH(2),.DEPTH(DEPTH),.TRACKERS(TRACKERS),.AC_DEPTH(AC_DEPTH))dut(
        .clk,.rst_n,.aw_valid,.aw_ready,.aw_id,
        .aw_addr({51'd0,aw_pg,4'd0,aw_ln,6'd0}),.aw_len(8'd3),
        .out_valid,.out_ready,.out_id,.out_addr,.out_len,.out_idx,
        .drop_valid,.drop_id,.drop_idx,.drop_done(1'b0),.drop_retire_ready,
        .b_fire,.b_idx,
        .m0_araddr({51'd0,ar_pg,4'd0,ar_ln,6'd0}),
        .m0_awaddr({51'd0,wr_pg,4'd0,wr_ln,6'd0}),.ar_hazard,.aw_hazard,
        .ace_ar_probe_valid(1'b0),.ace_ar_probe_addr('0),
        .ace_aw_probe_valid(1'b0),.ace_aw_probe_addr('0),
        .ace_ar_probe_last('0),.ace_aw_probe_last('0),.m0_ar_last('0),.m0_aw_last('0),
        .m1_ar_probe_valid(1'b0),.m1_ar_probe_addr('0),.m1_ar_probe_len('0),
        .ace_ar_hazard(),.ace_aw_hazard(),.m1_ar_hazard(),
        .ac_valid,.ac_ready,.ac_addr,.ac_snoop,.cr_valid,.cr_ready,.cr_resp(2'b00),
        .nq_valid(),.nq_ready(1'b0),.nq_addr(),.nq_tracker(),
        .nq_rsp_valid(1'b0),.nq_rsp_ready(),.nq_rsp_tracker('0),.nq_rsp_resp('0),
        .service_fault,.ingress_count,.tracker_count,.tracker_full_stall);
    always @(posedge clk)if(rst_n)case(WITNESS)
        1:assert(!b_fire);
        2:assert(!tracker_full_stall);
        3:assert(!cr_fire);
        4:assert(!(aw_valid&&aw_ready));
        5:assert(!issue);
        6:assert(!(aw_hazard||ar_hazard));
        default:;
    endcase
endmodule
