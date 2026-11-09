// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_memcpy_range_unit.h for the primary calling header

#include "Vtb_cci_memcpy_range_unit__pch.h"

VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_range_unit___024root* vlSelf);
VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_memcpy_range_unit___024root* vlSelf);
VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_memcpy_range_unit___024root* vlSelf);

void Vtb_cci_memcpy_range_unit___024root___eval_initial(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_initial\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk = 0U;
    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         50);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:51: Assertion failed in %m: WATCHDOG: simulation exceeded 10000 clock cycles\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 51, "", false);
    co_return;
}

void Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(Vtb_cci_memcpy_range_unit___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(Vtb_cci_memcpy_range_unit___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__pass_count;
    tb_cci_memcpy_range_unit__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_memcpy_range_unit__DOT__fail_count;
    tb_cci_memcpy_range_unit__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__msk = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__base;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__count;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__src;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__n;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__msk;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__got;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__exp;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__exp = 0;
    // Body
    tb_cci_memcpy_range_unit__DOT__pass_count = 0U;
    tb_cci_memcpy_range_unit__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T01: single-line end-to-end ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__count = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__2__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__label = "T01 tracker_busy after accept"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__3__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__label = "T01 write_release=0 in INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__4__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__label = "T01 ac_valid=1 (first cycle)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__5__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__got = 1U;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__label = "T01 ac_snoop=MAKE_INVALID"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__6__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__label = "T01 req_ready=0 while busy"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__7__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         287);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         287);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__label = "T01 write_release=0 pending CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__8__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__label = "T01 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__9__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__n = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__10__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__label = "T01 write_release=1 after CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__11__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         294);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         296);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__label = "T01 tracker_done on last wr_done"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__12__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         300);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         300);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__label = "T01 req_ready=1 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__13__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__label = "T01 tracker_busy=0 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__14__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         531);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         531);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T02: 4-line contiguous, ACs before write_release ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__count = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__17__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__label = "T02 write_release=0 before any AC"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__18__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt);
        if ((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
                      & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker))))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release);
        }
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             234);
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt);
            if ((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
                          & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker))))) {
                __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release 
                    = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release);
            }
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:241: Assertion failed in %m: FAIL  collect_acs_with_release timeout: got %0d/%0d ACs\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.collect_acs_with_release", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 241, "", false);
        }
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__total 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__total_cnt;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__before_wr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs_with_release__19__before_release;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__exp = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__total;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__label = "T02 exactly 4 ACs issued"s;
    if ((__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__got 
         == __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__label)
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__exp
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__20__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__exp = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T02__Vstatic__before_wr;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__label = "T02 all 4 ACs before write_release"s;
    if ((__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__got 
         == __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__label)
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__exp
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__21__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         318);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         318);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__label = "T02 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__22__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__label = "T02 write_release=0 pending CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__23__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__24__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__label = "T02 write_release=1 after CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__25__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__26__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         326);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         326);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__label = "T02 req_ready=1 after writes"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__27__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         532);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         532);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T03: hazard probe during INVALIDATING ---\n",0);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__count = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__30__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 2U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000001040ULL;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         342);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__label = "T03 hazard=1 for pending line in INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__31__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000001280ULL;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         346);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__label = "T03 hazard=0 for line outside mask"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__32__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000002040ULL;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         350);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__label = "T03 hazard=0 for different page"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__33__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             208);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             208);
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:212: Assertion failed in %m: FAIL  collect_acs timeout: got %0d/%0d ACs after %0d cycles\n",6, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__n
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__34__cycle_cnt);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 212, "", false);
        }
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         355);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         355);
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__35__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__36__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         358);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         358);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__label = "T03 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__37__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         533);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         533);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T04: per-line hazard release ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__count = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__40__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             208);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             208);
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:212: Assertion failed in %m: FAIL  collect_acs timeout: got %0d/%0d ACs after %0d cycles\n",6, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__n
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__41__cycle_cnt);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 212, "", false);
        }
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         370);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         370);
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__42__unnamedblk2__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         373);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 2U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000001080ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         377);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         377);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__label = "T04 hazard=1 for pending line 2"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__43__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         380);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 2U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         382);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         382);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__label = "T04 hazard=0 after wr_done for line 2"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__44__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         386);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         387);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         387);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__label = "T04 hazard=1 for still-pending line 0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__45__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__msk = 0x000000000000000bULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__46__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         392);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         392);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__label = "T04 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__47__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         534);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         534);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T05: same source, no self-hazard ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__count = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__50__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0x0000000000001040ULL;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         407);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__label = "T05 no self-hazard (same source_id)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__51__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             208);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             208);
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:212: Assertion failed in %m: FAIL  collect_acs timeout: got %0d/%0d ACs after %0d cycles\n",6, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__n
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__52__cycle_cnt);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 212, "", false);
        }
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         412);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         412);
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__53__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__54__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         415);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         415);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__label = "T05 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__55__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         535);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         535);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T06: req_error on page boundary crossing ---\n",0);
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         424);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0x0000000000001f00ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 8U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         430);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         430);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__label = "T06 req_error=1 for crossing"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__58__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__label = "T06 req_ready=1 (error consumed, no alloc)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__59__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__label = "T06 tracker_busy=0 (rejected)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__60__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         435);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         435);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__label = "T06 req_ready=1 after deassert"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__61__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         536);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         536);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T07: explicit mask (0xA5 = lines 0,2,5,7) ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__msk = 0x00000000000000a5ULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         189);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__msk;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_mask_req__64__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         195);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         195);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__label = "T07 tracker_busy=1 after explicit accept"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__65__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__label = "T07 write_release=0 before ACs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__66__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             208);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             208);
        __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:212: Assertion failed in %m: FAIL  collect_acs timeout: got %0d/%0d ACs after %0d cycles\n",6, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__n
                         , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cycle_cnt);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 212, "", false);
        }
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T07__Vstatic__cnt 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__collect_acs__67__cnt;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__exp = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T07__Vstatic__cnt;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__label = "T07 exactly 4 ACs (popcount 0xA5)"s;
    if ((__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__got 
         == __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__label)
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__exp
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__68__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         452);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         452);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__label = "T07 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__69__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__label = "T07 write_release=0 pending CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__70__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__n = 4U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__71__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__label = "T07 write_release=1 after CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__72__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__msk = 0x00000000000000a5ULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__73__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         460);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         460);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__label = "T07 req_ready=1 after explicit-mask completion"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__74__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         537);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         537);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T08: AC backpressure delays write_release ---\n",0);
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__src = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__count = 2U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         174);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__base;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__count;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_range_unit__DOT__submit_req__77__src;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         180);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         180);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__label = "T08 write_release=0 before any AC"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__78__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         474);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 0U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         475);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         475);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__label = "T08 ac_valid held during stall"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__79__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__label = "T08 write_release=0 during stall"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__80__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         478);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         478);
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         479);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         479);
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         481);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt = 0U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt 
            = ((IData)(1U) + vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__cycle_cnt = 0U;
    while (VL_GTS_III(32, 2U, vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             486);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             486);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__cycle_cnt 
            = ((IData)(1U) + vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt 
                = ((IData)(1U) + vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__cycle_cnt)))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:490: Assertion failed in %m: FAIL  T08 AC collection timeout: got %0d/2\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.test_T08", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 490, "", false);
        }
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__exp = 2U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__test_T08__Vstatic__ac_cnt;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__label = "T08 exactly 2 ACs issued"s;
    if ((__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__got 
         == __Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__label)
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__exp
                     , '~',32,__Vtask_tb_cci_memcpy_range_unit__DOT__check_int__81__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         494);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         494);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__label = "T08 write_release=0 pending CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__82__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__n = 2U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i, __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__n)) {
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                        "@(negedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             264);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                        "@(posedge tb_cci_memcpy_range_unit.clk)");
        co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                             268);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             268);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__drive_cr_responses__83__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__label = "T08 write_release=1 after CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__84__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__msk = 3ULL;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__msk 
                           >> (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i))))) {
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                            "@(negedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 250);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i);
            Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                            "@(posedge tb_cci_memcpy_range_unit.clk)");
            co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                                 253);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                 253);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_range_unit__DOT__complete_writes__85__unnamedblk1__DOT__i);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         500);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         500);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__label = "T08 req_ready=1 after completion"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__86__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         538);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         538);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         163);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         163);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         165);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         165);
    VL_WRITEF_NX("--- T09: req_error on unaligned base address ---\n",0);
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf0c2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         509);
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr = 0x0000000000001001ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count = 1U;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id = 1U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         515);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         515);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__label = "T09 req_error=1 for unaligned addr"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__89__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__exp = 1U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__label = "T09 req_ready=1 (consumed)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__90__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__label = "T09 tracker_busy=0 (rejected)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__91__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid = 0U;
    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_range_unit.clk)");
    co_await vlSelfRef.__VtrigSched_h9dacf008__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_range_unit.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                                         520);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                         520);
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__exp = 0U;
    __Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__got 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error;
    vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__label = "T09 req_error=0 after deassert"s;
    if (((IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__got) 
         == (IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__label));
        tb_cci_memcpy_range_unit__DOT__pass_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_range_unit__DOT__check_bit__92__got);
        tb_cci_memcpy_range_unit__DOT__fail_count = 
            ((IData)(1U) + tb_cci_memcpy_range_unit__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_memcpy_range_unit__DOT__pass_count
                 , '~',32,tb_cci_memcpy_range_unit__DOT__fail_count);
    if ((0U == tb_cci_memcpy_range_unit__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 545, "");
    } else {
        VL_WRITEF_NX("FAILURES detected.\n[%0t] %%Fatal: tb_cci_memcpy_range_unit.sv:548: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_memcpy_range_unit__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 548, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 
                                             38);
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_memcpy_range_unit___024root___eval_triggers_vec__act(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__rst_n__0 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n;
}

bool Vtb_cci_memcpy_range_unit___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_cci_memcpy_range_unit___024root___act_comb__TOP__0(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___act_comb__TOP__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__94__base_addr;
    __Vfunc_cci_page_relative_mask__94__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__94__line_count;
    __Vfunc_cci_page_relative_mask__94__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__94__explicit_mask;
    __Vfunc_cci_page_relative_mask__94__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard 
        = ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
            >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id) 
                                != (0x0000000fU & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U])) 
                               & (((0x000fffffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                                          >> 4U))) 
                                   == (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                       >> 0x0000000cU)) 
                                  & ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                      [(((IData)(0x00000044U) 
                                         + (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                       >> 6U)))) 
                                        >> 5U)] >> 
                                      (0x0000001fU 
                                       & ((IData)(0x00000044U) 
                                          + (0x0000003fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                        >> 6U)))))) 
                                     & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid))))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid));
    __Vfunc_cci_page_relative_mask__94__explicit_mask 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__94__line_count 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__94__base_addr = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__94__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__94__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
                = __Vfunc_cci_page_relative_mask__94__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__94__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count 
            = __Vfunc_cci_page_relative_mask__94__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr 
            = __Vfunc_cci_page_relative_mask__94__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__95__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__95__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__96__addr = vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr;
        vlSelf->__Vfunc_cci_line_idx__96__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__96__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__97__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count 
            = __Vfunc_cci_page_relative_mask__94__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__98__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__99__addr = __Vfunc_cci_page_relative_mask__94__base_addr;
        vlSelf->__Vfunc_cci_line_idx__99__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__99__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r))))))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid)));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
}

