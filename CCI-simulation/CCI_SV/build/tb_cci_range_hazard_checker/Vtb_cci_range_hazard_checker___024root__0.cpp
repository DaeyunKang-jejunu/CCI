// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_range_hazard_checker.h for the primary calling header

#include "Vtb_cci_range_hazard_checker__pch.h"

VlCoroutine Vtb_cci_range_hazard_checker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_range_hazard_checker___024root* vlSelf);

void Vtb_cci_range_hazard_checker___024root___eval_initial(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_initial\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cci_range_hazard_checker___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vtb_cci_range_hazard_checker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_range_hazard_checker__DOT__pass_count;
    tb_cci_range_hazard_checker__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_range_hazard_checker__DOT__fail_count;
    tb_cci_range_hazard_checker__DOT__fail_count = 0;
    IData/*31:0*/ tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout);
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e);
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__2__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__2__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__5__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__5__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__8__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__8__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__11__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__11__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__14__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__14__expected = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__16__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__16__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__19__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__19__expected = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__21__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__21__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__24__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__24__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e);
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__26__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__26__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__29__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__29__expected = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__31__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__31__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__34__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__34__expected = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout);
    CData/*1:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__state;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__state = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask = 0;
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask = 0;
    VlWide<6>/*186:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e);
    QData/*63:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__Vfuncout;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__page_num;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__page_num = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__line_idx;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__line_idx = 0;
    CData/*5:0*/ __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__byte_off;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__byte_off = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_hazard_checker__DOT__check__37__expected;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__37__expected = 0;
    // Body
    tb_cci_range_hazard_checker__DOT__pass_count = 0U;
    tb_cci_range_hazard_checker__DOT__fail_count = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[0U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[1U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[2U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[3U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[4U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[5U] = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[5U] 
        = (0x03ffffffU & __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[5U]);
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__idle_entry__0__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_source_id = 2U;
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr = 0x00000000000010c0ULL;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__2__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__2__test_name = "T01 idle entry, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__2__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__2__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__2__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__2__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__3__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__line_idx = 3U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__4__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__5__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__5__test_name = "T02 probe_valid=0, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__5__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__5__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__5__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__5__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__6__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__line_idx = 3U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__page_num = 2ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__7__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__8__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__8__test_name = "T03 different page, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__8__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__8__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__8__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__8__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__9__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__line_idx = 9U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__10__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__11__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__11__test_name = "T04 line not in mask, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__11__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__11__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__11__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__11__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__12__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__line_idx = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__13__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__14__expected = 1U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__14__test_name = "T05 INVALIDATING line 0, hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__14__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__14__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__14__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__14__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__line_idx = 7U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__15__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__16__expected = 1U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__16__test_name = "T05 INVALIDATING line 7, hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__16__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__16__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__16__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__16__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask = 0x000000000000000fULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__state = 1U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__17__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__line_idx = 5U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__18__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__19__expected = 1U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__19__test_name = "T06 TRACKING pending line 5, hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__19__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__19__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__19__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__19__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__line_idx = 2U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__20__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__21__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__21__test_name = "T07 TRACKING done line 2, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__21__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__21__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__21__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__21__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    vlSelfRef.tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask = 0x000000000000000fULL;
    tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
    while (VL_GTES_III(32, 7U, tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask 
            = vlSelfRef.tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask = 0x00000000000000ffULL;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num = 1ULL;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__state = 1U;
        VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout);
        VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e);
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[2U] 
            = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[2U]) 
               | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask) 
                  << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[3U] 
            = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask) 
                >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask 
                                            >> 0x00000020U)) 
                                   << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[4U] 
            = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__line_mask 
                         >> 0x00000020U)) >> 0x0000001cU) 
               | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num) 
                  << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[5U] 
            = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num) 
                               >> 0x0000001cU) | ((
                                                   (0xfff00000U 
                                                    & (0x00400000U 
                                                       | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__state) 
                                                          << 0x00000014U))) 
                                                   | (IData)(
                                                             (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__page_num 
                                                              >> 0x00000020U))) 
                                                  << 4U)));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[0U] 
            = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask) 
                     << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[1U] 
            = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask) 
                >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask 
                                            >> 0x00000020U)) 
                                   << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[2U] 
            = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[2U]) 
               | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__done_mask 
                           >> 0x00000020U)) >> 0x0000001cU));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[0U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[0U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[1U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[1U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[2U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[2U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[3U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[3U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[4U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[4U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[5U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__e[5U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[0U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[1U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[2U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[3U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[4U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__22__Vfuncout[5U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__byte_off = 0U;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__line_idx 
            = (0x0000003fU & tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__page_num = 1ULL;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__Vfuncout = 0;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__Vfuncout 
            = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__page_num 
                << 0x0000000cU) | (QData)((IData)((
                                                   ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__line_idx) 
                                                    << 6U) 
                                                   | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__byte_off)))));
        vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__23__Vfuncout;
        __Vtask_tb_cci_range_hazard_checker__DOT__check__24__expected = 1U;
        vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__24__test_name 
            = VL_SFORMATF_N_NX("T08 before done line %0d, hazard",1
                               , '~',32,tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i) ;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                             78);
        if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
             == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__24__expected))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__24__test_name));
            tb_cci_range_hazard_checker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__24__test_name)
                         , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__24__expected)
                         , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
            tb_cci_range_hazard_checker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
        }
        vlSelfRef.tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask 
            = (vlSelfRef.tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask 
               | ((QData)((IData)(1U)) << (0x0000003fU 
                                           & tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask 
            = vlSelfRef.tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__dmask;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask = 0x00000000000000ffULL;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num = 1ULL;
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__state = 1U;
        VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout);
        VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e);
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[2U] 
            = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[2U]) 
               | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask) 
                  << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[3U] 
            = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask) 
                >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask 
                                            >> 0x00000020U)) 
                                   << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[4U] 
            = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__line_mask 
                         >> 0x00000020U)) >> 0x0000001cU) 
               | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num) 
                  << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[5U] 
            = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num) 
                               >> 0x0000001cU) | ((
                                                   (0xfff00000U 
                                                    & (0x00400000U 
                                                       | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__state) 
                                                          << 0x00000014U))) 
                                                   | (IData)(
                                                             (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__page_num 
                                                              >> 0x00000020U))) 
                                                  << 4U)));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[0U] 
            = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask) 
                     << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[1U] 
            = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask) 
                >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask 
                                            >> 0x00000020U)) 
                                   << 4U));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[2U] 
            = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[2U]) 
               | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__done_mask 
                           >> 0x00000020U)) >> 0x0000001cU));
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[0U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[0U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[1U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[1U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[2U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[2U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[3U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[3U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[4U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[4U];
        __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[5U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__e[5U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[0U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[1U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[2U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[3U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[4U];
        vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
            = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__25__Vfuncout[5U];
        __Vtask_tb_cci_range_hazard_checker__DOT__check__26__expected = 0U;
        vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__26__test_name 
            = VL_SFORMATF_N_NX("T08 after  done line %0d, no hazard",1
                               , '~',32,tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i) ;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                             78);
        if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
             == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__26__expected))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__26__test_name));
            tb_cci_range_hazard_checker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__26__test_name)
                         , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__26__expected)
                         , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
            tb_cci_range_hazard_checker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
        }
        tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask = 0x0000000000000424ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__27__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__line_idx = 5U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__28__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__29__expected = 1U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__29__test_name = "T09 sparse mask targeted line 5, hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__29__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__29__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__29__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__29__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__line_idx = 3U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__30__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__31__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__31__test_name = "T10 sparse mask gap line 3, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__31__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__31__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__31__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__31__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__state = 2U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__32__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__line_idx = 3U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__33__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__34__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__34__test_name = "T11 DONE state all lines complete, no hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__34__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__34__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__34__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__34__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask = 0ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask = 0x00000000000000ffULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__state = 0U;
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout);
    VL_ZERO_W(187, __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e);
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[2U] 
        = ((0x0000000fU & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[2U]) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[3U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[4U] 
        = (((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__line_mask 
                     >> 0x00000020U)) >> 0x0000001cU) 
           | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num) 
              << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[5U] 
        = (0x07ffffffU & (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num) 
                           >> 0x0000001cU) | (((0xfff00000U 
                                                & (0x00400000U 
                                                   | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__state) 
                                                      << 0x00000014U))) 
                                               | (IData)(
                                                         (__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__page_num 
                                                          >> 0x00000020U))) 
                                              << 4U)));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[0U] 
        = (1U | ((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask) 
                 << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[1U] 
        = (((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask) 
            >> 0x0000001cU) | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask 
                                        >> 0x00000020U)) 
                               << 4U));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[2U] 
        = ((0xfffffff0U & __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[2U]) 
           | ((IData)((__Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__done_mask 
                       >> 0x00000020U)) >> 0x0000001cU));
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[0U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[1U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[2U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[3U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[4U];
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__e[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[0U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[1U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[1U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[2U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[2U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[3U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[3U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[4U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_entry__35__Vfuncout[5U];
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid = 1U;
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_source_id = 1U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__byte_off = 0U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__line_idx = 3U;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__page_num = 1ULL;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__Vfuncout = 0;
    __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__Vfuncout 
        = ((__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__page_num 
            << 0x0000000cU) | (QData)((IData)((((IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__line_idx) 
                                                << 6U) 
                                               | (IData)(__Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__byte_off)))));
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
        = __Vfunc_tb_cci_range_hazard_checker__DOT__make_addr__36__Vfuncout;
    __Vtask_tb_cci_range_hazard_checker__DOT__check__37__expected = 0U;
    vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__37__test_name = "T12 same source, no self-hazard"s;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 
                                         78);
    if (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard) 
         == (IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__37__expected))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__37__test_name));
        tb_cci_range_hazard_checker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  expected=%0b  got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_hazard_checker__DOT__check__37__test_name)
                     , '#',1,(IData)(__Vtask_tb_cci_range_hazard_checker__DOT__check__37__expected)
                     , '#',1,vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard);
        tb_cci_range_hazard_checker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_range_hazard_checker__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_range_hazard_checker__DOT__pass_count
                 , '~',32,tb_cci_range_hazard_checker__DOT__fail_count);
    if ((0U == tb_cci_range_hazard_checker__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 184, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_range_hazard_checker.sv:186: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_range_hazard_checker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_range_hazard_checker__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 186, "", false);
    }
    co_return;
}

void Vtb_cci_range_hazard_checker___024root___eval_triggers_vec__act(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_cci_range_hazard_checker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_range_hazard_checker___024root___act_sequent__TOP__0(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___act_sequent__TOP__0\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_hazard 
        = (((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_source_id) 
            != (0x0000000fU & vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[0U])) 
           & (((vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
                >> 0x0000000cU) == (0x000fffffffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U])) 
                                        << 0x0000001cU) 
                                       | ((QData)((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[4U])) 
                                          >> 4U)))) 
              & ((vlSelfRef.tb_cci_range_hazard_checker__DOT__entry
                  [(((IData)(0x00000044U) + (0x0000003fU 
                                             & (IData)(
                                                       (vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
                                                        >> 6U)))) 
                    >> 5U)] >> (0x0000001fU & ((IData)(0x00000044U) 
                                               + (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
                                                             >> 6U)))))) 
                 & ((~ (vlSelfRef.tb_cci_range_hazard_checker__DOT__entry
                        [(((IData)(4U) + (0x0000003fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
                                                     >> 6U)))) 
                          >> 5U)] >> (0x0000001fU & 
                                      ((IData)(4U) 
                                       + (0x0000003fU 
                                          & (IData)(
                                                    (vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_addr 
                                                     >> 6U))))))) 
                    & ((IData)(vlSelfRef.tb_cci_range_hazard_checker__DOT__probe_valid) 
                       & (vlSelfRef.tb_cci_range_hazard_checker__DOT__entry[5U] 
                          >> 0x0000001aU))))));
}

