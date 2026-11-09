// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_ac_range_gen.h for the primary calling header

#include "Vtb_cci_ac_range_gen__pch.h"

VlCoroutine Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_ac_range_gen___024root* vlSelf);
VlCoroutine Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_ac_range_gen___024root* vlSelf);

void Vtb_cci_ac_range_gen___024root___eval_initial(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_initial\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_ac_range_gen__DOT__clk = 0U;
    Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(Vtb_cci_ac_range_gen___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(Vtb_cci_ac_range_gen___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_ac_range_gen__DOT__pass_count;
    tb_cci_ac_range_gen__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_ac_range_gen__DOT__fail_count;
    tb_cci_ac_range_gen__DOT__fail_count = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T01__1____VlefCall_0__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T01__1____VlefCall_0__ac_line = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__msk = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__exp = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__a = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__exp = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_2__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_2__ac_line = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_1__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_1__ac_line = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_0__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_0__ac_line = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle = 0;
    VlQueue<CData/*5:0*/> __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.atDefault() = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__done_on_last;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__done_on_last = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__msk = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__exp = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__a = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__exp = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__a = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__a = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__exp = 0;
    VlQueue<CData/*5:0*/> __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.atDefault() = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__done_on_last;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__done_on_last = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__msk = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page = 0;
    VlQueue<CData/*5:0*/> __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q.atDefault() = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_4__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_4__ac_line = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_3__ac_page;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_3__ac_page = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_2__ac_page;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_2__ac_page = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_1__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_1__ac_line = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_0__ac_page;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_0__ac_page = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__a = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__a = 0;
    QData/*51:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__a = 0;
    QData/*51:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__a = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__a = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__exp = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_3__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_3__ac_line = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_2__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_2__ac_line = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_1__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_1__ac_line = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_0__ac_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_0__ac_line = 0;
    VlQueue<CData/*5:0*/> __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.atDefault() = 0;
    CData/*5:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__msk = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__a = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__exp = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__a = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__exp = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__a = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__a = 0;
    CData/*5:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__Vfuncout;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__a;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__a = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__msk = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__exp = 0;
    QData/*51:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__pg;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__msk = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__got;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__exp;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__exp = 0;
    // Body
    tb_cci_ac_range_gen__DOT__pass_count = 0U;
    tb_cci_ac_range_gen__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr = 0ULL;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask = 0ULL;
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         103);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         103);
    vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n = 1U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         105);
    VL_WRITEF_NX("--- T01: single bit mask (line 3) ---\n",0);
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__msk = 8ULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__2__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__label = "T01 ac_valid immediately after start"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__3__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T01__1____VlefCall_0__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__4__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__exp = 3U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T01__1____VlefCall_0__ac_line;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__label = "T01 ac_addr line index"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__5__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__5__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__label = "T01 ac_gen_done on single-line (is_last=1)"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__6__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         171);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         171);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__label = "T01 ac_valid=0 after acceptance"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__7__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__label = "T01 ac_gen_done=0 next cycle"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__8__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         306);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         306);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.clear();
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.atDefault() = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__done_on_last = 0;
    VL_WRITEF_NX("--- T02: 8-line contiguous mask (lines 0-7) ---\n",0);
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__msk = 0x00000000000000ffULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__10__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__label = "T02 ac_valid on cycle 0"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__11__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_0__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__12__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_0__ac_line;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__label = "T02 first AC = line 0"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__13__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__13__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__label = "T02 ac_gen_done=0 (not last)"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__14__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_1__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__15__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_1__ac_line);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle = 1U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle)) {
        Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                                   "@(posedge tb_cci_ac_range_gen.clk)");
        co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_ac_range_gen.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                             186);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                             186);
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__a 
            = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                   << 6U))));
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__Vfuncout = 0;
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__Vfuncout 
            = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__a 
                                      >> 6U)));
        __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_2__ac_line 
            = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__16__Vfuncout;
        __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T02__9____VlefCall_2__ac_line);
        if ((7U == __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle)) {
            __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__done_on_last 
                = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
        }
        __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle 
            = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__unnamedblk1__DOT__cycle);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__exp = 8U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size();
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__label = "T02 total ACs collected"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__17__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__17__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    if (VL_LTS_III(32, 0U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 0U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(0U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[0] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 1U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 1U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(1U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[1] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 2U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 2U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(2U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[2] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 3U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 3U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(3U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[3] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 4U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 4U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(4U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[4] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 5U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 5U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(5U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[5] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 6U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 6U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(6U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[6] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 7U, __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp = 7U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__q.at(7U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label = "T02 AC[7] line"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__18__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T02__9__done_on_last;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__label = "T02 ac_gen_done on last AC (line 7)"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__19__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         196);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         196);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__label = "T02 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__20__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__label = "T02 ac_gen_done=0 cycle after done"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__21__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         307);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         307);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.clear();
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.atDefault() = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__done_on_last = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__msk = 0;
    VL_WRITEF_NX("--- T03: sparse mask (lines 2, 5, 10) ---\n",0);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__msk = 0x0000000000000424ULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__msk 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__msk;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__23__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page = 1ULL;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n = 3U;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q.clear();
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q.atDefault() = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout 
        = ((IData)(8U) + __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n);
    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last = 0U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    if (((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
         & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready))) {
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__a 
            = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                   << 6U))));
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__Vfuncout = 0;
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__Vfuncout 
            = (__Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__a 
               >> 0x0cU);
        __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_0__ac_page 
            = __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__25__Vfuncout;
        if (VL_UNLIKELY(((__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_0__ac_page 
                          != __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page)))) {
            VL_WRITEF_NX("FAIL  collect_acs peek page mismatch\n",0);
        }
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__a 
            = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                   << 6U))));
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__Vfuncout = 0;
        __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__Vfuncout 
            = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__a 
                                      >> 6U)));
        __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_1__ac_line 
            = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__26__Vfuncout;
        __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_1__ac_line);
        __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt);
        if (((__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt 
              == __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n) 
             & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done))) {
            __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last = 1U;
        }
    }
    {
        while (VL_LTS_III(32, __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt, __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n)) {
            Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                                       "@(posedge tb_cci_ac_range_gen.clk)");
            co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_ac_range_gen.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                                 144);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                 144);
            __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout 
                = (__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout 
                   - (IData)(1U));
            if (((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
                 & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready))) {
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__a 
                    = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                        << 0x0000000cU) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                           << 6U))));
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__Vfuncout = 0;
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__Vfuncout 
                    = (__Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__a 
                       >> 0x0cU);
                __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_2__ac_page 
                    = __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__27__Vfuncout;
                if (VL_UNLIKELY(((__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_2__ac_page 
                                  != __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page)))) {
                    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__a 
                        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                            << 0x0000000cU) | (QData)((IData)(
                                                              ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                               << 6U))));
                    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__Vfuncout = 0;
                    __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__Vfuncout 
                        = (__Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__a 
                           >> 0x0cU);
                    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_3__ac_page 
                        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_page__28__Vfuncout;
                    VL_WRITEF_NX("FAIL  collect_acs page mismatch: exp=%013h got=%013h\n",2
                                 , '#',52,__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__exp_page
                                 , '#',52,__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_3__ac_page);
                }
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__a 
                    = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                        << 0x0000000cU) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                                           << 6U))));
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__Vfuncout = 0;
                __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__Vfuncout 
                    = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__a 
                                              >> 6U)));
                __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_4__ac_line 
                    = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__29__Vfuncout;
                __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24____VlefCall_4__ac_line);
                __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt 
                    = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt);
                if (((__Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__cnt 
                      == __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n) 
                     & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done))) {
                    __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last = 1U;
                }
            }
            if (VL_UNLIKELY((VL_GTES_III(32, 0U, __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__timeout)))) {
                VL_WRITEF_NX("FAIL  collect_acs timeout after %0d cycles\n",1
                             , '~',32,((IData)(8U) 
                                       + __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__n));
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q 
        = __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__q;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__done_on_last 
        = __Vtask_tb_cci_ac_range_gen__DOT__collect_acs__24__done_on_last;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__exp = 3U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.size();
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__label = "T03 AC count"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__30__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__30__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    if (VL_LTES_III(32, 3U, __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__exp = 2U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.at(0U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__label = "T03 AC[0] = line 2"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__31__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__31__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__exp = 5U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.at(1U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__label = "T03 AC[1] = line 5"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__32__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__32__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__exp = 0x0000000aU;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__q.at(2U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__label = "T03 AC[2] = line 10"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__33__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__33__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T03__22__done_on_last;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__label = "T03 ac_gen_done on last AC"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__34__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         216);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         216);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__label = "T03 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__35__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         308);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         308);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.clear();
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.atDefault() = 0;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line = 0;
    VL_WRITEF_NX("--- T04: backpressure (stall 3 cycles after 1st AC) ---\n",0);
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__37__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__38__Vfuncout;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         226);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 0U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         227);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         227);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__label = "T04 ac_valid held during stall"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__39__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_0__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__40__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__exp 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_0__ac_line;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__label = "T04 same AC during stall"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__41__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__41__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         230);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         230);
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         231);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         231);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__prev_line);
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         233);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         234);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         234);
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_1__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__42__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_1__ac_line);
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         235);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         235);
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_2__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__43__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_2__ac_line);
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         236);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         236);
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__a 
        = ((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
            << 0x0000000cU) | (QData)((IData)(((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx) 
                                               << 6U))));
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__Vfuncout = 0;
    __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__Vfuncout 
        = (0x0000003fU & (IData)((__Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__a 
                                  >> 6U)));
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_3__ac_line 
        = __Vfunc_tb_cci_ac_range_gen__DOT__ac_line__44__Vfuncout;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.push_back(__Vtask_tb_cci_ac_range_gen__DOT__test_T04__36____VlefCall_3__ac_line);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__label = "T04 ac_gen_done on last AC"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__45__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__exp = 4U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.size();
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__label = "T04 all 4 ACs accepted despite backpressure"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__46__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__46__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    if (VL_LTS_III(32, 0U, __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp = 0U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.at(0U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label = "T04 AC[0]=line 0"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 1U, __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp = 1U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.at(1U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label = "T04 AC[1]=line 1"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 2U, __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp = 2U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.at(2U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label = "T04 AC[2]=line 2"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    if (VL_LTS_III(32, 3U, __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.size())) {
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp = 3U;
        __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
            = __Vtask_tb_cci_ac_range_gen__DOT__test_T04__36__q.at(3U);
        vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label = "T04 AC[3]=line 3"s;
        if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got 
             == __Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label));
            tb_cci_ac_range_gen__DOT__pass_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__label)
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__exp
                         , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__47__got);
            tb_cci_ac_range_gen__DOT__fail_count = 
                ((IData)(1U) + tb_cci_ac_range_gen__DOT__fail_count);
        }
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         244);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         244);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__label = "T04 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__48__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         309);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         309);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt = 0U;
    VL_WRITEF_NX("--- T05: start while busy is ignored ---\n",0);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__50__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         253);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr = 2ULL;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask = 0x0000000000000ff0ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         257);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         257);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         259);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    if (vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) {
        __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt 
            = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle = 0U;
    {
        while (VL_GTS_III(32, 0x0000000cU, __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle)) {
            Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                                       "@(posedge tb_cci_ac_range_gen.clk)");
            co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_ac_range_gen.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                                 262);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                 262);
            if (((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
                 & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready))) {
                __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt 
                    = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt);
            }
            if (vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done) {
                goto __Vlabel1;
            }
            __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle 
                = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__unnamedblk4__DOT__cycle);
        }
        __Vlabel1: ;
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__exp = 4U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T05__49__cnt;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__label = "T05 only original 4 ACs issued (start-while-busy ignored)"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__51__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__51__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         267);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         267);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__label = "T05 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__52__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         310);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         310);
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt = 0U;
    VL_WRITEF_NX("--- T06: full 64-bit mask ---\n",0);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__msk = 0xffffffffffffffffULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__54__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x00000042U, __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i)) {
            if (((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
                 & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready))) {
                __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt 
                    = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt);
            }
            if (vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done) {
                __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt 
                    = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt);
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid)))) {
                goto __Vlabel2;
            }
            Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                                       "@(posedge tb_cci_ac_range_gen.clk)");
            co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_ac_range_gen.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                                 281);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                 281);
            __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i 
                = ((IData)(1U) + __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__unnamedblk5__DOT__i);
        }
        __Vlabel2: ;
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__exp = 0x00000040U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__ac_cnt;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__label = "T06 exactly 64 ACs issued"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__55__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__55__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__got 
        = __Vtask_tb_cci_ac_range_gen__DOT__test_T06__53__done_cnt;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__label = "T06 ac_gen_done fires once"s;
    if ((__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__got 
         == __Vtask_tb_cci_ac_range_gen__DOT__check_int__56__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__label)
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__exp
                     , '~',32,__Vtask_tb_cci_ac_range_gen__DOT__check_int__56__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         285);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         285);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__label = "T06 ac_valid=0 after sequence"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__57__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         311);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         311);
    VL_WRITEF_NX("--- T07: ac_gen_done one-cycle pulse ---\n",0);
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__msk = 1ULL;
    __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__pg = 1ULL;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(vlSelf, 
                                                               "@(negedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b3e8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         110);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 1U;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__pg;
    vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask 
        = __Vtask_tb_cci_ac_range_gen__DOT__fire_start__59__msk;
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         114);
    vlSelfRef.tb_cci_ac_range_gen__DOT__start = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__exp = 1U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__label = "T07 ac_gen_done asserted on last AC"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__60__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(vlSelf, 
                                                               "@(posedge tb_cci_ac_range_gen.clk)");
    co_await vlSelfRef.__VtrigSched_h62a9b322__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_ac_range_gen.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                                         295);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                         295);
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__label = "T07 ac_gen_done=0 one cycle later"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__61__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__exp = 0U;
    __Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__got 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid;
    vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__label = "T07 ac_valid=0 one cycle later"s;
    if (((IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__got) 
         == (IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__label));
        tb_cci_ac_range_gen__DOT__pass_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__label)
                     , '#',1,(IData)(__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__exp)
                     , '#',1,__Vtask_tb_cci_ac_range_gen__DOT__check_bit__62__got);
        tb_cci_ac_range_gen__DOT__fail_count = ((IData)(1U) 
                                                + tb_cci_ac_range_gen__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_ac_range_gen__DOT__pass_count
                 , '~',32,tb_cci_ac_range_gen__DOT__fail_count);
    if ((0U == tb_cci_ac_range_gen__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 318, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_ac_range_gen.sv:320: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_ac_range_gen", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_ac_range_gen__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 320, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 
                                             22);
        vlSelfRef.tb_cci_ac_range_gen__DOT__clk = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_ac_range_gen___024root___eval_triggers_vec__act(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__rst_n__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n;
}

bool Vtb_cci_ac_range_gen___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_ac_range_gen___024root___act_comb__TOP__0(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___act_comb__TOP__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done 
        = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last))));
}

void Vtb_cci_ac_range_gen___024root___eval_act(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_act\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done 
            = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
               & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
                  & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready) 
                     & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last))));
    }
}

void Vtb_cci_ac_range_gen___024root___nba_sequent__TOP__0(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy;
    __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy = 0;
    // Body
    __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy;
    if (vlSelfRef.tb_cci_ac_range_gen__DOT__rst_n) {
        if (((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__start) 
             & (~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy)))) {
            if (VL_UNLIKELY(((0ULL == vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask)))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_ac_range_gen.sv:57: Assertion failed in %m: %m: start asserted with start_line_mask='0\n",3, 'M',vlSymsp->name(),"tb_cci_ac_range_gen.dut", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_ac_range_gen.sv", 57, "");
            }
            __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy 
                = (0ULL != vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask);
            vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r 
                = vlSelfRef.tb_cci_ac_range_gen__DOT__start_page_addr;
            vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                = vlSelfRef.tb_cci_ac_range_gen__DOT__start_line_mask;
        } else if ((((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
                     & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid)) 
                    & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready))) {
            vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                = ((~ (1ULL << (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx))) 
                   & vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask);
            if (vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last) {
                __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy = 0U;
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__page_addr_r = 0ULL;
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask = 0ULL;
    }
    vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy 
        = __Vdly__tb_cci_ac_range_gen__DOT__dut__DOT__busy;
    vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0U;
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x3aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x3aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x39U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x39U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x38U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x38U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x37U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x37U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x36U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x36U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x35U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x35U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x34U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x34U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x33U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x33U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x32U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x32U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x31U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x31U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x30U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x30U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x2aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x2aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x29U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x29U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x28U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x28U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x27U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x27U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x26U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x26U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x25U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x25U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x24U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x24U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x23U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x23U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x22U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x22U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x21U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x21U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x20U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x20U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x1aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x1aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x19U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x19U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x18U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x18U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x17U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x17U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x16U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x16U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x15U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x15U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x14U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x14U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x13U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x13U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x12U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x12U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x11U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x11U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x10U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x10U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0fU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0fU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0eU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0eU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0dU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0dU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0cU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0cU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0bU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0bU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 0x0aU)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0x0aU;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 9U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 9U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 8U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 8U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 7U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 7U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 6U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 6U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 5U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 5U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 4U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 4U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 3U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 3U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 2U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 2U;
    }
    if ((1U & (IData)((vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       >> 1U)))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask))) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__current_idx = 0U;
    }
    vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid = 
        ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
         & (0ULL != vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask));
    vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__remaining_mask 
                          - 1ULL))));
}

void Vtb_cci_ac_range_gen___024root___eval_nba(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_nba\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_ac_range_gen___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_ac_range_gen__DOT__ac_gen_done 
            = ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__busy) 
               & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_valid) 
                  & ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__ac_ready) 
                     & (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__dut__DOT__is_last))));
    }
}

void Vtb_cci_ac_range_gen___024root___timing_ready(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___timing_ready\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h62a9b322__0.ready("@(posedge tb_cci_ac_range_gen.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready("@(negedge tb_cci_ac_range_gen.clk)");
    }
}

void Vtb_cci_ac_range_gen___024root___timing_resume(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___timing_resume\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h62a9b322__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_ac_range_gen.clk)");
    vlSelfRef.__VtrigSched_h62a9b3e8__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_ac_range_gen.clk)");
    vlSelfRef.__VtrigSched_h62a9b322__0.resume("@(posedge tb_cci_ac_range_gen.clk)");
    vlSelfRef.__VtrigSched_h62a9b3e8__0.resume("@(negedge tb_cci_ac_range_gen.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_ac_range_gen___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_ac_range_gen___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_ac_range_gen___024root___eval_phase__act(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_phase__act\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_ac_range_gen___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_ac_range_gen___024root___timing_ready(vlSelf);
    Vtb_cci_ac_range_gen___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_ac_range_gen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_ac_range_gen___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_ac_range_gen___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_ac_range_gen___024root___timing_resume(vlSelf);
        Vtb_cci_ac_range_gen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_ac_range_gen___024root___eval_phase__inact(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_phase__inact\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 16, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_ac_range_gen___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_ac_range_gen___024root___eval_phase__nba(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_phase__nba\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_ac_range_gen___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_ac_range_gen___024root___eval_nba(vlSelf);
        Vtb_cci_ac_range_gen___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_ac_range_gen___024root___eval(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_ac_range_gen___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 16, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 16, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_ac_range_gen___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_ac_range_gen.sv", 16, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_ac_range_gen___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_ac_range_gen___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_ac_range_gen___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0(Vtb_cci_ac_range_gen___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b322__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0(Vtb_cci_ac_range_gen___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root____VbeforeTrig_h62a9b3e8__0\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_ac_range_gen__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_ac_range_gen__DOT__clk__0 
        = vlSelfRef.tb_cci_ac_range_gen__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b322__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h62a9b3e8__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cci_ac_range_gen___024root___eval_debug_assertions(Vtb_cci_ac_range_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_ac_range_gen___024root___eval_debug_assertions\n"); );
    Vtb_cci_ac_range_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
