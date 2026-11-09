// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_existing_system.h for the primary calling header

#include "Vtb_cci_existing_system__pch.h"

VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_existing_system___024root* vlSelf);
VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_existing_system___024root* vlSelf);
VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_existing_system___024root* vlSelf);

void Vtb_cci_existing_system___024root___eval_initial(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_initial\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_existing_system__DOT__clk = 0U;
    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         42);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_existing_system.sv:43: Assertion failed in %m: WATCHDOG: simulation exceeded 10000 cycles\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 43, "", false);
    co_return;
}

void Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(Vtb_cci_existing_system___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(Vtb_cci_existing_system___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_existing_system__DOT__pass_count;
    tb_cci_existing_system__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_existing_system__DOT__fail_count;
    tb_cci_existing_system__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T01__1____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T01__1____VlefCall_0__line_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i;
    __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__2__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__2__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__2__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__2__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__3__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__3__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__3__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__4__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__4__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__4__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__5__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__5__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__5__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__6__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__6__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__7__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__7__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__7__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__9__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__9__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__9__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__9__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__9__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__9__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__10__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__10__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__10__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__10__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__10__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__10__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__11__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__11__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__12__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__12__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__12__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__12__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__14__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__14__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__14__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__15__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__15__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__15__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__16__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__16__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__17__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__17__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__17__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__17__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__18__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__18__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__18__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__19__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__19__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__19__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__19__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__20__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__20__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__20__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__20__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__21__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__21__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__21__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__21__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T02__23____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T02__23____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__24__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__24__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__24__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__25__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__25__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__25__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__26__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__26__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__26__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__27__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__27__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__27__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__27__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__29__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__29__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__29__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__30__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__30__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__30__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__31__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__31__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__32__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__32__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__32__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__32__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__33__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__33__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__33__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__34__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__34__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__34__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__34__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__36__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__36__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__36__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__37__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__37__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__37__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__38__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__38__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__39__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__39__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__39__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__39__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__40__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__40__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__40__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__40__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T03__42____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T03__42____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__43__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__43__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__43__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__44__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__44__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__44__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__45__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__45__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__45__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__46__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__46__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__46__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__46__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__48__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__48__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__48__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__49__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__49__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__49__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__50__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__50__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__51__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__51__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__51__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__51__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_1__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__54__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__54__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__54__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__55__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__55__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__55__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__56__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__56__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__56__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__57__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__57__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__57__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__58__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__58__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__59__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__59__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__59__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__59__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__60__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__60__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__60__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__60__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__62__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__62__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__62__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__63__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__63__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__63__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__64__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__64__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__65__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__65__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__65__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__65__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_1__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__68__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__68__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__68__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__69__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__69__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__69__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__src = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__71__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__71__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__71__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__72__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__72__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__72__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__73__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__73__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__74__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__74__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__74__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__74__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__75__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__75__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__75__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__75__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__76__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__76__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__76__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__77__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__77__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__77__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__78__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__78__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__78__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__78__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__80__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__80__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__80__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__81__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__81__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__81__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__82__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__82__id = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__84__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__84__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__84__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__85__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__85__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__85__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__86__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__86__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__87__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__87__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__87__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__87__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i;
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i;
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__90__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__90__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__90__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__90__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__91__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__91__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__91__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__91__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__91__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__91__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__92__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__92__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__92__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__92__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__93__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__93__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__93__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__94__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__94__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__94__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__94__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__95__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__95__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__96__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__96__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__96__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__96__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__97__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__97__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__97__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__97__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__98__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__98__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__99__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__99__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__99__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__99__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__test_T07__101____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__test_T07__101____VlefCall_0__line_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li;
    __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__102__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__102__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__102__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__103__base;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__103__mask;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__submit_req__103__src;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__104__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__104__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__104__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__104__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__105__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__105__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__105__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__105__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__106__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__106__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__106__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__107__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__107__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__107__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__107__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__108__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__108__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__108__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__109__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__109__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__109__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__109__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__111__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__111__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__111__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__111__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__111__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__111__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__112__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__112__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__112__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__112__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__112__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__112__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__113__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__113__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__114__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__114__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__114__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__114__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__id;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__pg;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__li;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__116__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__116__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__116__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__117__id;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__117__addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_existing_system__DOT__do_aw__117__trk;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_existing_system__DOT__do_b__118__id;
    __Vtask_tb_cci_existing_system__DOT__do_b__118__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__119__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__119__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__119__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__119__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__120__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__120__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__120__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__120__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__121__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__121__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__121__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__121__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__124__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__124__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__124__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__125__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__125__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__125__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__125__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__126__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__126__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__126__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__126__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__127__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__127__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__127__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__127__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__128__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__128__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__128__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__128__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__129__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__129__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__129__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__129__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__132__Vfuncout;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__132__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_existing_system__DOT__line_addr__132__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__133__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__133__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__133__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__133__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__134__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__134__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__134__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__134__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__135__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__135__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__135__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__135__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__136__got;
    __Vtask_tb_cci_existing_system__DOT__check_bit__136__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_existing_system__DOT__check_bit__136__exp;
    __Vtask_tb_cci_existing_system__DOT__check_bit__136__exp = 0;
    // Body
    tb_cci_existing_system__DOT__pass_count = 0U;
    tb_cci_existing_system__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T01: 4-line normal request \342\206\222 tracker_done ---\n",0);
    __Vtask_tb_cci_existing_system__DOT__check_bit__2__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__2__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__2__label = "T01 req_ready=1 idle"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__2__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__2__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__2__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__2__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__2__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__2__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__3__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__3__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__3__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T01__1____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__3__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__mask = 0x000000000000000fULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__4__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T01__1____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__4__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__4__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__4__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__5__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__5__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__5__label = "T01 tracker_busy after accept"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__5__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__5__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__6__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__6__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__6__label = "T01 req_ready=0 while busy"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__6__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__6__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__7__got 
        = vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__7__label = "T01 overflow_sticky=0"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__7__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__7__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i)) {
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__li 
            = __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i;
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__pg = 1ULL;
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__id = 0U;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__9__li 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__li;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__9__pg 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__pg;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__9__Vfuncout = 0;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__9__Vfuncout 
            = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__9__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_existing_system__DOT__line_addr__9__li 
                                                      << 6U)))));
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8____VlefCall_0__line_addr 
            = __Vfunc_tb_cci_existing_system__DOT__line_addr__9__Vfuncout;
        __Vtask_tb_cci_existing_system__DOT__do_aw__10__trk = 1U;
        __Vtask_tb_cci_existing_system__DOT__do_aw__10__addr 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8____VlefCall_0__line_addr;
        __Vtask_tb_cci_existing_system__DOT__do_aw__10__id 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             171);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__awid 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__10__id;
        vlSelfRef.tb_cci_existing_system__DOT__awaddr 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__10__addr;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__10__trk;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             173);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             173);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_existing_system__DOT__do_b__11__id 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__8__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             179);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__bid 
            = __Vtask_tb_cci_existing_system__DOT__do_b__11__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             181);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             181);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
        __Vtask_tb_cci_existing_system__DOT__check_bit__12__exp = 0U;
        __Vtask_tb_cci_existing_system__DOT__check_bit__12__got 
            = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
               & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
        vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__12__label 
            = VL_SFORMATF_N_NX("T01 tracker_done=0 after %0d done",1
                               , '~',32,((IData)(1U) 
                                         + __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i)) ;
        if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__12__got) 
             == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__12__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__12__label));
            tb_cci_existing_system__DOT__pass_count 
                = ((IData)(1U) + tb_cci_existing_system__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__12__label)
                         , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__12__exp)
                         , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__12__got);
            tb_cci_existing_system__DOT__fail_count 
                = ((IData)(1U) + tb_cci_existing_system__DOT__fail_count);
        }
        __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_existing_system__DOT__test_T01__1__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__li = 3U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__14__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__14__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__14__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__14__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__15__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__15__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__15__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__15__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__16__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__13__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__16__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__17__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__17__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__17__label = "T01 tracker_done=1 last done"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__17__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__17__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__17__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__17__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__17__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__17__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         211);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         211);
    __Vtask_tb_cci_existing_system__DOT__check_bit__18__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__18__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__18__label = "T01 req_ready=1 after release"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__18__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__18__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__19__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__19__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__19__label = "T01 tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__19__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__19__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__19__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__19__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__19__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__19__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__20__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__20__got 
        = vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__20__label = "T01 overflow_sticky=0 final"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__20__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__20__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__20__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__20__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__20__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__20__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__21__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__21__got 
        = vlSelfRef.tb_cci_existing_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__21__label = "T01 underflow_sticky=0 final"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__21__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__21__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__21__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__21__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__21__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__21__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         402);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         402);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T02: probe hazard during active request ---\n",0);
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__24__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__24__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__24__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T02__23____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__24__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__mask = 3ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__25__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T02__23____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__25__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__25__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__25__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__26__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__26__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__26__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__26__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         226);
    __Vtask_tb_cci_existing_system__DOT__check_bit__27__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__27__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__27__label = "T02 hazard=1 before any done"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__27__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__27__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__27__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__27__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__27__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__27__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__29__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__29__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__29__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__29__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__30__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__30__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__30__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__30__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__31__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__28__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__31__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__32__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__32__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__32__label = "T02 hazard=0 for done line 0"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__32__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__32__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__32__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__32__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__32__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__32__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__li = 1U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__33__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__33__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__33__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__33__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         235);
    __Vtask_tb_cci_existing_system__DOT__check_bit__34__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__34__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__34__label = "T02 hazard=1 for pending line 1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__34__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__34__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__34__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__34__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__34__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__34__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__li = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__36__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__36__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__36__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__36__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__37__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__37__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__37__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__37__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__38__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__35__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__38__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__39__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__39__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__39__label = "T02 tracker_done=1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__39__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__39__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__39__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__39__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__39__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__39__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__40__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__40__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__40__label = "T02 hazard=0 after all done"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__40__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__40__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__40__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__40__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__40__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__40__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         242);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         242);
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         403);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         403);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T03: same-source probe \342\200\224 no hazard ---\n",0);
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__43__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__43__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__43__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T03__42____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__43__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__mask = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__44__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T03__42____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__44__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__44__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__44__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 1U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__45__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__45__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__45__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__45__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         253);
    __Vtask_tb_cci_existing_system__DOT__check_bit__46__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__46__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__46__label = "T03 hazard=0 same source"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__46__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__46__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__46__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__46__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__46__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__46__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__48__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__48__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__48__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__48__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__49__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__49__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__49__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__49__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__50__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__47__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__50__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__51__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__51__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__51__label = "T03 tracker_done=1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__51__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__51__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__51__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__51__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__51__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__51__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         259);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         259);
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         404);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         404);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T04: CCI_WR_NONE AW/B ordering only, no completion ---\n",0);
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__54__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__54__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__54__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__54__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__mask = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__55__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__55__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__55__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__55__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__56__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__56__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__56__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__56__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__trk = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__addr 
        = __Vtask_tb_cci_existing_system__DOT__test_T04__53____VlefCall_1__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__57__id = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__57__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__57__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__57__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__58__id = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__58__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__59__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__59__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__59__label = "T04 tracker_done=0 after NONE"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__59__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__59__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__59__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__59__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__59__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__59__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__60__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__60__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__60__label = "T04 tracker_busy=1 still"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__60__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__60__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__60__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__60__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__60__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__60__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__62__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__62__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__62__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__62__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__63__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__63__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__63__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__63__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__64__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__61__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__64__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__65__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__65__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__65__label = "T04 tracker_done=1 after NORMAL"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__65__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__65__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__65__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__65__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__65__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__65__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         276);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         276);
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         405);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         405);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T05: back-to-back requests ---\n",0);
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__68__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__68__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__68__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__68__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__mask = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__69__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__69__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__69__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__69__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__71__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__71__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__71__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__71__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__72__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__72__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__72__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__72__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__73__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__70__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__73__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__74__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__74__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__74__label = "T05 done1=1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__74__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__74__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__74__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__74__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__74__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__74__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         286);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         286);
    __Vtask_tb_cci_existing_system__DOT__check_bit__75__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__75__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__75__label = "T05 req_ready for req2"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__75__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__75__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__75__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__75__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__75__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__75__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__pg = 2ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__76__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__76__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__76__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__76__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__src = 2U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__mask = 3ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__77__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T05__67____VlefCall_1__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__77__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__77__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__77__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__78__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__78__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__78__label = "T05 busy for req2"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__78__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__78__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__78__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__78__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__78__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__78__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__pg = 2ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__80__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__80__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__80__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__80__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__81__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__81__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__81__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__81__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__82__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__79__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__82__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__li = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__pg = 2ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__84__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__84__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__84__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__84__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__85__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__85__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__85__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__85__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__86__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__83__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__86__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__87__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__87__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__87__label = "T05 done2=1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__87__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__87__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__87__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__87__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__87__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__87__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         295);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         295);
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         406);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         406);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T06: aw_full / overflow / underflow sticky ---\n",0);
    __Vtask_tb_cci_existing_system__DOT__check_bit__90__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__90__got 
        = vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__90__label = "T06 overflow=0 init"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__90__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__90__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__90__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__90__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__90__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__90__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i = 0U;
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i)) {
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             337);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__91__li 
            = __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__91__pg = 1ULL;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__91__Vfuncout = 0;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__91__Vfuncout 
            = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__91__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_existing_system__DOT__line_addr__91__li 
                                                      << 6U)))));
        vlSelfRef.tb_cci_existing_system__DOT__awaddr 
            = __Vfunc_tb_cci_existing_system__DOT__line_addr__91__Vfuncout;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             340);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             340);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk3__DOT__i);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__92__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__92__got 
        = (1U & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__92__label = "T06 aw_full[0]=1"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__92__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__92__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__92__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__92__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__92__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__92__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         346);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__93__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__93__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__93__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vfunc_tb_cci_existing_system__DOT__line_addr__93__Vfuncout;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         349);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         349);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__94__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__94__got 
        = vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__94__label = "T06 overflow=1 after overfull"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__94__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__94__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__94__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__94__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__94__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__94__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i)) {
        __Vtask_tb_cci_existing_system__DOT__do_b__95__id = 0U;
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             179);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__bid 
            = __Vtask_tb_cci_existing_system__DOT__do_b__95__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             181);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             181);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
        __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_existing_system__DOT__test_T06__89__unnamedblk4__DOT__i);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__96__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__96__got 
        = (1U & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__96__label = "T06 aw_full[0]=0 after drain"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__96__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__96__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__96__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__96__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__96__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__96__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__97__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__97__got 
        = vlSelfRef.tb_cci_existing_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__97__label = "T06 underflow=0 during drain"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__97__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__97__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__97__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__97__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__97__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__97__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__do_b__98__id = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__98__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__99__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__99__got 
        = vlSelfRef.tb_cci_existing_system__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__99__label = "T06 underflow=1 after over-drain"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__99__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__99__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__99__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__99__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__99__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__99__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         407);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         407);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T07: arbitrary line positions (lines 20-23) ---\n",0);
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__102__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__102__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__102__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__test_T07__101____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__102__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__src = 1U;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__mask = 0x0000000000f00000ULL;
    __Vtask_tb_cci_existing_system__DOT__submit_req__103__base 
        = __Vtask_tb_cci_existing_system__DOT__test_T07__101____VlefCall_0__line_addr;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         156);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__103__base;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__103__mask;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id 
        = __Vtask_tb_cci_existing_system__DOT__submit_req__103__src;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         161);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__104__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__104__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__104__label = "T07 tracker_busy after alloc"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__104__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__104__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__104__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__104__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__104__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__104__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__105__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__105__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__105__label = "T07 req_ready=0 while busy"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__105__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__105__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__105__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__105__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__105__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__105__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__li = 0x00000014U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__106__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__106__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__106__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__106__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         310);
    __Vtask_tb_cci_existing_system__DOT__check_bit__107__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__107__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__107__label = "T07 hazard=1 for line 20"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__107__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__107__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__107__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__107__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__107__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__107__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__li = 4U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__108__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__108__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__108__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__108__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         313);
    __Vtask_tb_cci_existing_system__DOT__check_bit__109__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__109__got 
        = (0U != (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__109__label = "T07 hazard=0 for unallocated line 4"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__109__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__109__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__109__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__109__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__109__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__109__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li = 0U;
    __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li = 0x00000014U;
    while (VL_GTES_III(32, 0x00000016U, __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li)) {
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__li 
            = __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li;
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__pg = 1ULL;
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__id = 0U;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__111__li 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__li;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__111__pg 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__pg;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__111__Vfuncout = 0;
        __Vfunc_tb_cci_existing_system__DOT__line_addr__111__Vfuncout 
            = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__111__pg 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_existing_system__DOT__line_addr__111__li 
                                                      << 6U)))));
        __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110____VlefCall_0__line_addr 
            = __Vfunc_tb_cci_existing_system__DOT__line_addr__111__Vfuncout;
        __Vtask_tb_cci_existing_system__DOT__do_aw__112__trk = 1U;
        __Vtask_tb_cci_existing_system__DOT__do_aw__112__addr 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110____VlefCall_0__line_addr;
        __Vtask_tb_cci_existing_system__DOT__do_aw__112__id 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             171);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__awid 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__112__id;
        vlSelfRef.tb_cci_existing_system__DOT__awaddr 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__112__addr;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
            = __Vtask_tb_cci_existing_system__DOT__do_aw__112__trk;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             173);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             173);
        vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_existing_system__DOT__do_b__113__id 
            = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__110__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                      "@(negedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             179);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__bid 
            = __Vtask_tb_cci_existing_system__DOT__do_b__113__id;
        Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                      "@(posedge tb_cci_existing_system.clk)");
        co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_existing_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                             181);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             181);
        vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
        __Vtask_tb_cci_existing_system__DOT__check_bit__114__exp = 0U;
        __Vtask_tb_cci_existing_system__DOT__check_bit__114__got 
            = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
               & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
        vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__114__label 
            = VL_SFORMATF_N_NX("T07 tracker_done=0 after line %0d",1
                               , '~',32,__Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li) ;
        if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__114__got) 
             == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__114__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__114__label));
            tb_cci_existing_system__DOT__pass_count 
                = ((IData)(1U) + tb_cci_existing_system__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__114__label)
                         , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__114__exp)
                         , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__114__got);
            tb_cci_existing_system__DOT__fail_count 
                = ((IData)(1U) + tb_cci_existing_system__DOT__fail_count);
        }
        __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li 
            = ((IData)(1U) + __Vtask_tb_cci_existing_system__DOT__test_T07__101__unnamedblk2__DOT__li);
    }
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__li = 0x00000017U;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__pg = 1ULL;
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__id = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__li 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__li;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__pg 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__pg;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__116__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__116__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__116__li 
                                                  << 6U)))));
    __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__116__Vfuncout;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__trk = 1U;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__addr 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115____VlefCall_0__line_addr;
    __Vtask_tb_cci_existing_system__DOT__do_aw__117__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         171);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = __Vtask_tb_cci_existing_system__DOT__do_aw__117__id;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = __Vtask_tb_cci_existing_system__DOT__do_aw__117__addr;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type 
        = __Vtask_tb_cci_existing_system__DOT__do_aw__117__trk;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         173);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         173);
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_existing_system__DOT__do_b__118__id 
        = __Vtask_tb_cci_existing_system__DOT__do_normal_completion__115__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         179);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = __Vtask_tb_cci_existing_system__DOT__do_b__118__id;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         181);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         181);
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__119__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__119__got 
        = ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__119__label = "T07 tracker_done=1 after line 23"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__119__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__119__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__119__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__119__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__119__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__119__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         325);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         325);
    __Vtask_tb_cci_existing_system__DOT__check_bit__120__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__120__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__120__label = "T07 req_ready=1 after done"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__120__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__120__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__120__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__120__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__120__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__120__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__121__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__121__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__121__label = "T07 tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__121__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__121__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__121__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__121__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__121__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__121__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         408);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         408);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T08: normal_req_error on zero mask ---\n",0);
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         366);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__124__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__124__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__124__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__124__Vfuncout;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         371);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         371);
    __Vtask_tb_cci_existing_system__DOT__check_bit__125__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__125__got 
        = vlSelfRef.tb_cci_existing_system__DOT__normal_req_error;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__125__label = "T08 normal_req_error=1 zero mask"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__125__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__125__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__125__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__125__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__125__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__125__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__126__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__126__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__126__label = "T08 req_ready=1 (idle)"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__126__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__126__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__126__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__126__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__126__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__126__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__127__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__127__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__127__label = "T08 tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__127__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__127__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__127__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__127__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__127__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__127__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         376);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         376);
    __Vtask_tb_cci_existing_system__DOT__check_bit__128__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__128__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__128__label = "T08 tracker_busy=0 next cycle"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__128__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__128__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__128__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__128__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__128__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__128__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__129__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__129__got 
        = vlSelfRef.tb_cci_existing_system__DOT__normal_req_error;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__129__label = "T08 normal_req_error=0 idle"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__129__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__129__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__129__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__129__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__129__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__129__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         409);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         409);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_existing_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_existing_system__DOT__probe_addr = 0ULL;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         145);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         145);
    vlSelfRef.tb_cci_existing_system__DOT__rst_n = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         147);
    VL_WRITEF_NX("--- T09: normal_req_error on overflow (popcount=5 > NORMAL_ENTRIES=4) ---\n",0);
    Vtb_cci_existing_system___024root____VbeforeTrig_h043443b9__0(vlSelf, 
                                                                  "@(negedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h043443b9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         384);
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 1U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__li = 0U;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__pg = 1ULL;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__Vfuncout = 0;
    __Vfunc_tb_cci_existing_system__DOT__line_addr__132__Vfuncout 
        = ((__Vfunc_tb_cci_existing_system__DOT__line_addr__132__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_existing_system__DOT__line_addr__132__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_existing_system__DOT__req_base_addr 
        = __Vfunc_tb_cci_existing_system__DOT__line_addr__132__Vfuncout;
    vlSelfRef.tb_cci_existing_system__DOT__req_line_mask = 0x000000000000001fULL;
    vlSelfRef.tb_cci_existing_system__DOT__req_source_id = 1U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         389);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         389);
    __Vtask_tb_cci_existing_system__DOT__check_bit__133__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__133__got 
        = vlSelfRef.tb_cci_existing_system__DOT__normal_req_error;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__133__label = "T09 normal_req_error=1 overflow"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__133__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__133__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__133__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__133__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__133__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__133__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__134__exp = 1U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__134__got 
        = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__134__label = "T09 req_ready=1 (idle)"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__134__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__134__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__134__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__134__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__134__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__134__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    __Vtask_tb_cci_existing_system__DOT__check_bit__135__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__135__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__135__label = "T09 tracker_busy=0 (no alloc)"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__135__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__135__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__135__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__135__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__135__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__135__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_existing_system__DOT__req_valid = 0U;
    Vtb_cci_existing_system___024root____VbeforeTrig_h04344311__0(vlSelf, 
                                                                  "@(posedge tb_cci_existing_system.clk)");
    co_await vlSelfRef.__VtrigSched_h04344311__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_existing_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                                         394);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                         394);
    __Vtask_tb_cci_existing_system__DOT__check_bit__136__exp = 0U;
    __Vtask_tb_cci_existing_system__DOT__check_bit__136__got 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__136__label = "T09 tracker_busy=0 next cycle"s;
    if (((IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__136__got) 
         == (IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__136__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__136__label));
        tb_cci_existing_system__DOT__pass_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_existing_system__DOT__check_bit__136__label)
                     , '#',1,(IData)(__Vtask_tb_cci_existing_system__DOT__check_bit__136__exp)
                     , '#',1,__Vtask_tb_cci_existing_system__DOT__check_bit__136__got);
        tb_cci_existing_system__DOT__fail_count = ((IData)(1U) 
                                                   + tb_cci_existing_system__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_existing_system__DOT__pass_count
                 , '~',32,tb_cci_existing_system__DOT__fail_count);
    if ((0U == tb_cci_existing_system__DOT__fail_count)) {
        VL_WRITEF_NX("All cci_existing_system tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 416, "");
    } else {
        VL_WRITEF_NX("FAILURES detected.\n[%0t] %%Fatal: tb_cci_existing_system.sv:419: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_existing_system__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 419, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 
                                             31);
        vlSelfRef.tb_cci_existing_system__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_existing_system___024root___eval_triggers_vec__act(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_existing_system__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0 
        = vlSelfRef.tb_cci_existing_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_existing_system__DOT__rst_n;
}

bool Vtb_cci_existing_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_existing_system___024root___act_comb__TOP__0(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___act_comb__TOP__0\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_popcount;
    IData/*31:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0;
    QData/*63:0*/ __Vfunc_cci_popcount__137__m;
    __Vfunc_cci_popcount__137__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__137__cnt;
    __Vfunc_cci_popcount__137__cnt = 0;
    // Body
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec 
        = ((0x0eU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec)) 
           | (((((IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_valid) 
                 & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                            >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U]))) 
               & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                                            >> 5U)) 
                  == (vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
                      >> 6U))) & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_source_id))));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec 
        = ((0x0dU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_source_id))) 
              << 1U));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec 
        = ((0x0bU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_source_id))) 
              << 2U));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec 
        = ((7U & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_existing_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_existing_system__DOT__probe_source_id))) 
              << 3U));
    __Vfunc_cci_popcount__137__m = vlSelfRef.tb_cci_existing_system__DOT__req_line_mask;
    __Vfunc_cci_popcount__137__cnt = 0U;
    if ((1U & (IData)(__Vfunc_cci_popcount__137__m))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 1U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 2U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 3U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 4U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 5U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 6U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 7U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 8U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 9U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0aU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0bU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0cU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0dU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0eU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x0fU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x10U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x11U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x12U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x13U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x14U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x15U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x16U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x17U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x18U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x19U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1aU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1bU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1cU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1dU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1eU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x1fU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x20U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x21U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x22U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x23U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x24U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x25U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x26U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x27U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x28U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x29U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2aU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2bU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2cU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2dU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2eU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x2fU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x30U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x31U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x32U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x33U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x34U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x35U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x36U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x37U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x38U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x39U)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3aU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3bU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3cU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3dU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3eU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__137__m 
                       >> 0x3fU)))) {
        __Vfunc_cci_popcount__137__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__137__cnt);
    }
    tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_popcount 
        = __Vfunc_cci_popcount__137__cnt;
    vlSelfRef.tb_cci_existing_system__DOT__normal_req_error 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_valid) 
            & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid))) 
           & ((0ULL == vlSelfRef.tb_cci_existing_system__DOT__req_line_mask) 
              | VL_LTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_0__cci_popcount)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[0U] = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[1U] = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[2U] = 0ULL;
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[3U] = 0ULL;
    tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0U;
    if ((1U & (IData)(vlSelfRef.tb_cci_existing_system__DOT__req_line_mask))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0x800000000000001fULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                  << 0x0000000bU));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 1U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000020ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 2U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000040ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 3U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000060ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 4U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000080ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 5U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 6U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 7U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 8U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000100ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 9U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000120ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0aU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000140ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0bU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000160ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0cU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000180ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0dU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0eU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x0fU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x10U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000200ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x11U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000220ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x12U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000240ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x13U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000260ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x14U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000280ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x15U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x16U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x17U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x18U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000300ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x19U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000320ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1aU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000340ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1bU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000360ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1cU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000380ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1dU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1eU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x1fU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x20U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000400ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x21U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000420ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x22U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000440ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x23U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000460ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x24U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000480ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x25U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x26U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x27U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x28U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000500ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x29U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000520ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2aU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000540ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2bU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000560ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2cU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000580ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2dU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2eU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x2fU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x30U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000600ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x31U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000620ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x32U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000640ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x33U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000660ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x34U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000680ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x35U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x36U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x37U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x38U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000700ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x39U)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000720ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3aU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000740ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3bU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000760ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3cU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000780ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3dU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3eU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_existing_system__DOT__req_line_mask 
                  >> 0x3fU)) & VL_GTS_III(32, 4U, tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__138__addr 
            = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__138__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                                         [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
                [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e
               [(3U & tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei);
    }
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__awid)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_existing_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_existing_system__DOT__bid]
        [vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_existing_system__DOT__bid]];
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__wr_done_line_idx)));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = 0U;
    if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                                      >> 5U)) == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                                      >> 5U)) == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                                      >> 5U)) == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                                      >> 5U)) == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = 1U;
    }
}