void Vtb_cci_range_hazard_checker___024root___eval_act(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_act\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_range_hazard_checker___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_cci_range_hazard_checker___024root___eval_nba(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_nba\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_range_hazard_checker___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_cci_range_hazard_checker___024root___timing_resume(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___timing_resume\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_range_hazard_checker___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_range_hazard_checker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_range_hazard_checker___024root___eval_phase__act(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_phase__act\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_range_hazard_checker___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_range_hazard_checker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_range_hazard_checker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_range_hazard_checker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_range_hazard_checker___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_range_hazard_checker___024root___timing_resume(vlSelf);
        Vtb_cci_range_hazard_checker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_range_hazard_checker___024root___eval_phase__inact(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_phase__inact\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 23, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_range_hazard_checker___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_range_hazard_checker___024root___eval_phase__nba(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_phase__nba\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_range_hazard_checker___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_range_hazard_checker___024root___eval_nba(vlSelf);
        Vtb_cci_range_hazard_checker___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_range_hazard_checker___024root___eval(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_range_hazard_checker___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 23, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 23, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_range_hazard_checker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_range_hazard_checker.sv", 23, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_range_hazard_checker___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_range_hazard_checker___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_range_hazard_checker___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_cci_range_hazard_checker___024root___eval_debug_assertions(Vtb_cci_range_hazard_checker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_hazard_checker___024root___eval_debug_assertions\n"); );
    Vtb_cci_range_hazard_checker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
