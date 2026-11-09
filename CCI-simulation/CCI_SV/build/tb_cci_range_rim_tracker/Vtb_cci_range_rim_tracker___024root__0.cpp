// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_range_rim_tracker.h for the primary calling header

#include "Vtb_cci_range_rim_tracker__pch.h"

VlCoroutine Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_range_rim_tracker___024root* vlSelf);
VlCoroutine Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_range_rim_tracker___024root* vlSelf);

void Vtb_cci_range_rim_tracker___024root___eval_initial(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_initial\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_range_rim_tracker__DOT__clk = 0U;
    Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(Vtb_cci_range_rim_tracker___024root* vlSelf, const char* __VeventDescription);
void Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(Vtb_cci_range_rim_tracker___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__0(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_range_rim_tracker__DOT__pass_count;
    tb_cci_range_rim_tracker__DOT__pass_count = 0;
    IData/*31:0*/ tb_cci_range_rim_tracker__DOT__fail_count;
    tb_cci_range_rim_tracker__DOT__fail_count = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__exp = 0;
    QData/*51:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__pg;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__msk;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__msk = 0;
    CData/*3:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__src;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__exp = 0;
    IData/*31:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i;
    __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i = 0;
    CData/*5:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__20__idx;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__20__idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__exp = 0;
    CData/*5:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__23__idx;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__23__idx = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__exp = 0;
    QData/*51:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__pg;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__pg = 0;
    QData/*63:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__msk;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__msk = 0;
    CData/*3:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__src;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__src = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__exp = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__got;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__got = 0;
    CData/*0:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__exp;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__exp = 0;
    CData/*5:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__36__idx;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__36__idx = 0;
    CData/*5:0*/ __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__37__idx;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__37__idx = 0;
    // Body
    tb_cci_range_rim_tracker__DOT__pass_count = 0U;
    tb_cci_range_rim_tracker__DOT__fail_count = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr = 0ULL;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask = 0ULL;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_source_id = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 0U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx = 0U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         130);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         130);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n = 1U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         132);
    VL_WRITEF_NX("--- T01-T06: request accept and INVALIDATING state ---\n",0);
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__got 
        = (1U & (~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                    >> 0x0000001aU)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__label = "T01 req_ready=1 when idle"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__2__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__got 
        = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__label = "T01 tracker_busy=0 when idle"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__3__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__got 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__label = "T01 write_release=0 when idle"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__4__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__src = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__msk = 0x000000000000000fULL;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__pg = 1ULL;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         141);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__pg;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__msk;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_source_id 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__5__src;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         146);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         146);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__got 
        = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__label = "T02 entry.valid=1 after accept"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__6__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__got 
        = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__label = "T02 tracker_busy=1 after accept"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__7__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__got 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_start_seen;
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__label = "T03 ac_start fired at accept cycle"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__8__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__got 
        = (1ULL == (0x000fffffffffffffULL & ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req)
                                              ? vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr
                                              : (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])) 
                                                  << 0x0000003cU) 
                                                 | (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])) 
                                                     << 0x0000001cU) 
                                                    | ((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U])) 
                                                       >> 4U))))));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__label = "T04 ac_page_addr == PG_A"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__9__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__got 
        = (0x000000000000000fULL == ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req)
                                      ? vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask
                                      : (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U])) 
                                          << 0x0000003cU) 
                                         | (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U])) 
                                               >> 4U)))));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__label = "T04 ac_line_mask == MASK_4"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__10__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__got 
        = (0U == (3U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                        >> 0x00000018U)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__label = "T05 entry.state=INVALIDATING"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__11__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__got 
        = (1U & (~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                    >> 0x0000001aU)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__label = "T02 req_ready=0 while busy"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__12__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__got 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__label = "T06 write_release=0 during INVALIDATING"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__13__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("--- T07-T09: ac_gen_done drives TRACKING transition ---\n",0);
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         151);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done = 1U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         153);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__got 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__inv_done_seen;
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__label = "T07 invalidation_done pulsed at ac_gen_done"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__16__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__got 
        = (1U == (3U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                        >> 0x00000018U)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__label = "T08 entry.state=TRACKING after ac_gen_done"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__17__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__got 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__label = "T09 write_release=1 during TRACKING"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__18__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("--- T10-T12: done_mask update, tracker_done, release ---\n",0);
    __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 3U, __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i)) {
        __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__20__idx 
            = (0x0000003fU & __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i);
        Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                        "@(negedge tb_cci_range_rim_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                             158);
        vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 1U;
        vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx 
            = __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__20__idx;
        Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                        "@(posedge tb_cci_range_rim_tracker.clk)");
        co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                             161);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                             161);
        vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 0U;
        __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__exp = 1U;
        __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__got 
            = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r
                     [(((IData)(4U) + (0x0000003fU 
                                       & __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i)) 
                       >> 5U)] >> (0x0000001fU & ((IData)(4U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i)))));
        vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__label 
            = VL_SFORMATF_N_NX("T10 done_mask[%0d] after wr_done",1
                               , '~',32,__Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i) ;
        if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__got) 
             == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__label));
            tb_cci_range_rim_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__label)
                         , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__exp)
                         , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__21__got);
            tb_cci_range_rim_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
        }
        __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__exp = 0U;
        __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__got 
            = (IData)((0x06000000U == (0x07000000U 
                                       & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
        vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__label = "T10 tracker_done=0 not yet complete"s;
        if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__got) 
             == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__exp))) {
            VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__label));
            tb_cci_range_rim_tracker__DOT__pass_count 
                = ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                         , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__label)
                         , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__exp)
                         , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__22__got);
            tb_cci_range_rim_tracker__DOT__fail_count 
                = ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
        }
        __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_cci_range_rim_tracker__DOT__test_T10_T12__19__unnamedblk1__DOT__i);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__23__idx = 3U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         158);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx 
        = __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__23__idx;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         161);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__label = "T11 tracker_done=1 when all lines complete"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__24__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__got 
        = (2U == (3U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                        >> 0x00000018U)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__label = "T11 entry.state=DONE"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__25__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         221);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         221);
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__got 
        = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__label = "T12 entry.valid=0 after DONE"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__26__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__got 
        = (IData)((0x06000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__label = "T12 tracker_done=0 after DONE"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__27__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__got 
        = (1U & (~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                    >> 0x0000001aU)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__label = "T12 req_ready=1 after free"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__28__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    VL_WRITEF_NX("--- T13: back-to-back request ---\n",0);
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__src = 2U;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__msk = 3ULL;
    __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__pg = 2ULL;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         141);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid = 1U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__pg;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__msk;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_source_id 
        = __Vtask_tb_cci_range_rim_tracker__DOT__issue_req__30__src;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         146);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         146);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__got 
        = (1U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                 >> 0x0000001aU));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__label = "T13 new entry.valid=1"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__31__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__got 
        = (2ULL == (0x000fffffffffffffULL & (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U])) 
                                                >> 4U))));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__label = "T13 new entry page correct"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__32__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__exp = 1U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__got 
        = (2U == (0x0000000fU & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U]));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__label = "T13 new source_id correct"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__33__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__exp = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__got 
        = (1U & (~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                    >> 0x0000001aU)));
    vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__label = "T13 req_ready=0 for new entry"s;
    if (((IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__got) 
         == (IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__exp))) {
        VL_WRITEF_NX("PASS  %s\n",1, 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__label));
        tb_cci_range_rim_tracker__DOT__pass_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL  %s  exp=%0b got=%0b\n",3
                     , 'S',&(vlSelfRef.__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__label)
                     , '#',1,(IData)(__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__exp)
                     , '#',1,__Vtask_tb_cci_range_rim_tracker__DOT__check_bit__34__got);
        tb_cci_range_rim_tracker__DOT__fail_count = 
            ((IData)(1U) + tb_cci_range_rim_tracker__DOT__fail_count);
    }
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         151);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done = 1U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         153);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         153);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__36__idx = 0U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         158);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx 
        = __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__36__idx;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         161);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 0U;
    __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__37__idx = 1U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(vlSelf, 
                                                                    "@(negedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e30c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         158);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 1U;
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx 
        = __Vtask_tb_cci_range_rim_tracker__DOT__send_wr_done__37__idx;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         161);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         161);
    vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid = 0U;
    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(vlSelf, 
                                                                    "@(posedge tb_cci_range_rim_tracker.clk)");
    co_await vlSelfRef.__VtrigSched_hb507e25e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cci_range_rim_tracker.clk)", 
                                                         "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                                         239);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                         239);
    VL_WRITEF_NX("-------------------------------\nResults: %0d passed, %0d failed\n",2
                 , '~',32,tb_cci_range_rim_tracker__DOT__pass_count
                 , '~',32,tb_cci_range_rim_tracker__DOT__fail_count);
    if ((0U == tb_cci_range_rim_tracker__DOT__fail_count)) {
        VL_WRITEF_NX("All tests PASSED.\n",0);
        VL_FINISH_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 257, "");
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cci_range_rim_tracker.sv:259: Assertion failed in %m: %0d test(s) failed\n",4, 'M',vlSymsp->name(),"tb_cci_range_rim_tracker", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,tb_cci_range_rim_tracker__DOT__fail_count);
        VL_STOP_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 259, "", false);
    }
    co_return;
}