void Vtb_cci_memcpy_range_unit___024root___eval_act(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_act\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_memcpy_range_unit___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_memcpy_range_unit___024root___nba_sequent__TOP__0(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                       & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid)) 
                      & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                         + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                            & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r)))) 
                         > (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.dut.i_snoop_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r))))
                     , '#',7,(IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next));
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
    }
}

void Vtb_cci_memcpy_range_unit___024root___nba_sequent__TOP__1(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_all_lines_done__100__line_mask;
    __Vfunc_cci_all_lines_done__100__line_mask = 0;
    QData/*63:0*/ __Vfunc_cci_all_lines_done__100__done_mask;
    __Vfunc_cci_all_lines_done__100__done_mask = 0;
    VlWide<6>/*186:0*/ __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r;
    VL_ZERO_W(187, __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r);
    CData/*0:0*/ __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy = 0;
    CData/*6:0*/ __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r = 0;
    CData/*6:0*/ __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r = 0;
    CData/*0:0*/ __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r = 0;
    // Body
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U];
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy;
    if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__rst_n) {
        if ((0x04000000U & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])) {
            if ((0U == (3U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                              >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done) {
                    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x01000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else if ((1U == (3U & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                                     >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid) {
                    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[(
                                                                                ((IData)(4U) 
                                                                                + (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx)) 
                                                                                >> 5U)] 
                        = (__Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                           [(((IData)(4U) + (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx)) 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx)))));
                }
                __Vfunc_cci_all_lines_done__100__done_mask 
                    = ((((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U])) 
                         << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U])) 
                                               >> 4U))) 
                       | ((1ULL << (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_line_idx)) 
                          & (- (QData)((IData)(((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__wr_done_valid) 
                                                & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker)))))));
                __Vfunc_cci_all_lines_done__100__line_mask 
                    = (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                        << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U])) 
                                              >> 4U)));
                vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done 
                    = ((0ULL != __Vfunc_cci_all_lines_done__100__line_mask) 
                       & ((__Vfunc_cci_all_lines_done__100__done_mask 
                           & __Vfunc_cci_all_lines_done__100__line_mask) 
                          == __Vfunc_cci_all_lines_done__100__line_mask));
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done) {
                    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x02000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else {
                __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                    = (0x03ffffffU & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U]);
            }
        } else if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U] 
                = (0x0000000fU & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U]);
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U] = 0U;
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U] 
                = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask) 
                   << 4U);
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U] 
                = (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask) 
                    >> 0x0000001cU) | ((IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask 
                                                >> 0x00000020U)) 
                                       << 4U));
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U] 
                = (((IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask 
                             >> 0x00000020U)) >> 0x0000001cU) 
                   | ((IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
                               >> 0x0000000cU)) << 4U));
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                = (0x07ffffffU & (0x04000000U | (((IData)(
                                                          (vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
                                                           >> 0x0000000cU)) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr 
                                                              >> 0x0000000cU) 
                                                             >> 0x00000020U)) 
                                                    << 4U))));
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U] 
                = ((0xfffffff0U & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U]) 
                   | (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_source_id));
        }
        if ((((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
              & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid)) 
             & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp) 
                >> 1U))) {
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r = 1U;
        } else if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) {
            if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done) {
                __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r = 0U;
                __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
                __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
                vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            } else {
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted) {
                    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r)));
                }
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) {
                    __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r)));
                }
                if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw) {
                    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req) 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy)))) {
            if (VL_UNLIKELY(((0ULL == vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w)))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_ac_range_gen.sv:57: Assertion failed in %m: %m: start asserted with start_line_mask='0\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.dut.i_ac_gen", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_ac_range_gen.sv", 57, "");
            }
            __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy 
                = (0ULL != vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w);
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                = vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w;
        } else if ((((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
                     & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid)) 
                    & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready))) {
            vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                = ((~ (1ULL << (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx))) 
                   & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask);
            if (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last) {
                __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
            = (0x03ffffffU & __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U]);
        __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
        __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
        __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r = 0U;
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r = 0U;
        __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy = 0U;
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask = 0ULL;
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[1U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U];
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy 
        = __Vdly__tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__write_release_tracker 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
           & (0ULL != vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__remaining_mask));
}

