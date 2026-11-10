`timescale 1ns/1ps
module ace_b1;tb_cci_ace_integration #(.USE_RANGE(0)) tb();endmodule
module ace_p;tb_cci_ace_integration #(.USE_RANGE(1)) tb();endmodule
module ace_multi;tb_cci_ace_integration #(.USE_RANGE(0),.CACHED_MASTERS(2)) tb();endmodule
module ace_b1_multiline;tb_cci_ace_integration #(.USE_RANGE(0),.LONG_STRESS(1)) tb();endmodule
module ace_p_multiline;tb_cci_ace_integration #(.USE_RANGE(1),.LONG_STRESS(1)) tb();endmodule
module ace_b1_wb;tb_cci_ace_integration #(.USE_RANGE(0),.WB_CONTENTION(1)) tb();endmodule
module ace_p_wb;tb_cci_ace_integration #(.USE_RANGE(1),.WB_CONTENTION(1)) tb();endmodule