VlCoroutine Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__1(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 
                                             29);
        vlSelfRef.tb_cci_range_rim_tracker__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk)));
    }
    co_return;
}

void Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__act(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__act\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__rst_n__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n;
}

bool Vtb_cci_range_rim_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___trigger_anySet__act\n"); );
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

void Vtb_cci_range_rim_tracker___024root___act_comb__TOP__0(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___act_comb__TOP__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
               >> 0x0000001aU)) & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid));
}

void Vtb_cci_range_rim_tracker___024root___eval_act(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_act\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req 
            = ((~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                   >> 0x0000001aU)) & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid));
    }
}

void Vtb_cci_range_rim_tracker___024root___nba_sequent__TOP__0(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___nba_sequent__TOP__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_cci_all_lines_done__38__line_mask;
    __Vfunc_cci_all_lines_done__38__line_mask = 0;
    QData/*63:0*/ __Vfunc_cci_all_lines_done__38__done_mask;
    __Vfunc_cci_all_lines_done__38__done_mask = 0;
    VlWide<6>/*186:0*/ __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r;
    VL_ZERO_W(187, __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r);
    // Body
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U];
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U];
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U];
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U];
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U];
    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U];
    if (vlSelfRef.tb_cci_range_rim_tracker__DOT__rst_n) {
        if ((0x04000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])) {
            if ((0U == (3U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                              >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done) {
                    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                        = (0x01000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U]));
                }
            } else if ((1U == (3U & (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                                     >> 0x00000018U)))) {
                if (vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid) {
                    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[(
                                                                              ((IData)(4U) 
                                                                               + (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx)) 
                                                                              >> 5U)] 
                        = (__Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r
                           [(((IData)(4U) + (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx)) 
                             >> 5U)] | ((IData)(1U) 
                                        << (0x0000001fU 
                                            & ((IData)(4U) 
                                               + (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx)))));
                }
                __Vfunc_cci_all_lines_done__38__done_mask 
                    = ((((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U])) 
                         << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U])) 
                                               >> 4U))) 
                       | ((1ULL << (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_line_idx)) 
                          & (- (QData)((IData)(((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__wr_done_valid) 
                                                & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__write_release)))))));
                __Vfunc_cci_all_lines_done__38__line_mask 
                    = (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U])) 
                        << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U])) 
                                              >> 4U)));
                vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT____VlemCall_0__cci_all_lines_done 
                    = ((0ULL != __Vfunc_cci_all_lines_done__38__line_mask) 
                       & ((__Vfunc_cci_all_lines_done__38__done_mask 
                           & __Vfunc_cci_all_lines_done__38__line_mask) 
                          == __Vfunc_cci_all_lines_done__38__line_mask));
                if (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT____VlemCall_0__cci_all_lines_done) {
                    __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                        = (0x02000000U | (0x04ffffffU 
                                          & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U]));
                }
            } else {
                __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                    = (0x03ffffffU & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U]);
            }
        } else if (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req) {
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U] 
                = (0x0000000fU & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U]);
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U] = 0U;
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U] 
                = ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask) 
                   << 4U);
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U] 
                = (((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask) 
                    >> 0x0000001cU) | ((IData)((vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask 
                                                >> 0x00000020U)) 
                                       << 4U));
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U] 
                = (((IData)((vlSelfRef.tb_cci_range_rim_tracker__DOT__req_line_mask 
                             >> 0x00000020U)) >> 0x0000001cU) 
                   | ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr) 
                      << 4U));
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                = (0x07ffffffU & (0x04000000U | (((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            (vlSelfRef.tb_cci_range_rim_tracker__DOT__req_base_page_addr 
                                                             >> 0x00000020U)) 
                                                    << 4U))));
            __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U] 
                = ((0xfffffff0U & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U]) 
                   | (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_source_id));
        }
        if (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req) {
            vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_start_seen = 1U;
        }
        if ((IData)(((0x04000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])) 
                     & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_gen_done)))) {
            vlSelfRef.tb_cci_range_rim_tracker__DOT__inv_done_seen = 1U;
        }
    } else {
        __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
            = (0x03ffffffU & __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U]);
        vlSelfRef.tb_cci_range_rim_tracker__DOT__ac_start_seen = 0U;
        vlSelfRef.tb_cci_range_rim_tracker__DOT__inv_done_seen = 0U;
    }
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[0U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[1U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[2U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[3U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[4U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
        = __Vdly__tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U];
    vlSelfRef.tb_cci_range_rim_tracker__DOT__write_release 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U])));
}

