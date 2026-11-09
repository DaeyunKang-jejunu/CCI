// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_baseline_line_tracker.h for the primary calling header

#include "Vtb_baseline_line_tracker__pch.h"

void Vtb_baseline_line_tracker___024root___nba_comb__TOP__0(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___nba_comb__TOP__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei;
    tb_baseline_line_tracker__DOT__dut__DOT__alloc_comb__DOT__ei = 0;
    IData/*31:0*/ __Vilp1;
    // Body
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
}

void Vtb_baseline_line_tracker___024root___nba_comb__TOP__1(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___nba_comb__TOP__1\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_baseline_line_tracker__DOT__dut__DOT____VlemCall_0__cci_popcount;
    QData/*63:0*/ __Vfunc_cci_popcount__79__m;
    __Vfunc_cci_popcount__79__m = 0;
    IData/*31:0*/ __Vfunc_cci_popcount__79__cnt;
    __Vfunc_cci_popcount__79__cnt = 0;
    // Body
    vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__wr_done_cl_addr 
        = ((vlSelfRef.tb_baseline_line_tracker__DOT__dut__DOT__current_page 
            << 6U) | (QData)((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__wr_done_line_idx)));
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

void Vtb_baseline_line_tracker___024root___nba_sequent__TOP__0(Vtb_baseline_line_tracker___024root* vlSelf);

void Vtb_baseline_line_tracker___024root___eval_nba(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_nba\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_baseline_line_tracker___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_baseline_line_tracker___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_baseline_line_tracker___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_baseline_line_tracker___024root___timing_ready(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___timing_ready\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready("@(posedge tb_baseline_line_tracker.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready("@(negedge tb_baseline_line_tracker.clk)");
    }
}

void Vtb_baseline_line_tracker___024root___timing_resume(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___timing_resume\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0f7f4a18__0.moveToResumeQueue(
                                                          "@(posedge tb_baseline_line_tracker.clk)");
    vlSelfRef.__VtrigSched_h0f7f4ad2__0.moveToResumeQueue(
                                                          "@(negedge tb_baseline_line_tracker.clk)");
    vlSelfRef.__VtrigSched_h0f7f4a18__0.resume("@(posedge tb_baseline_line_tracker.clk)");
    vlSelfRef.__VtrigSched_h0f7f4ad2__0.resume("@(negedge tb_baseline_line_tracker.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_baseline_line_tracker___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_baseline_line_tracker___024root___eval_triggers_vec__act(Vtb_baseline_line_tracker___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_baseline_line_tracker___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_baseline_line_tracker___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_baseline_line_tracker___024root___eval_act(Vtb_baseline_line_tracker___024root* vlSelf);

bool Vtb_baseline_line_tracker___024root___eval_phase__act(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_phase__act\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_baseline_line_tracker___024root___eval_triggers_vec__act(vlSelf);
    Vtb_baseline_line_tracker___024root___timing_ready(vlSelf);
    Vtb_baseline_line_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_baseline_line_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_baseline_line_tracker___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_baseline_line_tracker___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_baseline_line_tracker___024root___timing_resume(vlSelf);
        Vtb_baseline_line_tracker___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_baseline_line_tracker___024root___eval_phase__inact(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_phase__inact\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 19, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_baseline_line_tracker___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_baseline_line_tracker___024root___eval_phase__nba(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_phase__nba\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_baseline_line_tracker___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_baseline_line_tracker___024root___eval_nba(vlSelf);
        Vtb_baseline_line_tracker___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_baseline_line_tracker___024root___eval(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_baseline_line_tracker___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 19, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 19, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_baseline_line_tracker___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/mnt/c/Users/user/Desktop/CCI_patents/CCI_P/CCI-simulation/CCI_SV/tb/tb_baseline_line_tracker.sv", 19, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_baseline_line_tracker___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_baseline_line_tracker___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_baseline_line_tracker___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0(Vtb_baseline_line_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4a18__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0 
        = vlSelfRef.tb_baseline_line_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0(Vtb_baseline_line_tracker___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root____VbeforeTrig_h0f7f4ad2__0\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_baseline_line_tracker__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_baseline_line_tracker__DOT__clk__0 
        = vlSelfRef.tb_baseline_line_tracker__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4a18__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h0f7f4ad2__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_baseline_line_tracker___024root___eval_debug_assertions(Vtb_baseline_line_tracker___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_baseline_line_tracker___024root___eval_debug_assertions\n"); );
    Vtb_baseline_line_tracker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