void Vtb_cci_memcpy_range_unit___024root___nba_comb__TOP__0(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__94__base_addr;
    __Vfunc_cci_page_relative_mask__94__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__94__line_count;
    __Vfunc_cci_page_relative_mask__94__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__94__explicit_mask;
    __Vfunc_cci_page_relative_mask__94__explicit_mask = 0;
    // Body
    __Vfunc_cci_page_relative_mask__94__explicit_mask 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__94__line_count 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__94__base_addr = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__94__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__94__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
                = __Vfunc_cci_page_relative_mask__94__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__94__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count 
            = __Vfunc_cci_page_relative_mask__94__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr 
            = __Vfunc_cci_page_relative_mask__94__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__95__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__95__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__96__addr = vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr;
        vlSelf->__Vfunc_cci_line_idx__96__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__96__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__97__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count 
            = __Vfunc_cci_page_relative_mask__94__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__98__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__99__addr = __Vfunc_cci_page_relative_mask__94__base_addr;
        vlSelf->__Vfunc_cci_line_idx__99__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__99__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout;
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask));
}

void Vtb_cci_memcpy_range_unit___024root___nba_comb__TOP__1(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard 
        = ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
            >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id) 
                                != (0x0000000fU & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U])) 
                               & (((0x000fffffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                                          >> 4U))) 
                                   == (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                       >> 0x0000000cU)) 
                                  & ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                      [(((IData)(0x00000044U) 
                                         + (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                       >> 6U)))) 
                                        >> 5U)] >> 
                                      (0x0000001fU 
                                       & ((IData)(0x00000044U) 
                                          + (0x0000003fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                        >> 6U)))))) 
                                     & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid))))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid)));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
    vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r))))))));
}

