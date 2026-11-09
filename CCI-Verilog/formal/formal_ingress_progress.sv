// Bounded-progress harness for one tagged coherent line write.
// Environment contract: NQ is always accepted, its response arrives within
// CR_LAT cycles, downstream issue is always accepted, and B arrives within
// B_LAT cycles. Both the normal and Error-only paths must retire by BOUND.
module formal_ingress_progress #(
    parameter CR_LAT=3, B_LAT=3, BOUND=14, WITNESS=0
)(input clk,input rst_n,input choose_error);
    localparam DEPTH=2,TRACKERS=2,IW=1,TW=1;
    reg init=1'b1,aw_valid,accepted,done;
    reg [5:0] age;
    wire aw_ready,out_valid,drop_valid,drop_retire_ready;
    wire [IW-1:0] out_idx,drop_idx;wire [1:0] out_id,drop_id;
    wire [63:0] out_addr;wire [7:0] out_len;
    wire nq_valid;wire [63:0] nq_addr;wire [TW-1:0] nq_tracker;
    reg nq_pending;reg [5:0] nq_delay;reg [TW-1:0] rsp_tag;
    wire nq_rsp_valid=nq_pending&&nq_delay==0;
    reg issue_pending;reg [5:0] b_delay;reg [IW-1:0] issued_idx;
    wire normal_issue=out_valid;
    wire error_issue=drop_valid;
    wire b_fire=issue_pending&&b_delay==0;
    wire drop_done=error_issue;
    wire service_fault;wire [$clog2(DEPTH+1)-1:0] ingress_count;
    wire [$clog2(TRACKERS+1)-1:0] tracker_count;wire tracker_full_stall;

    always @(posedge clk)begin
        if(init)assume(!rst_n);else assume(rst_n);init<=1'b0;
        if(!rst_n)begin
            aw_valid<=0;accepted<=0;done<=0;age<=0;nq_pending<=0;nq_delay<=0;
            rsp_tag<=0;issue_pending<=0;b_delay<=0;issued_idx<=0;
        end else begin
            if(!accepted&&!aw_valid)aw_valid<=1;
            if(aw_valid&&aw_ready)begin aw_valid<=0;accepted<=1;age<=0;end
            if(accepted&&!done)age<=age+1'b1;
            if(nq_valid)begin nq_pending<=1;rsp_tag<=nq_tracker;nq_delay<=CR_LAT-1;end
            else if(nq_pending&&nq_delay!=0)nq_delay<=nq_delay-1'b1;
            if(nq_rsp_valid)nq_pending<=0;
            if(normal_issue||error_issue)begin
                issue_pending<=1;b_delay<=B_LAT-1;
                issued_idx<=normal_issue?out_idx:drop_idx;
            end else if(issue_pending&&b_delay!=0)b_delay<=b_delay-1'b1;
            if(b_fire)begin issue_pending<=0;done<=1;end
        end
    end

    coh_write_ingress #(.TAGGED_NQ(1),.ID_WIDTH(2),.DEPTH(DEPTH),.TRACKERS(TRACKERS))dut(
        .clk,.rst_n,.aw_valid,.aw_ready,.aw_id(2'b01),.aw_addr(64'h1000),.aw_len(8'd3),
        .out_valid,.out_ready(1'b1),.out_id,.out_addr,.out_len,.out_idx,
        .drop_valid,.drop_id,.drop_idx,.drop_done,.drop_retire_ready,
        .b_fire,.b_idx(issued_idx),.m0_araddr('0),.m0_awaddr('0),.ar_hazard(),.aw_hazard(),
        .ace_ar_probe_valid(1'b0),.ace_ar_probe_addr('0),
        .ace_aw_probe_valid(1'b0),.ace_aw_probe_addr('0),
        .ace_ar_probe_last('0),.ace_aw_probe_last('0),.m0_ar_last('0),.m0_aw_last('0),
        .m1_ar_probe_valid(1'b0),.m1_ar_probe_addr('0),.m1_ar_probe_len('0),
        .ace_ar_hazard(),.ace_aw_hazard(),.m1_ar_hazard(),
        .ac_valid(),.ac_ready(1'b0),.ac_addr(),.ac_snoop(),.cr_valid(1'b0),.cr_ready(),.cr_resp('0),
        .nq_valid,.nq_ready(1'b1),.nq_addr,.nq_tracker,
        .nq_rsp_valid,.nq_rsp_ready(),.nq_rsp_tracker(rsp_tag),
        .nq_rsp_resp(choose_error?5'b00010:5'b00000),
        .service_fault,.ingress_count,.tracker_count,.tracker_full_stall);

    always @(posedge clk)if(rst_n)begin
        assert(!service_fault);
        if(accepted&&!done)assert(age<BOUND);
        if(WITNESS==1)assert(!done);
    end
endmodule
