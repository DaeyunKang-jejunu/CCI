// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_augmented_system.h for the primary calling header

#include "Vtb_cci_augmented_system__pch.h"

VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_augmented_system___024root* vlSelf);
VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_augmented_system___024root* vlSelf);
VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_augmented_system___024root* vlSelf);

void Vtb_cci_augmented_system___024root___eval_initial(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_initial\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__clk = 0U;
    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         50);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_augmented_system.sv:51: Assertion failed in %m: WATCHDOG: simulation exceeded 10000 cycles\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 51, "", false);
    co_return;
}

void Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(Vtb_cci_augmented_system___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(Vtb_cci_augmented_system___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__pass_count;
    tb_cci_augmented_system__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_augmented_system__DOT__fail_count;
    tb_cci_augmented_system__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T01__1____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T01__1____VlefCall_0__line_addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__2__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__2__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__2__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__2__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__3__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__3__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__3__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__6__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__6__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__7__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__7__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__7__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__10__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__10__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__10__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__11__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__11__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__12__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__12__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__12__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__12__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__15__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__15__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__15__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__16__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__16__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__17__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__17__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__17__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__17__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__18__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__18__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__18__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__19__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__19__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__19__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__19__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T02__21____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T02__21____VlefCall_0__line_addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__22__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__22__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__22__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__22__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__count;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__25__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__25__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__25__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__25__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__26__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__26__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__26__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__26__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__27__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__27__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__27__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__27__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__29__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__29__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__29__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__29__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__30__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__30__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__30__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__30__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__n;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__32__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__32__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__32__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__32__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__id;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__li;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__35__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__35__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__35__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__36__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__36__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__37__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__37__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__37__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__37__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__id;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__li;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__40__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__40__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__40__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__41__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__41__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__42__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__42__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__42__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__42__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__43__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__43__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__43__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__43__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_1__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__48__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__48__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__48__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__48__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__count;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__51__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__51__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__51__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__51__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__52__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__52__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__52__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__52__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__n;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__55__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__55__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__55__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__55__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__id;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__li;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__58__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__58__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__58__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__59__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__59__id = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__id;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__li;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__62__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__62__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__62__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__63__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__63__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__64__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__64__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__64__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__64__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__65__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__65__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__65__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__65__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__68__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__68__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__68__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__69__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__69__id = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__72__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__72__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__72__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__73__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__73__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__74__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__74__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__74__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__74__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__75__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__75__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__75__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__75__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_3__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_3__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_2__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_2__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_1__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__count;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__n;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__84__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__84__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__84__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__84__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__86__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__86__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__86__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__trk = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__88__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__88__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__88__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__89__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__89__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__90__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__90__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__90__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__90__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__91__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__91__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__91__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__91__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__92__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__92__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__93__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__93__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__93__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__93__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_1__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__99__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__99__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__99__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__100__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__100__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__101__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__101__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__101__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__101__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__102__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__102__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__102__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__102__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__105__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__105__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__105__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__106__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__106__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__107__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__107__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__107__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__107__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T06__109____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T06__109____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__113__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__113__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__113__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__113__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__114__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__114__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__114__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__114__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__115__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__115__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__115__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__115__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__118__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__118__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__118__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__119__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__119__id = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__122__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__122__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__122__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__123__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__123__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_1__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_1__line_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__src = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__base = 0;
    CData/*6:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__count;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__count = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__src = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__132__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__132__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__132__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__132__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__133__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__133__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__133__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__133__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__134__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__134__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__134__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__134__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__n;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__id;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__li;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__138__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__138__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__138__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__139__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__139__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__140__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__140__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__140__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__140__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__143__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__143__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__143__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__144__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__144__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__145__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__145__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__145__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__145__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__test_T08__147____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__test_T08__147____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__base;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__base = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__mask;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__mask = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__src;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__150__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__150__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__150__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__150__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__151__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__151__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__151__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__151__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__154__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__154__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__154__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__155__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__155__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__156__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__156__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__156__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__156__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__id;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__id = 0;
    QData/*51:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__pg;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__pg = 0;
    IData/*31:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__li;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__li = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157____VlefCall_0__line_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__li = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__159__id;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__159__addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_augmented_system__DOT__do_aw__159__trk;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__trk = 0;
    CData/*3:0*/ __Vtask_tb_cci_augmented_system__DOT__do_b__160__id;
    __Vtask_tb_cci_augmented_system__DOT__do_b__160__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__161__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__161__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__161__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__161__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__162__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__162__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__162__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__162__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__163__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__163__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__163__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__163__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__Vfuncout;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__pg = 0;
    IData/*31:0*/ __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__li = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__167__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__167__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__167__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__167__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__168__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__168__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__168__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__168__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__169__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__169__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__169__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__169__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__170__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__170__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__170__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__170__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__171__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__171__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__171__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__171__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__172__got;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__172__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_augmented_system__DOT__check_bit__172__exp;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__172__exp = 0;
    // Body
    tb_cci_augmented_system__DOT__pass_count = 0U;
    tb_cci_augmented_system__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T01: normal-only request ---\n",0);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__2__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__2__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_ready;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__2__label = "T01 normal_ready=1 idle"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__2__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__2__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__2__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__2__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__2__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__2__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__3__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__3__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__3__label = "T01 memcpy_busy=0 idle"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__3__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__3__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__4__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__4__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T01__1____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__4__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__mask = 3ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T01__1____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__5__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__6__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__6__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__6__label = "T01 normal_busy after accept"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__6__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__6__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__7__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__7__label = "T01 memcpy_busy=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__7__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__7__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__9__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__9__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__9__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__10__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__10__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__10__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__10__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__11__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__8__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__11__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__12__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__12__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__12__label = "T01 normal_done=0 after line0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__12__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__12__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__12__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__12__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__12__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__12__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__li = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__14__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__14__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__14__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__15__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__15__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__15__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__15__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__16__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__13__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__16__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__17__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__17__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__17__label = "T01 normal_done=1 after line1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__17__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__17__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__17__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__17__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__17__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__17__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__18__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__18__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__18__label = "T01 memcpy_busy=0 final"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__18__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__18__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__19__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__19__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__19__label = "T01 snoop_error=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__19__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__19__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__19__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__19__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__19__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__19__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         321);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         321);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         543);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         543);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T02: memcpy-only request ---\n",0);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__22__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__22__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__22__label = "T02 normal_busy=0 idle"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__22__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__22__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__22__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__22__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__22__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__22__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__23__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__23__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T02__21____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__23__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__count = 2U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T02__21____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         225);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__count;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__24__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         232);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         232);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__25__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__25__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__25__label = "T02 memcpy_busy after accept"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__25__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__25__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__25__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__25__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__25__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__25__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__26__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__26__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__26__label = "T02 normal_busy=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__26__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__26__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__26__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__26__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__26__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__26__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__27__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__27__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_error;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__27__label = "T02 req_error=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__27__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__27__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__27__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__27__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__27__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__27__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n = 2U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt, __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             244);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             244);
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc);
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
            __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cyc, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_augmented_system.sv:248: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__28__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 248, "", false);
        }
    }
    vlSelfRef.tb_cci_augmented_system__DOT__test_T02__Vstatic__cnt 
        = __Vtask_tb_cci_augmented_system__DOT__collect_acs__28__cnt;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__29__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__29__got 
        = (2U == vlSelfRef.tb_cci_augmented_system__DOT__test_T02__Vstatic__cnt);
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__29__label = "T02 2 ACs counted"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__29__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__29__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__29__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__29__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__29__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__29__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         339);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         339);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__30__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__30__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__30__label = "T02 write_release=0 before CRs"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__30__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__30__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__30__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__30__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__30__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__30__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__n = 2U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                       "@(negedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             255);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 1U;
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             259);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             259);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__31__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__32__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__32__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__32__label = "T02 write_release=1 after CRs"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__32__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__32__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__32__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__32__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__32__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__32__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__id = 1U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__34__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__34__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__34__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__35__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__35__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__35__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__35__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__36__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__33__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__36__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__37__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__37__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__37__label = "T02 memcpy_done=0 after line0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__37__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__37__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__37__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__37__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__37__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__37__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__li = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__id = 1U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__39__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__39__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__39__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__40__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__40__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__40__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__40__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__41__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__38__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__41__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__42__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__42__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__42__label = "T02 memcpy_done=1 after line1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__42__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__42__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__42__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__42__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__42__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__42__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__43__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__43__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__43__label = "T02 normal_busy=0 final"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__43__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__43__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__43__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__43__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__43__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__43__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         350);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         350);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         544);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         544);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T03: both trackers active simultaneously ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__46__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__46__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__46__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__mask = 3ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__47__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__48__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__48__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__48__label = "T03 normal_busy after normal req"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__48__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__48__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__48__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__48__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__48__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__48__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__49__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__49__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__49__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__src = 2U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__count = 2U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T03__45____VlefCall_1__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         225);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__count;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__50__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         232);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         232);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__51__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__51__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__51__label = "T03 memcpy_busy after memcpy req"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__51__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__51__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__51__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__51__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__51__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__51__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__52__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__52__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__52__label = "T03 normal_busy still=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__52__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__52__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__52__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__52__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__52__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__52__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n = 2U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt, __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             244);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             244);
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc);
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
            __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cyc, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_augmented_system.sv:248: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__53__cnt
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__53__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 248, "", false);
        }
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         372);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         372);
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__n = 2U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                       "@(negedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             255);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 1U;
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             259);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             259);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__54__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__55__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__55__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__55__label = "T03 write_release=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__55__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__55__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__55__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__55__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__55__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__55__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__id = 1U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__57__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__57__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__57__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__58__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__58__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__58__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__58__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__59__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__56__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__59__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__li = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__id = 1U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__61__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__61__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__61__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__62__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__62__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__62__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__62__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__63__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__60__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__63__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__64__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__64__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__64__label = "T03 memcpy_done=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__64__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__64__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__64__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__64__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__64__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__64__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__65__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__65__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__65__label = "T03 normal_busy still=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__65__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__65__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__65__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__65__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__65__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__65__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         381);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         381);
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__67__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__67__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__67__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__68__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__68__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__68__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__68__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__69__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__66__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__69__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__li = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__71__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__71__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__71__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__72__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__72__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__72__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__72__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__73__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__70__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__73__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__74__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__74__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__74__label = "T03 normal_done=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__74__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__74__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__74__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__74__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__74__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__74__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__75__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__75__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__75__label = "T03 memcpy_busy=0 after release"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__75__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__75__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__75__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__75__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__75__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__75__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         388);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         388);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         545);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         545);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T04: same AXI ID NORMAL/MEMCPY ordering ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__78__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__78__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__78__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__mask = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__79__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__80__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__80__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__80__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__src = 2U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__count = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_1__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         225);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__count;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__81__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         232);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         232);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n = 1U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt, __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             244);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             244);
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc);
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
            __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cyc, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_augmented_system.sv:248: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__82__cnt
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__82__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 248, "", false);
        }
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         405);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         405);
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__n = 1U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                       "@(negedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             255);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 1U;
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             259);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             259);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__83__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__84__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__84__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__84__label = "T04 write_release=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__84__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__84__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__84__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__84__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__84__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__84__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__85__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__85__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_2__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__85__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__addr 
        = __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_2__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__86__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__86__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__86__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__86__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__87__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__87__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_3__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__87__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__addr 
        = __Vtask_tb_cci_augmented_system__DOT__test_T04__77____VlefCall_3__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__88__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__88__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__88__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__88__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__89__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__89__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__90__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__90__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__90__label = "T04 normal_done=1 after B1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__90__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__90__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__90__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__90__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__90__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__90__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__91__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__91__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__91__label = "T04 memcpy_done=0 after B1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__91__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__91__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__91__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__91__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__91__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__91__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_b__92__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__92__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__93__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__93__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__93__label = "T04 memcpy_done=1 after B2"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__93__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__93__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__93__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__93__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__93__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__93__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         421);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         421);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         546);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         546);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T05: CCI_WR_NONE ordering only ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__96__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__96__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__96__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__mask = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__97__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__pg = 2ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__98__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__98__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__98__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__trk = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__addr 
        = __Vtask_tb_cci_augmented_system__DOT__test_T05__95____VlefCall_1__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__99__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__99__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__99__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__99__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__100__id = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__100__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__101__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__101__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__101__label = "T05 normal_done=0 after NONE"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__101__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__101__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__101__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__101__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__101__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__101__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__102__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__102__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__102__label = "T05 normal_busy=1 still"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__102__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__102__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__102__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__102__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__102__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__102__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__104__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__104__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__104__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__105__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__105__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__105__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__105__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__106__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__103__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__106__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__107__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__107__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__107__label = "T05 normal_done=1 after NORMAL"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__107__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__107__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__107__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__107__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__107__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__107__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         440);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         440);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         547);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         547);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T06: probe hazard normal tracker only ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__110__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__110__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T06__109____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__110__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__mask = 3ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T06__109____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__111__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__112__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__112__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__112__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         453);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__113__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__113__got 
        = (0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__113__label = "T06 normal_probe_hazard=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__113__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__113__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__113__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__113__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__113__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__113__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__114__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__114__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__memcpy_probe_hazard;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__114__label = "T06 memcpy_probe_hazard=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__114__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__114__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__114__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__114__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__114__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__114__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__115__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__115__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__115__label = "T06 probe_hazard=1 (OR)"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__115__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__115__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__115__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__115__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__115__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__115__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__117__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__117__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__117__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__118__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__118__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__118__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__118__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__119__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__116__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__119__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__li = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__121__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__121__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__121__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__122__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__122__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__122__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__122__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__123__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__120__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__123__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         462);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         462);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         548);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         548);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T07: probe hazard both trackers ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__126__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__126__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__126__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__mask = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__127__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__128__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__128__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_1__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__128__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__count = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T07__125____VlefCall_1__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         225);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__count;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_memcpy_req__129__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         232);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         232);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n = 1U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt = 0U;
    __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt);
    }
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt, __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             244);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             244);
        __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc);
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
            __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt 
                = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt);
        }
        if (VL_UNLIKELY((VL_GTS_III(32, __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cyc, 
                                    ((IData)(0x00000010U) 
                                     + __Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_augmented_system.sv:248: Assertion failed in %m: collect_acs timeout: got %0d/%0d\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.collect_acs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__130__cnt
                         , '~',32,__Vtask_tb_cci_augmented_system__DOT__collect_acs__130__n);
            VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 248, "", false);
        }
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         478);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         478);
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 2U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__131__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__131__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__131__Vfuncout;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         483);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__132__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__132__got 
        = (0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__132__label = "T07 normal_probe_hazard=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__132__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__132__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__132__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__132__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__132__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__132__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__133__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__133__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__memcpy_probe_hazard;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__133__label = "T07 memcpy_probe_hazard=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__133__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__133__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__133__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__133__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__133__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__133__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__134__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__134__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__probe_hazard;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__134__label = "T07 probe_hazard=1 (OR)"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__134__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__134__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__134__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__134__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__134__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__134__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__n = 1U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i, __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__n)) {
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                       "@(negedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             255);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 1U;
        Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                       "@(posedge tb_cci_augmented_system.clk)");
        co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_augmented_system.clk)", 
                                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                             259);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             259);
        vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
        __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_augmented_system__DOT__drive_cr_responses__135__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__id = 1U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__137__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__137__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__137__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__trk = 2U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__138__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__138__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__138__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__138__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__139__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_memcpy_aw_b__136__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__139__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__140__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__140__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__140__label = "T07 memcpy_done=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__140__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__140__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__140__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__140__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__140__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__140__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         493);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         493);
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__li = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__142__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__142__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__142__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__143__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__143__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__143__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__143__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__144__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__141__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__144__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__145__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__145__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__145__label = "T07 normal_done=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__145__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__145__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__145__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__145__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__145__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__145__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         498);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         498);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         549);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         549);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T08: normal req arbitrary lines 16-17 (> NORMAL_ENTRIES) ---\n",0);
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__148__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__148__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__test_T08__147____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__148__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__src = 1U;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__mask = 0x0000000000030000ULL;
    __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__base 
        = __Vtask_tb_cci_augmented_system__DOT__test_T08__147____VlefCall_0__line_addr;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         208);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__base;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__mask;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id 
        = __Vtask_tb_cci_augmented_system__DOT__submit_normal_req__149__src;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         215);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         215);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__150__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__150__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__150__label = "T08 normal_tracker_busy=1"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__150__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__150__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__150__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__150__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__150__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__150__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__151__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__151__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_ready;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__151__label = "T08 req_ready=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__151__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__151__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__151__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__151__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__151__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__151__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__li = 0x00000010U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__153__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__153__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__153__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__154__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__154__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__154__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__154__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__155__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__152__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__155__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__156__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__156__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__156__label = "T08 normal_done=0 after line 16"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__156__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__156__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__156__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__156__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__156__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__156__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__li = 0x00000011U;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__pg = 1ULL;
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__id = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__li 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__li;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__pg 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__pg;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__158__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__158__li 
                                                  << 6U)))));
    __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157____VlefCall_0__line_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__158__Vfuncout;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__trk = 1U;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__addr 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157____VlefCall_0__line_addr;
    __Vtask_tb_cci_augmented_system__DOT__do_aw__159__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         269);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = __Vtask_tb_cci_augmented_system__DOT__do_aw__159__id;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__159__addr;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type 
        = __Vtask_tb_cci_augmented_system__DOT__do_aw__159__trk;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         271);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         271);
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_augmented_system__DOT__do_b__160__id 
        = __Vtask_tb_cci_augmented_system__DOT__do_normal_aw_b__157__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         276);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = __Vtask_tb_cci_augmented_system__DOT__do_b__160__id;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         278);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         278);
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__161__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__161__got 
        = ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__161__label = "T08 normal_done=1 after line 17"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__161__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__161__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__161__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__161__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__161__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__161__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         513);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         513);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__162__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__162__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_ready;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__162__label = "T08 req_ready=1 after done"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__162__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__162__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__162__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__162__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__162__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__162__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__163__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__163__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__163__label = "T08 normal_tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__163__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__163__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__163__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__163__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__163__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__163__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         550);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         550);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__ac_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__cr_resp = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__bid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_valid = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id = 0U;
    vlSelfRef.tb_cci_augmented_system__DOT__probe_addr = 0ULL;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         197);
    vlSelfRef.tb_cci_augmented_system__DOT__rst_n = 1U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         199);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         199);
    VL_WRITEF_NX("--- T09: normal_req_error on zero mask ---\n",0);
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63e1f__0(vlSelf, 
                                                                   "@(negedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63e1f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         521);
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_type = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__li = 0U;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__pg = 1ULL;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__Vfuncout = 0;
    __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__Vfuncout 
        = ((__Vfunc_tb_cci_augmented_system__DOT__line_addr__166__pg 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_augmented_system__DOT__line_addr__166__li 
                                                  << 6U)))));
    vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
        = __Vfunc_tb_cci_augmented_system__DOT__line_addr__166__Vfuncout;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__req_source_id = 1U;
    vlSelfRef.tb_cci_augmented_system__DOT__req_line_count = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         528);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         528);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__167__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__167__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__167__label = "T09 normal_req_error=1 zero mask"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__167__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__167__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__167__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__167__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__167__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__167__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__168__exp = 1U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__168__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_ready;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__168__label = "T09 req_ready=1 (idle)"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__168__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__168__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__168__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__168__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__168__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__168__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__169__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__169__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__169__label = "T09 normal_tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__169__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__169__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__169__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__169__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__169__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__169__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__170__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__170__got 
        = (1U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__170__label = "T09 memcpy_tracker_busy=0"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__170__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__170__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__170__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__170__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__170__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__170__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__req_valid = 0U;
    Vtb_cci_augmented_system___024root____VbeforeTrig_hbde63173__0(vlSelf, 
                                                                   "@(posedge tb_cci_augmented_system.clk)");
    co_await vlSelfRef.__VtrigSched_hbde63173__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_augmented_system.clk)", 
                                                         "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                                         534);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                         534);
    __Vtask_tb_cci_augmented_system__DOT__check_bit__171__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__171__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__171__label = "T09 normal_tracker_busy=0 next cycle"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__171__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__171__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__171__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__171__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__171__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__171__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    __Vtask_tb_cci_augmented_system__DOT__check_bit__172__exp = 0U;
    __Vtask_tb_cci_augmented_system__DOT__check_bit__172__got 
        = vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error;
    vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__172__label = "T09 normal_req_error=0 idle"s;
    if (((IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__172__got) 
         == (IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__172__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__172__label));
        tb_cci_augmented_system__DOT__pass_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_augmented_system__DOT__check_bit__172__label)
                     , '#',1,(IData)(__Vtask_tb_cci_augmented_system__DOT__check_bit__172__exp)
                     , '#',1,__Vtask_tb_cci_augmented_system__DOT__check_bit__172__got);
        tb_cci_augmented_system__DOT__fail_count = 
            ((IData)(1U) + tb_cci_augmented_system__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_augmented_system__DOT__pass_count
                 , '~',32,tb_cci_augmented_system__DOT__fail_count);
    if ((0U == tb_cci_augmented_system__DOT__fail_count)) {
        VL_WRITEF_NX("All cci_augmented_system tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 557, "");
    } else {
        VL_WRITEF_NX("FAILURES detected.\n[%0t] %%Fatal: tb_cci_augmented_system.sv:560: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_augmented_system__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 560, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_augmented_system.sv", 
                                             39);
        vlSelfRef.tb_cci_augmented_system__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_augmented_system___024root___eval_triggers_vec__act(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__clk__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_augmented_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_augmented_system__DOT__rst_n;
}

bool Vtb_cci_augmented_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_augmented_system___024root___act_comb__TOP__0(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___act_comb__TOP__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount;
    IData/*31:0*/ tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0;
    QData/*63:0*/ __Vfunc_cci_popcount__173__m;
    __Vfunc_cci_popcount__173__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__173__cnt;
    __Vfunc_cci_popcount__173__cnt = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__base_addr;
    __Vfunc_cci_page_relative_mask__177__base_addr = 0;
    CData/*6:0*/ __Vfunc_cci_page_relative_mask__177__line_count;
    __Vfunc_cci_page_relative_mask__177__line_count = 0;
    QData/*63:0*/ __Vfunc_cci_page_relative_mask__177__explicit_mask;
    __Vfunc_cci_page_relative_mask__177__explicit_mask = 0;
    // Body
    vlSelfRef.tb_cci_augmented_system__DOT__memcpy_probe_hazard 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
           & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                   != (0x0000000fU 
                                       & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                  & (((0x000fffffffffffffULL 
                                       & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                           << 0x0000001cU) 
                                          | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                             >> 4U))) 
                                      == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                          >> 0x0000000cU)) 
                                     & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                            [(((IData)(4U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                              >> 5U)] 
                                            >> (0x0000001fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & (IData)(
                                                              (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                               >> 6U))))))) 
                                        & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                           [(((IData)(0x00000044U) 
                                              + (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                            >> 6U)))) 
                                             >> 5U)] 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000044U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
               [vlSelfRef.tb_cci_augmented_system__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]
              [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
              [vlSelfRef.tb_cci_augmented_system__DOT__bid]]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[0U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[1U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[2U] = 0ULL;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[3U] = 0ULL;
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei = 0U;
    if ((1U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0x800000000000001fULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                  << 0x0000000bU));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 1U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000020ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 2U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000040ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 3U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000060ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 4U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000080ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 5U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 6U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 7U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 8U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000100ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 9U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000120ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000140ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000160ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000180ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x0fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x10U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000200ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x11U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000220ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x12U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000240ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x13U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000260ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x14U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000280ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x15U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x16U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x17U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x18U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000300ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x19U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000320ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000340ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000360ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000380ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x1fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x20U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000400ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x21U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000420ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x22U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000440ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x23U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000460ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x24U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000480ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x25U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x26U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x27U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x28U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000500ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x29U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000520ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000540ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000560ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000580ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x2fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x30U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000600ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x31U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000620ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x32U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000640ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x33U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000660ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x34U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000680ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x35U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x36U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x37U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x38U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000700ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x39U)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000720ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3aU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000740ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3bU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000760ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3cU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000780ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3dU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3eU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask 
                  >> 0x3fU)) & VL_GTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__174__addr 
            = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__174__addr 
               >> 0x0cU);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                                         [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
                [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[(3U 
                                                                                & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e
               [(3U & tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei)]);
        tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_comb__DOT__ei);
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__awid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]
        [vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr
        [vlSelfRef.tb_cci_augmented_system__DOT__bid]];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0eU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | (((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                 & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                            >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
               & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                            >> 5U)) 
                  == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                      >> 6U))) & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0dU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 1U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((0x0bU & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 2U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec 
        = ((7U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
                  & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                             >> 0x0000003fU))) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
                & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                             >> 5U)) 
                   == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                       >> 6U))) & ((0x0000000fU & (IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                                           >> 1U))) 
                                   != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id))) 
              << 3U));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
           & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)));
    __Vfunc_cci_page_relative_mask__177__explicit_mask 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_page_relative_mask__177__line_count 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_line_count;
    __Vfunc_cci_page_relative_mask__177__base_addr 
        = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
    {
        vlSelf->__Vfunc_cci_page_relative_mask__177__Vfuncout = 0;
        if ((0ULL != __Vfunc_cci_page_relative_mask__177__explicit_mask)) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
                = __Vfunc_cci_page_relative_mask__177__explicit_mask;
            goto __Vlabel0;
        }
        if ((0U != (0x0000003fU & (IData)(__Vfunc_cci_page_relative_mask__177__base_addr)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr 
            = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_range_fits_page__178__Vfuncout = 0;
        vlSelf->__Vfunc_cci_range_fits_page__178__end_line = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__addr = vlSelfRef.__Vfunc_cci_range_fits_page__178__base_addr;
        vlSelf->__Vfunc_cci_line_idx__179__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__179__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__179__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line 
            = (0x000000ffU & ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_0__cci_line_idx) 
                              + (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count)));
        vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__line_count;
        vlSelf->__Vfunc_cci_valid_line_count__180__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout 
            = ((0U != (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_valid_line_count__180__line_count)));
        vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count 
            = vlSelfRef.__Vfunc_cci_valid_line_count__180__Vfuncout;
        vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout 
            = ((IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178____VlefCall_1__cci_valid_line_count) 
               & (0x40U >= (IData)(vlSelfRef.__Vfunc_cci_range_fits_page__178__end_line)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page 
            = vlSelfRef.__Vfunc_cci_range_fits_page__178__Vfuncout;
        if ((1U & (~ (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_0__cci_range_fits_page)))) {
            vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout = 0ULL;
            goto __Vlabel0;
        }
        vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count 
            = __Vfunc_cci_page_relative_mask__177__line_count;
        {
            vlSelf->__Vfunc_cci_contiguous_mask__181__Vfuncout = 0;
            if ((0U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U < (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0ULL;
                goto __Vlabel1;
            }
            if ((0x40U == (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count))) {
                vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout = 0xffffffffffffffffULL;
                goto __Vlabel1;
            }
            vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout 
                = (VL_SHIFTL_QQI(64,64,7, 1ULL, (IData)(vlSelfRef.__Vfunc_cci_contiguous_mask__181__line_count)) 
                   - 1ULL);
            __Vlabel1: ;
        }
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
            = vlSelfRef.__Vfunc_cci_contiguous_mask__181__Vfuncout;
        vlSelfRef.__Vfunc_cci_line_idx__182__addr = __Vfunc_cci_page_relative_mask__177__base_addr;
        vlSelf->__Vfunc_cci_line_idx__182__Vfuncout = 0;
        vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout 
            = (0x0000003fU & (IData)((vlSelfRef.__Vfunc_cci_line_idx__182__addr 
                                      >> 6U)));
        vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx 
            = vlSelfRef.__Vfunc_cci_line_idx__182__Vfuncout;
        vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout 
            = (vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_1__cci_contiguous_mask 
               << (IData)(vlSelfRef.__Vfunc_cci_page_relative_mask__177____VlefCall_2__cci_line_idx));
        __Vlabel0: ;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask 
        = vlSelfRef.__Vfunc_cci_page_relative_mask__177__Vfuncout;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid) 
           & (2U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)));
    vlSelfRef.tb_cci_augmented_system__DOT__probe_hazard 
        = ((0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__hazard_vec)) 
           | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_valid) 
              & ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                  >> 0x0000001aU) & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__probe_source_id) 
                                      != (0x0000000fU 
                                          & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                     & (((0x000fffffffffffffULL 
                                          & (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                                                >> 4U))) 
                                         == (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                             >> 0x0000000cU)) 
                                        & ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                               [(((IData)(4U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                              >> 6U)))) 
                                                 >> 5U)] 
                                               >> (0x0000001fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                  >> 6U))))))) 
                                           & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                                              [(((IData)(0x00000044U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                             >> 6U)))) 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & ((IData)(0x00000044U) 
                                                     + 
                                                     (0x0000003fU 
                                                      & (IData)(
                                                                (vlSelfRef.tb_cci_augmented_system__DOT__probe_addr 
                                                                 >> 6U))))))))))));
    __Vfunc_cci_popcount__173__m = vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask;
    __Vfunc_cci_popcount__173__cnt = 0U;
    if ((1U & (IData)(__Vfunc_cci_popcount__173__m))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 1U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 2U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 3U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 4U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 5U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 6U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 7U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 8U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 9U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x0fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x10U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x11U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x12U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x13U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x14U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x15U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x16U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x17U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x18U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x19U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x1fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x20U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x21U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x22U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x23U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x24U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x25U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x26U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x27U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x28U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x29U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x2fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x30U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x31U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x32U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x33U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x34U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x35U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x36U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x37U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x38U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x39U)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3aU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3bU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3cU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3dU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3eU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__173__m 
                       >> 0x3fU)))) {
        __Vfunc_cci_popcount__173__cnt = ((IData)(1U) 
                                          + __Vfunc_cci_popcount__173__cnt);
    }
    tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount 
        = __Vfunc_cci_popcount__173__cnt;
    vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error 
        = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid) 
            & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid))) 
           & ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__req_line_mask) 
              | VL_LTS_III(32, 4U, tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT____VlemCall_0__cci_popcount)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_augmented_system__DOT__req_error 
        = ((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask) 
           & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 0U;
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                      >> 5U)) == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match = 1U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
           & (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r) 
               | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                  & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw))) 
              & ((~ ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r) 
                     | ((0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next)) 
                        | ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                           & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                              & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_resp) 
                                 >> 1U)))))) & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next) 
                                                == 
                                                (0x0000007fU 
                                                 & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                                    + 
                                                    ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                                                     & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r))))))));
    vlSelfRef.tb_cci_augmented_system__DOT__req_ready 
        = (1U & ((1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type))
                  ? ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                         >> 0x0000001aU)) | (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error))
                  : ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid)) 
                     & (0U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)))));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_req_valid)));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
}

