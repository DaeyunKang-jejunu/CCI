REVIEW 10절(보완 필요) 재현 시험. 2026-10-07 소스 기준, Verilator 5.048.
RTL 경로 R=AXI-bus-Verilog-Modelling-NEW, 공통 파일: rtl/ace/ace_snoop_pkg.sv

tb_excl.sv  (10.1) : R/rtl/ace/ace_manager_request_controller.sv R/rtl/ace/ace_manager_request_bank.sv
   verilator --binary --timing --assert --top-module tb_excl -DIDA=1 -DIDB=2 <pkg> <controller> <bank> tb_excl.sv
   (-DIDA=1 -DIDB=5 는 같은 slot 대조군)
tb_mar.sv   (10.2) : 같은 파일, --top-module tb_mar -DIDA=1 -DIDB=2
tb_sord.sv  (10.3) : R/rtl/ace/ace_snoop_controller.sv R/rtl/ace/ace_snoop_controller_bank.sv, --top-module tb_sord
tb_fabric_assoc.sv (10.4) : R/rtl/ace/ace_snoop_fabric.sv, --top-module tb_fabric_assoc
   CR(k, DataTransfer=0)과 CD(k+1) 첫 beat를 같은 cycle에 주어 context별 cd_count를 확인한다.
