module m0_snoop_endpoint (
	clk,
	rst_n,
	ac_valid,
	ac_ready,
	ac_addr,
	ac_snoop,
	cr_valid,
	cr_ready,
	cr_resp,
	idle
);
	parameter signed [31:0] DEPTH = 16;
	parameter signed [31:0] LATENCY = 8;
	parameter signed [31:0] PW = (DEPTH < 2 ? 1 : $clog2(DEPTH));
	parameter signed [31:0] CW = $clog2(DEPTH + 1);
	parameter signed [31:0] LW = (LATENCY < 2 ? 1 : $clog2(LATENCY + 1));
	input wire clk;
	input wire rst_n;
	input wire ac_valid;
	output wire ac_ready;
	input wire [63:0] ac_addr;
	input wire [3:0] ac_snoop;
	output wire cr_valid;
	input wire cr_ready;
	output wire [1:0] cr_resp;
	output wire idle;
	reg [LW - 1:0] delay_q [0:DEPTH - 1];
	reg [DEPTH - 1:0] valid_q;
	reg [PW - 1:0] head;
	reg [PW - 1:0] tail;
	reg [CW - 1:0] count;
	wire push = ac_valid && ac_ready;
	wire pop = cr_valid && cr_ready;
	function automatic signed [PW - 1:0] sv2v_cast_D66DB_signed;
		input reg signed [PW - 1:0] inp;
		sv2v_cast_D66DB_signed = inp;
	endfunction
	function automatic [PW - 1:0] next_ptr;
		input [PW - 1:0] p;
		next_ptr = (p == sv2v_cast_D66DB_signed(DEPTH - 1) ? {PW {1'sb0}} : p + 1'b1);
	endfunction
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign ac_ready = sv2v_cast_32_signed(count) < DEPTH;
	assign cr_valid = (count != 0) && (delay_q[head] == 0);
	assign cr_resp = 0;
	assign idle = (count == 0) && !ac_valid;
	function automatic signed [LW - 1:0] sv2v_cast_84257_signed;
		input reg signed [LW - 1:0] inp;
		sv2v_cast_84257_signed = inp;
	endfunction
	always @(posedge clk or negedge rst_n)
		if (!rst_n) begin
			head <= 0;
			tail <= 0;
			count <= 0;
			valid_q <= 0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < DEPTH; i = i + 1)
					delay_q[i] <= 0;
			end
		end
		else begin
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < DEPTH; i = i + 1)
					if (valid_q[i] && (delay_q[i] != 0))
						delay_q[i] <= delay_q[i] - 1'b1;
			end
			if (pop) begin
				valid_q[head] <= 0;
				head <= next_ptr(head);
			end
			if (push) begin
				delay_q[tail] <= sv2v_cast_84257_signed(LATENCY);
				valid_q[tail] <= 1;
				tail <= next_ptr(tail);
			end
			case ({push, pop})
				2'b10: count <= count + 1'b1;
				2'b01: count <= count - 1'b1;
				default:
					;
			endcase
		end
	initial assert ((DEPTH > 0) && (LATENCY >= 0));
	always @(posedge clk)
		if (rst_n && push)
			assert ((ac_snoop == 4'b1101) && (ac_addr[5:0] == 0));
// Inserted by scripts/run_formal.py before endmodule of the sv2v-converted
// m0_snoop_endpoint. FIFO invariants: occupancy bound, ready/valid consistency,
// contiguous valid window from head, tail = head + count, and non-decreasing
// remaining delay from head (so responses can only leave in push order).
`ifdef FORMAL
	integer fi, fk;
	always @(posedge clk) if (rst_n) begin
		assert (count <= DEPTH);
		assert (ac_ready == (count < DEPTH));
		assert (!cr_valid || (count != 0));
		assert (tail == ((head + count) % DEPTH));
		for (fi = 0; fi < DEPTH; fi = fi + 1)
			assert (valid_q[fi] == ((((fi + DEPTH) - head) % DEPTH) < count));
		for (fk = 0; fk + 1 < DEPTH; fk = fk + 1)
			if (fk + 1 < count)
				assert (delay_q[(head + fk + 1) % DEPTH] >= delay_q[(head + fk) % DEPTH]);
		for (fi = 0; fi < DEPTH; fi = fi + 1)
			assert (!valid_q[fi] || (delay_q[fi] <= LATENCY));
	end
`endif
endmodule