void Vtb_cci_augmented_system___024root___eval_act(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___eval_act\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_augmented_system___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_augmented_system___024root___nba_sequent__TOP__0(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_valid) 
                       & (0U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type))) 
                      & (1U != (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: cci_augmented_system.sv:109: Assertion failed in %m: %m: req_type=2'b%02b is reserved; no tracker will accept this request\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',2,(IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_type));
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_augmented_system.sv", 109, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
                       & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid)) 
                      & ((0x0000007fU & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                         + ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                                            & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r)))) 
                         > (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: cci_snoop_response_tracker.sv:77: Assertion failed in %m: %m: CR before AC (recv_next=%0d > sent_next=%0d) \342\200\224 ACE protocol violation; snoop_done will fire prematurely\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_memcpy_tracker.i_snoop_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',7,(0x0000007fU & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r) 
                                             + ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) 
                                                & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r))))
                     , '#',7,(IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_next));
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_snoop_response_tracker.sv", 77, "", false);
    }
    if (vlSelfRef.tb_cci_augmented_system__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__overflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:136: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 136, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__underflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:137: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 137, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[0]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[1]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[2]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[3]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[4]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[5]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[6]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[7]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[8]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[9]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[10]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[11]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[12]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[13]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[14]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.gen_sva_depth[15]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
        }
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=0 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=1 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=2 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=3 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=4 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=5 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=6 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=7 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=8 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=9 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=10 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=11 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=12 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=13 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=14 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=15 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
                      & (0U == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                         [vlSelfRef.tb_cci_augmented_system__DOT__bid]))))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:152: %m: %m: B response for AWID=%0d arrived with empty FIFO \342\200\224 underflow; B cannot be matched to any AW\n",4, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_wr_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.tb_cci_augmented_system__DOT__bid));
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__overflow_sticky));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_augmented_system__DOT__underflow_sticky));
}

