// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_baseline_line_tracker.h for the primary calling header

#include "Vtb_baseline_line_tracker__pch.h"

VlCoroutine Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_baseline_line_tracker___024root* vlSelf);
VlCoroutine Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_baseline_line_tracker___024root* vlSelf);

void Vtb_baseline_line_tracker___024root___eval_initial(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_initial\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_baseline_line_tracker__DOT__clk = 0U;
    Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(Vtb_baseline_line_tracker___024root* vlSelf, const char* __VeventDescription);
void Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(Vtb_baseline_line_tracker___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_baseline_line_tracker__DOT__pass_count;
    tb_baseline_line_tracker__DOT__pass_count = 0;
    IData/*31:0*/ tb_baseline_line_tracker__DOT__fail_count;
    tb_baseline_line_tracker__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__exp = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__src = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__base;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__base = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__msk;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__msk = 0;
    CData/*3:0*/ __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__src;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__src = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__exp = 0;
    QData/*63:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__msk;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__msk = 0;
    IData/*31:0*/ __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__exp = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__got;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__got = 0;
    CData/*0:0*/ __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__exp;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__exp = 0;
    // Body
    tb_baseline_line_tracker__DOT__pass_count = 0U;
    tb_baseline_line_tracker__DOT__fail_count = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T01: single-line alloc/complete ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__msk = 1ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__2__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__3__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__label = "T01 tracker_busy after alloc"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__3__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__4__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__label = "T01 req_ready=0 while busy"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__4__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__5__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__label = "T01 tracker_done=0 before done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__5__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         137);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 2U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         141);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         141);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__6__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__label = "T01 hazard=1 before write done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__6__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         144);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         146);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         146);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__7__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__label = "T01 hazard=0 after write done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__7__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__8__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__label = "T01 tracker_done=1 on last write"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__8__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         152);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         152);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__9__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__label = "T01 req_ready=1 after done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__9__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__10__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__label = "T01 tracker_busy=0 after done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__10__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__11__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__label = "T01 tracker_done=0 next cycle"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__11__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         350);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         350);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T02: 4-line batch alloc (mask 0xF) ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__msk = 0x000000000000000fULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__14__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__15__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__label = "T02 tracker_busy=1 after 4-line alloc"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__15__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__16__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__label = "T02 req_ready=0 while 4 entries active"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__16__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 2U;
    __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i)) {
        Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                        "@(negedge tb_baseline_line_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_baseline_line_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                             167);
        vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
            = (0x0000000000001000ULL | (QData)((IData)(
                                                       (0x00000fc0U 
                                                        & (__Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i 
                                                           << 6U)))));
        Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                        "@(posedge tb_baseline_line_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_baseline_line_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                             169);
        __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__exp = 1U;
        __Vtask_tb_baseline_line_tracker__DOT__check_bit__17__got 
            = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
        vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__label 
            = VL_SFORMATF_N_NX("T02 hazard=1 for line %0d",1
                               , '~',32,__Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i) ;
        if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__got) 
             == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__label));
            tb_baseline_line_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__label)
                         , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__exp)
                         , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__17__got);
            tb_baseline_line_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
        }
        __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__test_T02__13__unnamedblk2__DOT__i);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__msk = 0x000000000000000fULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__18__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         175);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         175);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__19__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__label = "T02 req_ready=1 after all writes"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__19__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         351);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         351);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T03: hazard CAM correctness ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__msk = 0x0000010000100420ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__22__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 3U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         187);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001280ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         188);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         188);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__23__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__label = "T03 hazard=1 for allocated line 10"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__23__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         191);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001a00ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         192);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         192);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__24__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__label = "T03 hazard=1 for allocated line 40"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__24__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         195);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001180ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         196);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         196);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__25__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__label = "T03 hazard=0 for unallocated line 6"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__25__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         199);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000002280ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         200);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         200);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__26__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__label = "T03 hazard=0 for same line, diff page"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__26__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__msk = 0x0000010000100420ULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__27__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         205);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         205);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__28__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__label = "T03 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__28__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         352);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         352);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T04: same source, no self-hazard ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__msk = 0x000000000000000fULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__31__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         213);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001080ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         217);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         217);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__32__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__label = "T04 no self-hazard (same source_id)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__32__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__msk = 0x000000000000000fULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__33__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         222);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         222);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__34__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__label = "T04 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__34__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         353);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         353);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T05: per-line hazard release ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__msk = 0x000000000000000fULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__37__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 2U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         232);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001040ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         233);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         233);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__38__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__label = "T05 hazard=1 before done for line 1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__38__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         236);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         237);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         237);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__39__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__label = "T05 hazard=0 after done for line 1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__39__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         241);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         242);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         242);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__40__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__label = "T05 hazard=1 still pending for line 0"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__40__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__msk = 0x000000000000000dULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__41__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         247);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         247);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__42__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__label = "T05 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__42__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         354);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         354);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T06: tracker_done one-cycle pulse ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__msk = 3ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__45__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         254);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         255);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         255);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__46__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__label = "T06 tracker_done=0 after partial completion"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__46__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__47__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__label = "T06 tracker_busy=1 still active"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__47__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         260);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         261);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         261);
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__48__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__label = "T06 tracker_done=1 on last write"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__48__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         265);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         265);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__49__got 
        = ((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
           & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__label = "T06 tracker_done=0 next cycle"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__49__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__50__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__label = "T06 req_ready=1 after done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__50__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         355);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         355);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T07: back-to-back requests ---\n",0);
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__msk = 1ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__53__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__msk = 1ULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__54__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         274);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         274);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__55__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__label = "T07 req_ready=1 after first done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__55__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__src = 2U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__msk = 3ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__base = 0x0000000000002000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__56__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__57__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__label = "T07 new entry accepted (tracker_busy=1)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__57__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__58__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__label = "T07 req_ready=0 for new entry"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__58__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 3U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         283);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000002000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         284);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         284);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__59__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__label = "T07 hazard=1 for new entry"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__59__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__msk = 3ULL;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__60__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         289);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         289);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__61__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__label = "T07 req_ready=1 after second done"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__61__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         356);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         356);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T08: sparse mask allocation ---\n",0);
    vlSelfRef.tb_baseline_line_tracker__DOT__test_T08__Vstatic__sparse = 0x8000000000020008ULL;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__src = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__msk 
        = vlSelfRef.tb_baseline_line_tracker__DOT__test_T08__Vstatic__sparse;
    __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__base = 0x0000000000001000ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         109);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__base;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__msk;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id 
        = __Vtask_tb_baseline_line_tracker__DOT__submit_req__64__src;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         114);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         114);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 5U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         302);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x00000000000010c0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         303);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         303);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__65__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__label = "T08 hazard=1 line 3  (allocated)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__65__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         306);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001440ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         307);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         307);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__66__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__label = "T08 hazard=1 line 17 (allocated)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__66__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         310);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001fc0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         311);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         311);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__67__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__label = "T08 hazard=1 line 63 (allocated)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__67__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         314);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001100ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         315);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         315);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__68__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__label = "T08 hazard=0 line 4  (not alloc)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__68__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         318);
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0x0000000000001f80ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         319);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__69__got 
        = (0U != vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec);
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__label = "T08 hazard=0 line 62 (not alloc)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__69__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__msk 
        = vlSelfRef.tb_baseline_line_tracker__DOT__test_T08__Vstatic__sparse;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000040U, __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i)) {
        if ((1U & (IData)((__Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__msk 
                           >> (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i))))) {
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                            "@(negedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 121);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx 
                = (0x0000003fU & __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i);
            Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                            "@(posedge tb_baseline_line_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_baseline_line_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                                 124);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                 124);
            vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
        }
        __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_baseline_line_tracker__DOT__complete_writes__70__unnamedblk1__DOT__i);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         324);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         324);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__71__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__label = "T08 cleanup: req_ready=1"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__71__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         357);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         357);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id = 0U;
    vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr = 0ULL;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         99);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         99);
    vlSelfRef.tb_baseline_line_tracker__DOT__rst_n = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         101);
    VL_WRITEF_NX("--- T09: req_error on zero mask ---\n",0);
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(vlSelf, 
                                                                    "@(negedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4ad2__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         331);
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr = 0x0000000000001000ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id = 1U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         336);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         336);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__74__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__req_error;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__label = "T09 req_error=1 zero mask"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__74__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__exp = 1U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__75__got 
        = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid)));
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__label = "T09 req_ready=1 (idle)"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__75__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__76__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__label = "T09 tracker_busy=0 no alloc"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__76__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__req_valid = 0U;
    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(vlSelf, 
                                                                    "@(posedge tb_baseline_line_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h0f7f4a18__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_baseline_line_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                                         341);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                         341);
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__77__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__label = "T09 tracker_busy=0 next cycle"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__77__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__exp = 0U;
    __Vtask_tb_baseline_line_tracker__DOT__check_bit__78__got 
        = vlSelfRef.tb_baseline_line_tracker__DOT__req_error;
    vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__label = "T09 req_error=0 idle"s;
    if (((IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__got) 
         == (IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__label));
        tb_baseline_line_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__label)
                     , '#',1,(IData)(__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__exp)
                     , '#',1,__Vtask_tb_baseline_line_tracker__DOT__check_bit__78__got);
        tb_baseline_line_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_baseline_line_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_baseline_line_tracker__DOT__pass_count
                 , '~',32,tb_baseline_line_tracker__DOT__fail_count);
    if ((0U == tb_baseline_line_tracker__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 364, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_baseline_line_tracker.sv:366: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_baseline_line_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_baseline_line_tracker__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 366, "", false);
    }
    co_return;
}

