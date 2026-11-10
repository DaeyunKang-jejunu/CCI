module rcci_m1_issue_arbiter (
	clk,
	rst_n,
	rd_cand,
	wr_cand,
	same_line,
	rd_fire,
	wr_fire,
	rd_lose,
	wr_lose,
	turn
);
	input wire clk;
	input wire rst_n;
	input wire rd_cand;
	input wire wr_cand;
	input wire same_line;
	input wire rd_fire;
	input wire wr_fire;
	output wire rd_lose;
	output wire wr_lose;
	output reg turn;
	wire conflict = (rd_cand && wr_cand) && same_line;
	assign rd_lose = conflict && turn;
	assign wr_lose = conflict && !turn;
	always @(posedge clk or negedge rst_n)
		if (!rst_n)
			turn <= 1'b0;
		else if (conflict && wr_fire)
			turn <= 1'b0;
	always @(posedge clk)
		if (rst_n) begin
			assert (!((conflict && rd_fire) && wr_fire));
			assert (!(rd_fire && rd_lose) && !(wr_fire && wr_lose));
		end
endmodule
