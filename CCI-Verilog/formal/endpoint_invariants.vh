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
