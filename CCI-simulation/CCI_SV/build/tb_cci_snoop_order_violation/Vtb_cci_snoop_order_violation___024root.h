// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cci_snoop_order_violation.h for the primary calling header

#ifndef VERILATED_VTB_CCI_SNOOP_ORDER_VIOLATION___024ROOT_H_
#define VERILATED_VTB_CCI_SNOOP_ORDER_VIOLATION___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cci_snoop_order_violation__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cci_snoop_order_violation___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__clk;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__rst_n;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__seq_start;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__ac_valid;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__ac_ready;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__ac_gen_done;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__cr_valid;
    CData/*4:0*/ tb_cci_snoop_order_violation__DOT__cr_resp;
    CData/*6:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__sent_count_r;
    CData/*6:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__recv_count_r;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__all_sent_r;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__active_r;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__snoop_error_r;
    CData/*0:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__ac_accepted;
    CData/*6:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__sent_next;
    CData/*6:0*/ tb_cci_snoop_order_violation__DOT__dut__DOT__recv_next;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cci_snoop_order_violation__DOT__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd044919e__0;
    VlTriggerScheduler __VtrigSched_hd0449e4c__0;

    // INTERNAL VARIABLES
    Vtb_cci_snoop_order_violation__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cci_snoop_order_violation___024root(Vtb_cci_snoop_order_violation__Syms* symsp, const char* namep);
    ~Vtb_cci_snoop_order_violation___024root();
    VL_UNCOPYABLE(Vtb_cci_snoop_order_violation___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