VlCoroutine Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 
                                             25);
        vlSelfRef.tb_baseline_line_tracker__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk)));
    }
    co_return;
}

void Vtb_baseline_line_tracker___024root___eval_triggers_vec__act(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_triggers_vec__act\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0 
        = vlSelfRef.tb_baseline_line_tracker__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__rst_n__0 
        = vlSelfRef.tb_baseline_line_tracker__DOT__rst_n;
}

bool Vtb_baseline_line_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___trigger_anySet__act\n"); );
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

void Vtb_baseline_line_tracker___024root___act_comb__TOP__0(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___act_comb__TOP__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_0__cci_popcount;
    IData/*31:0*/ tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei;
    tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei = 0;
    QData/*63:0*/ __Vfunc_cci_popcount__79__m;
    __Vfunc_cci_popcount__79__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__79__cnt;
    __Vfunc_cci_popcount__79__cnt = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | (IData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                 & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                                            >> 0x0000003fU))) 
                                & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U]))) 
                               & ((0x03ffffffffffffffULL 
                                   & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                                      >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                  >> 6U))) 
                              & ((0x0000000fU & (IData)(
                                                        (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                                                         >> 1U))) 
                                 != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 1U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 2U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 3U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 4U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 5U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 6U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 7U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 8U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 9U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000aU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000bU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000cU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000dU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000eU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000000fU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000010U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000011U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000012U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000013U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000014U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000015U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000016U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000017U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000018U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000019U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001aU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001bU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001cU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001dU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001eU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000001fU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000020U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000021U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000022U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000023U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000024U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000025U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000026U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000027U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000028U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000029U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002aU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002bU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002cU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002dU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002eU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000002fU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000030U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000031U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000032U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000033U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000034U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000035U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000036U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000037U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000038U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x00000039U));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003aU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003bU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003cU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003dU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003eU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__hazard_vec) 
           | ((QData)((IData)((((((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_valid) 
                                  & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                                             >> 0x0000003fU))) 
                                 & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U]))) 
                                & ((0x03ffffffffffffffULL 
                                    & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                                       >> 5U)) == (vlSelfRef.tb_baseline_line_tracker__DOT__probe_addr 
                                                   >> 6U))) 
                               & ((0x0000000fU & (IData)(
                                                         (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                                                          >> 1U))) 
                                  != (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__probe_source_id))))) 
              << 0x0000003fU));
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx)));
    __Vfunc_cci_popcount__79__m = vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask;
    __Vfunc_cci_popcount__79__cnt = 0U;
    if ((1U & (IData)(__Vfunc_cci_popcount__79__m))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 1U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 2U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 3U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 4U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 5U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 6U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 7U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 8U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 9U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0aU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0bU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0cU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0dU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0eU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x0fU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x10U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x11U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x12U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x13U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x14U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x15U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x16U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x17U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x18U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x19U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1aU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1bU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1cU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1dU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1eU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x1fU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x20U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x21U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x22U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x23U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x24U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x25U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x26U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x27U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x28U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x29U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2aU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2bU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2cU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2dU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2eU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x2fU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x30U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x31U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x32U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x33U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x34U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x35U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x36U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x37U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x38U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x39U)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3aU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3bU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3cU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3dU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3eU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    if ((1U & (IData)((__Vfunc_cci_popcount__79__m 
                       >> 0x3fU)))) {
        __Vfunc_cci_popcount__79__cnt = ((IData)(1U) 
                                         + __Vfunc_cci_popcount__79__cnt);
    }
    tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_0__cci_popcount 
        = __Vfunc_cci_popcount__79__cnt;
    vlSelfRef.tb_baseline_line_tracker__DOT__req_error 
        = (((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_valid) 
            & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid))) 
           & ((0ULL == vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask) 
              | VL_LTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_0__cci_popcount)));
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[__Vilp1] = 0ULL;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei = 0U;
    if ((1U & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0x800000000000001fULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                  << 0x0000000bU));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 1U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000020ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 2U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000040ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 3U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000060ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 4U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000080ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 5U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 6U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 7U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000000e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 8U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000100ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 9U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000120ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0aU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000140ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0bU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000160ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0cU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000180ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0dU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0eU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x0fU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000001e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x10U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000200ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x11U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000220ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x12U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000240ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x13U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000260ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x14U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000280ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x15U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x16U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x17U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000002e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x18U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000300ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x19U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000320ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1aU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000340ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1bU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000360ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1cU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000380ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1dU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1eU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x1fU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000003e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x20U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000400ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x21U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000420ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x22U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000440ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x23U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000460ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x24U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000480ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x25U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x26U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x27U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000004e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x28U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000500ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x29U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000520ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2aU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000540ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2bU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000560ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2cU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000580ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2dU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2eU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x2fU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000005e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x30U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000600ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x31U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000620ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x32U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000640ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x33U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000660ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x34U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000680ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x35U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x36U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x37U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000006e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x38U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000700ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x39U)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000720ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3aU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000740ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3bU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000760ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3cU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x0000000000000780ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3dU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007a0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3eU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007c0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    if (((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__req_line_mask 
                  >> 0x3fU)) & VL_GTS_III(32, 0x00000040U, tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x8000000000000000ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        vlSelfRef.__Vfunc_cci_page_addr__80__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
            = (vlSelfRef.__Vfunc_cci_page_addr__80__addr 
               >> 0x0cU);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0x00000000000007e0ULL | ((0x800000000000001fULL 
                                         & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                                         [(0x0000003fU 
                                           & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
                                        | (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_1__cci_page_addr 
                                           << 0x0000000bU)));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = ((0xffffffffffffffe1ULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
                [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]) 
               | ((QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_source_id)) 
                  << 1U));
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[(0x0000003fU 
                                                                    & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)] 
            = (0xfffffffffffffffeULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e
               [(0x0000003fU & tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei)]);
        tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei 
            = ((IData)(1U) + tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei);
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 0U;
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
    if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                   >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U]))) 
         & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                                      >> 5U)) == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match = 1U;
    }
}

