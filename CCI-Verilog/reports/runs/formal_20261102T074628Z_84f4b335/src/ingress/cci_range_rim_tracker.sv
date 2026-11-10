`include "cci_pkg.sv"
module cci_range_rim_tracker import cci_pkg::*; #(
    parameter int RANGE_MAX_ACTIVE_CYCLES = 100000
)(
    input logic clk, rst_n, alloc_en,
    input logic [51:0] d_base_page,
    input logic [63:0] d_line_mask,
    input logic [3:0] d_source_id,
    input range_op_e d_op,
    input logic reserve_fire,
    input logic [5:0] reserve_idx,
    input logic b_fire,
    input logic [5:0] b_idx,
    output logic ac_valid,
    input logic ac_ready,
    output logic [63:0] ac_addr,
    output logic [3:0] ac_snoop,
    input logic cr_valid,
    input logic [1:0] cr_resp,
    output logic cr_ready,
    output logic rd_prep_valid,
    input logic rd_prep_ready,
    output logic [63:0] rd_prep_addr,
    input logic rd_prep_rsp_valid,
    output logic rd_prep_rsp_ready,
    input logic [4:0] rd_prep_rsp,
    output range_ctx_t ctx,
    output logic write_release,
    output logic read_release,
    output logic range_fault
);
    logic all_sent;
    logic [6:0] issued, received;
    logic prep_valid,prep_ready;
    logic [63:0] prep_addr;
    logic [3:0] prep_snoop;
    wire preparing = ctx.valid && ctx.state == ST_INVALIDATING;
    wire write_preparing=preparing && ctx.op==RANGE_OP_WRITE;
    wire read_preparing=preparing && ctx.op==RANGE_OP_READ;
    wire prep_rsp_fire=(write_preparing && cr_valid && cr_ready) ||
                       (read_preparing && rd_prep_rsp_valid && rd_prep_rsp_ready);
    cci_ac_range_gen gen (
        .clk, .rst_n, .gen_en(preparing), .base_page(ctx.base_page),
        .line_mask(ctx.line_mask), .ac_valid(prep_valid), .ac_ready(prep_ready),
        .ac_addr(prep_addr), .ac_snoop(prep_snoop),
        .ac_all_sent(all_sent)
    );
    assign prep_ready=write_preparing ? ac_ready : read_preparing ? rd_prep_ready : 1'b0;
    assign ac_valid=write_preparing && prep_valid;
    assign ac_addr=prep_addr;
    assign ac_snoop=prep_snoop;
    assign cr_ready=write_preparing && received<issued;
    assign rd_prep_valid=read_preparing && prep_valid;
    assign rd_prep_addr=prep_addr;
    assign rd_prep_rsp_ready=read_preparing && received<issued;
    assign write_release=ctx.valid && ctx.state==ST_TRACKING && ctx.op==RANGE_OP_WRITE;
    assign read_release=ctx.valid && ctx.state==ST_TRACKING && ctx.op==RANGE_OP_READ;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin ctx <= '0; issued <= 0; received <= 0; range_fault<=0; end
        else begin
            if (alloc_en) begin
                ctx.valid <= 1; ctx.state <= ST_INVALIDATING;
                ctx.op <= d_op;
                ctx.base_page <= d_base_page; ctx.line_mask <= d_line_mask;
                ctx.source_id <= d_source_id;
                ctx.wr_issued_mask <= 0; ctx.done_mask <= 0;
                issued <= 0; received <= 0;
            end else begin
                if (prep_valid && prep_ready) issued <= issued + 1'b1;
                if (prep_rsp_fire) begin
                    received <= received + 1'b1;
                    if (read_preparing && rd_prep_rsp[1]) begin
                        range_fault<=1;
                        ctx.state<=ST_DONE;
                    end
                end
                if (preparing && all_sent && received == issued && !range_fault)
                    ctx.state <= ST_TRACKING;
                if (reserve_fire) ctx.wr_issued_mask[reserve_idx] <= 1;
                if (b_fire) ctx.done_mask[b_idx] <= 1;
                if ((write_release || read_release) && ctx.line_mask == ctx.done_mask &&
                    ctx.line_mask == ctx.wr_issued_mask) begin
                    ctx.valid <= 0; ctx.state <= ST_IDLE;
                end
            end
        end
    end
`ifndef SYNTHESIS
    int active_cycles;
    initial assert ($bits(range_ctx_t) == 253) else $fatal(1,"context width");
    always @(posedge clk) begin
        if (rst_n && cr_valid && cr_ready)
            assert (cr_resp == 0) else $fatal(1,"RANGE_CR_ERROR: normal response required");
        if (!rst_n || !ctx.valid) active_cycles <= 0;
        else begin
            active_cycles <= active_cycles + 1;
            assert (RANGE_MAX_ACTIVE_CYCLES == 0 || active_cycles < RANGE_MAX_ACTIVE_CYCLES)
                else $fatal(1,"RANGE_WATCHDOG: registered targets did not complete");
            assert ((ctx.done_mask & ~ctx.wr_issued_mask) == 0 &&
                    (ctx.wr_issued_mask & ~ctx.line_mask) == 0) else $fatal(1,"range masks");
            if (b_fire) assert ((write_release || read_release) && ctx.wr_issued_mask[b_idx] && !ctx.done_mask[b_idx])
                else $fatal(1,"unreserved/duplicate range B");
            if (reserve_fire) assert (ctx.line_mask[reserve_idx] && !ctx.wr_issued_mask[reserve_idx])
                else $fatal(1,"duplicate range reservation");
        end
    end
    assert property(@(posedge clk) disable iff(!rst_n)
        rd_prep_valid && !rd_prep_ready |=> rd_prep_valid && $stable(rd_prep_addr))
        else $fatal(1,"RANGE_READ_PREP_STABILITY");
`endif
endmodule
