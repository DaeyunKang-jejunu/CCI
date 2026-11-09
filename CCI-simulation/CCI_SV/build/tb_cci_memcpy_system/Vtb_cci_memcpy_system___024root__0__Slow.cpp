// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_memcpy_system.h for the primary calling header

#include "Vtb_cci_memcpy_system__pch.h"

void Vtb_cci_memcpy_system___024root___timing_ready(Vtb_cci_memcpy_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_static(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_static\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T01__Vstatic__cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T02__Vstatic__cnt = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_memcpy_system__DOT__rst_n;
    Vtb_cci_memcpy_system___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_static__TOP(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_static__TOP\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T01__Vstatic__cnt = 0U;
    vlSelfRef.tb_cci_memcpy_system__DOT__test_T02__Vstatic__cnt = 0U;
}

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_initial__TOP(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_initial__TOP\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_memcpy_system__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_final(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_final\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_memcpy_system___024root___eval_phase__stl(Vtb_cci_memcpy_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_settle(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_settle\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_memcpy_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_cci_memcpy_system.sv", 28, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_memcpy_system___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_triggers_vec__stl(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_memcpy_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_memcpy_system___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_memcpy_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___stl_sequent__TOP__0(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker 
        = (IData)((0x05000000U == (0x07000000U & vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U])));
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
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
           & (0ULL == (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                       & (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask 
                          - 1ULL))));
    vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid = 
        ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
         & (0ULL != vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask));
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
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy) 
           & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid) 
              & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
                 & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_ready) 
           & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__ac_valid));
    vlSelfRef.tb_cci_memcpy_system__DOT__req_error 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid) 
           & (0ULL == vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r) 
                          + ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r) 
                             & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted))));
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req 
        = ((~ (vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[5U] 
               >> 0x0000001aU)) & ((~ (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_error)) 
                                   & (IData)(vlSelfRef.tb_cci_memcpy_system__DOT__req_valid)));
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
    vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w 
        = ((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req)
            ? vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask
            : (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[4U])) 
                << 0x0000003cU) | (((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[3U])) 
                                    << 0x0000001cU) 
                                   | ((QData)((IData)(vlSelfRef.tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r[2U])) 
                                      >> 4U))));
}

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___eval_stl(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_stl\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_memcpy_system___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_memcpy_system___024root___eval_phase__stl(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___eval_phase__stl\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_memcpy_system___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_memcpy_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_memcpy_system___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_memcpy_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_memcpy_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_memcpy_system___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_memcpy_system.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_memcpy_system.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_memcpy_system.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_memcpy_system___024root___ctor_var_reset(Vtb_cci_memcpy_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_memcpy_system___024root___ctor_var_reset\n"); );
    Vtb_cci_memcpy_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_memcpy_system__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14737411029777333225ull);
    vlSelf->tb_cci_memcpy_system__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10388699340432734992ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16842486945408067618ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_base_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5311800082590113412ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_line_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13129715923009026669ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17185110105582461063ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16012871100325628005ull);
    vlSelf->tb_cci_memcpy_system__DOT__req_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410419282577552419ull);
    vlSelf->tb_cci_memcpy_system__DOT__ac_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7442805614069279179ull);
    vlSelf->tb_cci_memcpy_system__DOT__ac_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1867278007908119094ull);
    vlSelf->tb_cci_memcpy_system__DOT__cr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10662626208244005414ull);
    vlSelf->tb_cci_memcpy_system__DOT__cr_resp = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5189040020014527677ull);
    vlSelf->tb_cci_memcpy_system__DOT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11633825549450431934ull);
    vlSelf->tb_cci_memcpy_system__DOT__aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4384227244371921650ull);
    vlSelf->tb_cci_memcpy_system__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3464026360942694800ull);
    vlSelf->tb_cci_memcpy_system__DOT__aw_track_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311589968400684206ull);
    vlSelf->tb_cci_memcpy_system__DOT__awaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11299680150892593174ull);
    vlSelf->tb_cci_memcpy_system__DOT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1713921826688077778ull);
    vlSelf->tb_cci_memcpy_system__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9550936073986792174ull);
    vlSelf->tb_cci_memcpy_system__DOT__probe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15154555096321010871ull);
    vlSelf->tb_cci_memcpy_system__DOT__probe_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6235942858459412271ull);
    vlSelf->tb_cci_memcpy_system__DOT__probe_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3850076909066223494ull);
    vlSelf->tb_cci_memcpy_system__DOT__probe_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7851187855411026947ull);
    vlSelf->tb_cci_memcpy_system__DOT__overflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15462794599422383286ull);
    vlSelf->tb_cci_memcpy_system__DOT__underflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602389894788620380ull);
    vlSelf->tb_cci_memcpy_system__DOT__aw_full_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6609510082438428565ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__wr_done_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12985108862773560353ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9182102628428131744ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8219765759895785697ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13554783207286798281ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10577700011220239178ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7005049423803224535ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3344931690233152232ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007748117070603587ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185751171797524709ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8517998339967130661ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2833669578191178039ull);
    }
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 = 0;
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 = 0;
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__dec_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5905909004360367635ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_line_mask_w = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18261615391131753180ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__ac_gen_done_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9247253534805648241ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__snoop_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18097720763806905970ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__write_release_tracker = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10607442023876415141ull);
    VL_SCOPED_RAND_RESET_W(187, vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__entry_r, __VscopeHash, 3583878527897481669ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_tracker__DOT__accept_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1980536499953703197ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12158337307157515936ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__remaining_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3706509268446917735ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__current_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4584822645631799659ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_ac_gen__DOT__is_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1049691993147228394ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17702672441159895941ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__recv_count_r = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17444796440763574616ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__all_sent_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 108300656856967237ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__active_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2831893058167987697ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__snoop_error_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7246329565196508448ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__ac_accepted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13118998461963333108ull);
    vlSelf->tb_cci_memcpy_system__DOT__dut__DOT__i_range_unit__DOT__i_snoop_tracker__DOT__sent_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14788021794287727854ull);
    vlSelf->__Vfunc_cci_page_relative_mask__140__Vfuncout = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__140____VlefCall_2__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__140____VlefCall_1__cci_contiguous_mask = 0;
    vlSelf->__Vfunc_cci_page_relative_mask__140____VlefCall_0__cci_range_fits_page = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141__Vfuncout = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141__base_addr = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141__line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141____VlefCall_1__cci_valid_line_count = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141____VlefCall_0__cci_line_idx = 0;
    vlSelf->__Vfunc_cci_range_fits_page__141__end_line = 0;
    vlSelf->__Vfunc_cci_line_idx__142__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__142__addr = 0;
    vlSelf->__Vfunc_cci_valid_line_count__143__Vfuncout = 0;
    vlSelf->__Vfunc_cci_valid_line_count__143__line_count = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__144__Vfuncout = 0;
    vlSelf->__Vfunc_cci_contiguous_mask__144__line_count = 0;
    vlSelf->__Vfunc_cci_line_idx__145__Vfuncout = 0;
    vlSelf->__Vfunc_cci_line_idx__145__addr = 0;
    vlSelf->__Vsampled_TOP__tb_cci_memcpy_system__DOT__overflow_sticky = 0;
    vlSelf->__Vsampled_TOP__tb_cci_memcpy_system__DOT__underflow_sticky = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_cci_memcpy_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__tb_cci_memcpy_system__DOT__rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_memcpy_system__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
