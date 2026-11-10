// Converts one external coherent line/range write into ordered 64-byte line
// writes.  The existing B1 write ingress performs MakeInvalid for every line;
// this adapter owns only range decomposition, W framing, and B aggregation.
module coh_write_range_adapter #(
    parameter int ID_WIDTH=4,
    parameter int DATA_WIDTH=128,
    parameter int DEPTH=16,
    parameter int WINDOW=16,
    parameter bit USE_RANGE=1,
    parameter int CW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int LCW=$clog2(WINDOW+1)
)(
    input  logic clk, rst_n,
    input  logic in_aw_valid,
    output logic in_aw_ready,
    input  logic [ID_WIDTH-1:0] in_aw_id,
    input  logic [63:0] in_aw_addr,
    input  logic [7:0] in_aw_len,
    input  logic in_aw_range,
    input  logic in_aw_attr_ok,
    input  logic in_w_valid,
    output logic in_w_ready,
    input  logic [DATA_WIDTH-1:0] in_w_data,
    input  logic [DATA_WIDTH/8-1:0] in_w_strb,
    input  logic in_w_last,
    output logic out_b_valid,
    input  logic out_b_ready,
    output logic [ID_WIDTH-1:0] out_b_id,
    output logic [1:0] out_b_resp,
    output logic line_aw_valid,
    input  logic line_aw_ready,
    output logic [ID_WIDTH-1:0] line_aw_id,
    output logic [63:0] line_aw_addr,
    output logic [7:0] line_aw_len,
    output logic line_w_valid,
    input  logic line_w_ready,
    output logic [DATA_WIDTH-1:0] line_w_data,
    output logic [DATA_WIDTH/8-1:0] line_w_strb,
    output logic line_w_last,
    input  logic line_b_valid,
    output logic line_b_ready,
    input  logic [ID_WIDTH-1:0] line_b_id,
    input  logic [1:0] line_b_resp,
    output logic config_fault,
    output logic data_fault,
    output logic [CW:0] context_count,
    output logic [LCW-1:0] line_outstanding,
    // RCCI_PLAN 14.3-3: write issue is candidate -> reservation (hold) -> AW.
    // The top grants a candidate only when no other owner holds that line; a
    // granted line is held in a register so line AW VALID/payload never drop.
    output logic issue_cand_valid,output logic [63:0] issue_cand_addr,
    input logic issue_block,
    output logic hold_valid,output logic [63:0] hold_addr,
    // RCCI_PLAN 14.4: per-context interval CAM. A context owns
    // [base+b_idx, base+issue_idx) plus its reserved (held) line.
    input logic m0_ar_probe_valid,input logic [63:0] m0_ar_probe_addr,
    input logic m0_aw_probe_valid,input logic [63:0] m0_aw_probe_addr,
    input logic [58:0] m0_ar_probe_last,input logic [58:0] m0_aw_probe_last,
    input logic ace_ar_probe_valid,input logic [63:0] ace_ar_probe_addr,input logic [58:0] ace_ar_probe_last,
    input logic ace_aw_probe_valid,input logic [63:0] ace_aw_probe_addr,input logic [58:0] ace_aw_probe_last,
    input logic m1_ar_probe_valid,input logic [63:0] m1_ar_probe_addr,input logic [7:0] m1_ar_probe_len,
    output logic m0_ar_hazard,output logic m0_aw_hazard,
    output logic ace_ar_hazard,output logic ace_aw_hazard,output logic m1_ar_hazard,
    // RCCI_PLAN 14.5: does a write context own the line the read side wants to allocate?
    input logic rd_issue_probe_valid,input logic [63:0] rd_issue_probe_addr,
    output logic rd_issue_hazard,
    output logic issue_reserve
);
    // The line-only baseline has no range counters: one line per context.
    localparam int LW=USE_RANGE?7:1;
    typedef struct packed {
        logic valid, kind_range, b_complete;
        logic [ID_WIDTH-1:0] id;
        logic [63:0] addr;
        logic [LW-1:0] lines, issue_idx, w_idx, b_idx;
        logic [1:0] w_beat, resp;
        logic [58:0] lo_line, hi_line;
    } context_t;
    context_t contexts[DEPTH];
    logic [CW-1:0] tail,issue_head,w_head,complete_head,retire_head;

    function automatic [CW-1:0] inc(input [CW-1:0] p);
        return p==CW'(DEPTH-1) ? '0 : p+1'b1;
    endfunction
    function automatic [1:0] merge_resp(input [1:0] a,input [1:0] b);
        if(a==2'b11 || b==2'b11)return 2'b11;
        if(a==2'b10 || b==2'b10)return 2'b10;
        if(a==2'b01 || b==2'b01)return 2'b01;
        return 2'b00;
    endfunction

    wire push=in_aw_valid&&in_aw_ready;
    wire [8:0] incoming_beats={1'b0,in_aw_len}+9'd1;
    wire [6:0] incoming_lines=incoming_beats[8:2];
    wire line_aw_fire=line_aw_valid&&line_aw_ready;
    logic [ID_WIDTH-1:0] hold_id;
    wire hold_load=issue_cand_valid&&!issue_block;
    assign issue_reserve=hold_load;
    wire line_w_fire=line_w_valid&&line_w_ready;
    wire line_b_fire=line_b_valid&&line_b_ready;
    wire out_b_fire=out_b_valid&&out_b_ready;
    wire w_line_final=contexts[w_head].w_beat==2'd3;
    wire w_range_final=w_line_final && contexts[w_head].w_idx==contexts[w_head].lines-1'b1;
    wire b_range_final=contexts[complete_head].b_idx==contexts[complete_head].lines-1'b1;

    always_comb begin
        in_aw_ready=int'(context_count)<DEPTH && in_aw_attr_ok && !config_fault;
        issue_cand_valid=!hold_valid && contexts[issue_head].valid &&
            contexts[issue_head].issue_idx<contexts[issue_head].lines &&
            int'(line_outstanding)<WINDOW;
        issue_cand_addr=contexts[issue_head].addr+64'(contexts[issue_head].issue_idx*64);
        line_aw_valid=hold_valid;
        line_aw_id=hold_id;
        line_aw_addr=hold_addr;
        line_aw_len=8'd3;

        line_w_valid=in_w_valid && contexts[w_head].valid &&
            contexts[w_head].w_idx<contexts[w_head].issue_idx;
        in_w_ready=line_w_ready && contexts[w_head].valid &&
            contexts[w_head].w_idx<contexts[w_head].issue_idx;
        line_w_data=in_w_data;
        line_w_strb=in_w_strb;
        line_w_last=contexts[w_head].kind_range ? w_line_final : in_w_last;

        line_b_ready=contexts[complete_head].valid &&
            contexts[complete_head].b_idx<contexts[complete_head].lines &&
            !contexts[complete_head].b_complete;
        out_b_valid=contexts[retire_head].valid && contexts[retire_head].b_complete;
        out_b_id=contexts[retire_head].id;
        out_b_resp=contexts[retire_head].resp;
    end

    wire [58:0] m0_ar_line={1'b0,m0_ar_probe_addr[63:6]},m0_aw_line={1'b0,m0_aw_probe_addr[63:6]};
    wire [58:0] rd_issue_line={1'b0,rd_issue_probe_addr[63:6]};
    wire [58:0] ace_ar_first={1'b0,ace_ar_probe_addr[63:6]},ace_aw_first={1'b0,ace_aw_probe_addr[63:6]};
    wire [64:0] m1_ar_last_byte={1'b0,m1_ar_probe_addr}+((65'(m1_ar_probe_len)+65'd1)<<4)-65'd1;
    wire [58:0] m1_ar_first={1'b0,m1_ar_probe_addr[63:6]},m1_ar_last=m1_ar_last_byte[64:6];
    always_comb begin
        m0_ar_hazard=0;m0_aw_hazard=0;ace_ar_hazard=0;ace_aw_hazard=0;m1_ar_hazard=0;rd_issue_hazard=0;
        for(int e=0;e<DEPTH;e++)if(contexts[e].valid)begin
            logic [58:0] lo,hi;
            // Baseline: a one-line context owns its line from reservation to B (no interval).
            if(!USE_RANGE)begin
                if(rd_issue_probe_valid&&rd_issue_line=={1'b0,contexts[e].addr[63:6]}&&
                   (contexts[e].issue_idx!=contexts[e].b_idx||(hold_valid&&CW'(e)==issue_head)))
                    rd_issue_hazard=1;
            end else begin
            lo=contexts[e].lo_line;
            hi=contexts[e].hi_line+59'(hold_valid&&CW'(e)==issue_head);
            if(1'b0)begin
            if(m0_ar_probe_valid&&m0_ar_line<hi&&m0_ar_probe_last>=lo)m0_ar_hazard=1;
            if(m0_aw_probe_valid&&m0_aw_line<hi&&m0_aw_probe_last>=lo)m0_aw_hazard=1;
            if(rd_issue_probe_valid&&rd_issue_line>=lo&&rd_issue_line<hi)rd_issue_hazard=1;
            if(ace_ar_probe_valid&&ace_ar_first<hi&&ace_ar_probe_last>=lo)ace_ar_hazard=1;
            if(ace_aw_probe_valid&&ace_aw_first<hi&&ace_aw_probe_last>=lo)ace_aw_hazard=1;
            if(m1_ar_probe_valid&&m1_ar_first<hi&&m1_ar_last>=lo)m1_ar_hazard=1;
            end
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin
            tail<=0;issue_head<=0;w_head<=0;complete_head<=0;retire_head<=0;
            context_count<=0;line_outstanding<=0;config_fault<=0;data_fault<=0;
            hold_valid<=0;hold_id<=0;hold_addr<=0;
            for(int e=0;e<DEPTH;e++)contexts[e]<='0;
        end else begin
            if(in_aw_valid&&!in_aw_attr_ok)config_fault<=1;
            if(push)begin
`ifndef SYNTHESIS
                if($test$plusargs("stage6_debug"))$display("S6_PUSH t=%0t ctx=%0d id=%0d addr=%h range=%0b",$time,tail,in_aw_id,in_aw_addr,in_aw_range);
`endif
                contexts[tail]<='{valid:1'b1,kind_range:in_aw_range,b_complete:1'b0,
                    id:in_aw_id,addr:in_aw_addr,
                    lines:LW'(in_aw_range ? incoming_lines : 7'd1),
                    issue_idx:'0,w_idx:'0,b_idx:'0,w_beat:2'd0,resp:2'b00,
                    lo_line:{1'b0,in_aw_addr[63:6]},hi_line:{1'b0,in_aw_addr[63:6]}};
                tail<=inc(tail);
            end
            if(hold_load)begin
                hold_valid<=1;hold_id<=contexts[issue_head].id;hold_addr<=issue_cand_addr;
            end
            if(line_aw_fire)begin
                hold_valid<=0;
`ifndef SYNTHESIS
                if($test$plusargs("stage6_debug"))$display("S6_AW t=%0t ctx=%0d line=%0d addr=%h",$time,issue_head,contexts[issue_head].issue_idx,line_aw_addr);
`endif
                contexts[issue_head].issue_idx<=contexts[issue_head].issue_idx+1'b1;
                contexts[issue_head].hi_line<=contexts[issue_head].hi_line+59'd1;
                if(contexts[issue_head].issue_idx==contexts[issue_head].lines-1'b1)
                    issue_head<=inc(issue_head);
            end
            if(line_w_fire)begin
`ifndef SYNTHESIS
                if($test$plusargs("stage6_debug"))$display("S6_W t=%0t ctx=%0d beat=%0d range=%0b extlast=%0b linelast=%0b",$time,w_head,contexts[w_head].w_beat,contexts[w_head].kind_range,in_w_last,line_w_last);
`endif
                if(contexts[w_head].kind_range)begin
                    if(!(&in_w_strb) || in_w_last!=w_range_final)data_fault<=1;
                    if(w_line_final)begin
                        contexts[w_head].w_beat<=0;
                        contexts[w_head].w_idx<=contexts[w_head].w_idx+1'b1;
                        if(w_range_final)w_head<=inc(w_head);
                    end else contexts[w_head].w_beat<=contexts[w_head].w_beat+1'b1;
                end else begin
                    if(in_w_last)begin
                        contexts[w_head].w_idx<=1;
                        w_head<=inc(w_head);
                    end
                end
            end
            if(line_b_fire)begin
`ifndef SYNTHESIS
                if($test$plusargs("stage6_debug"))$display("S6_B t=%0t ctx=%0d line=%0d resp=%0b",$time,complete_head,contexts[complete_head].b_idx,line_b_resp);
`endif
                if(line_b_id!=contexts[complete_head].id)data_fault<=1;
                contexts[complete_head].resp<=merge_resp(contexts[complete_head].resp,line_b_resp);
                contexts[complete_head].b_idx<=contexts[complete_head].b_idx+1'b1;
                contexts[complete_head].lo_line<=contexts[complete_head].lo_line+59'd1;
                if(b_range_final)begin
                    contexts[complete_head].b_complete<=1;
                    complete_head<=inc(complete_head);
                end
            end
            if(out_b_fire)begin
                contexts[retire_head].valid<=0;
                retire_head<=inc(retire_head);
            end
            unique case({push,out_b_fire})
                2'b10:context_count<=context_count+1'b1;
                2'b01:context_count<=context_count-1'b1;
                default:;
            endcase
            unique case({line_aw_fire,line_b_fire})
                2'b10:line_outstanding<=line_outstanding+1'b1;
                2'b01:line_outstanding<=line_outstanding-1'b1;
                default:;
            endcase
        end
    end

`ifndef SYNTHESIS
    initial begin
        assert(DEPTH>0&&WINDOW>0)else $fatal(1,"RANGE_WRITE_GEOMETRY");
        assert(DATA_WIDTH==128)else $fatal(1,"RANGE_WRITE_DATA_WIDTH");
    end
    always @(posedge clk)if(rst_n)begin
        assert(int'(context_count)<=DEPTH&&int'(line_outstanding)<=WINDOW)
            else $fatal(1,"RANGE_WRITE_COUNT");
        if(push&&in_aw_range)assert(contexts[tail].valid==0&&in_aw_addr[5:0]==0&&
            in_aw_len[1:0]==2'b11)else $fatal(1,"RANGE_WRITE_FORMAT");
        if(line_aw_fire)assert(line_aw_addr[5:0]==0&&line_aw_len==3)
            else $fatal(1,"RANGE_WRITE_LINE_AW");
        if(line_w_fire&&contexts[w_head].kind_range)begin
            assert(&in_w_strb)else $fatal(1,"RANGE_WRITE_WSTRB");
            assert(in_w_last==w_range_final)else $fatal(1,"RANGE_WRITE_WLAST");
        end
        if(line_b_fire)assert(line_b_id==contexts[complete_head].id)
            else $fatal(1,"RANGE_WRITE_BID");
        if(hold_load)assert(!hold_valid)else $fatal(1,"RANGE_WRITE_DOUBLE_RESERVE");
        for(int e=0;e<DEPTH;e++)if(contexts[e].valid)
            assert(contexts[e].lo_line=={1'b0,contexts[e].addr[63:6]}+59'(contexts[e].b_idx)&&
                   contexts[e].hi_line=={1'b0,contexts[e].addr[63:6]}+59'(contexts[e].issue_idx))
                else $fatal(1,"RANGE_WRITE_INTERVAL_POINTER");
        if(line_aw_fire)assert(hold_valid&&
            hold_addr==contexts[issue_head].addr+64'(contexts[issue_head].issue_idx*64))
            else $fatal(1,"RANGE_WRITE_RESERVE_AW_MISMATCH");
    end
    assert property(@(posedge clk)disable iff(!rst_n)
        line_aw_valid&&!line_aw_ready|=>line_aw_valid&&$stable({line_aw_id,line_aw_addr,line_aw_len}))
        else $fatal(1,"RANGE_WRITE_AW_STABILITY");
    assert property(@(posedge clk)disable iff(!rst_n)
        out_b_valid&&!out_b_ready|=>out_b_valid&&$stable({out_b_id,out_b_resp}))
        else $fatal(1,"RANGE_WRITE_B_STABILITY");
`endif
endmodule
