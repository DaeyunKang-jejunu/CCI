// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_write_completion_tracker_overflow.h for the primary calling header

#include "Vtb_cci_write_completion_tracker_overflow__pch.h"

void Vtb_cci_write_completion_tracker_overflow___024root___timing_ready(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_static(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_static\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287202694218923620ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7080044632736309818ull);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n__0 
        = vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__rst_n;
    Vtb_cci_write_completion_tracker_overflow___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_static__TOP(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_static__TOP\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287202694218923620ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__unnamedblk1__DOT__got_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7080044632736309818ull);
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_initial__TOP\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_write_completion_tracker_overflow__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_final(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_final\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__stl(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_settle(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_settle\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_write_completion_tracker_overflow.sv", 25, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__stl(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__stl\n"); );
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

void Vtb_cci_write_completion_tracker_overflow___024root___act_comb__TOP__0(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___eval_stl(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_stl\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_write_completion_tracker_overflow___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__stl(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___eval_phase__stl\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_write_completion_tracker_overflow___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_write_completion_tracker_overflow___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_write_completion_tracker_overflow___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_write_completion_tracker_overflow.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_write_completion_tracker_overflow.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_write_completion_tracker_overflow.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_write_completion_tracker_overflow___024root___ctor_var_reset(Vtb_cci_write_completion_tracker_overflow___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_write_completion_tracker_overflow___024root___ctor_var_reset\n"); );
    Vtb_cci_write_completion_tracker_overflow__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5154035974274798412ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4043966314909629098ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9136361227225375817ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 367878774562577743ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1564430525903754714ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__awaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5547940936974794680ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__aw_track_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10624072815533140080ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15640250652991645180ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12962330989155961462ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2882202385316848015ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5957931934822816403ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11539273067652952135ull);
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9193122911001308384ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4902421880203102509ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__fifo_track_type[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6556401713468904306ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__rd_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 528851935749212136ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__wr_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13624038784135556559ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16872448985899882519ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5354174641156762680ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__pop[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863866657148165056ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_ok[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16623776204135862192ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__push_block[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16981298978862465242ull);
    }
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_1_1 = 0;
    vlSelf->tb_cci_write_completion_tracker_overflow__DOT__dut__DOT___Vpast_3_1 = 0;
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__overflow_sticky = 0;
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__underflow_sticky = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__dut__DOT__depth[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_write_completion_tracker_overflow__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
