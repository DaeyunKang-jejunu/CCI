// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_write_completion_tracker.h for the primary calling header

#include "Vtb_cci_write_completion_tracker__pch.h"

void Vtb_cci_write_completion_tracker___024root___timing_ready(Vtb_cci_write_completion_tracker___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_static(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_static\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8996233942954150288ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2431567371540187566ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7323141338045884573ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17981705246335018737ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6111019216036156355ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 229869052757722228ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2231194829640382834ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12302048635894375402ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12441030481486899668ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1860515255539772149ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[__Vi0].clear();
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[__Vi0].atDefault() = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[__Vi0] = 0;
    }
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line = 0U;
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17928329384421841497ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6573522784358867864ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14421024727048073700ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6645614061354468865ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13884384241597867134ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10679249913838474193ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18386578265883604581ull);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__rst_n__0 
        = vlSelfRef.tb_cci_write_completion_tracker__DOT__rst_n;
    Vtb_cci_write_completion_tracker___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_static__TOP(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_static__TOP\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8996233942954150288ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2431567371540187566ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T01__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7323141338045884573ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17981705246335018737ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T02__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6111019216036156355ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 229869052757722228ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T03__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2231194829640382834ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12302048635894375402ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12441030481486899668ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T04__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1860515255539772149ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[__Vi0].clear();
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__ref_q[__Vi0].atDefault() = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__depth_cnt[__Vi0] = 0;
    }
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_id = 0U;
    vlSelfRef.tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__rand_line = 0U;
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17928329384421841497ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T06__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6573522784358867864ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14421024727048073700ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6645614061354468865ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T07__Vstatic__got_t = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13884384241597867134ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10679249913838474193ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__test_T08__Vstatic__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18386578265883604581ull);
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_initial__TOP(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_initial__TOP\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_final(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_final\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_write_completion_tracker___024root___eval_phase__stl(Vtb_cci_write_completion_tracker___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_settle(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_settle\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_write_completion_tracker___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_write_completion_tracker.sv", 22, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_write_completion_tracker___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__stl(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_write_completion_tracker___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___stl_sequent__TOP__0(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___stl_sequent__TOP__0\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___eval_stl(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_stl\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_write_completion_tracker___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker___024root___eval_phase__stl(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___eval_phase__stl\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_write_completion_tracker___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_write_completion_tracker___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_write_completion_tracker___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_write_completion_tracker___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_write_completion_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_write_completion_tracker___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_write_completion_tracker.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_write_completion_tracker.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_write_completion_tracker.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_write_completion_tracker___024root___ctor_var_reset(Vtb_cci_write_completion_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker___024root___ctor_var_reset\n"); );
    Vtb_cci_write_completion_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8065030004024957970ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1322311306409981552ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7318981226317512994ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18313370735608641507ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17536510827198623806ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__awaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13605757396423048973ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__aw_track_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3676917259905092245ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13735836904214706004ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6501246183870733618ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7589204257782073246ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2046175554564452018ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__wr_done_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12577751579845420156ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__aw_full = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8039634874632096173ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__overflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14768502455989170226ull);
    vlSelf->tb_cci_write_completion_tracker__DOT__underflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1894159237699492688ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__fifo[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14617797886983800330ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__fifo_track_type[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9443553928586761359ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__rd_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15663290627789551954ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__wr_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9474809187501880770ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__depth[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12079595222102056333ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__push[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096425106332937574ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__pop[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805852632162162168ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__push_ok[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6310731382349397900ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT__push_block[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11363535566884664189ull);
    }
    vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_1_1 = 0;
    vlSelf->tb_cci_write_completion_tracker__DOT__dut__DOT___Vpast_3_1 = 0;
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__overflow_sticky = 0;
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__underflow_sticky = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__dut__DOT__depth[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker__DOT__rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