void Vtb_cci_memcpy_range_unit___024root___eval_nba(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_nba\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr;
    __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr = 0;
    CData/*6:0*/ __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__line_count;
    __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__line_count = 0;
    QData/*63:0*/ __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__explicit_mask;
    __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__explicit_mask = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                           & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid)) 
                          & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r)))) 
                             > (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_range_unit.dut.i_snoop_tracker", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                 + 
                                                 ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                                  & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r))))
                         , '#',7,(IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next));
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_memcpy_range_unit___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__explicit_mask 
            = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_mask;
        __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__line_count 
            = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_line_count;
        __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr 
            = vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_base_addr;
        {
            vlSelf->__Vfunc_cci_page_relative_mask__94__Vfuncout = 0;
            if ((0ULL != __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__explicit_mask)) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
                    = __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__explicit_mask;
                goto __Vlabel0;
            }
            if ((0U != (0x0000003fU & (IData)(__Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count 
                = __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__line_count;
            vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr 
                = __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr;
            vlSelf->__Vfunc_cci_range_fits_page__95__Vfuncout = 0;
            vlSelf->__Vfunc_cci_range_fits_page__95__end_line = 0;
            vlSelfRef.__Vfunc_cci_line_idx__96__addr 
                = vlSelfRef.__Vfunc_cci_range_fits_page__95__base_addr;
            vlSelf->__Vfunc_cci_line_idx__96__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout 
                = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__96__addr 
                                          >> 6U)));
            vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx 
                = vlSelfRef.__Vfunc_cci_line_idx__96__Vfuncout;
            vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line 
                = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_0__cci_line_idx) 
                                  + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count)));
            vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count 
                = vlSelfRef.__Vfunc_cci_range_fits_page__95__line_count;
            vlSelf->__Vfunc_cci_valid_line_count__97__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout 
                = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)) 
                   & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__97__line_count)));
            vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count 
                = vlSelfRef.__Vfunc_cci_valid_line_count__97__Vfuncout;
            vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout 
                = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95____VlefCall_1__cci_valid_line_count) 
                   & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__95__end_line)));
            vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page 
                = vlSelfRef.__Vfunc_cci_range_fits_page__95__Vfuncout;
            if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_0__cci_range_fits_page)))) {
                vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout = 0ULL;
                goto __Vlabel0;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count 
                = __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__line_count;
            {
                vlSelf->__Vfunc_cci_contiguous_mask__98__Vfuncout = 0;
                if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                    goto __Vlabel1;
                }
                if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0ULL;
                    goto __Vlabel1;
                }
                if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count))) {
                    vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout = 0xffffffffffffffffULL;
                    goto __Vlabel1;
                }
                vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout 
                    = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__98__line_count)) 
                       - 1ULL);
                __Vlabel1: ;
            }
            vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
                = vlSelfRef.__Vfunc_cci_contiguous_mask__98__Vfuncout;
            vlSelfRef.__Vfunc_cci_line_idx__99__addr 
                = __Vinline__nba_comb__TOP__0___Vfunc_cci_page_relative_mask__94__base_addr;
            vlSelf->__Vfunc_cci_line_idx__99__Vfuncout = 0;
            vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout 
                = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__99__addr 
                                          >> 6U)));
            vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx 
                = vlSelfRef.__Vfunc_cci_line_idx__99__Vfuncout;
            vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout 
                = (vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_1__cci_contiguous_mask 
                   << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__94____VlefCall_2__cci_line_idx));
            __Vlabel0: ;
        }
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask 
            = vlSelfRef.__Vfunc_cci_page_relative_mask__94__Vfuncout;
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error 
            = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid) 
               & (0ULL == vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask));
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_hazard 
            = ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_source_id) 
                                    != (0x0000000fU 
                                        & vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[0U])) 
                                   & (((0x000fffffffffffffULL 
                                        & (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                                              >> 4U))) 
                                       == (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                           >> 0x0000000cU)) 
                                      & ((vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                          [(((IData)(0x00000044U) 
                                             + (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                           >> 6U)))) 
                                            >> 5U)] 
                                          >> (0x0000001fU 
                                              & ((IData)(0x00000044U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                             >> 6U)))))) 
                                         & ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r
                                                [(((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                               >> 6U)))) 
                                                  >> 5U)] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(4U) 
                                                    + 
                                                    (0x0000003fU 
                                                     & (IData)(
                                                               (vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_addr 
                                                                >> 6U))))))) 
                                            & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__probe_valid))))));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw 
            = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__busy) 
               & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid) 
                  & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
                     & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_ac_gen__DOT__is_last))));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted 
            = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_ready) 
               & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__ac_valid));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req 
            = ((~ (vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[5U] 
                   >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_error)) 
                                       & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__req_valid)));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next 
            = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_count_r) 
                              + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                                 & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__ac_accepted))));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_line_mask_w 
            = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__accept_req)
                ? vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__dec_line_mask
                : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[4U])) 
                    << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[3U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_tracker__DOT__entry_r[2U])) 
                                          >> 4U))));
        vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__snoop_done 
            = ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
               & (((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__all_sent_r) 
                   | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                      & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__ac_gen_done_raw))) 
                  & ((~ ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                         | ((0U == (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next)) 
                            | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r) 
                               & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                  & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_resp) 
                                     >> 1U)))))) & 
                     ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__sent_next) 
                      == (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                         + ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__cr_valid) 
                                            & (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__dut__DOT__i_snoop_tracker__DOT__active_r))))))));
    }
}