void Vtb_cci_augmented_system___024root___nba_sequent__TOP__1(Vtb_cci_augmented_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_augmented_system___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_augmented_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*51:0*/ __Vfunc_cci_page_addr__175__Vfuncout;
    __Vfunc_cci_page_addr__175__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_cci_page_addr__175__addr;
    __Vfunc_cci_page_addr__175__addr = 0;
    QData/*63:0*/ __Vfunc_cci_all_lines_done__183__line_mask;
    __Vfunc_cci_all_lines_done__183__line_mask = 0;
    QData/*63:0*/ __Vfunc_cci_all_lines_done__183__done_mask;
    __Vfunc_cci_all_lines_done__183__done_mask = 0;
    VlWide<6>/*186:0*/ __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r;
    VL_ZERO_W(187, __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r);
    CData/*0:0*/ __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy = 0;
    CData/*6:0*/ __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r = 0;
    CData/*6:0*/ __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r = 0;
    CData/*0:0*/ __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v0;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v4;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v5;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v6;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v7;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v7 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v10;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v10 = 0;
    QData/*63:0*/ __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v11;
    __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v12;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v13;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v13 = 0;
    // Body
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r;
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U];
    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy 
        = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v0 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v4 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v5 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v6 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v7 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v12 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v13 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 0U;
    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 0U;
    if (vlSelfRef.tb_cci_augmented_system__DOT__rst_n) {
        if ((0x04000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])) {
            if ((0U == (3U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                              >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done) {
                    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x01000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else if ((1U == (3U & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                                     >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid) {
                    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[(
                                                                                ((IData)(4U) 
                                                                                + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)) 
                                                                                >> 5U)] 
                        = (__Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r
                           [(((IData)(4U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)) 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)))));
                }
                __Vfunc_cci_all_lines_done__183__done_mask 
                    = ((((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U])) 
                         << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U])) 
                                               >> 4U))) 
                       | ((1ULL << (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)) 
                          & (- (QData)((IData)(((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__memcpy_wr_done_valid) 
                                                & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker)))))));
                __Vfunc_cci_all_lines_done__183__line_mask 
                    = (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U])) 
                        << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U])) 
                                              >> 4U)));
                vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done 
                    = ((0ULL != __Vfunc_cci_all_lines_done__183__line_mask) 
                       & ((__Vfunc_cci_all_lines_done__183__done_mask 
                           & __Vfunc_cci_all_lines_done__183__line_mask) 
                          == __Vfunc_cci_all_lines_done__183__line_mask));
                if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT____VlemCall_0__cci_all_lines_done) {
                    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                        = (0x02000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U]));
                }
            } else {
                __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                    = (0x03ffffffU & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U]);
            }
        } else if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U] 
                = (0x0000000fU & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U]);
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U] = 0U;
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U] 
                = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask) 
                   << 4U);
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U] 
                = (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask) 
                    >> 0x0000001cU) | ((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask 
                                                >> 0x00000020U)) 
                                       << 4U));
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U] 
                = (((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__dec_line_mask 
                             >> 0x00000020U)) >> 0x0000001cU) 
                   | ((IData)((vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
                               >> 0x0000000cU)) << 4U));
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
                = (0x07ffffffU & (0x04000000U | (((IData)(
                                                          (vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
                                                           >> 0x0000000cU)) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr 
                                                              >> 0x0000000cU) 
                                                             >> 0x00000020U)) 
                                                    << 4U))));
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U] 
                = ((0xfffffff0U & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U]) 
                   | (IData)(vlSelfRef.tb_cci_augmented_system__DOT__req_source_id));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15 = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U]) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_augmented_system__DOT__aw_track_type;
            __VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U])));
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[0U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[1U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[2U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[3U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[4U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[5U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[6U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[7U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[8U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[9U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[10U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[11U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[12U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[13U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[14U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[15U]) {
            vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 1U;
        }
        if ((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) 
              & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_valid)) 
             & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__cr_resp) 
                >> 1U))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r = 1U;
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req) {
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r = 1U;
        } else if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r) {
            if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__snoop_done) {
                __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r = 0U;
                __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
                __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
                vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
            } else {
                if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__ac_accepted) {
                    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r)));
                }
                if (vlSelfRef.tb_cci_augmented_system__DOT__cr_valid) {
                    __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r)));
                }
                if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_gen_done_raw) {
                    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__accept_req) 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy)))) {
            if (VL_UNLIKELY(((0ULL == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w)))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_ac_range_gen.sv:57: Assertion failed in %m: %m: start asserted with start_line_mask='0\n",3, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_memcpy_tracker.i_ac_gen", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/rtl/cci_ac_range_gen.sv", 57, "");
            }
            __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy 
                = (0ULL != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w);
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__ac_line_mask_w;
        } else if ((((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
                     & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_valid)) 
                    & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__ac_ready))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                = ((~ (1ULL << (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx))) 
                   & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask);
            if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last) {
                __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy = 0U;
            }
        }
        if (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid) {
            if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone)) 
                 & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid))) {
                __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v0 = 1U;
            } else if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_valid) 
                        & (1U == (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_type)))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__cam_any_match)))))) {
                    VL_WRITEF_NX("[%0t] %%Warning: baseline_line_tracker.sv:191: %m: %m: wr_done line_idx=%0d (cl_addr=%h) matched no active entry \342\200\224 possible spurious completion or AXI-ID page aliasing\n",5, 'M',vlSymsp->name(),"tb_cci_augmented_system.dut.i_normal_tracker", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',6,(IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__wr_done_line_idx)
                                 , '#',58,vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr);
                }
                if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v4 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v5 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v6 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v7 = 1U;
                }
            }
        } else if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__normal_req_valid) 
                    & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__normal_req_error)))) {
            __Vfunc_cci_page_addr__175__addr = vlSelfRef.tb_cci_augmented_system__DOT__req_base_addr;
            __Vfunc_cci_page_addr__175__Vfuncout = 
                (__Vfunc_cci_page_addr__175__addr >> 0x0cU);
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[0U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8 = 1U;
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page 
                = __Vfunc_cci_page_addr__175__Vfuncout;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[1U];
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9 = 1U;
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v10 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[2U];
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v11 
                = vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__alloc_e[3U];
        }
        if (((IData)(vlSelfRef.tb_cci_augmented_system__DOT__b_valid) 
             & (0U == vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth
                [vlSelfRef.tb_cci_augmented_system__DOT__bid]))) {
            vlSelfRef.tb_cci_augmented_system__DOT__underflow_sticky = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[0U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[0U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[1U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[1U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[2U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[2U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[3U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[3U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[4U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[4U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[5U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[5U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[6U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[6U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[7U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[7U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[8U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[8U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[9U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[9U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[10U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[10U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[11U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[11U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[12U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[12U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[13U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[13U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[14U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[14U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29 = 1U;
        }
        if ((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U] 
             & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])))) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U])));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[15U])) 
                    & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[15U])) {
            __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 
                = (7U & ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31 = 1U;
        }
    } else {
        __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
            = (0x03ffffffU & __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U]);
        __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16 = 1U;
        __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16 = 1U;
        vlSelfRef.tb_cci_augmented_system__DOT__overflow_sticky = 0U;
        __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r = 0U;
        __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__all_sent_r = 0U;
        __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__snoop_error_r = 0U;
        __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask = 0ULL;
        __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v12 = 1U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__current_page = 0ULL;
        __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v13 = 1U;
        vlSelfRef.tb_cci_augmented_system__DOT__underflow_sticky = 0U;
        __VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32 = 1U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[0U];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[1U];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[2U];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[3U];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[4U];
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U] 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U];
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v0;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v1;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v2;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v3;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v4;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v5;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v6;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v7;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v8;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v9;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v10;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v11;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v12;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v13;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v14;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v15;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr__v16) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[0U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[1U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[2U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[3U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[4U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[5U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[6U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[7U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[8U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[9U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[10U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[11U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[12U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[13U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[14U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v0;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[0U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v0;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[0U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v0;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v1;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[1U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v1;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[1U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v1;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v2;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[2U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v2;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[2U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v2;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v3;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[3U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v3;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[3U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v3;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v4;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[4U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v4;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[4U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v4;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v5;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[5U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v5;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[5U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v5;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v6;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[6U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v6;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[6U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v6;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v7;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[7U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v7;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[7U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v7;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v8;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[8U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v8;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[8U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v8;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v9;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[9U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v9;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[9U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v9;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v10;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[10U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v10;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[10U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v10;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v11;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[11U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v11;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[11U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v11;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v12;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[12U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v12;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[12U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v12;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v13;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[13U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v13;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[13U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v13;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v14;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[14U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v14;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[14U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v14;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v15;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[15U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo__v15;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[15U][__VdlyDim0__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type__v15;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr__v16) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[0U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[1U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[2U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[3U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[4U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[5U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[6U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[7U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[8U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[9U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[10U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[11U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[12U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[13U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[14U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[15U] = 0U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__recv_count_r;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__sent_count_r;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_snoop_tracker__DOT__active_r;
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy 
        = __Vdly__tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy;
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v0) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]);
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]);
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v4) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
            = (1ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U]);
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v5) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
            = (1ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U]);
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v6) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
            = (1ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U]);
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v7) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
            = (1ULL | vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U]);
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v8;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v9;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v10;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v11;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v12) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] = 0ULL;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries__v13) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] = 0ULL;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] = 0ULL;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] = 0ULL;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v0;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v1;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v2;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v3;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v4;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v5;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v6;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v7;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v8;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v9;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v10;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v11;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v12;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v13;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v14;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v15;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v16;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v17;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v18;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v19;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v20;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v21;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v22;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v23;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v24;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v25;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v26;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v27;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v28;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v29;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v30;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] 
            = __VdlyVal__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v31;
    }
    if (__VdlySet__tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth__v32) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[0U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[1U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[2U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[3U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[4U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[5U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[6U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[7U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[8U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[9U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[10U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[11U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[12U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[13U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[14U] = 0U;
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[15U] = 0U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__write_release_tracker 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_tracker__DOT__entry_r[5U])));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_augmented_system__DOT__ac_valid 
        = ((IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__busy) 
           & (0ULL != vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_memcpy_tracker__DOT__i_ac_gen__DOT__remaining_mask));
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
    }
    vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__entries[3U])))) {
            vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_undone = 1U;
        }
        vlSelfRef.tb_cci_augmented_system__DOT__dut__DOT__i_normal_tracker__DOT__any_valid = 1U;
    }
}