void Vtb_cci_range_rim_tracker___024root___eval_nba(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_nba\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cci_range_rim_tracker___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__accept_req 
            = ((~ (vlSelfRef.tb_cci_range_rim_tracker__DOT__dut__DOT__entry_r[5U] 
                   >> 0x0000001aU)) & (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__req_valid));
    }
}

void Vtb_cci_range_rim_tracker___024root___timing_ready(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___timing_ready\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb507e25e__0.ready("@(posedge tb_cci_range_rim_tracker.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb507e30c__0.ready("@(negedge tb_cci_range_rim_tracker.clk)");
    }
}

void Vtb_cci_range_rim_tracker___024root___timing_resume(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___timing_resume\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb507e25e__0.moveToResumeQueue(
                                                          "@(posedge tb_cci_range_rim_tracker.clk)");
    vlSelfRef.__VtrigSched_hb507e30c__0.moveToResumeQueue(
                                                          "@(negedge tb_cci_range_rim_tracker.clk)");
    vlSelfRef.__VtrigSched_hb507e25e__0.resume("@(posedge tb_cci_range_rim_tracker.clk)");
    vlSelfRef.__VtrigSched_hb507e30c__0.resume("@(negedge tb_cci_range_rim_tracker.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cci_range_rim_tracker___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_cci_range_rim_tracker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cci_range_rim_tracker___024root___eval_phase__act(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_phase__act\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cci_range_rim_tracker___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cci_range_rim_tracker___024root___timing_ready(vlSelf);
    Vtb_cci_range_rim_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_range_rim_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cci_range_rim_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cci_range_rim_tracker___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cci_range_rim_tracker___024root___timing_resume(vlSelf);
        Vtb_cci_range_rim_tracker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cci_range_rim_tracker___024root___eval_phase__inact(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_phase__inact\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 23, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cci_range_rim_tracker___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_cci_range_rim_tracker___024root___eval_phase__nba(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_phase__nba\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cci_range_rim_tracker___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cci_range_rim_tracker___024root___eval_nba(vlSelf);
        Vtb_cci_range_rim_tracker___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_cci_range_rim_tracker___024root___eval(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_range_rim_tracker___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 23, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 23, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cci_range_rim_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_range_rim_tracker.sv", 23, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cci_range_rim_tracker___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cci_range_rim_tracker___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cci_range_rim_tracker___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0(Vtb_cci_range_rim_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e25e__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0(Vtb_cci_range_rim_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root____VbeforeTrig_hb507e30c__0\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_cci_range_rim_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_range_rim_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_range_rim_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e25e__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb507e30c__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cci_range_rim_tracker___024root___eval_debug_assertions(Vtb_cci_range_rim_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_range_rim_tracker___024root___eval_debug_assertions\n"); );
    Vtb_cci_range_rim_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