void Vtb_baseline_line_tracker___024root___eval_act(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_act\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_baseline_line_tracker___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_baseline_line_tracker___024root___nba_sequent__TOP__0(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___nba_sequent__TOP__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*51:0*/ __Vfunc_cci_page_addr__81__Vfuncout;
    __Vfunc_cci_page_addr__81__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_cci_page_addr__81__addr;
    __Vfunc_cci_page_addr__81__addr = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v0;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v64;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v65;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v66;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v66 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v67;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v68;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v69;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v69 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v70;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v70 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v71;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v71 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v72;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v72 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v73;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v73 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v74;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v74 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v75;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v75 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v76;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v76 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v77;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v77 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v78;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v78 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v79;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v79 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v80;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v80 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v81;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v81 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v82;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v82 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v83;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v83 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v84;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v84 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v85;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v85 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v86;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v86 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v87;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v87 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v88;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v88 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v89;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v89 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v90;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v90 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v91;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v91 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v92;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v92 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v93;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v93 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v94;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v94 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v95;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v95 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v96;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v96 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v97;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v97 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v98;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v98 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v99;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v99 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v100;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v100 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v101;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v101 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v102;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v102 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v103;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v103 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v104;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v104 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v105;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v105 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v106;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v106 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v107;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v107 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v108;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v108 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v109;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v109 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v110;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v110 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v111;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v111 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v112;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v112 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v113;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v113 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v114;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v114 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v115;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v115 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v116;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v116 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v117;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v117 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v118;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v118 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v119;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v119 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v120;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v120 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v121;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v121 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v122;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v122 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v123;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v123 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v124;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v124 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v125;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v125 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v126;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v126 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v127;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v127 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v130;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v130 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v131;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v131 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v132;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v132 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v133;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v133 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v134;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v134 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v135;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v135 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v136;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v136 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v137;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v137 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v138;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v138 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v139;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v139 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v140;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v140 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v141;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v141 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v142;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v142 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v143;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v143 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v144;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v144 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v145;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v145 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v146;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v146 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v147;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v147 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v148;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v148 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v149;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v149 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v150;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v150 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v151;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v151 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v152;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v152 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v153;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v153 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v154;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v154 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v155;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v155 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v156;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v156 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v157;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v157 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v158;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v158 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v159;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v159 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v160;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v160 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v161;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v161 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v162;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v162 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v163;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v163 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v164;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v164 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v165;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v165 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v166;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v166 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v167;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v167 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v168;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v168 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v169;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v169 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v170;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v170 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v171;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v171 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v172;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v172 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v173;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v173 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v174;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v174 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v175;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v175 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v176;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v176 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v177;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v177 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v178;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v178 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v179;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v179 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v180;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v180 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v181;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v181 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v182;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v182 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v183;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v183 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v184;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v184 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v185;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v185 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v186;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v186 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v187;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v187 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v188;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v188 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v189;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v189 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v190;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v190 = 0;
    QData/*63:0*/ __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v191;
    __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v191 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v192;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v192 = 0;
    CData/*0:0*/ __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v193;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v193 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v0 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v64 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v65 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v66 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v67 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v68 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v69 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v70 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v71 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v72 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v73 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v74 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v75 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v76 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v77 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v78 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v79 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v80 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v81 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v82 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v83 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v84 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v85 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v86 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v87 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v88 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v89 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v90 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v91 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v92 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v93 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v94 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v95 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v96 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v97 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v98 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v99 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v100 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v101 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v102 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v103 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v104 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v105 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v106 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v107 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v108 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v109 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v110 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v111 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v112 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v113 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v114 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v115 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v116 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v117 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v118 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v119 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v120 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v121 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v122 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v123 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v124 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v125 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v126 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v127 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v192 = 0U;
    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v193 = 0U;
    if (vlSelfRef.tb_baseline_line_tracker__DOT__rst_n) {
        if (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid) {
            if (((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone)) 
                 & (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid))) {
                __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v0 = 1U;
            } else if (vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_valid) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__cam_any_match)))))) {
                    VL_WRITEF_NX("[%0t] %%Warning: baseline_line_tracker.sv:191: %m: %m: wr_done line_idx=%0d (cl_addr=%h) matched no active entry \342\200\224 possible spurious completion or AXI-ID page aliasing\n",5, 'M',vlSymsp->name(),"tb_baseline_line_tracker.dut", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',6,(IData)(vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx)
                                 , '#',58,vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr);
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v64 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v65 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v66 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v67 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v68 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v69 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v70 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v71 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v72 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v73 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v74 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v75 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v76 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v77 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v78 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v79 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v80 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v81 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v82 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v83 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v84 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v85 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v86 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v87 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v88 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v89 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v90 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v91 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v92 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v93 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v94 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v95 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v96 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v97 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v98 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v99 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v100 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v101 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v102 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v103 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v104 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v105 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v106 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v107 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v108 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v109 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v110 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v111 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v112 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v113 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v114 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v115 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v116 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v117 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v118 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v119 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v120 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v121 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v122 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v123 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v124 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v125 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v126 = 1U;
                }
                if ((((IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                               >> 0x0000003fU)) & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U]))) 
                     & ((0x03ffffffffffffffULL & (vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                                                  >> 5U)) 
                        == vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr))) {
                    __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v127 = 1U;
                }
            }
        } else if (((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_valid) 
                    & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__req_error)))) {
            __Vfunc_cci_page_addr__81__addr = vlSelfRef.tb_baseline_line_tracker__DOT__req_base_addr;
            __Vfunc_cci_page_addr__81__Vfuncout = (__Vfunc_cci_page_addr__81__addr 
                                                   >> 0x0cU);
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[0U];
            __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128 = 1U;
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__current_page 
                = __Vfunc_cci_page_addr__81__Vfuncout;
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[1U];
            __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129 = 1U;
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v130 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[2U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v131 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[3U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v132 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[4U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v133 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[5U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v134 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[6U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v135 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[7U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v136 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[8U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v137 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[9U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v138 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[10U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v139 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[11U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v140 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[12U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v141 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[13U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v142 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[14U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v143 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[15U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v144 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[16U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v145 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[17U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v146 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[18U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v147 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[19U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v148 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[20U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v149 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[21U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v150 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[22U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v151 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[23U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v152 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[24U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v153 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[25U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v154 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[26U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v155 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[27U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v156 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[28U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v157 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[29U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v158 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[30U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v159 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[31U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v160 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[32U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v161 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[33U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v162 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[34U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v163 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[35U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v164 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[36U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v165 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[37U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v166 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[38U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v167 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[39U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v168 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[40U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v169 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[41U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v170 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[42U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v171 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[43U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v172 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[44U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v173 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[45U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v174 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[46U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v175 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[47U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v176 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[48U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v177 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[49U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v178 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[50U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v179 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[51U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v180 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[52U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v181 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[53U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v182 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[54U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v183 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[55U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v184 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[56U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v185 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[57U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v186 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[58U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v187 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[59U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v188 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[60U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v189 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[61U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v190 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[62U];
            __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v191 
                = vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__alloc_e[63U];
        }
    } else {
        __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v192 = 1U;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__current_page = 0ULL;
        __VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v193 = 1U;
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v0) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U]);
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
            = (0x7fffffffffffffffULL & vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v64) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v65) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v66) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v67) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v68) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v69) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v70) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v71) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v72) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v73) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v74) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v75) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v76) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v77) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v78) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v79) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v80) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v81) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v82) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v83) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v84) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v85) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v86) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v87) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v88) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v89) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v90) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v91) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v92) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v93) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v94) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v95) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v96) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v97) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v98) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v99) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v100) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v101) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v102) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v103) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v104) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v105) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v106) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v107) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v108) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v109) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v110) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v111) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v112) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v113) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v114) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v115) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v116) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v117) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v118) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v119) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v120) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v121) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v122) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v123) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v124) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v125) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v126) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v127) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
            = (1ULL | vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U]);
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v128;
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v129;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v130;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v131;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v132;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v133;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v134;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v135;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v136;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v137;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v138;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v139;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v140;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v141;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v142;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v143;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v144;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v145;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v146;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v147;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v148;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v149;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v150;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v151;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v152;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v153;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v154;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v155;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v156;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v157;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v158;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v159;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v160;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v161;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v162;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v163;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v164;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v165;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v166;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v167;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v168;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v169;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v170;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v171;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v172;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v173;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v174;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v175;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v176;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v177;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v178;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v179;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v180;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v181;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v182;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v183;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v184;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v185;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v186;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v187;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v188;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v189;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v190;
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
            = __VdlyVal__tb_baseline_line_tracker__DOT__dut__DOT__entries__v191;
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v192) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] = 0ULL;
    }
    if (__VdlySet__tb_baseline_line_tracker__DOT__dut__DOT__entries__v193) {
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[__Vilp1] = 0ULL;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 0U;
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
    }
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 0U;
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[0U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[1U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[2U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[3U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[4U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[5U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[6U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[7U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[8U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[9U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[10U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[11U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[12U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[13U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[14U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[15U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[16U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[17U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[18U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[19U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[20U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[21U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[22U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[23U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[24U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[25U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[26U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[27U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[28U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[29U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[30U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[31U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[32U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[33U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[34U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[35U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[36U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[37U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[38U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[39U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[40U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[41U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[42U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[43U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[44U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[45U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[46U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[47U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[48U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[49U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[50U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[51U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[52U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[53U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[54U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[55U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[56U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[57U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[58U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[59U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[60U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[61U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[62U] 
                       >> 0x0000003fU)))) {
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
    if ((1U & (IData)((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U] 
                       >> 0x0000003fU)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__entries[63U])))) {
            vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_undone = 1U;
        }
        vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__any_valid = 1U;
    }
}
