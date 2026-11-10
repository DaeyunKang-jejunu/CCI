// RCCI_PLAN 14.5 (보완 4): same-line issue arbitration between the M1 read
// allocation candidate and the M1 write reservation candidate.
//
// Only a same-line conflict is arbitrated; otherwise neither side loses. The
// 1-bit turn flips only when the winner actually issues in a conflict cycle,
// so an issued line is never preempted and a stalled winner keeps its turn.
module rcci_m1_issue_arbiter(
    input  logic clk,rst_n,
    input  logic rd_cand,wr_cand,same_line,
    input  logic rd_fire,wr_fire,      // the side actually issued this cycle
    output logic rd_lose,wr_lose,
    output logic turn                  // 0: read wins the next conflict
);
    wire conflict=rd_cand&&wr_cand&&same_line;
    assign rd_lose=conflict&&turn;
    assign wr_lose=conflict&&!turn;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) turn<=1'b0;
        /* mutant */
        else if(conflict&&wr_fire) turn<=1'b0;
    end
`ifndef SYNTHESIS
    always @(posedge clk) if(rst_n) begin
        assert(!(conflict&&rd_fire&&wr_fire)) else $fatal(1,"RANGE_ISSUE_M1_SAME_CYCLE");
        assert(!(rd_fire&&rd_lose)&&!(wr_fire&&wr_lose)) else $fatal(1,"RANGE_ISSUE_M1_LOSER_FIRED");
    end
`endif
endmodule
