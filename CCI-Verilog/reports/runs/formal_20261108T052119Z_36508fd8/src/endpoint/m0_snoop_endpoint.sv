// Ordered clean-cache MakeInvalid responder. Delays are per FIFO entry, never
// independent response selection. Cache-data/CD and dirty writeback are out of scope.
module m0_snoop_endpoint #(
    parameter int DEPTH=16, LATENCY=8,
    parameter int PW=(DEPTH<2 ? 1 : $clog2(DEPTH)),
    parameter int CW=$clog2(DEPTH+1),
    parameter int LW=(LATENCY<2 ? 1 : $clog2(LATENCY+1))
)(
    input logic clk, rst_n,
    input logic ac_valid,
    output logic ac_ready,
    input logic [63:0] ac_addr,
    input logic [3:0] ac_snoop,
    output logic cr_valid,
    input logic cr_ready,
    output logic [1:0] cr_resp,
    output logic idle
);
    logic [LW-1:0] delay_q [DEPTH];
    logic [DEPTH-1:0] valid_q;
    logic [PW-1:0] head, tail;
    logic [CW-1:0] count;
    wire push = ac_valid && ac_ready;
    wire pop = cr_valid && cr_ready;
    function automatic [PW-1:0] next_ptr(input [PW-1:0] p);
        return p == PW'(DEPTH-1) ? '0 : p+1'b1;
    endfunction
    assign ac_ready = int'(count) < DEPTH;
    assign cr_valid = count != 0 && delay_q[head] == 0;
    assign cr_resp = 0;
    assign idle = count == 0 && !ac_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            head <= 0; tail <= 0; count <= 0; valid_q <= 0;
            for (int i=0;i<DEPTH;i++) delay_q[i] <= 0;
        end else begin
            for (int i=0;i<DEPTH;i++)
                if (valid_q[i] && delay_q[i] != 0) delay_q[i] <= delay_q[i]-1'b1;
            if (pop) begin valid_q[head] <= 0; head <= next_ptr(head); end
            if (push) begin
                delay_q[tail] <= LW'(LATENCY); valid_q[tail] <= 1; tail <= next_ptr(tail);
            end
            case ({push,pop})
                2'b10: count <= count+1'b1;
                2'b01: count <= count-1'b1;
                default: ;
            endcase
        end
    end
`ifndef SYNTHESIS
    initial assert (DEPTH>0 && LATENCY>=0) else $fatal(1,"endpoint parameters");
    always @(posedge clk) if (rst_n && push)
        assert (ac_snoop == 4'b1101 && ac_addr[5:0] == 0) else $fatal(1,"unsupported snoop");
`endif
endmodule
