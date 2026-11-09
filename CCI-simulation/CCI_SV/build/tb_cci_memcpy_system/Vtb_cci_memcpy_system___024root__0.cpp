// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_memcpy_system.h for the primary calling header

#include "Vtb_cci_memcpy_system__pch.h"

VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_system___024root* vlSelf);
VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_memcpy_system___024root* vlSelf);
VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_memcpy_system___024root* vlSelf);

void Vtb_cci_memcpy_system___024root___eval_initial(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_initial\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__clk = 0U;
    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         48);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:49: Assertion failed in %m: WATCHDOG: simulation exceeded 10000 cycles\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 49, "", false);
    co_return;
}

void Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(Vtb_cci_memcpy_system___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(Vtb_cci_memcpy_system___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_memcpy_system__DOT__pass_count;
    tb_cci_memcpy_system__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_memcpy_system__DOT__fail_count;
    tb_cci_memcpy_system__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T01__1____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T01__1____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__9__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__9__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__9__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__9__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__17__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__17__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T02__23____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23____VlefCall_0__line_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__27__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__27__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__27__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__27__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__34__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__34__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__36__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__36__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_1__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__53__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__53__id = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__61__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__61__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_2__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_2__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_1__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__71__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__71__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__79__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__79__id = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__80__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__80__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__cnt = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__92__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__92__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_int__92__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__92__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_2__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_2__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_1__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_0__line_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__base;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__count;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__src;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__n;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__117__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__117__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_b__119__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__119__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__Vfuncout;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__pg;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__li;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__id;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__got;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__exp;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__exp = 0;
    // Body
    tb_cci_memcpy_system__DOT__pass_count = 0U;
    tb_cci_memcpy_system__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    VL_WRITEF_NX("--- T01: single-line system path ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__count = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__2__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__3__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__label = "T01 tracker_busy after accept"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__3__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__4__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__label = "T01 write_release=0 in INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__4__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__5__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__label = "T01 first AC visible"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__5__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__6__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__label = "T01 snoop_error=0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__6__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__7__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__label = "T01 overflow_sticky=0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__7__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T01__Vstatic__cnt 
        = __Vtask_tb_cci_memcpy_system__DOT__collect_acs__8__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__9__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__9__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__test_T01__Vstatic__cnt;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__9__label = "T01 one AC counted"s;
    if ((__Vtask_tb_cci_memcpy_system__DOT__check_int__9__got 
         == __Vtask_tb_cci_memcpy_system__DOT__check_int__9__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__9__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__9__label)
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__9__exp
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__9__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         270);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         270);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__10__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__label = "T01 ac_valid=0 after AC seq"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__10__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__11__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__label = "T01 write_release=0 before CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__11__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__n = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__12__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__13__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__label = "T01 write_release=1 after CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__13__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__14__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__label = "T01 snoop_error=0 after CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__14__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T01__1____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__15__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T01__1____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__16__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__17__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__17__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__18__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__label = "T01 tracker_done after last B"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__18__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__19__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__label = "T01 overflow_sticky=0 end"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__19__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         283);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         283);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__20__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__label = "T01 req_ready=1 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__20__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__21__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__label = "T01 tracker_busy=0 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__21__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         495);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         495);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    VL_WRITEF_NX("--- T02: 4-line system path ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__count = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__24__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__25__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__label = "T02 write_release=0 before ACs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__25__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T02__Vstatic__cnt 
        = __Vtask_tb_cci_memcpy_system__DOT__collect_acs__26__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__27__exp = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__27__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__test_T02__Vstatic__cnt;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__27__label = "T02 4 ACs issued"s;
    if ((__Vtask_tb_cci_memcpy_system__DOT__check_int__27__got 
         == __Vtask_tb_cci_memcpy_system__DOT__check_int__27__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__27__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__27__label)
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__27__exp
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__27__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         297);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         297);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__28__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__label = "T02 ac_valid=0 after AC seq"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__28__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__29__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__label = "T02 write_release=0 before CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__29__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__n = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__30__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__31__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__label = "T02 write_release=1 after 4 CRs"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__31__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i)) {
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__li 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__pg = 1ULL;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__Vfuncout = 0;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__Vfuncout 
            = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__li 
                                                      << 6U)))));
        __Vtask_tb_cci_memcpy_system__DOT__test_T02__23____VlefCall_0__line_addr 
            = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__32__Vfuncout;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__addr 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T02__23____VlefCall_0__line_addr;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__id = 0U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             243);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__id;
        vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
            = __Vtask_tb_cci_memcpy_system__DOT__do_aw__33__addr;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             245);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             245);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i)) {
        __Vtask_tb_cci_memcpy_system__DOT__do_b__34__id = 0U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             251);
        vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__34__id;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             253);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             253);
        vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__exp = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__check_bit__35__got 
            = (IData)((0x06000000U == (0x07000000U 
                                       & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
        vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__label 
            = VL_SFORMATF_N_NX("T02 tracker_done=0 after B %0d",1
                               , '~',32,__Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i) ;
        if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__got) 
             == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__label));
            tb_cci_memcpy_system__DOT__pass_count = 
                ((IData)(1U) + tb_cci_memcpy_system__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__label)
                         , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__exp)
                         , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__35__got);
            tb_cci_memcpy_system__DOT__fail_count = 
                ((IData)(1U) + tb_cci_memcpy_system__DOT__fail_count);
        }
        __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__test_T02__23__unnamedblk3__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__do_b__36__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__36__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__37__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__label = "T02 tracker_done=1 on last B"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__37__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__38__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__label = "T02 snoop_error=0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__38__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__39__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__label = "T02 overflow_sticky=0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__39__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         317);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         317);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__40__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__label = "T02 req_ready=1 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__40__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         496);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         496);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    VL_WRITEF_NX("--- T03: hazard probe across INVALIDATING and TRACKING ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__count = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__43__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__44__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__label = "T03 tracker_busy=1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__44__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__45__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         331);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__46__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__label = "T03 hazard=1 line0 INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__46__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         335);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__47__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__label = "T03 no self-hazard"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__47__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__48__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         340);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         340);
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__n = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__49__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__50__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__label = "T03 write_release=1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__50__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__51__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__52__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__53__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__53__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__54__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         350);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__55__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__label = "T03 hazard=0 line0 after wr_done"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__55__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__li = 1U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__56__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         354);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__57__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__label = "T03 hazard=1 line1 still pending"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__57__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__58__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__label = "T03 tracker_done=0 still"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__58__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__li = 1U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__59__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T03__42____VlefCall_1__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__60__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__61__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__61__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__62__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__label = "T03 tracker_done=1 final"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__62__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         364);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         364);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__63__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__label = "T03 req_ready=1 after DONE"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__63__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         497);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         497);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    VL_WRITEF_NX("--- T04: status signals clean across two requests ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__count = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__66__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__67__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         374);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         374);
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__n = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__68__unnamedblk1__DOT__i);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__69__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_0__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__70__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__71__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__71__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         378);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         378);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__count = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__72__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__73__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         382);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         382);
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__n = 2U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__74__unnamedblk1__DOT__i);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__li = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__75__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_1__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__76__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__li = 1U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_2__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__77__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T04__65____VlefCall_2__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__78__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__79__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__79__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__do_b__80__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__80__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         388);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         388);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__81__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__label = "T04 snoop_error=0 after two requests"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__81__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__82__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__label = "T04 overflow_sticky=0 after two writes"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__82__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__83__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__label = "T04 req_ready=1 idle"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__83__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__84__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__label = "T04 tracker_busy=0 idle"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__84__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         498);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         498);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__cnt = 0U;
    VL_WRITEF_NX("--- T05: snoop_error on last CR with CRRESP[1]=1 ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__count = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__87__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__88__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__label = "T05 tracker_busy=1 after req"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__88__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__89__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__label = "T05 snoop_error=0 before CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__89__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__90__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__label = "T05 write_release=0 in INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__90__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__cnt 
        = __Vtask_tb_cci_memcpy_system__DOT__collect_acs__91__cnt;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__92__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_int__92__got 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__cnt;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__92__label = "T05 1 AC issued"s;
    if ((__Vtask_tb_cci_memcpy_system__DOT__check_int__92__got 
         == __Vtask_tb_cci_memcpy_system__DOT__check_int__92__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__92__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_int__92__label)
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__92__exp
                     , '~',32,__Vtask_tb_cci_memcpy_system__DOT__check_int__92__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         407);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         407);
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         413);
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 2U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         417);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         417);
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__93__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__label = "T05 snoop_error=1 after error CR"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__93__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__94__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__label = "T05 write_release=0 on error"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__94__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__95__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__label = "T05 tracker_done=0 suppressed"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__95__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__96__got 
        = (IData)(((0x04000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])) 
                   & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__label = "T05 invalidation_done=0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__96__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__97__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__label = "T05 tracker_busy=1 stuck INVAL"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__97__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             428);
        __Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_cci_memcpy_system__DOT__test_T05__86__tb_cci_memcpy_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         429);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__98__got 
        = ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__label = "T05 write_release still 0"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__98__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__99__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__label = "T05 snoop_error still 1"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__99__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__100__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__label = "T05 req_ready=0 (still busy)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__100__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__102__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__label = "T05 snoop_error=0 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__102__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__103__got 
        = (1U & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                     >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__label = "T05 req_ready=1 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__103__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__104__got 
        = (1U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__label = "T05 tracker_busy=0 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__104__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         499);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         499);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    VL_WRITEF_NX("--- T06: aw_full_mask and sticky wrapper regression ---\n",0);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__107__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__label = "T06 underflow_sticky=0 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__107__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__108__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__label = "T06 overflow_sticky=0 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__108__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__109__got 
        = (0U != (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__label = "T06 aw_full_mask=0 after reset"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__109__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__src = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__count = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__base = 0x0000000000001000ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         199);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__base;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__count;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id 
        = __Vtask_tb_cci_memcpy_system__DOT__submit_req__110__src;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         205);
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             218);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             218);
        __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt);
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cycle_cnt, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_memcpy_system.sv:222: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__cnt
                         , '~',32,__Vtask_tb_cci_memcpy_system__DOT__collect_acs__111__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 222, "", false);
        }
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         450);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         450);
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__n = 4U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i, __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__n)) {
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             230);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             234);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             234);
        vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__drive_cr_responses__112__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i)) {
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__li 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__pg = 1ULL;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__Vfuncout = 0;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__Vfuncout 
            = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__li 
                                                      << 6U)))));
        __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_0__line_addr 
            = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__113__Vfuncout;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__addr 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_0__line_addr;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__id = 0U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             243);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__id;
        vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
            = __Vtask_tb_cci_memcpy_system__DOT__do_aw__114__addr;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             245);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             245);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk4__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__115__got 
        = (1U & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__label = "T06 aw_full_mask[0]=1 when FIFO full"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__115__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__116__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__label = "T06 underflow_sticky=0 before B"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__116__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__do_b__117__id = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         251);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__117__id;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         253);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__118__got 
        = (1U & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__label = "T06 aw_full_mask[0]=0 after pop"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__118__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i)) {
        __Vtask_tb_cci_memcpy_system__DOT__do_b__119__id = 0U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             251);
        vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__bid = __Vtask_tb_cci_memcpy_system__DOT__do_b__119__id;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             253);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             253);
        vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk5__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__120__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__label = "T06 tracker_done=1 after drain"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__120__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__121__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__label = "T06 underflow_sticky=0 after drain"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__121__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__122__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__label = "T06 overflow_sticky=0 after drain"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__122__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__124__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__label = "T06 underflow_sticky=0 after reset2"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__124__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__125__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__label = "T06 overflow_sticky=0 after reset2"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__125__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__126__got 
        = (0U != (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__label = "T06 aw_full_mask=0 after reset2"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__126__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         472);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         474);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         474);
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__127__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__label = "T06 underflow_sticky=1 after B to empty"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__127__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__128__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__label = "T06 overflow_sticky=0 (underflow only)"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__128__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i)) {
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__li 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__pg = 1ULL;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__Vfuncout = 0;
        __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__Vfuncout 
            = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__li 
                                                      << 6U)))));
        __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_1__line_addr 
            = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__129__Vfuncout;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__addr 
            = __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_1__line_addr;
        __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__id = 1U;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                    "@(negedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             243);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__id;
        vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
            = __Vtask_tb_cci_memcpy_system__DOT__do_aw__130__addr;
        Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                    "@(posedge tb_cci_memcpy_system.clk)");
        co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_memcpy_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                             245);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             245);
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
        __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_memcpy_system__DOT__test_T06__106__unnamedblk6__DOT__i);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__131__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask) 
                 >> 1U));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__label = "T06 aw_full_mask[1]=1 before overflow"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__131__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__li = 4U;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__pg = 1ULL;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__Vfuncout = 0;
    __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__Vfuncout 
        = ((__Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__li 
                                                  << 6U)))));
    __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_2__line_addr 
        = __Vfunc_tb_cci_memcpy_system__DOT__line_addr__132__Vfuncout;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__addr 
        = __Vtask_tb_cci_memcpy_system__DOT__test_T06__106____VlefCall_2__line_addr;
    __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__id = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(vlSelf, 
                                                                "@(negedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93a84__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         243);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__id;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = __Vtask_tb_cci_memcpy_system__DOT__do_aw__133__addr;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         245);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         245);
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__exp = 1U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__134__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__label = "T06 overflow_sticky=1 after AW to full"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__134__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_memcpy_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr = 0ULL;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         188);
    vlSelfRef.tb_cci_memcpy_system__DOT__rst_n = 1U;
    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(vlSelf, 
                                                                "@(posedge tb_cci_memcpy_system.clk)");
    co_await vlSelfRef.__VtrigSched_h61d93dc6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_memcpy_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                                         190);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                         190);
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__136__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__label = "T06 underflow_sticky=0 after reset3"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__136__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__137__got 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__label = "T06 overflow_sticky=0 after reset3"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__137__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__exp = 0U;
    __Vtask_tb_cci_memcpy_system__DOT__check_bit__138__got 
        = (0U != (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__label = "T06 aw_full_mask=0 after reset3"s;
    if (((IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__got) 
         == (IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__label));
        tb_cci_memcpy_system__DOT__pass_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__label)
                     , '#',1,(IData)(__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__exp)
                     , '#',1,__Vtask_tb_cci_memcpy_system__DOT__check_bit__138__got);
        tb_cci_memcpy_system__DOT__fail_count = ((IData)(1U) 
                                                 + tb_cci_memcpy_system__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_memcpy_system__DOT__pass_count
                 , '~',32,tb_cci_memcpy_system__DOT__fail_count);
    if ((0U == tb_cci_memcpy_system__DOT__fail_count)) {
        VL_WRITEF_NX("All system tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 506, "");
    } else {
        VL_WRITEF_NX("FAILURES detected.\n[%0t] %%Fatal: tb_cci_memcpy_system.sv:509: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_memcpy_system__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 509, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 
                                             37);
        vlSelfRef.tb_cci_memcpy_system__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_memcpy_system___024root___eval_triggers_vec__act(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__rst_n;
}

bool Vtb_cci_memcpy_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_memcpy_system___024root___act_comb__TOP__0(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___act_comb__TOP__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__140__base_addr;
    __Vfunc_cci_page_relative_mask__140__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__140__line_count;
    __Vfunc_cci_page_relative_mask__140__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__140__explicit_mask;
    __Vfunc_cci_page_relative_mask__140__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_memcpy_system__DOT__bid][vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_memcpy_system__DOT__bid]];
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard 
        = ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
            >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id) 
                                != (0x0000000fU & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U])) 
                               & (((0x000fffffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                                          >> 4U))) 
                                   == (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                       >> 0x0000000cU)) 
                                  & ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r
                                      [(((IData)(0x00000044U) 
                                         + (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                       >> 6U)))) 
                                        >> 5U)] >> 
                                      (0x0000001fU 
                                       & ((IData)(0x00000044U) 
                                          + (0x0000003fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                        >> 6U)))))) 
                                     & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid))))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
               [vlSelfRef.tb_cci_memcpy_system__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
              [vlSelfRef.tb_cci_memcpy_system__DOT__bid]
              [vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
              [vlSelfRef.tb_cci_memcpy_system__DOT__bid]]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid));
    __Vfunc_cci_page_relative_mask__140__explicit_mask 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__140__line_count 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__140__base_addr 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__140__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__140__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout 
                = __Vfunc_cci_page_relative_mask__140__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__140__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count 
            = __Vfunc_cci_page_relative_mask__140__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__base_addr 
            = __Vfunc_cci_page_relative_mask__140__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__141__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__141__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__142__addr = vlSelfRef.__Vfunc_cci_range_fits_page__141__base_addr;
        vlSelf->__Vfunc_cci_line_idx__142__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__142__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__142__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__142__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__143__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__143__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__143__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__141__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count 
            = __Vfunc_cci_page_relative_mask__140__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__144__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__145__addr = __Vfunc_cci_page_relative_mask__140__base_addr;
        vlSelf->__Vfunc_cci_line_idx__145__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__145__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__145__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__145__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout;
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_memcpy_system__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r))))))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
}

