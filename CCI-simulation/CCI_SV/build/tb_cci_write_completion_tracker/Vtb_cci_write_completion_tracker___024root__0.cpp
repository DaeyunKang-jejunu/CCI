// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_write_completion_tracker.h for the primary calling header

#include "Vtb_cci_write_completion_tracker__pch.h"

VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_write_completion_tracker___024root* vlSelf);
VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_write_completion_tracker___024root* vlSelf);
VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_write_completion_tracker___024root* vlSelf);

void Vtb_cci_write_completion_tracker___024root___eval_initial(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_initial\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker__DOT__clk = 0U;
    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000002faf080ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         42);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_write_completion_tracker.sv:43: Assertion failed in %m: WATCHDOG: simulation exceeded 5000 cycles\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 43, "", false);
    co_return;
}

void Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(Vtb_cci_write_completion_tracker___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(Vtb_cci_write_completion_tracker___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_write_completion_tracker__DOT__pass_count;
    tb_cci_write_completion_tracker__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_write_completion_tracker__DOT__fail_count;
    tb_cci_write_completion_tracker__DOT__fail_count = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T01__1____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T01__1____VlefCall_0__make_addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_idx = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__exp = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__got = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_1__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_0__make_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_1__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_0__make_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T04__38____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T04__38____VlefCall_0__make_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__line_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__exp = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__got = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_idx = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__55__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__55__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__unnamedblk6__DOT__exp_line;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__unnamedblk6__DOT__exp_line = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__addr = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_2__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_2__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_1__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_0__make_addr = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__track_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__track_type = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__track_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__track_type = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__track_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__track_type = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_idx = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_idx = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__exp = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__got = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_idx = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__exp = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__got = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__exp = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_3__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_3__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_2__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_2__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_1__make_addr = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_0__make_addr = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_idx = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__addr = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__line_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__got = 0;
    IData/*31:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__track_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__track_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__exp = 0;
    QData/*63:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__Vfuncout;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__Vfuncout = 0;
    QData/*51:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__page;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__page = 0;
    IData/*31:0*/ __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__line_idx;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__line_idx = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__id = 0;
    QData/*63:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__addr = 0;
    CData/*1:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__track_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__track_type = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__exp = 0;
    CData/*3:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__id;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__id = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_valid = 0;
    CData/*5:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__got;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__exp;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__exp = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    // Body
    tb_cci_write_completion_tracker__DOT__pass_count = 0U;
    tb_cci_write_completion_tracker__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T01: single push/pop ---\n",0);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__got = 1U;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__label = "T01 b_ready=1 always"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__2__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__line_idx = 7U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T01__1____VlefCall_0__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__3__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T01__1____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__id = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__4__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__label = "T01 no wr_done before B"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__5__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__id = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_idx = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_type = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_t 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__6__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__label = "T01 wr_done_valid=1 on B"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__7__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__exp = 7U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__label = "T01 wr_done_line_idx=7"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__8__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__exp = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_t;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__label = "T01 wr_done_type=MEMCPY"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        __Vtemp_1 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__exp];
        __Vtemp_2 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__got];
        VL_WRITEF_NX("FAIL  %s  exp=%0s got=%0s\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__9__label)
                     , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         197);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__label = "T01 wr_done_valid=0 after"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__10__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         439);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         439);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T02: different IDs, out-of-order B ---\n",0);
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__line_idx = 3U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_0__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__13__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__id = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__14__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__line_idx = 9U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_1__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__15__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T02__12____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__id = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__16__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__id = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__17__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__label = "T02 ID1 wr_done_valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__18__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__exp = 9U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__label = "T02 ID1 idx=9"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__19__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__id = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__20__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__label = "T02 ID0 wr_done_valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__21__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__exp = 3U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__label = "T02 ID0 idx=3"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__22__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         217);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         217);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__label = "T02 idle after"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__23__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         440);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         440);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T03: same ID FIFO ordering ---\n",0);
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__line_idx = 0x0000000bU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_0__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__26__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__id = 2U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__27__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__line_idx = 0x00000016U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_1__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__28__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T03__25____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__id = 2U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__29__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__id = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__30__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__label = "T03 first B: valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__31__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__exp = 0x0000000bU;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__label = "T03 first B: idx=11"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__32__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__id = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__33__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__label = "T03 second B: valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__34__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__exp = 0x00000016U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__label = "T03 second B: idx=22"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__35__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         237);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         237);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__label = "T03 idle after"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__36__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         441);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         441);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T04: simultaneous AW+B same ID ---\n",0);
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__line_idx = 5U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T04__38____VlefCall_0__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__39__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T04__38____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__id = 3U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         139);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__40__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         144);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         144);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         248);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 3U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__line_idx = 0x0000002aU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__page = 1ULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__line_idx 
                                                  << 6U)))));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__41__Vfuncout;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 3U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         252);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         256);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__label = "T04 simultaneous: valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__42__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__exp = 5U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__label = "T04 simultaneous: idx=5 (popped)"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__43__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__exp = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__label = "T04 simultaneous: type=MEMCPY"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        __Vtemp_3 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__exp];
        __Vtemp_4 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__got];
        VL_WRITEF_NX("FAIL  %s  exp=%0s got=%0s\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__44__label)
                     , 'S',&(__Vtemp_3), 'S',&(__Vtemp_4));
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         262);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         262);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__id = 3U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_idx = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_type = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__45__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__label = "T04 second pop: valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__46__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__exp = 0x0000002aU;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__label = "T04 second pop: idx=42"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__47__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         267);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         267);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__label = "T04 idle after"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__48__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         442);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         442);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T05: overflow_sticky=0 during normal operation ---\n",0);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__label = "T05 overflow_sticky=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__51__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__label = "T05 underflow_sticky=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__52__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i)) {
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__line_idx 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__page = 3ULL;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__Vfuncout = 0;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__Vfuncout 
            = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__page 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__line_idx 
                                                      << 6U)))));
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50____VlefCall_0__make_addr 
            = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__53__Vfuncout;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__addr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50____VlefCall_0__make_addr;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__id = 0U;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             139);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__id;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__54__addr;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             144);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             144);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i)) {
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__55__id = 0U;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             172);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__55__id;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             179);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T05__50__unnamedblk2__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__label = "T05 overflow_sticky=0 after fill/drain"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__56__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__label = "T05 underflow_sticky=0 after fill/drain"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__57__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         443);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         443);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T06: randomized AW/B ID pairs ---\n",0);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[0U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[0U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[1U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[1U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[2U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[2U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[3U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[3U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[4U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[4U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[5U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[5U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[6U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[6U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[7U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[7U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[8U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[8U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[9U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[9U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[10U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[10U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[11U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[11U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[12U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[12U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[13U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[13U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[14U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[14U] = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[15U].clear();
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[15U] = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n = 0U;
    while (VL_GTS_III(32, 0x00000020U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n)) {
        {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id 
                = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line 
                = VL_URANDOM_RANGE_I(0U, 0x0000003fU);
            if (VL_LTES_III(32, 3U, vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt
                            [(0x0000000fU & vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id)])) {
                goto __Vlabel0;
            }
            __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__line_idx 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line;
            __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__page = 9ULL;
            __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__Vfuncout = 0;
            __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__Vfuncout 
                = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__page 
                    << 0x0000000cU) | (QData)((IData)(
                                                      (0x00000fc0U 
                                                       & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__line_idx 
                                                          << 6U)))));
            __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59____VlefCall_0__make_addr 
                = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__60__Vfuncout;
            __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__addr 
                = __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59____VlefCall_0__make_addr;
            __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__id 
                = (0x0000000fU & vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id);
            Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                                 139);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
                = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__id;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__61__addr;
            Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                                 144);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                 144);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[(0x0000000fU 
                                                                                & vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id)].push_back(vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[(0x0000000fU 
                                                                                & vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id)] 
                = ((IData)(1U) + vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt
                   [(0x0000000fU & vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id)]);
            __Vlabel0: ;
        }
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk4__DOT__n);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id)) {
        while (VL_LTS_III(32, 0U, vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q
                          [(0x0000000fU & __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id)].size())) {
            __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__unnamedblk6__DOT__exp_line 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q
                [(0x0000000fU & __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id)].pop_front();
            __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__id 
                = (0x0000000fU & __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id);
            __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_valid = 0;
            __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_idx = 0;
            Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                                "@(negedge tb_cci_write_completion_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                                 172);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
                = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__id;
            Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                                "@(posedge tb_cci_write_completion_tracker.clk)");
            co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                                 175);
            __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_valid 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
            __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_idx 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                 179);
            vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_v 
                = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_valid;
            vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_i 
                = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__62__got_idx;
            __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__exp = 1U;
            __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__got 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_v;
            vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__label 
                = VL_SFORMATF_N_NX("T06 ID%0d valid=1",1
                                   , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id) ;
            if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__got) 
                 == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__exp))) {
                VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__label));
                tb_cci_write_completion_tracker__DOT__pass_count 
                    = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
            } else {
                VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                             , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__label)
                             , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__exp)
                             , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__63__got);
                tb_cci_write_completion_tracker__DOT__fail_count 
                    = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
            }
            __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__exp 
                = __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__unnamedblk6__DOT__exp_line;
            __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__got 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_i;
            vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__label 
                = VL_SFORMATF_N_NX("T06 ID%0d idx=%0d",2
                                   , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id
                                   , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__unnamedblk6__DOT__exp_line) ;
            if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__got 
                 == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__exp)) {
                VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__label));
                tb_cci_write_completion_tracker__DOT__pass_count 
                    = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
            } else {
                VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                             , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__label)
                             , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__exp
                             , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__64__got);
                tb_cci_write_completion_tracker__DOT__fail_count 
                    = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
            }
        }
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T06__59__unnamedblk5__DOT__id);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         324);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         324);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__label = "T06 overflow_sticky=0 after random"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__65__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__label = "T06 underflow_sticky=0 after random"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__66__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         444);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         444);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T07: write class routing ---\n",0);
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__line_idx = 0x0000002aU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__page = 0x000000000000000aULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_0__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__69__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_0__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__id = 5U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         155);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__track_type;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__70__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         160);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         160);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__line_idx = 7U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__page = 0x000000000000000aULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_1__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__71__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__track_type = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_1__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__id = 5U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         155);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__track_type;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__72__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         160);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         160);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__line_idx = 0x0000000fU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__page = 0x000000000000000aULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_2__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__73__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__track_type = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T07__68____VlefCall_2__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__id = 5U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         155);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__track_type;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__74__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         160);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         160);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__id = 5U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_idx = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_type = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__75__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__label = "T07 B1 (NONE): wr_done_valid=0"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__76__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__id = 5U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_idx = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_type = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__77__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__label = "T07 B2 (NORMAL): wr_done_valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__78__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__exp = 7U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__label = "T07 B2 (NORMAL): idx=7"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__79__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__label = "T07 B2 (NORMAL): type=NORMAL"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        __Vtemp_6 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__exp];
        __Vtemp_7 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__got];
        VL_WRITEF_NX("FAIL  %s  exp=%0s got=%0s\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__80__label)
                     , 'S',&(__Vtemp_6), 'S',&(__Vtemp_7));
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__id = 5U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_idx = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_type = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_idx;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__81__got_type;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__label = "T07 B3 (MEMCPY): wr_done_valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__82__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__exp = 0x0000000fU;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__label = "T07 B3 (MEMCPY): idx=15"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__83__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__exp = 2U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__label = "T07 B3 (MEMCPY): type=MEMCPY"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        __Vtemp_8 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__exp];
        __Vtemp_9 = Vtb_cci_write_completion_tracker___024unit::__Venumtab_enum_name25
            [__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__got];
        VL_WRITEF_NX("FAIL  %s  exp=%0s got=%0s\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_type__84__label)
                     , 'S',&(__Vtemp_8), 'S',&(__Vtemp_9));
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         356);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         356);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__label = "T07 idle after"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__85__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         445);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         445);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr = 0ULL;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         132);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n = 1U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         134);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         134);
    VL_WRITEF_NX("--- T08: aw_full flag behavior ---\n  T08a: fill/pop transitions\n",0);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 6U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__label = "T08a aw_full[6]=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__88__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i)) {
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__line_idx 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__page = 0x000000000000000bULL;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__Vfuncout = 0;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__Vfuncout 
            = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__page 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__line_idx 
                                                      << 6U)))));
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_0__make_addr 
            = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__89__Vfuncout;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__addr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_0__make_addr;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__id = 6U;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             139);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__id;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__90__addr;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             144);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             144);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk7__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 6U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__label = "T08a aw_full[6]=1 when full"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__91__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__got 
        = (1U & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__label = "T08a aw_full[0] unaffected"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__92__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__id = 6U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__93__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 6U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__label = "T08a aw_full[6]=0 after pop"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__94__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i)) {
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__id = 6U;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_valid = 0;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_idx = 0;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             172);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__id;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             175);
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_valid 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_idx 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             179);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_valid;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__95__got_idx;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk8__DOT__i);
    }
    VL_WRITEF_NX("  T08b: simultaneous push+pop on full FIFO\n",0);
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i)) {
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__line_idx 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__page = 0x000000000000000cULL;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__Vfuncout = 0;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__Vfuncout 
            = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__page 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__line_idx 
                                                      << 6U)))));
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_1__make_addr 
            = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__96__Vfuncout;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__addr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_1__make_addr;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__id = 7U;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             139);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__id;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw__97__addr;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             144);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             144);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk9__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 7U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__label = "T08b aw_full[7]=1 before siml"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__98__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         387);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid = 7U;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__line_idx = 0x0000002aU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__page = 0x000000000000000cULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__line_idx 
                                                  << 6U)))));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__99__Vfuncout;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 2U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 7U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         391);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         393);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__label = "T08b siml pop valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__100__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__label = "T08b siml pop idx=0 (oldest)"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__101__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 7U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__label = "T08b aw_full[7]=1 after siml"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__102__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i = 1U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i)) {
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__id = 7U;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_valid = 0;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_idx = 0;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             172);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__id;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             175);
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_valid 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_idx 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             179);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_valid;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__103__got_idx;
        __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__exp = 1U;
        __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__got 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v;
        vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__label 
            = VL_SFORMATF_N_NX("T08b pop%0d valid=1",1
                               , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i) ;
        if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__got) 
             == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__label));
            tb_cci_write_completion_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__label)
                         , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__exp)
                         , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__104__got);
            tb_cci_write_completion_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
        }
        __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__exp 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i;
        __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__got 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i;
        vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__label 
            = VL_SFORMATF_N_NX("T08b pop%0d idx=%0d",2
                               , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i
                               , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i) ;
        if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__got 
             == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__exp)) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__label));
            tb_cci_write_completion_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__label)
                         , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__exp
                         , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__105__got);
            tb_cci_write_completion_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
        }
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk10__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__id = 7U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_valid = 0;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_idx = 0;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         172);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__id;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         175);
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_valid 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         179);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_valid;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__106__got_idx;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__label = "T08b final pop valid=1"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__107__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__exp = 0x0000002aU;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__label = "T08b final pop idx=42"s;
    if ((__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__got 
         == __Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__exp)) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0d got=%0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__label)
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__exp
                     , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__check_int__108__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 7U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__label = "T08b aw_full[7]=0 after drain"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__109__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("  T08c: CCI_WR_NONE AWs consume capacity\n",0);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 8U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__label = "T08c aw_full[8]=0 at start"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__110__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i)) {
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__line_idx 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__page = 0x000000000000000dULL;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__Vfuncout = 0;
        __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__Vfuncout 
            = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__page 
                << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                                   & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__line_idx 
                                                      << 6U)))));
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_2__make_addr 
            = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__111__Vfuncout;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__track_type = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__addr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_2__make_addr;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__id = 8U;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             155);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__track_type;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__id;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__112__addr;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             160);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             160);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk11__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 8U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__label = "T08c aw_full[8]=0 before last push"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__113__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__line_idx = 0x0000003fU;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__page = 0x000000000000000dULL;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__Vfuncout = 0;
    __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__Vfuncout 
        = ((__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__page 
            << 0x0000000cU) | (QData)((IData)((0x00000fc0U 
                                               & (__Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__line_idx 
                                                  << 6U)))));
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_3__make_addr 
        = __Vfunc_tb_cci_write_completion_tracker__DOT__make_addr__114__Vfuncout;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__addr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87____VlefCall_3__make_addr;
    __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__id = 8U;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                           "@(negedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         155);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 1U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__track_type;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awid 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__id;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
        = __Vtask_tb_cci_write_completion_tracker__DOT__do_aw_typed__115__addr;
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         160);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         160);
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__exp = 1U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 8U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__label = "T08c aw_full[8]=1 after fill"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__116__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i)) {
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__id = 8U;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_valid = 0;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_idx = 0;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(vlSelf, 
                                                                               "@(negedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faaa72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             172);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__id;
        Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                               "@(posedge tb_cci_write_completion_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                             175);
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_valid 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid;
        __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_idx 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             179);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__bid = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_valid;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i 
            = __Vtask_tb_cci_write_completion_tracker__DOT__do_b__117__got_idx;
        __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__exp = 0U;
        __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__got 
            = vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v;
        vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__label 
            = VL_SFORMATF_N_NX("T08c B%0d (NONE): wr_done_valid=0",1
                               , '~',32,__Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i) ;
        if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__got) 
             == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__label));
            tb_cci_write_completion_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__label)
                         , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__exp)
                         , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__118__got);
            tb_cci_write_completion_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
        }
        __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_write_completion_tracker__DOT__test_T08__87__unnamedblk12__DOT__i);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__got 
        = (1U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full) 
                 >> 8U));
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__label = "T08c aw_full[8]=0 after drain"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__119__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(vlSelf, 
                                                                           "@(posedge tb_cci_write_completion_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_h85faadb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_write_completion_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                                         430);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                         430);
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__label = "T08 overflow_sticky=0 throughout"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__120__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__exp = 0U;
    __Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__got 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky;
    vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__label = "T08 underflow_sticky=0 throughout"s;
    if (((IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__got) 
         == (IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__label));
        tb_cci_write_completion_tracker__DOT__pass_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__label)
                     , '#',1,(IData)(__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__exp)
                     , '#',1,__Vtask_tb_cci_write_completion_tracker__DOT__check_bit__121__got);
        tb_cci_write_completion_tracker__DOT__fail_count 
            = ((IData)(1U) + tb_cci_write_completion_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_write_completion_tracker__DOT__pass_count
                 , '~',32,tb_cci_write_completion_tracker__DOT__fail_count);
    if ((0U == tb_cci_write_completion_tracker__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 452, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_write_completion_tracker.sv:454: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_write_completion_tracker__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 454, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__2(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 
                                             31);
        vlSelfRef.tb_cci_write_completion_tracker__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__act(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__rst_n__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n;
}

bool Vtb_cci_write_completion_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_write_completion_tracker___024root___act_comb__TOP__0(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___act_comb__TOP__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth
               [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U])));
}

void Vtb_cci_write_completion_tracker___024root___eval_act(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_act\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cci_write_completion_tracker___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__0(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__overflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:136: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 136, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__underflow_sticky))))))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:137: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 137, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[0]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[1]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[2]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[3]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[4]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[5]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[6]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[7]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[8]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[9]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[10]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[11]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[12]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[13]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[14]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
            if (VL_UNLIKELY(((4U < vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U])))) {
                VL_WRITEF_NX("[%0t] %%Error: cci_write_completion_tracker.sv:140: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.gen_sva_depth[15]", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/rtl/cci_write_completion_tracker.sv", 140, "");
            }
        }
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[0U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=0 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[1U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=1 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[2U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=2 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[3U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=3 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[4U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=4 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[5U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=5 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[6U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=6 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[7U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=7 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[8U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=8 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[9U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=9 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[10U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=10 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[11U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=11 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[12U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=12 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[13U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=13 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[14U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=14 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[15U]))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:148: %m: %m: AW push suppressed for AWID=15 (depth=%0d, FIFO_DEPTH=4) \342\200\224 aw_full contract violated; ordering broken for this ID\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut.unnamedblk5", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',3,vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
                      & (0U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth
                         [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]))))) {
        VL_WRITEF_NX("[%0t] %%Warning: cci_write_completion_tracker.sv:152: %m: %m: B response for AWID=%0d arrived with empty FIFO \342\200\224 underflow; B cannot be matched to any AW\n",4, 'M',vlSymsp->name(),"tb_cci_write_completion_tracker.dut", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid));
    }
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__overflow_sticky));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__underflow_sticky));
}

void Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__1(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__1\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v0;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v0 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v1;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v1 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v2;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v2 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v3;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v3 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v4;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v4 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v5;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v5 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v6;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v6 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v7;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v7 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v8;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v8 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v9;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v9 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v10;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v10 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v11;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v11 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v12;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v12 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v13;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v13 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v14;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v14 = 0;
    CData/*5:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15;
    __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v15;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v16;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v16 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14 = 0;
    CData/*1:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v16;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30 = 0;
    CData/*2:0*/ __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31;
    __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v32;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v32 = 0;
    // Body
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v32 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v16 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 = 0U;
    __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 = 0U;
    if (vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n) {
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[0U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[1U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[2U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[3U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[4U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[5U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[6U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[7U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[8U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[9U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[10U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[11U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[12U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[13U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[14U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[15U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15 = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[0U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[0U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v0 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[0U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[1U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[1U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v1 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[1U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[2U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[2U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v2 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[2U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[3U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[3U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v3 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[3U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[4U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[4U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v4 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[4U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[5U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[5U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v5 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[5U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[6U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[6U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v6 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[6U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[7U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[7U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v7 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[7U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[8U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[8U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v8 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[8U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[9U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[9U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v9 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[9U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[10U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[10U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v10 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[10U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[11U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[11U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v11 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[11U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[12U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[12U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v12 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[12U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[13U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[13U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v13 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[13U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[14U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[14U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v14 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[14U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U]) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 
                = (0x0000003fU & (IData)((vlSelfRef.tb_cci_write_completion_tracker__DOT__awaddr 
                                          >> 6U)));
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[15U];
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15 = 1U;
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_track_type;
            __VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15 
                = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[15U];
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v15 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[15U])));
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[0U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[1U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[2U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[3U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[4U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[5U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[6U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[7U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[8U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[9U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[10U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[11U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[12U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[13U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[14U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[15U]) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 1U;
        }
        if (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
             & (0U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth
                [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]))) {
            vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29 = 1U;
        }
        if ((vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U] 
             & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U])))) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U])));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30 = 1U;
        } else if (((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U])) 
                    & vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U])) {
            __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31 
                = (7U & ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]) 
                         - (IData)(1U)));
            __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31 = 1U;
        }
    } else {
        __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v16 = 1U;
        __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v16 = 1U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky = 0U;
        __VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v32 = 1U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr__v16) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v0;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[0U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v0;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[0U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v1;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[1U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v1;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[1U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v2;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[2U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v2;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[2U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v3;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[3U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v3;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[3U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v4;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[4U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v4;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[4U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v5;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[5U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v5;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[5U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v6;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[6U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v6;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[6U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v7;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[7U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v7;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[7U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v8;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[8U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v8;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[8U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v9;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[9U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v9;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[9U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v10;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[10U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v10;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[10U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v11;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[11U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v11;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[11U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v12;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[12U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v12;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[12U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v13;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[13U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v13;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[13U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v14;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[14U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v14;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[14U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v15;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[15U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo__v15;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[15U][__VdlyDim0__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr__v16) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[15U] = 0U;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v0;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v1;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v2;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v3;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v4;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v5;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v6;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v7;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v8;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v9;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v10;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v11;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v12;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v13;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v14;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v15;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v16;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v17;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v18;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v19;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v20;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v21;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v22;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v23;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v24;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v25;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v26;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v27;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v28;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v29;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v30;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U] 
            = __VdlyVal__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v31;
    }
    if (__VdlySet__tb_cci_write_completion_tracker__DOT__dut__DOT__depth__v32) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U] = 0U;
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U] = 0U;
    }
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xfffcU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]) 
               << 1U) | (4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xfff3U & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]) 
               << 3U) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]) 
                         << 2U)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xffcfU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]) 
               << 5U) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]) 
                         << 4U)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xff3fU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]) 
               << 7U) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]) 
                         << 6U)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xfcffU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]) 
               << 9U) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]) 
                         << 8U)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xf3ffU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]) 
               << 0x0000000bU) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]) 
                                  << 0x0000000aU)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0xcfffU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]) 
               << 0x0000000dU) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]) 
                                  << 0x0000000cU)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full 
        = ((0x3fffU & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_full)) 
           | (((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]) 
               << 0x0000000fU) | ((4U == vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]) 
                                  << 0x0000000eU)));
}

void Vtb_cci_write_completion_tracker___024root___nba_comb__TOP__0(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___nba_comb__TOP__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
            & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
           & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
}

void Vtb_cci_write_completion_tracker___024root___nba_comb__TOP__1(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___nba_comb__TOP__1\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_line_idx 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_type 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
        [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]];
    vlSelfRef.tb_cci_write_completion_tracker__DOT__wr_done_valid 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth
               [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid])) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr
              [vlSelfRef.tb_cci_write_completion_tracker__DOT__bid]]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U] 
        = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__b_valid) 
            & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__bid))) 
           & (0U != vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[0U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[0U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[0U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[0U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[1U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[1U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[1U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[1U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[2U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[2U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[2U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[2U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[3U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[3U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[3U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[3U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[4U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[4U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[4U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[4U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[5U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[5U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[5U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[5U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[6U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[6U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[6U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[6U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[7U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[7U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[7U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[7U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[8U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[8U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[8U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[8U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[9U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[9U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[9U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[9U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[10U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[10U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[10U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[10U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[11U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[11U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[11U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[11U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[12U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[12U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[12U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[12U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[13U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[13U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[13U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[13U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[14U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[14U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[14U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[14U])));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
           & ((4U > vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth[15U]) 
              | vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__pop[15U]));
    vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[15U] 
        = (vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
           & (~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[15U])));
}

void Vtb_cci_write_completion_tracker___024root___eval_nba(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_nba\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[0U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[1U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (1U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[2U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (2U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[3U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (3U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[4U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (4U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[5U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (5U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[6U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (6U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[7U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (7U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[8U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (8U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[9U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (9U == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[10U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0aU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[11U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0bU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[12U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0cU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[13U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0dU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[14U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0eU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
        vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__push[15U] 
            = (((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_valid) 
                & (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__aw_ready)) 
               & (0x0fU == (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__awid)));
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_write_completion_tracker___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_cci_write_completion_tracker___024root___timing_ready(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___timing_ready\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h85faadb8__0.ready("@(posedge tb_cci_write_completion_tracker.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h85faaa72__0.ready("@(negedge tb_cci_write_completion_tracker.clk)");
    }
}

void Vtb_cci_write_completion_tracker___024root___timing_resume(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___timing_resume\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h85faadb8__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_write_completion_tracker.clk)");
    vlSelfRef.__VtrigSched_h85faaa72__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_write_completion_tracker.clk)");
    vlSelfRef.__VtrigSched_h85faadb8__0.resume("@(posedge tb_cci_write_completion_tracker.clk)");
    vlSelfRef.__VtrigSched_h85faaa72__0.resume("@(negedge tb_cci_write_completion_tracker.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_write_completion_tracker___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_write_completion_tracker___024root___eval_phase__act(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_phase__act\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_write_completion_tracker___024root___timing_ready(vlSelf);
    Vtb_cci_write_completion_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_write_completion_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_write_completion_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_write_completion_tracker___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_write_completion_tracker___024root___timing_resume(vlSelf);
        Vtb_cci_write_completion_tracker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_write_completion_tracker___024root___eval_phase__inact(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_phase__inact\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 22, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_write_completion_tracker___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_write_completion_tracker___024root___eval_phase__nba(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_phase__nba\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_write_completion_tracker___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_write_completion_tracker___024root___eval_nba(vlSelf);
        Vtb_cci_write_completion_tracker___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_write_completion_tracker___024root___sample(Vtb_cci_write_completion_tracker___024root* vlSelf);

void Vtb_cci_write_completion_tracker___024root___eval(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vtb_cci_write_completion_tracker___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_write_completion_tracker___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 22, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 22, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_write_completion_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 22, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_write_completion_tracker___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_write_completion_tracker___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_write_completion_tracker___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0(Vtb_cci_write_completion_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faadb8__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0(Vtb_cci_write_completion_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root____VbeforeTrig_h85faaa72__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_write_completion_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faadb8__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h85faaa72__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_write_completion_tracker___024root___sample(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___sample\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__overflow_sticky 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__overflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__underflow_sticky 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__underflow_sticky;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__dut__DOT__depth;
    vlSelfRef.__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__rst_n 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n;
}

#ifdef VL_DEBUG
void Vtb_cci_write_completion_tracker___024root___eval_debug_assertions(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_debug_assertions\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
