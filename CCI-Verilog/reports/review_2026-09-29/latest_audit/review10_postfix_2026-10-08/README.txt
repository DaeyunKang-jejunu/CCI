REVIEW 10 수정 후 독립 검토 자료, 2026-10-08, Verilator 5.048.

tb_dvm_atomic.sv:
  DVM AR(ID 2, slot 2)과 unrelated non-shareable WriteBack AW(ID 1, slot 1)를
  같은 cycle에 제시한다. 전역 시작이 원자적이면 둘 중 하나만 handshake되어야 한다.

빌드 입력:
  rtl/ace/ace_snoop_pkg.sv
  rtl/ace/ace_manager_request_controller.sv
  rtl/ace/ace_manager_request_bank.sv