void Vtb_cci_memcpy_range_unit___024root___timing_ready(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___timing_ready\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9dacf008__0.ready("@(posedge tb_cci_memcpy_range_unit.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready("@(negedge tb_cci_memcpy_range_unit.clk)");
    }
}

void Vtb_cci_memcpy_range_unit___024root___timing_resume(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___timing_resume\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h9dacf008__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_memcpy_range_unit.clk)");
    vlSelfRef.__VtrigSched_h9dacf0c2__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_memcpy_range_unit.clk)");
    vlSelfRef.__VtrigSched_h9dacf008__0.resume("@(posedge tb_cci_memcpy_range_unit.clk)");
    vlSelfRef.__VtrigSched_h9dacf0c2__0.resume("@(negedge tb_cci_memcpy_range_unit.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_memcpy_range_unit___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_range_unit___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_memcpy_range_unit___024root___eval_phase__act(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_phase__act\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_memcpy_range_unit___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_memcpy_range_unit___024root___timing_ready(vlSelf);
    Vtb_cci_memcpy_range_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_memcpy_range_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_memcpy_range_unit___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_memcpy_range_unit___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_memcpy_range_unit___024root___timing_resume(vlSelf);
        Vtb_cci_memcpy_range_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_memcpy_range_unit___024root___eval_phase__inact(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_phase__inact\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 29, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_memcpy_range_unit___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_memcpy_range_unit___024root___eval_phase__nba(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_phase__nba\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_memcpy_range_unit___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_memcpy_range_unit___024root___eval_nba(vlSelf);
        Vtb_cci_memcpy_range_unit___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_memcpy_range_unit___024root___eval(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_memcpy_range_unit___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 29, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 29, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_memcpy_range_unit___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_range_unit.sv", 29, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_memcpy_range_unit___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_memcpy_range_unit___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_memcpy_range_unit___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0(Vtb_cci_memcpy_range_unit___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf008__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0(Vtb_cci_memcpy_range_unit___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root____VbeforeTrig_h9dacf0c2__0\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_range_unit__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_range_unit__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf008__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9dacf0c2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cci_memcpy_range_unit___024root___eval_debug_assertions(Vtb_cci_memcpy_range_unit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_range_unit___024root___eval_debug_assertions\n"); );
    Vtb_cci_memcpy_range_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
