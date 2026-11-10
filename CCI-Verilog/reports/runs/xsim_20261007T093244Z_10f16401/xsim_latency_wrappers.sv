`timescale 1ns/1ps
module lat_mode0_sl1_sn1; tb_cci_integration #(.USE_RANGE(0),.SLAVE_LATENCY(1),.SNOOP_LATENCY(1)) tb(); endmodule
module lat_mode0_sl20_sn40; tb_cci_integration #(.USE_RANGE(0),.SLAVE_LATENCY(20),.SNOOP_LATENCY(40)) tb(); endmodule
module lat_mode1_sl1_sn1; tb_cci_integration #(.USE_RANGE(1),.SLAVE_LATENCY(1),.SNOOP_LATENCY(1)) tb(); endmodule
module lat_mode1_sl20_sn40; tb_cci_integration #(.USE_RANGE(1),.SLAVE_LATENCY(20),.SNOOP_LATENCY(40)) tb(); endmodule
