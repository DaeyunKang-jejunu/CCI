`include "cci_pkg.sv"
module cci_range_rim_tracker import cci_pkg::*; #(
    parameter int RANGE_MAX_ACTIVE_CYCLES = 100000
)(
    input logic clk, rst_n, alloc_en,
    input logic [51:0] d_base_page,
    input logic [63:0] d_line_mask,
    input logic [3:0] d_source_id,
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
    output range_ctx_t ctx,
    output logic write_release
);
    logic all_sent;
    logic [6:0] issued, received;
    wire invalidating = ctx.valid && ctx.state == ST_INVALIDATING;
    cci_ac_range_gen gen (
        .clk, .rst_n, .gen_en(invalidating), .base_page(ctx.base_page),
        .line_mask(ctx.line_mask), .ac_valid, .ac_ready, .ac_addr, .ac_snoop,
        .ac_all_sent(all_sent)
    );
    assign cr_ready = invalidating && received < issued;
    assign write_release = ctx.valid && ctx.state == ST_TRACKING;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin ctx <= '0; issued <= 0; received <= 0; end
        else begin
            if (alloc_en) begin
                ctx.valid <= 1; ctx.state <= ST_INVALIDATING;
                ctx.base_page <= d_base_page; ctx.line_mask <= d_line_mask;
                ctx.source_id <= d_source_id;
                ctx.wr_issued_mask <= 0; ctx.done_mask <= 0;
                issued <= 0; received <= 0;
            end else begin
                if (ac_valid && ac_ready) issued <= issued + 1'b1;
                if (cr_valid && cr_ready) received <= received + 1'b1;
                if (invalidating && all_sent && received == issued)
                    ctx.state <= ST_TRACKING;
                if (reserve_fire) ctx.wr_issued_mask[reserve_idx] <= 1;
                if (b_fire) ctx.done_mask[b_idx] <= 1;
                if (write_release && ctx.line_mask == ctx.done_mask &&
                    ctx.line_mask == ctx.wr_issued_mask) begin
                    ctx.valid <= 0; ctx.state <= ST_IDLE;
                end
            end
        end
    end
`ifndef SYNTHESIS
    int active_cycles;
    initial assert ($bits(range_ctx_t) == 251) else $fatal(1,"context width");
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
            if (b_fire) assert (write_release && ctx.wr_issued_mask[b_idx] && !ctx.done_mask[b_idx])
                else $fatal(1,"unreserved/duplicate range B");
            if (reserve_fire) assert (ctx.line_mask[reserve_idx] && !ctx.wr_issued_mask[reserve_idx])
                else $fatal(1,"duplicate range reservation");
        end
    end
`endif
endmodule
