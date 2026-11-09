// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cci_existing_system.h for the primary calling header

#include "Vtb_cci_existing_system__pch.h"

void Vtb_cci_existing_system___024root___timing_ready(Vtb_cci_existing_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_static(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_static\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_static__TOP_tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei;
    __Vinline__eval_static__TOP_tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0;
    // Body
    __Vinline__eval_static__TOP_tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0 
        = vlSelfRef.tb_cci_existing_system__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__rst_n__0 
        = vlSelfRef.tb_cci_existing_system__DOT__rst_n;
    Vtb_cci_existing_system___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_static__TOP(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_static__TOP\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei;
    tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0;
    // Body
    tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_comb__DOT__ei = 0U;
}

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_initial__TOP(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_initial__TOP\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cci_existing_system__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_final(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_final\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_existing_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cci_existing_system___024root___eval_phase__stl(Vtb_cci_existing_system___024root* vlSelf);

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_settle(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_settle\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cci_existing_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/sim_CCI_0601/hbm3-performance-simulation/CCI_SV/tb/tb_cci_existing_system.sv", 21, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cci_existing_system___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_triggers_vec__stl(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_triggers_vec__stl\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cci_existing_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_existing_system___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_existing_system___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cci_existing_system___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cci_existing_system___024root___stl_sequent__TOP__0(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtb_cci_existing_system___024root___eval_stl(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_stl\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cci_existing_system___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cci_existing_system___024root___eval_phase__stl(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___eval_phase__stl\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cci_existing_system___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cci_existing_system___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cci_existing_system___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cci_existing_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cci_existing_system___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cci_existing_system___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cci_existing_system___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cci_existing_system.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_cci_existing_system.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_cci_existing_system.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cci_existing_system___024root___ctor_var_reset(Vtb_cci_existing_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cci_existing_system___024root___ctor_var_reset\n"); );
    Vtb_cci_existing_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cci_existing_system__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9175938108152456472ull);
    vlSelf->tb_cci_existing_system__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9446148710102622553ull);
    vlSelf->tb_cci_existing_system__DOT__req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13403909590510072630ull);
    vlSelf->tb_cci_existing_system__DOT__req_base_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17990746744419350762ull);
    vlSelf->tb_cci_existing_system__DOT__req_line_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 494057730881639907ull);
    vlSelf->tb_cci_existing_system__DOT__req_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7726760095712162479ull);
    vlSelf->tb_cci_existing_system__DOT__awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7866836119483091284ull);
    vlSelf->tb_cci_existing_system__DOT__aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16764279756605933692ull);
    vlSelf->tb_cci_existing_system__DOT__aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3601597296614187728ull);
    vlSelf->tb_cci_existing_system__DOT__aw_track_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2875614310700585668ull);
    vlSelf->tb_cci_existing_system__DOT__awaddr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 744258591953684186ull);
    vlSelf->tb_cci_existing_system__DOT__bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15874621324371425167ull);
    vlSelf->tb_cci_existing_system__DOT__b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10077019029086202755ull);
    vlSelf->tb_cci_existing_system__DOT__probe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17084394610281276222ull);
    vlSelf->tb_cci_existing_system__DOT__probe_source_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6537854128506722787ull);
    vlSelf->tb_cci_existing_system__DOT__probe_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1107019589325563375ull);
    vlSelf->tb_cci_existing_system__DOT__normal_req_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12466176899589280269ull);
    vlSelf->tb_cci_existing_system__DOT__overflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18022970695829134122ull);
    vlSelf->tb_cci_existing_system__DOT__underflow_sticky = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6570517467315445261ull);
    vlSelf->tb_cci_existing_system__DOT__aw_full_mask = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13189835613911646883ull);
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__wr_done_line_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15272679775167430617ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11927920216187254750ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__fifo_track_type[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12830666408786751483ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__rd_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7067572582447100360ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__wr_ptr[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17262986410971496647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7276810122707328045ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16942688320805084757ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__pop[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4031370430897415135ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_ok[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2251479655561852498ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__push_block[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1868258047644301810ull);
    }
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_1_1 = 0;
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT___Vpast_3_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__entries[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2237965920175450338ull);
    }
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__current_page = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 4219770497168312891ull);
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3257051782922874196ull);
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__any_undone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15851048244911555637ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__alloc_e[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2935860229573973911ull);
    }
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__wr_done_cl_addr = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 17249092289080466210ull);
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__cam_any_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4502011626741495194ull);
    vlSelf->tb_cci_existing_system__DOT__dut__DOT__i_tracker__DOT__hazard_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16675770710958931563ull);
    vlSelf->__Vfunc_cci_page_addr__138__addr = 0;
    vlSelf->__Vsampled_TOP__tb_cci_existing_system__DOT__overflow_sticky = 0;
    vlSelf->__Vsampled_TOP__tb_cci_existing_system__DOT__underflow_sticky = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vsampled_TOP__tb_cci_existing_system__DOT__dut__DOT__i_wr_tracker__DOT__depth[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__tb_cci_existing_system__DOT__rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cci_existing_system__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