void Vtb_cci_existing_system___024root___eval_act(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_act\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_existing_system___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_existing_system___024root___nba_sequent__TOP__0(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_cci_existing_system__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__overflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:136: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 136, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__underflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:137: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 137, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[0]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[1]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[2]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[3]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[4]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[5]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[6]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[7]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[8]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[9]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[10]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[11]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[12]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[13]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[14]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.gen_sva_depth[15]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
        }
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=0 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=1 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=2 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=3 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=4 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=5 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=6 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=7 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=8 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=9 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=10 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=11 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=12 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=13 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=14 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=15 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
                      & (0U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                         [vlSelfRef.tb_cci_existing_system__DOT__bid]))))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:152: %m: %m: B response for AWID=%0d arrived with empty FIFO \342\200\224 underflow; B cannot be matched to any AW\n",4, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_wr_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.tb_cci_existing_system__DOT__bid));
    }
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__overflow_sticky));
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_existing_system__DOT__underflow_sticky));
}

void Vtb_cci_existing_system___024root___nba_sequent__TOP__1(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*51:0*/ __Vfunc_cci_page_addr__139__Vfuncout;
    __Vfunc_cci_page_addr__139__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_cci_page_addr__139__addr;
    __Vfunc_cci_page_addr__139__addr = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v0;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v4;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v5;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v6;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v7;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v7 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v10;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v10 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v11;
    __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v12;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v13;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v13 = 0;
    // Body
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v0 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v4 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v5 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v6 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v7 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v12 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v13 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0U;
    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0U;
    if (vlSelfRef.tb_cci_existing_system__DOT__rst_n) {
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U]) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_existing_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_existing_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U])));
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]) {
            vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid) {
            if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone)) 
                 & (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid))) {
                __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v0 = 1U;
            } else if (((((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
                          & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                             [vlSelfRef.tb_cci_existing_system__DOT__bid])) 
                         & (0U != vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
                            [vlSelfRef.tb_cci_existing_system__DOT__bid]
                            [vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
                            [vlSelfRef.tb_cci_existing_system__DOT__bid]])) 
                        & (1U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
                           [vlSelfRef.tb_cci_existing_system__DOT__bid]
                           [vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
                           [vlSelfRef.tb_cci_existing_system__DOT__bid]]))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match)))))) {
                    VL_WRITEF_NX("[%0t] %%Warning: baseline_line_tracker.sv:191: %m: %m: wr_done line_idx=%0d (cl_addr=%h) matched no active entry \342\200\224 possible spurious completion or AXI-ID page aliasing\n",5, 'M',vlSymsp->name(),"tb_cci_existing_system.dut.i_tracker", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',6,(IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__wr_done_line_idx)
                                 , '#',58,vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr);
                }
                if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v4 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v5 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v6 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v7 = 1U;
                }
            }
        } else if (((IData)(vlSelfRef.tb_cci_existing_system__DOT__req_valid) 
                    & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__normal_req_error)))) {
            __Vfunc_cci_page_addr__139__addr = vlSelfRef.tb_cci_existing_system__DOT__req_base_addr;
            __Vfunc_cci_page_addr__139__Vfuncout = 
                (__Vfunc_cci_page_addr__139__addr >> 0x0cU);
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[0U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8 = 1U;
            vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__current_page 
                = __Vfunc_cci_page_addr__139__Vfuncout;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[1U];
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9 = 1U;
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v10 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[2U];
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v11 
                = vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[3U];
        }
        if (((IData)(vlSelfRef.tb_cci_existing_system__DOT__b_valid) 
             & (0U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                [vlSelfRef.tb_cci_existing_system__DOT__bid]))) {
            vlSelfRef.tb_cci_existing_system__DOT__underflow_sticky = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 1U;
        }
        if ((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
             & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])))) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])) 
                    & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])) {
            __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 
                = (7U & ((IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 1U;
        }
    } else {
        __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 1U;
        __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__overflow_sticky = 0U;
        __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v12 = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__current_page = 0ULL;
        __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v13 = 1U;
        vlSelfRef.tb_cci_existing_system__DOT__underflow_sticky = 0U;
        __VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 1U;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[0U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[0U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[1U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[1U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[2U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[2U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[3U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[3U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[4U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[4U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[5U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[5U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[6U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[6U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[7U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[7U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[8U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[8U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[9U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[9U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[10U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[10U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[11U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[11U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[12U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[12U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[13U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[13U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[14U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[14U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[15U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[15U][__VdlyDim0__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v0) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U]);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U]);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U]);
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U]);
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v4) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
            = (1ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U]);
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v5) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
            = (1ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U]);
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v6) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
            = (1ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U]);
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v7) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
            = (1ULL | vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U]);
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v8;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v9;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v10;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v11;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v12) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] = 0ULL;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries__v13) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] = 0ULL;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] = 0ULL;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] = 0ULL;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    }
    if (__VdlySet__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] = 0U;
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] = 0U;
    }
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U])))) {
            vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U])))) {
            vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U])))) {
            vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = 1U;
        }
    }
    vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[3U])))) {
            vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = 1U;
        }
        vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = 1U;
    }
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xfffcU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
               << 1U) | (4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xfff3U & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
               << 3U) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
                         << 2U)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xffcfU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
               << 5U) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
                         << 4U)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xff3fU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
               << 7U) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
                         << 6U)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xfcffU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
               << 9U) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
                         << 8U)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xf3ffU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
               << 0x0000000bU) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
                                  << 0x0000000aU)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0xcfffU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
               << 0x0000000dU) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
                                  << 0x0000000cU)));
    vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask 
        = ((0x3fffU & (IData)(vlSelfRef.tb_cci_existing_system__DOT__aw_full_mask)) 
           | (((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
               << 0x0000000fU) | ((4U == vlSelfRef.tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
                                  << 0x0000000eU)));
}