void Vtb_cci_memcpy_system___024root___eval_act(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_act\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_memcpy_system___024root___nba_sequent__TOP__0(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                       & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid)) 
                      & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                         + ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                                            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r)))) 
                         > (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_range_unit.i_snoop_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r))))
                     , '#',7,(IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next));
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
    }
    if (vlSelfRef.tb_cci_memcpy_system__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__overflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:136: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 136, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__underflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:137: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 137, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[0]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[1]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[2]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[3]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[4]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[5]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[6]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[7]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[8]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[9]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[10]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[11]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[12]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[13]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[14]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.gen_sva_depth[15]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
        }
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=0 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=1 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=2 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=3 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=4 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=5 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=6 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=7 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=8 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=9 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=10 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=11 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=12 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=13 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=14 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=15 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
                      & (0U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                         [vlSelfRef.tb_cci_memcpy_system__DOT__bid]))))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:152: %m: %m: B response for AWID=%0d arrived with empty FIFO \342\200\224 underflow; B cannot be matched to any AW\n",4, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_wr_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid));
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__overflow_sticky));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__underflow_sticky));
}

void Vtb_cci_memcpy_system___024root___nba_sequent__TOP__1(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_all_lines_done__146__line_mask;
    __Vfunc_cci_all_lines_done__146__line_mask = 0;
    QData/*63:0*/ __Vfunc_cci_all_lines_done__146__done_mask;
    __Vfunc_cci_all_lines_done__146__done_mask = 0;
    VlWide<6>/*186:0*/ __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r;
    VL_ZERO_W(187, __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r);
    CData/*0:0*/ __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy = 0;
    CData/*6:0*/ __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r = 0;
    CData/*6:0*/ __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r = 0;
    CData/*0:0*/ __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0;
    // Body
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U];
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0U;
    __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0U;
    if (vlSelfRef.tb_cci_memcpy_system__DOT__rst_n) {
        if ((0x04000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])) {
            if ((0U == (3U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                              >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done) {
                    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x01000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else if ((1U == (3U & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                                     >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_valid) {
                    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[(
                                                                                ((IData)(4U) 
                                                                                + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx)) 
                                                                                >> 5U)] 
                        = (__Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r
                           [(((IData)(4U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx)) 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx)))));
                }
                __Vfunc_cci_all_lines_done__146__done_mask 
                    = ((((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U])) 
                         << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U])) 
                                               >> 4U))) 
                       | ((1ULL << (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx)) 
                          & (- (QData)((IData)(((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_valid) 
                                                & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker)))))));
                __Vfunc_cci_all_lines_done__146__line_mask 
                    = (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                        << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U])) 
                                              >> 4U)));
                vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done 
                    = ((0ULL != __Vfunc_cci_all_lines_done__146__line_mask) 
                       & ((__Vfunc_cci_all_lines_done__146__done_mask 
                           & __Vfunc_cci_all_lines_done__146__line_mask) 
                          == __Vfunc_cci_all_lines_done__146__line_mask));
                if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done) {
                    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x02000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else {
                __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                    = (0x03ffffffU & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U]);
            }
        } else if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U] 
                = (0x0000000fU & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U]);
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U] = 0U;
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U] 
                = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask) 
                   << 4U);
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U] 
                = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask) 
                    >> 0x0000001cU) | ((IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask 
                                                >> 0x00000020U)) 
                                       << 4U));
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U] 
                = (((IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask 
                             >> 0x00000020U)) >> 0x0000001cU) 
                   | ((IData)((vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
                               >> 0x0000000cU)) << 4U));
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
                = (0x07ffffffU & (0x04000000U | (((IData)(
                                                          (vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
                                                           >> 0x0000000cU)) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr 
                                                              >> 0x0000000cU) 
                                                             >> 0x00000020U)) 
                                                    << 4U))));
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U] 
                = ((0xfffffff0U & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U]) 
                   | (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_source_id));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U]) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 1U;
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = (2U & (- (IData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_track_valid))));
            __VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U])));
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]) {
            vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 1U;
        }
        if ((((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
              & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid)) 
             & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp) 
                >> 1U))) {
            vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r = 1U;
        }
        if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
            vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r = 1U;
        } else if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) {
            if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done) {
                __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r = 0U;
                __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
                __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
                vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            } else {
                if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted) {
                    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r)));
                }
                if (vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) {
                    __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r)));
                }
                if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw) {
                    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req) 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy)))) {
            if (VL_UNLIKELY(((0ULL == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w)))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_ac_range_gen.sv:57: Assertion failed in %m: %m: start asserted with start_line_mask='0\n",3, 'M',vlSymsp->name(),"tb_cci_memcpy_system.dut.i_range_unit.i_ac_gen", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_ac_range_gen.sv", 57, "");
            }
            __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy 
                = (0ULL != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w);
            vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w;
        } else if ((((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
                     & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid)) 
                    & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready))) {
            vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                = ((~ (1ULL << (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx))) 
                   & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask);
            if (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last) {
                __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
             & (0U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                [vlSelfRef.tb_cci_memcpy_system__DOT__bid]))) {
            vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 1U;
        }
        if ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
             & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])))) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])) 
                    & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])) {
            __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 
                = (7U & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 1U;
        }
    } else {
        __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
            = (0x03ffffffU & __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U]);
        __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 1U;
        __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 1U;
        vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky = 0U;
        __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
        __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
        __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r = 0U;
        __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask = 0ULL;
        vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky = 0U;
        __VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 1U;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[1U];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U];
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[0U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[0U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[1U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[1U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[2U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[2U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[3U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[3U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[4U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[4U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[5U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[5U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[6U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[6U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[7U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[7U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[8U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[8U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[9U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[9U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[10U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[10U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[11U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[11U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[12U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[12U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[13U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[13U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[14U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[14U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[15U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[15U][__VdlyDim0__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] = 0U;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r;
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r;
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r;
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy 
        = __Vdly__tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy;
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    }
    if (__VdlySet__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] = 0U;
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] = 0U;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid = 
        ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
         & (0ULL != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xfffcU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
               << 1U) | (4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xfff3U & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
               << 3U) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
                         << 2U)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xffcfU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
               << 5U) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
                         << 4U)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xff3fU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
               << 7U) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
                         << 6U)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xfcffU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
               << 9U) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
                         << 8U)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xf3ffU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
               << 0x0000000bU) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
                                  << 0x0000000aU)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0xcfffU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
               << 0x0000000dU) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
                                  << 0x0000000cU)));
    vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask 
        = ((0x3fffU & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
               << 0x0000000fU) | ((4U == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
                                  << 0x0000000eU)));
}

void Vtb_cci_memcpy_system___024root___nba_comb__TOP__0(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__140__base_addr;
    __Vfunc_cci_page_relative_mask__140__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__140__line_count;
    __Vfunc_cci_page_relative_mask__140__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__140__explicit_mask;
    __Vfunc_cci_page_relative_mask__140__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__awid)));
    __Vfunc_cci_page_relative_mask__140__explicit_mask 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__140__line_count 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__140__base_addr 
        = vlSelfRef.tb_cci_memcpy_system__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__140__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__140__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout 
                = __Vfunc_cci_page_relative_mask__140__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__140__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count 
            = __Vfunc_cci_page_relative_mask__140__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__base_addr 
            = __Vfunc_cci_page_relative_mask__140__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__141__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__141__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__142__addr = vlSelfRef.__Vfunc_cci_range_fits_page__141__base_addr;
        vlSelf->__Vfunc_cci_line_idx__142__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__142__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__142__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__142__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__141__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__143__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__143__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__143__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__143__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__141__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__141__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__141__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count 
            = __Vfunc_cci_page_relative_mask__140__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__144__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__144__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__144__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__145__addr = __Vfunc_cci_page_relative_mask__140__base_addr;
        vlSelf->__Vfunc_cci_line_idx__145__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__145__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__145__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__145__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__140____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__140__Vfuncout;
    vlSelfRef.tb_cci_memcpy_system__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask));
}

void Vtb_cci_memcpy_system___024root___nba_comb__TOP__1(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__probe_hazard 
        = ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
            >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__probe_source_id) 
                                != (0x0000000fU & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[0U])) 
                               & (((0x000fffffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                                          >> 4U))) 
                                   == (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                       >> 0x0000000cU)) 
                                  & ((vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r
                                      [(((IData)(0x00000044U) 
                                         + (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                       >> 6U)))) 
                                        >> 5U)] >> 
                                      (0x0000001fU 
                                       & ((IData)(0x00000044U) 
                                          + (0x0000003fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                        >> 6U)))))) 
                                     & ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_memcpy_system__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__probe_valid))))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_memcpy_system__DOT__bid][vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_memcpy_system__DOT__bid]];
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
               [vlSelfRef.tb_cci_memcpy_system__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
              [vlSelfRef.tb_cci_memcpy_system__DOT__bid]
              [vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
              [vlSelfRef.tb_cci_memcpy_system__DOT__bid]]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid)));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r))))))));
}

