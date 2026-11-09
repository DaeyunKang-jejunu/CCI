// RCCI_PLAN 14.5 (보완 4): formal harness for rcci_m1_issue_arbiter.
//
// OWNED=0 (isolated arbiter): both sides want the same line every cycle and can
//   always issue. Safety: never both issue in one conflict cycle (arbiter
//   assertions). Fairness: neither side waits more than BOUND cycles.
// OWNED=1 (with ownership release): an issued line is owned for L_OWNER cycles;
//   the other side is blocked by ownership (not by arbitration) meanwhile, and
//   the owner does not request again until it releases. Each waiting side must
//   issue within BOUND = L_OWNER + 1 cycles.
// WITNESS=1/2: reachability of a read/write win in a conflict cycle (must fail).
module formal_issue_arbiter #(
    parameter OWNED=0, L_OWNER=3, BOUND=1, WITNESS=0
)(input clk,input rst_n);
    reg init=1'b1;
    reg [1:0] owner;          // 0 none, 1 read, 2 write
    reg [3:0] own_cnt;
    reg [5:0] rd_wait,wr_wait;
    wire rd_busy=OWNED&&owner==2'd1, wr_busy=OWNED&&owner==2'd2;
    wire rd_cand=!rd_busy&&!wr_busy;   // wants the line, not blocked by ownership
    wire wr_cand=!wr_busy&&!rd_busy;
    wire rd_lose,wr_lose,turn;
    wire rd_fire=rd_cand&&!rd_lose, wr_fire=wr_cand&&!wr_lose;
    wire conflict=rd_cand&&wr_cand;
    rcci_m1_issue_arbiter dut(.clk,.rst_n,.rd_cand,.wr_cand,.same_line(1'b1),
        .rd_fire,.wr_fire,.rd_lose,.wr_lose,.turn);
    always @(posedge clk) begin
        if(init)assume(!rst_n);else assume(rst_n);init<=1'b0;
        if(!rst_n)begin owner<=0;own_cnt<=0;rd_wait<=0;wr_wait<=0;end
        else begin
            if(OWNED)begin
                if(rd_fire)begin owner<=2'd1;own_cnt<=L_OWNER;end
                else if(wr_fire)begin owner<=2'd2;own_cnt<=L_OWNER;end
                else if(own_cnt>1)own_cnt<=own_cnt-1'b1;
                else begin own_cnt<=0;owner<=0;end
            end
            rd_wait<=(rd_fire||rd_busy)?6'd0:rd_wait+1'b1;
            wr_wait<=(wr_fire||wr_busy)?6'd0:wr_wait+1'b1;
        end
        if(rst_n&&!init)begin
            if(WITNESS==0)assert(rd_wait<=BOUND&&wr_wait<=BOUND);
            if(WITNESS==1)assert(!(conflict&&rd_fire));
            if(WITNESS==2)assert(!(conflict&&wr_fire));
        end
    end
endmodule
