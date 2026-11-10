// Environment for the m0_snoop_endpoint induction proof: reset only in the first
// cycle, aligned MakeInvalid requests, unconstrained AC valid and CR ready.
module formal_endpoint #(parameter DEPTH=3, LATENCY=2) (input clk, input rst_n, input ac_valid, input [63:0] ac_addr, input cr_ready);
    wire ac_ready, cr_valid, idle; wire [1:0] cr_resp;
    reg init = 1'b1;
    always @(posedge clk) begin
        if (init) assume (!rst_n);
        else assume (rst_n);
        init <= 1'b0;
        assume (ac_addr[5:0] == 0);
    end
    m0_snoop_endpoint #(.DEPTH(DEPTH), .LATENCY(LATENCY)) dut (.clk(clk), .rst_n(rst_n), .ac_valid(ac_valid),
        .ac_ready(ac_ready), .ac_addr(ac_addr), .ac_snoop(4'b1101), .cr_valid(cr_valid), .cr_ready(cr_ready),
        .cr_resp(cr_resp), .idle(idle));
endmodule