void Vtb_cci_memcpy_system___024root___eval_nba(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_nba\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_cci_memcpy_system___024root___timing_ready(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___timing_ready\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready("@(posedge tb_cci_memcpy_system.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h61d93a84__0.ready("@(negedge tb_cci_memcpy_system.clk)");
    }
}

void Vtb_cci_memcpy_system___024root___timing_resume(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___timing_resume\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h61d93dc6__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_memcpy_system.clk)");
    vlSelfRef.__VtrigSched_h61d93a84__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_memcpy_system.clk)");
    vlSelfRef.__VtrigSched_h61d93dc6__0.resume("@(posedge tb_cci_memcpy_system.clk)");
    vlSelfRef.__VtrigSched_h61d93a84__0.resume("@(negedge tb_cci_memcpy_system.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_memcpy_system___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_memcpy_system___024root___eval_phase__act(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_phase__act\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_memcpy_system___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_memcpy_system___024root___timing_ready(vlSelf);
    Vtb_cci_memcpy_system___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_memcpy_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_memcpy_system___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_memcpy_system___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_memcpy_system___024root___timing_resume(vlSelf);
        Vtb_cci_memcpy_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_memcpy_system___024root___eval_phase__inact(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_phase__inact\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 28, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_memcpy_system___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_memcpy_system___024root___eval_phase__nba(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_phase__nba\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_memcpy_system___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_memcpy_system___024root___eval_nba(vlSelf);
        Vtb_cci_memcpy_system___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_memcpy_system___024root___sample(Vtb_cci_memcpy_system___024root* vlSelf);

void Vtb_cci_memcpy_system___024root___eval(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vtb_cci_memcpy_system___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_memcpy_system___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 28, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 28, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_memcpy_system___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 28, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_memcpy_system___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_memcpy_system___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_memcpy_system___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0(Vtb_cci_memcpy_system___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93dc6__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0(Vtb_cci_memcpy_system___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root____VbeforeTrig_h61d93a84__0\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93dc6__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61d93a84__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_memcpy_system___024root___sample(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___sample\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__overflow_sticky 
        = vlSelfRef.tb_cci_memcpy_system__DOT__overflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__underflow_sticky 
        = vlSelfRef.tb_cci_memcpy_system__DOT__underflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth 
        = vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth;
    vlSelfRef.__Vsampled_TOP__tb_cci_memcpy_system__DOT__rst_n 
        = vlSelfRef.tb_cci_memcpy_system__DOT__rst_n;
}

#ifdef VL_DEBUG
void Vtb_cci_memcpy_system___024root___eval_debug_assertions(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_debug_assertions\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
