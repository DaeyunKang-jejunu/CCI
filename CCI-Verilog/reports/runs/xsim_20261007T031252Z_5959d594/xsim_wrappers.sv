`timescale 1ns/1ps
module cci_mode0_d16; tb_cci_integration #(.USE_RANGE(0),.M1_INGRESS_DEPTH(16),.LINE_TRACKER_ENTRIES(16),.CONV_AC_FIFO_DEPTH(16)) tb(); endmodule
module cci_mode1_d16; tb_cci_integration #(.USE_RANGE(1),.M1_INGRESS_DEPTH(16),.LINE_TRACKER_ENTRIES(16),.CONV_AC_FIFO_DEPTH(16)) tb(); endmodule
module cci_mode0_d1; tb_cci_integration #(.USE_RANGE(0),.M1_INGRESS_DEPTH(1),.LINE_TRACKER_ENTRIES(1),.CONV_AC_FIFO_DEPTH(1)) tb(); endmodule
module cci_mode1_d1; tb_cci_integration #(.USE_RANGE(1),.M1_INGRESS_DEPTH(1),.LINE_TRACKER_ENTRIES(1),.CONV_AC_FIFO_DEPTH(1)) tb(); endmodule
module cci_mode0_d3; tb_cci_integration #(.USE_RANGE(0),.M1_INGRESS_DEPTH(3),.LINE_TRACKER_ENTRIES(2),.CONV_AC_FIFO_DEPTH(1)) tb(); endmodule
module cci_mode1_d3; tb_cci_integration #(.USE_RANGE(1),.M1_INGRESS_DEPTH(3),.LINE_TRACKER_ENTRIES(2),.CONV_AC_FIFO_DEPTH(1)) tb(); endmodule
module axi_fifo_d1; tb_axi_fifo_overlap #(.DEPTH(1)) tb(); endmodule
module axi_fifo_d3; tb_axi_fifo_overlap #(.DEPTH(3)) tb(); endmodule
module axi_fifo_d5; tb_axi_fifo_overlap #(.DEPTH(5)) tb(); endmodule
